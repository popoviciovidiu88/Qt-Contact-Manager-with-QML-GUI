#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include <QQuickItem>
#include<QtQuick>
#include <QListView>
#include"Person.h"
#include"Listmodel.h"
#include "SortFilter.h"
#include "ContactEdit.h"
#include"Xmlinterface.h"

int main(int argc, char *argv[])
{
QApplication app(argc, argv);
QQmlApplicationEngine appEngine;
qmlRegisterType<SortFilter>("com.qtproject.example",1,0,"SortFilter");
//qmlRegisterType<ContactEdit>("gom.qtproject.example",1,0,"ContactEdit");
qmlRegisterType<XmlInterface>("gom.qtproject.example",1,0,"XmlInterface");

//QQmlComponent component(&engine, "/home/ovidiu/dir1/ContactManag/main.qml");
//QQmlContext *context = engine.rootContext();
//QObject *object = component.create();

ListModel oficialModel;

ContactEdit cont;
cont.setSource(&oficialModel);

XmlInterface interfaceWithXml;
interfaceWithXml.setInputFile("E:\\Qt projects\\ContactManager\\InputFile.Xml");
interfaceWithXml.setDataModel(&oficialModel);
interfaceWithXml.readContent();
//interface.appendContent("nume incercare","0727713979","mahmatghandi@gum");

//QQmlContext context(engine.rootContext());
//context.setContextProperty("myModel",&oficialModel);
//context.setContextProperty("myContact",&cont);

//engine.rootContext()->setContextProperty("myModel",&oficialModel);
//engine.rootContext()->setContextProperty("myContact",&cont);

//oficialModel.printDataToConsole();

appEngine.rootContext()->setContextProperty("myModel",&oficialModel);
appEngine.rootContext()->setContextProperty("myContact",&cont);
appEngine.rootContext()->setContextProperty("myXmlInterface",&interfaceWithXml);
appEngine.load(QUrl(QStringLiteral("qrc:/main.qml")));

/*
QObject *topLevel = engine.rootObjects().value(0);
QQuickWindow  *window = qobject_cast<QQuickWindow *>(topLevel);
ContactEdit *cont=new ContactEdit(window);

cont->setSource(&oficialModel);
*/
return app.exec();
}

