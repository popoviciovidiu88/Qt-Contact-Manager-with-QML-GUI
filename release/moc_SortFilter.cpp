/****************************************************************************
** Meta object code from reading C++ file 'SortFilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ContactManager/SortFilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SortFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SortFilter_t {
    QByteArrayData data[11];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SortFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SortFilter_t qt_meta_stringdata_SortFilter = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SortFilter"
QT_MOC_LITERAL(1, 11, 12), // "countChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "get"
QT_MOC_LITERAL(4, 29, 8), // "QJSValue"
QT_MOC_LITERAL(5, 38, 5), // "index"
QT_MOC_LITERAL(6, 44, 8), // "sortRole"
QT_MOC_LITERAL(7, 53, 9), // "sortOrder"
QT_MOC_LITERAL(8, 63, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(9, 77, 6), // "source"
QT_MOC_LITERAL(10, 84, 5) // "count"

    },
    "SortFilter\0countChanged\0\0get\0QJSValue\0"
    "index\0sortRole\0sortOrder\0Qt::SortOrder\0"
    "source\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SortFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::Int,    5,

 // properties: name, type, flags
       6, QMetaType::QByteArray, 0x00095103,
       7, 0x80000000 | 8, 0x0009510b,
       9, QMetaType::QObjectStar, 0x00095103,
      10, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void SortFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SortFilter *_t = static_cast<SortFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: { QJSValue _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SortFilter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SortFilter::countChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SortFilter *_t = static_cast<SortFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->sortRole(); break;
        case 1: *reinterpret_cast< Qt::SortOrder*>(_v) = _t->sortOrder(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->source(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SortFilter *_t = static_cast<SortFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSortRole(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setSortOrder(*reinterpret_cast< Qt::SortOrder*>(_v)); break;
        case 2: _t->setSource(*reinterpret_cast< QObject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SortFilter::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_SortFilter.data,
      qt_meta_data_SortFilter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SortFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SortFilter.stringdata0))
        return static_cast<void*>(const_cast< SortFilter*>(this));
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< SortFilter*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int SortFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SortFilter::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
