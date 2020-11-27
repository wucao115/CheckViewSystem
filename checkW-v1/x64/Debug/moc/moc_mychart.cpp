/****************************************************************************
** Meta object code from reading C++ file 'mychart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mychart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mychart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mychart_t {
    QByteArrayData data[9];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mychart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mychart_t qt_meta_stringdata_mychart = {
    {
QT_MOC_LITERAL(0, 0, 7), // "mychart"
QT_MOC_LITERAL(1, 8, 6), // "getMeg"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 20), // "QVector<QStringList>"
QT_MOC_LITERAL(4, 37, 7), // "refresh"
QT_MOC_LITERAL(5, 45, 9), // "saveRoute"
QT_MOC_LITERAL(6, 55, 7), // "saveMeg"
QT_MOC_LITERAL(7, 63, 8), // "setRoute"
QT_MOC_LITERAL(8, 72, 11) // "QModelIndex"

    },
    "mychart\0getMeg\0\0QVector<QStringList>\0"
    "refresh\0saveRoute\0saveMeg\0setRoute\0"
    "QModelIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mychart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       4,    0,   44,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void mychart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mychart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getMeg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVector<QStringList>(*)>(_a[2]))); break;
        case 1: _t->refresh(); break;
        case 2: _t->saveRoute(); break;
        case 3: _t->saveMeg(); break;
        case 4: _t->setRoute((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QStringList> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mychart::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_mychart.data,
    qt_meta_data_mychart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mychart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mychart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mychart.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mychart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
