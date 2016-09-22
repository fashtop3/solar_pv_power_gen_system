/****************************************************************************
** Meta object code from reading C++ file 'formrecomendedpvsystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../formrecomendedpvsystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formrecomendedpvsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormRecomendedPVSystem_t {
    QByteArrayData data[9];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormRecomendedPVSystem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormRecomendedPVSystem_t qt_meta_stringdata_FormRecomendedPVSystem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "FormRecomendedPVSystem"
QT_MOC_LITERAL(1, 23, 13), // "inverterFrame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "chargeControllerFrame"
QT_MOC_LITERAL(4, 60, 12), // "pvArrayFrame"
QT_MOC_LITERAL(5, 73, 17), // "solarStorageFrame"
QT_MOC_LITERAL(6, 91, 13), // "latitudeFrame"
QT_MOC_LITERAL(7, 105, 5), // "print"
QT_MOC_LITERAL(8, 111, 8) // "updateUI"

    },
    "FormRecomendedPVSystem\0inverterFrame\0"
    "\0chargeControllerFrame\0pvArrayFrame\0"
    "solarStorageFrame\0latitudeFrame\0print\0"
    "updateUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormRecomendedPVSystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormRecomendedPVSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormRecomendedPVSystem *_t = static_cast<FormRecomendedPVSystem *>(_o);
        switch (_id) {
        case 0: _t->inverterFrame(); break;
        case 1: _t->chargeControllerFrame(); break;
        case 2: _t->pvArrayFrame(); break;
        case 3: _t->solarStorageFrame(); break;
        case 4: _t->latitudeFrame(); break;
        case 5: _t->print(); break;
        case 6: _t->updateUI(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FormRecomendedPVSystem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormRecomendedPVSystem.data,
      qt_meta_data_FormRecomendedPVSystem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormRecomendedPVSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormRecomendedPVSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormRecomendedPVSystem.stringdata))
        return static_cast<void*>(const_cast< FormRecomendedPVSystem*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormRecomendedPVSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
