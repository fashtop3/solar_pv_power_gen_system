/****************************************************************************
** Meta object code from reading C++ file 'formresourseestimation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../formresourseestimation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formresourseestimation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormResourseEstimation_t {
    QByteArrayData data[9];
    char stringdata[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormResourseEstimation_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormResourseEstimation_t qt_meta_stringdata_FormResourseEstimation = {
    {
QT_MOC_LITERAL(0, 0, 22), // "FormResourseEstimation"
QT_MOC_LITERAL(1, 23, 10), // "isResolved"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "resolve"
QT_MOC_LITERAL(4, 43, 24), // "enableEstimatePushButton"
QT_MOC_LITERAL(5, 68, 3), // "str"
QT_MOC_LITERAL(6, 72, 29), // "on_estimatePushButton_clicked"
QT_MOC_LITERAL(7, 102, 31), // "on_latitudeLineEdit_textChanged"
QT_MOC_LITERAL(8, 134, 4) // "arg1"

    },
    "FormResourseEstimation\0isResolved\0\0"
    "resolve\0enableEstimatePushButton\0str\0"
    "on_estimatePushButton_clicked\0"
    "on_latitudeLineEdit_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormResourseEstimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x08 /* Private */,
       6,    0,   40,    2, 0x08 /* Private */,
       7,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void FormResourseEstimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormResourseEstimation *_t = static_cast<FormResourseEstimation *>(_o);
        switch (_id) {
        case 0: _t->isResolved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->enableEstimatePushButton((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_estimatePushButton_clicked(); break;
        case 3: _t->on_latitudeLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormResourseEstimation::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormResourseEstimation::isResolved)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FormResourseEstimation::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormResourseEstimation.data,
      qt_meta_data_FormResourseEstimation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormResourseEstimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormResourseEstimation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormResourseEstimation.stringdata))
        return static_cast<void*>(const_cast< FormResourseEstimation*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormResourseEstimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FormResourseEstimation::isResolved(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
