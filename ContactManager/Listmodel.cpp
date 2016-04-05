#include "Listmodel.h"


ListModel::ListModel(QObject *parent):QAbstractListModel(parent)
{
    qDebug()<<"ListModel constructor has been called";
}

ListModel::~ListModel()
{

}

int ListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return personList.count();
}

QVariant ListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
            return QVariant();

        if (index.row() >= personList.count())
            return QVariant();


        const Person *person = personList[index.row()];
        if (role == NameRole)
                return person->getName();
        else if(role==NumberRole)
                return person->getNumber();
        else if(role==EmailRole)
                return person->getEmail();
        return QVariant();
}

QVariant ListModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole)
           return QVariant();

       if (orientation == Qt::Horizontal)
           return QString("Column %1").arg(section);
       else
           return QString("Row %1").arg(section);
}

Qt::ItemFlags ListModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::ItemIsEnabled;

    return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
}

bool ListModel::setData(const QModelIndex &index, const QVariant &value, int role)
{       qDebug()<<"setData called";
       if(role==NameRole)
       personList.at(index.row())->setName(value.toString());
       else if (role==NumberRole)
       personList.at(index.row())->setNumber(value.toString());
       else if (role==EmailRole)
       personList.at(index.row())->setEmail(value.toString());

       emit dataChanged();
       return true;
}

bool ListModel::insertRows(int position, int rows, const QModelIndex &index)
{
    beginInsertRows(QModelIndex(), position, position+rows-1);

    for (int row = 0; row < rows; ++row) {
           // personList.insert
                    //(position);
                   // insert(position, "");
        }
   endInsertRows();
   return true;
}

bool ListModel::removeRows(int position, int rows, const QModelIndex &parent)
{
    beginRemoveRows(QModelIndex(), position, position+rows-1);

    for (int row = 0; row < rows; ++row) {
        personList.removeAt(position);
    }

    endRemoveRows();
    return true;
}

QHash<int, QByteArray> ListModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[NameRole]="name";
    roles[NumberRole]="number";
    roles[EmailRole]="email";
    return roles;
}

void ListModel::addPerson(Person *person)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    personList.append(person);
    endInsertRows();
}

QModelIndex ListModel::querryIndex(int rowNumber)
{
return  this->createIndex(rowNumber,0);
}

void ListModel::printDataToConsole()
{
   for(int i = 0; i != personList.size(); i++)
   {
       qDebug() << endl <<  personList[i]->getName() << " " <<  personList[i]->getNumber() << " " <<  personList[i]->getEmail() << endl;
   }
}
