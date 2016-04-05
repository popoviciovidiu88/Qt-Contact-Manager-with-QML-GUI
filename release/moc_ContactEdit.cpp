/****************************************************************************
** Meta object code from reading C++ file 'ContactEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ContactManager/ContactEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ContactEdit_t {
    QByteArrayData data[22];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactEdit_t qt_meta_stringdata_ContactEdit = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ContactEdit"
QT_MOC_LITERAL(1, 12, 11), // "nameChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "numberChanged"
QT_MOC_LITERAL(4, 39, 12), // "emailChanged"
QT_MOC_LITERAL(5, 52, 12), // "getModelData"
QT_MOC_LITERAL(6, 65, 11), // "selectedRow"
QT_MOC_LITERAL(7, 77, 7), // "setName"
QT_MOC_LITERAL(8, 85, 7), // "newName"
QT_MOC_LITERAL(9, 93, 7), // "getName"
QT_MOC_LITERAL(10, 101, 9), // "setNumber"
QT_MOC_LITERAL(11, 111, 9), // "newNumber"
QT_MOC_LITERAL(12, 121, 9), // "getNumber"
QT_MOC_LITERAL(13, 131, 8), // "setEmail"
QT_MOC_LITERAL(14, 140, 8), // "newEmail"
QT_MOC_LITERAL(15, 149, 8), // "getEmail"
QT_MOC_LITERAL(16, 158, 12), // "setModelData"
QT_MOC_LITERAL(17, 171, 8), // "rowIndex"
QT_MOC_LITERAL(18, 180, 12), // "modelAddress"
QT_MOC_LITERAL(19, 193, 4), // "name"
QT_MOC_LITERAL(20, 198, 6), // "number"
QT_MOC_LITERAL(21, 205, 5) // "email"

    },
    "ContactEdit\0nameChanged\0\0numberChanged\0"
    "emailChanged\0getModelData\0selectedRow\0"
    "setName\0newName\0getName\0setNumber\0"
    "newNumber\0getNumber\0setEmail\0newEmail\0"
    "getEmail\0setModelData\0rowIndex\0"
    "modelAddress\0name\0number\0email"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   72,    2, 0x0a /* Public */,
       7,    1,   75,    2, 0x0a /* Public */,
       9,    0,   78,    2, 0x0a /* Public */,
      10,    1,   79,    2, 0x0a /* Public */,
      12,    0,   82,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x0a /* Public */,
      15,    0,   86,    2, 0x0a /* Public */,
      16,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, QMetaType::QVariant,    8,
    QMetaType::QVariant,
    QMetaType::Void, QMetaType::QVariant,   11,
    QMetaType::QVariant,
    QMetaType::Void, QMetaType::QVariant,   14,
    QMetaType::QVariant,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::Int, 0x00095103,
      18, QMetaType::QString, 0x00095103,
      19, QMetaType::QVariant, 0x00495103,
      20, QMetaType::QVariant, 0x00495103,
      21, QMetaType::QVariant, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,

       0        // eod
};

void ContactEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContactEdit *_t = static_cast<ContactEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->numberChanged(); break;
        case 2: _t->emailChanged(); break;
        case 3: _t->getModelData((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 4: _t->setName((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 5: { QVariant _r = _t->getName();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: _t->setNumber((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 7: { QVariant _r = _t->getNumber();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 8: _t->setEmail((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 9: { QVariant _r = _t->getEmail();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 10: _t->setModelData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ContactEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactEdit::nameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ContactEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactEdit::numberChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ContactEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactEdit::emailChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ContactEdit *_t = static_cast<ContactEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rowIndex(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->modelAddress(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->getName(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->getNumber(); break;
        case 4: *reinterpret_cast< QVariant*>(_v) = _t->getEmail(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ContactEdit *_t = static_cast<ContactEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRowIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setModelAddress(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setName(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: _t->setNumber(*reinterpret_cast< QVariant*>(_v)); break;
        case 4: _t->setEmail(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ContactEdit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ContactEdit.data,
      qt_meta_data_ContactEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ContactEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ContactEdit.stringdata0))
        return static_cast<void*>(const_cast< ContactEdit*>(this));
    return QObject::qt_metacast(_clname);
}

int ContactEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ContactEdit::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ContactEdit::numberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ContactEdit::emailChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
