/****************************************************************************
** Meta object code from reading C++ file 'formloadanalysis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../formloadanalysis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formloadanalysis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormLoadAnalysis_t {
    QByteArrayData data[15];
    char stringdata[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormLoadAnalysis_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormLoadAnalysis_t qt_meta_stringdata_FormLoadAnalysis = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FormLoadAnalysis"
QT_MOC_LITERAL(1, 17, 10), // "isResolved"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "resolve"
QT_MOC_LITERAL(4, 37, 24), // "on_addPushButton_clicked"
QT_MOC_LITERAL(5, 62, 27), // "on_deletePushButton_clicked"
QT_MOC_LITERAL(6, 90, 26), // "on_resetPushButton_clicked"
QT_MOC_LITERAL(7, 117, 25), // "on_calcPushButton_clicked"
QT_MOC_LITERAL(8, 143, 11), // "cellChanged"
QT_MOC_LITERAL(9, 155, 3), // "row"
QT_MOC_LITERAL(10, 159, 3), // "col"
QT_MOC_LITERAL(11, 163, 18), // "enableDeleteButton"
QT_MOC_LITERAL(12, 182, 15), // "calculateEtotal"
QT_MOC_LITERAL(13, 198, 40), // "on_regulationComboBox_current..."
QT_MOC_LITERAL(14, 239, 4) // "arg1"

    },
    "FormLoadAnalysis\0isResolved\0\0resolve\0"
    "on_addPushButton_clicked\0"
    "on_deletePushButton_clicked\0"
    "on_resetPushButton_clicked\0"
    "on_calcPushButton_clicked\0cellChanged\0"
    "row\0col\0enableDeleteButton\0calculateEtotal\0"
    "on_regulationComboBox_currentTextChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormLoadAnalysis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    2,   66,    2, 0x08 /* Private */,
      11,    2,   71,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void FormLoadAnalysis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormLoadAnalysis *_t = static_cast<FormLoadAnalysis *>(_o);
        switch (_id) {
        case 0: _t->isResolved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_addPushButton_clicked(); break;
        case 2: _t->on_deletePushButton_clicked(); break;
        case 3: _t->on_resetPushButton_clicked(); break;
        case 4: _t->on_calcPushButton_clicked(); break;
        case 5: _t->cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->enableDeleteButton((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->calculateEtotal(); break;
        case 8: _t->on_regulationComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormLoadAnalysis::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormLoadAnalysis::isResolved)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FormLoadAnalysis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormLoadAnalysis.data,
      qt_meta_data_FormLoadAnalysis,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormLoadAnalysis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormLoadAnalysis::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormLoadAnalysis.stringdata))
        return static_cast<void*>(const_cast< FormLoadAnalysis*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormLoadAnalysis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void FormLoadAnalysis::isResolved(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
