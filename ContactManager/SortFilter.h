#ifndef SORTFILTER_H
#define SORTFILTER_H

#include <QObject>
#include <QtCore>
#include <QtQml>

class SortFilter : public QSortFilterProxyModel, public QQmlParserStatus
{
    Q_OBJECT

    Q_PROPERTY(QByteArray sortRole READ sortRole WRITE setSortRole)
    Q_PROPERTY(Qt::SortOrder sortOrder READ sortOrder WRITE setSortOrder)

    Q_PROPERTY(QObject *source READ source WRITE setSource)
    Q_PROPERTY(int count READ count NOTIFY countChanged)

public:
    explicit SortFilter(QObject *parent = 0);

   QObject *source();
    void setSource(QObject *source);

    void classBegin();
    void componentComplete();

    QByteArray sortRole() const;
    void setSortRole(const QByteArray &role);

    void setSortOrder(Qt::SortOrder order);

    Q_INVOKABLE QJSValue get(int index) const;

    int count() const;

signals:
void countChanged();

public slots:

protected:
int roleKey(const QByteArray &role) const;

private:
    bool m_complete;
    QByteArray m_sortRole;

};

#endif // SORTFILTER_H
