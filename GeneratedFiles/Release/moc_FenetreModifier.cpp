/****************************************************************************
** Meta object code from reading C++ file 'FenetreModifier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Interface/Fenetres/FenetreModifier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FenetreModifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FenetreModifier_t {
    QByteArrayData data[10];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FenetreModifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FenetreModifier_t qt_meta_stringdata_FenetreModifier = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FenetreModifier"
QT_MOC_LITERAL(1, 16, 24), // "on_validerBouton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 24), // "on_annulerBouton_clicked"
QT_MOC_LITERAL(4, 67, 35), // "on_spinBoxLargeurNoyau_valueC..."
QT_MOC_LITERAL(5, 103, 12), // "largeurNoyau"
QT_MOC_LITERAL(6, 116, 35), // "on_spinBoxHauteurNoyau_valueC..."
QT_MOC_LITERAL(7, 152, 12), // "hauteurNoyau"
QT_MOC_LITERAL(8, 165, 34), // "on_doubleSpinBoxSigma_valueCh..."
QT_MOC_LITERAL(9, 200, 5) // "sigma"

    },
    "FenetreModifier\0on_validerBouton_clicked\0"
    "\0on_annulerBouton_clicked\0"
    "on_spinBoxLargeurNoyau_valueChanged\0"
    "largeurNoyau\0on_spinBoxHauteurNoyau_valueChanged\0"
    "hauteurNoyau\0on_doubleSpinBoxSigma_valueChanged\0"
    "sigma"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FenetreModifier[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       8,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Double,    9,

       0        // eod
};

void FenetreModifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FenetreModifier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_validerBouton_clicked(); break;
        case 1: _t->on_annulerBouton_clicked(); break;
        case 2: _t->on_spinBoxLargeurNoyau_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_spinBoxHauteurNoyau_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_doubleSpinBoxSigma_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FenetreModifier::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_FenetreModifier.data,
    qt_meta_data_FenetreModifier,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FenetreModifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FenetreModifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FenetreModifier.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FenetreModifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
