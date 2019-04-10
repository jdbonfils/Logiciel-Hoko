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
    QByteArrayData data[11];
    char stringdata0[191];
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
QT_MOC_LITERAL(5, 68, 22), // "sauvegarderImageFinale"
QT_MOC_LITERAL(6, 91, 24), // "on_ajouterBouton_clicked"
QT_MOC_LITERAL(7, 116, 11), // "resizeEvent"
QT_MOC_LITERAL(8, 128, 13), // "QResizeEvent*"
QT_MOC_LITERAL(9, 142, 37), // "on_listeTraitements_currentRo..."
QT_MOC_LITERAL(10, 180, 10) // "currentRow"

    },
    "InterfacePrincipale\0importerUneImage\0"
    "\0afficherGuide\0afficherApropos\0"
    "sauvegarderImageFinale\0on_ajouterBouton_clicked\0"
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
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Int,   10,

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
        case 3: _t->sauvegarderImageFinale(); break;
        case 4: _t->on_ajouterBouton_clicked(); break;
        case 5: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 6: _t->on_listeTraitements_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
