#include "SortFilter.h"

SortFilter::SortFilter(QObject *parent) : QSortFilterProxyModel(parent)
{
}

QObject *SortFilter::source()
{
    return sourceModel();
}

void SortFilter::setSource(QObject *source)
{
    setSourceModel(qobject_cast<QAbstractItemModel *>(source));
}

void SortFilter::classBegin()
{
}

void SortFilter::componentComplete()
{

}

QByteArray SortFilter::sortRole() const
{
    return m_sortRole;
}

void SortFilter::setSortRole(const QByteArray &role)
{
    if (m_sortRole != role) {
        m_sortRole = role;
        if (m_complete)
            QSortFilterProxyModel::setSortRole(roleKey(role));
    }
}

void SortFilter::setSortOrder(Qt::SortOrder order)
{
    QSortFilterProxyModel::sort(0, order);

}

QJSValue SortFilter::get(int idx) const
{
    QJSEngine *engine = qmlEngine(this);
    QJSValue value = engine->newObject();
    if (idx >= 0 && idx < count()) {
        QHash<int, QByteArray> roles = roleNames();
        QHashIterator<int, QByteArray> it(roles);
        while (it.hasNext()) {
            it.next();
            value.setProperty(QString::fromUtf8(it.value()), data(index(idx, 0), it.key()).toString());
        }
    }
    return value;
}

int SortFilter::roleKey(const QByteArray &role) const
{
    QHash<int, QByteArray> roles = roleNames();
    QHashIterator<int, QByteArray> it(roles);
    while (it.hasNext()) {
        it.next();
        if (it.value() == role)
            return it.key();
    }
    return -1;
}

int SortFilter::count() const
{
    return rowCount();
}

