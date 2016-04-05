#include "Xmlinterface.h"
XmlInterface::XmlInterface(QObject *parent) : QObject(parent)
{
qDebug()<<"XmlInterface constructed";
}

 void XmlInterface::setDataModel(ListModel *dataModel)
 {
     m_dataModel=dataModel;
 }

void XmlInterface::readContent()
{
   QString m_name,m_number,m_email;
   xmlDevice.open(QIODevice::ReadWrite);
   bool personFound = false;
while (!xmlReadStream.atEnd() && !xmlReadStream.hasError())
    {
        xmlReadStream.readNext();
            if (xmlReadStream.isStartElement())
            {
                QString data = xmlReadStream.name().toString();
                qDebug()<<"read token is: "<<data;

                if (data == "name")
                {
                     m_name =xmlReadStream.readElementText();
                     qDebug()<<m_name;
                }
                else if(data == "number")
                {
                     m_number =xmlReadStream.readElementText();
                     qDebug()<<m_number;
                }
                else if(data=="email")
                {
                     m_email =xmlReadStream.readElementText();
                     qDebug()<<m_email;
                }
                if(m_name !=""&&m_number!=""&&m_email!="")
                {
                    m_dataModel->addPerson(new Person(m_name,m_number,m_email));
                    m_name ="";
                    m_number="";
                    m_email="";
                }
            }
    }
if (xmlReadStream.hasError())
{
qDebug() << "XML error: " << xmlReadStream.errorString() << endl;
}
else if (xmlReadStream.atEnd())
{
qDebug() << "Reached end, done" << endl;
}
  xmlDevice.close();
}

void XmlInterface::appendContent(QString name,QString number, QString email)
{   qDebug() << "append content called";
    QString m_name=name,m_number=number,m_email=email;
    m_dataModel->addPerson(new Person(m_name,m_number,m_email));
    this->writeToFile();

}

void XmlInterface::writeToFile()
{   qDebug() << "writeToFile called";
    xmlDevice.open(QIODevice::ReadWrite);
    QXmlStreamWriter xmlWriteStream;
    xmlWriteStream.setDevice(&xmlDevice);
    xmlWriteStream.setAutoFormatting(true);
    xmlWriteStream.writeStartDocument();
    xmlWriteStream.writeStartElement("contactmanager");
    for(int i=0;i<m_dataModel->rowCount();i++)
    {
        xmlWriteStream.writeStartElement("person");
        qDebug()<<m_dataModel->data(m_dataModel->querryIndex(i),0).toString();
        xmlWriteStream.writeTextElement("name",m_dataModel->data(m_dataModel->querryIndex(i),0).toString());
        xmlWriteStream.writeTextElement("number",m_dataModel->data(m_dataModel->querryIndex(i),1).toString());
        xmlWriteStream.writeTextElement("email",m_dataModel->data(m_dataModel->querryIndex(i),2).toString());

        xmlWriteStream.writeEndElement();
    }
    xmlWriteStream.writeEndElement();
   // xmlWriteStream.writeStartElement("contactmanager");
    xmlDevice.flush();
    xmlWriteStream.writeEndDocument();
    xmlDevice.close();

}

void XmlInterface::setInputFile(QString fileName)
{
    qDebug()<<fileName;
    xmlDevice.setFileName(fileName);
    if(xmlDevice.exists())
    {
        qDebug()<<"file exists";
       // xmlDevice.open(QIODevice::ReadWrite);
       // xmlDevice.close();
    }
    else
    {
        qDebug()<<"file doesn't exist";

    }
     xmlReadStream.setDevice(&xmlDevice);

     qDebug()<<xmlReadStream.device();
    if(!xmlDevice.isOpen())
       {
        qDebug()<<"file has not opened";
        }
    else
    {
        qDebug()<<"file open";
    }
}
