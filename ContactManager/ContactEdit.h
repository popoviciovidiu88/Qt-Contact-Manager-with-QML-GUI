#ifndef CONTACTEDIT_H
#define CONTACTEDIT_H

#include <QObject>
#include <QtCore>
#include <QtQml>
#include<QString>
#include"Listmodel.h"
#include<typeinfo>

class ContactEdit : public QObject
{
  Q_OBJECT

    Q_PROPERTY(int rowIndex READ rowIndex WRITE setRowIndex)

    Q_PROPERTY(QString modelAddress READ modelAddress WRITE setModelAddress)

    Q_PROPERTY(QVariant name READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QVariant number READ getNumber WRITE setNumber NOTIFY numberChanged)
    Q_PROPERTY(QVariant email READ getEmail WRITE setEmail NOTIFY emailChanged)
public:
    explicit ContactEdit(QObject *parent = 0);

    void classBegin();


    void setRowIndex(int rI);

    int rowIndex() const;

    void setModelAddress(QString modAdd);
    QString modelAddress();

    void setSource(ListModel *source);
public slots:
    void getModelData(QVariant selectedRow);

    void setName(QVariant newName);
    QVariant getName();

    void setNumber(QVariant newNumber);
    QVariant getNumber();

    void setEmail(QVariant newEmail);
    QVariant getEmail();

    void setModelData();
signals:
    void nameChanged();
    void numberChanged();
    void emailChanged();
private:
    QString m_modelSelecText;
    int m_rowIndex;
    QString m_modelAddress;
    QVariant retValName;
    QVariant retValNumber;
    QVariant retValEmail;
    ListModel *m_source;
    QVariant nameFromModel;
    QVariant numberFromModel;
    QVariant emailFromModel;
};

#endif // CONTACTEDIT_H
