#include "ContactEdit.h"
#include <QtQuick>
#include<QQuickView>
#include<QGuiApplication>
ContactEdit::ContactEdit(QObject *parent) : QObject(parent)
{
    qDebug()<<"ContactEdit constructor has been called";
    nameFromModel=QVariant();
    numberFromModel=QVariant();
    emailFromModel=QVariant();
}

void ContactEdit::getModelData(QVariant selectedRow)
{
    m_rowIndex=selectedRow.toInt();
   qDebug()<<"method getModelData has been called and m_rowIndex value is: " <<m_rowIndex;
if(m_rowIndex!=-1)
{
   nameFromModel =m_source->data(m_source->querryIndex(m_rowIndex),0);
   qDebug() <<nameFromModel;
   numberFromModel =m_source->data(m_source->querryIndex(m_rowIndex),1);
   qDebug() <<numberFromModel;
   emailFromModel =m_source->data(m_source->querryIndex(m_rowIndex),2);
   qDebug() <<emailFromModel;

}

}

void ContactEdit::classBegin()
{

}

void ContactEdit::setRowIndex(int rI)
{
     qDebug()<<"method setRowIndex has been called";
    if(rI !=m_rowIndex || m_rowIndex > -1)
    {   qDebug()<<m_rowIndex;
        m_rowIndex=rI;
        qDebug()<<m_rowIndex;
    }
}

int ContactEdit::rowIndex() const
{
    return m_rowIndex;
}

void ContactEdit::setModelAddress(QString modAdd)
{
    m_modelAddress=modAdd;
}
QString ContactEdit::modelAddress()
{
    return m_modelAddress;
}

 void ContactEdit::setSource(ListModel *source)
 {
     m_source=source;
 }

 void ContactEdit::setName(QVariant newName)
 {  qDebug()<<"setName called";
     nameFromModel=newName;
     emit nameChanged();
 }

 QVariant ContactEdit::getName()
 {qDebug()<<"Name called";
     return nameFromModel;
 }

 void ContactEdit::setNumber(QVariant newNumber)
 {qDebug()<<"setNumber called";
     numberFromModel=newNumber;
     emit numberChanged();
 }

 QVariant ContactEdit::getNumber()
 {qDebug()<<"number called";
     return numberFromModel;
 }

 void ContactEdit::setEmail(QVariant newEmail)
 {qDebug()<<"setEmail called";
     emailFromModel=newEmail;
     emit emailChanged();
 }

 QVariant ContactEdit::getEmail()
 {qDebug()<<"email called";
     return emailFromModel;
 }

 void ContactEdit::setModelData()
 {
      qDebug()<<"method setModelData has been called";
     m_source->setData(m_source->querryIndex(m_rowIndex),nameFromModel,0);

     m_source->setData(m_source->querryIndex(m_rowIndex),numberFromModel,1);

     m_source->setData(m_source->querryIndex(m_rowIndex),emailFromModel,2);
 }
