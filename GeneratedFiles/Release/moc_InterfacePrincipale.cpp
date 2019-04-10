/****************************************************************************
** Meta object code from reading C++ file 'InterfacePrincipale.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Interface/InterfacePrincipale.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InterfacePrincipale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InterfacePrincipale_t {
    QByteArrayData data[17];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterfacePrincipale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterfacePrincipale_t qt_meta_stringdata_InterfacePrincipale = {
    {
QT_MOC_LITERAL(0, 0, 19), // "InterfacePrincipale"
QT_MOC_LITERAL(1, 20, 16), // "importerUneImage"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "afficherGuide"
QT_MOC_LITERAL(4, 52, 15), // "afficherApropos"
QT_MOC_LITERAL(5, 68, 20), // "chargerConfiguration"
QT_MOC_LITERAL(6, 89, 21), // "exporterConfiguration"
QT_MOC_LITERAL(7, 111, 22), // "sauvegarderImageFinale"
QT_MOC_LITERAL(8, 134, 24), // "on_ajouterBouton_clicked"
QT_MOC_LITERAL(9, 159, 25), // "on_modifierBouton_clicked"
QT_MOC_LITERAL(10, 185, 26), // "on_supprimerBouton_clicked"
QT_MOC_LITERAL(11, 212, 21), // "on_hautBouton_clicked"
QT_MOC_LITERAL(12, 234, 20), // "on_basBouton_clicked"
QT_MOC_LITERAL(13, 255, 11), // "resizeEvent"
QT_MOC_LITERAL(14, 267, 13), // "QResizeEvent*"
QT_MOC_LITERAL(15, 281, 37), // "on_listeTraitements_currentRo..."
QT_MOC_LITERAL(16, 319, 10) // "currentRow"

    },
    "InterfacePrincipale\0importerUneImage\0"
    "\0afficherGuide\0afficherApropos\0"
    "chargerConfiguration\0exporterConfiguration\0"
    "sauvegarderImageFinale\0on_ajouterBouton_clicked\0"
    "on_modifierBouton_clicked\0"
    "on_supprimerBouton_clicked\0"
    "on_hautBouton_clicked\0on_basBouton_clicked\0"
    "resizeEvent\0QResizeEvent*\0"
    "on_listeTraitements_currentRowChanged\0"
    "currentRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfacePrincipale[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      15,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void InterfacePrincipale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InterfacePrincipale *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->importerUneImage(); break;
        case 1: _t->afficherGuide(); break;
        case 2: _t->afficherApropos(); break;
        case 3: _t->chargerConfiguration(); break;
        case 4: _t->exporterConfiguration(); break;
        case 5: _t->sauvegarderImageFinale(); break;
        case 6: _t->on_ajouterBouton_clicked(); break;
        case 7: _t->on_modifierBouton_clicked(); break;
        case 8: _t->on_supprimerBouton_clicked(); break;
        case 9: _t->on_hautBouton_clicked(); break;
        case 10: _t->on_basBouton_clicked(); break;
        case 11: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 12: _t->on_listeTraitements_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InterfacePrincipale::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_InterfacePrincipale.data,
    qt_meta_data_InterfacePrincipale,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InterfacePrincipale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfacePrincipale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InterfacePrincipale.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int InterfacePrincipale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
