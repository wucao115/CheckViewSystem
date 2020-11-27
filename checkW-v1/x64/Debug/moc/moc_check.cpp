/****************************************************************************
** Meta object code from reading C++ file 'check.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../check.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'check.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_check_t {
    QByteArrayData data[19];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_check_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_check_t qt_meta_stringdata_check = {
    {
QT_MOC_LITERAL(0, 0, 5), // "check"
QT_MOC_LITERAL(1, 6, 11), // "transEChart"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 16), // "QVector<QString>"
QT_MOC_LITERAL(4, 36, 14), // "QVector<QDate>"
QT_MOC_LITERAL(5, 51, 10), // "echartshow"
QT_MOC_LITERAL(6, 62, 12), // "transSaveMeg"
QT_MOC_LITERAL(7, 75, 20), // "QVector<QStringList>"
QT_MOC_LITERAL(8, 96, 7), // "sockcon"
QT_MOC_LITERAL(9, 104, 7), // "dissock"
QT_MOC_LITERAL(10, 112, 9), // "loadroute"
QT_MOC_LITERAL(11, 122, 6), // "consql"
QT_MOC_LITERAL(12, 129, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 141, 5), // "index"
QT_MOC_LITERAL(14, 147, 7), // "mapviwe"
QT_MOC_LITERAL(15, 155, 6), // "reload"
QT_MOC_LITERAL(16, 162, 7), // "emchart"
QT_MOC_LITERAL(17, 170, 8), // "senddata"
QT_MOC_LITERAL(18, 179, 8) // "saveMegD"

    },
    "check\0transEChart\0\0QVector<QString>\0"
    "QVector<QDate>\0echartshow\0transSaveMeg\0"
    "QVector<QStringList>\0sockcon\0dissock\0"
    "loadroute\0consql\0QModelIndex\0index\0"
    "mapviwe\0reload\0emchart\0senddata\0"
    "saveMegD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_check[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x06 /* Public */,
       5,    0,   81,    2, 0x06 /* Public */,
       6,    2,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      14,    1,   93,    2, 0x08 /* Private */,
      15,    1,   96,    2, 0x08 /* Private */,
      16,    1,   99,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 4,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void check::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<check *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transEChart((*reinterpret_cast< QVector<QString>(*)>(_a[1])),(*reinterpret_cast< QVector<QString>(*)>(_a[2])),(*reinterpret_cast< QVector<QDate>(*)>(_a[3]))); break;
        case 1: _t->echartshow(); break;
        case 2: _t->transSaveMeg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVector<QStringList>(*)>(_a[2]))); break;
        case 3: _t->sockcon(); break;
        case 4: _t->dissock(); break;
        case 5: _t->loadroute(); break;
        case 6: _t->consql((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->mapviwe((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->reload((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->emchart((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->senddata(); break;
        case 11: _t->saveMegD(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QDate> >(); break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QStringList> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (check::*)(QVector<QString> , QVector<QString> , QVector<QDate> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&check::transEChart)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (check::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&check::echartshow)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (check::*)(QString , QVector<QStringList> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&check::transSaveMeg)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject check::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_check.data,
    qt_meta_data_check,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *check::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *check::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_check.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int check::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void check::transEChart(QVector<QString> _t1, QVector<QString> _t2, QVector<QDate> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void check::echartshow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void check::transSaveMeg(QString _t1, QVector<QStringList> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
