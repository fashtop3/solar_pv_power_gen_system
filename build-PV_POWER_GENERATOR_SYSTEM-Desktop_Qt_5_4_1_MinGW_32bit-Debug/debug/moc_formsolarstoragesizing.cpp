/****************************************************************************
** Meta object code from reading C++ file 'formsolarstoragesizing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../formsolarstoragesizing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formsolarstoragesizing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormSolarStorageSizing_t {
    QByteArrayData data[5];
    char stringdata[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormSolarStorageSizing_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormSolarStorageSizing_t qt_meta_stringdata_FormSolarStorageSizing = {
    {
QT_MOC_LITERAL(0, 0, 22), // "FormSolarStorageSizing"
QT_MOC_LITERAL(1, 23, 10), // "isResolved"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 30), // "on_calculatePushButton_clicked"
QT_MOC_LITERAL(4, 66, 21) // "enableCalculateButton"

    },
    "FormSolarStorageSizing\0isResolved\0\0"
    "on_calculatePushButton_clicked\0"
    "enableCalculateButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormSolarStorageSizing[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   32,    2, 0x08 /* Private */,
       4,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormSolarStorageSizing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormSolarStorageSizing *_t = static_cast<FormSolarStorageSizing *>(_o);
        switch (_id) {
        case 0: _t->isResolved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_calculatePushButton_clicked(); break;
        case 2: _t->enableCalculateButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormSolarStorageSizing::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormSolarStorageSizing::isResolved)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FormSolarStorageSizing::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormSolarStorageSizing.data,
      qt_meta_data_FormSolarStorageSizing,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormSolarStorageSizing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormSolarStorageSizing::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormSolarStorageSizing.stringdata))
        return static_cast<void*>(const_cast< FormSolarStorageSizing*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormSolarStorageSizing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FormSolarStorageSizing::isResolved(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
