#ifndef LISTMODEL_H
#define LISTMODEL_H
#include<QtCore>
#include"Person.h"

class ListModel : public QAbstractListModel
{
  Q_OBJECT
  Q_PROPERTY(int count READ rowCount NOTIFY countChanged)

public:
    enum PersonRoles {
        NameRole,
        NumberRole,
        EmailRole
    };

    ListModel(QObject *parent = 0);

    ~ListModel();

    //FUNCTII REIMPLEMENTATE

    int rowCount(const QModelIndex &parent = QModelIndex()) const;

    QVariant headerData(int section, Qt::Orientation orientation, int role=Qt::DisplayRole) const;

    Qt::ItemFlags flags(const QModelIndex &index) const;

    QVariant data(const QModelIndex &index, int role) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role);

    bool insertRows(int position,int rows, const QModelIndex &index =QModelIndex());
    bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex());

    QHash<int, QByteArray> roleNames() const;

    void addPerson(Person *person);

    QModelIndex querryIndex(int rowNumber);

    void printDataToConsole();

public slots:

private:  
    QList<Person*> personList;

signals:
    void countChanged();
    void dataChanged();
};

#endif // LISTMODEL_H
