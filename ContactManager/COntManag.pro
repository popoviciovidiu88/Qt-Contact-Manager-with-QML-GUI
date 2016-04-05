TEMPLATE = app

QT += qml quick widgets

SOURCES += main.cpp \
    SortFilter.cpp \
    ContactEdit.cpp \
    Person.cpp \
    Listmodel.cpp \
    Xmlinterface.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    SortFilter.h \
    ContactEdit.h \
    Person.h \
    Listmodel.h \
    Xmlinterface.h

