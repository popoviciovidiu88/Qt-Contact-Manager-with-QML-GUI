#ifndef XMLINTERFACE_H
#define XMLINTERFACE_H

#include <QObject>
#include <QFile>
#include <QXmlStreamReader>
#include<QDebug>
#include"Listmodel.h"
class XmlInterface : public QObject
{   
    Q_OBJECT
public:
    XmlInterface(QObject *parent = 0);

    void readContent();

  Q_INVOKABLE void appendContent(QString name,QString number, QString email);

    void setDataModel(ListModel *dataModel);

  Q_INVOKABLE void writeToFile();

    void setInputFile(QString fileName);

private:
QFile xmlDevice;
QXmlStreamReader xmlReadStream;
ListModel *m_dataModel;
};

#endif // XMLINTERFACE_H
