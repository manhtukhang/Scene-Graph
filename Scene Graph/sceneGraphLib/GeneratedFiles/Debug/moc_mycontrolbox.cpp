/****************************************************************************
** Meta object code from reading C++ file 'mycontrolbox.h'
**
** Created: Tue Mar 6 17:58:09 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mycontrolbox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycontrolbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyControlBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      48,   46,   13,   13, 0x05,
      75,   13,   13,   13, 0x05,
      99,   93,   13,   13, 0x05,
     141,   13,   13,   13, 0x05,
     155,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     175,   46,   13,   13, 0x0a,
     215,   13,   13,   13, 0x0a,
     244,   13,   13,   13, 0x0a,
     279,   46,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyControlBox[] = {
    "MyControlBox\0\0sendGraphFromControlBox(Graph*)\0"
    ",\0sendClickedNode(Node*,int)\0"
    "sendName(QString)\0,,,,,\0"
    "passData(float,float,float,float,int,int)\0"
    "saveNewNode()\0saveNewNode(Graph*)\0"
    "grabNodeFromClick(QTreeWidgetItem*,int)\0"
    "receiveGraphFromTree(Graph*)\0"
    "receiveGraphFromControlBox(Graph*)\0"
    "receiveClickedNode(Node*,int)\0"
};

void MyControlBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyControlBox *_t = static_cast<MyControlBox *>(_o);
        switch (_id) {
        case 0: _t->sendGraphFromControlBox((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 1: _t->sendClickedNode((*reinterpret_cast< Node*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->sendName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->passData((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 4: _t->saveNewNode(); break;
        case 5: _t->saveNewNode((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 6: _t->grabNodeFromClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->receiveGraphFromTree((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 8: _t->receiveGraphFromControlBox((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 9: _t->receiveClickedNode((*reinterpret_cast< Node*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyControlBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyControlBox::staticMetaObject = {
    { &QDoubleSpinBox::staticMetaObject, qt_meta_stringdata_MyControlBox,
      qt_meta_data_MyControlBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyControlBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyControlBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyControlBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyControlBox))
        return static_cast<void*>(const_cast< MyControlBox*>(this));
    return QDoubleSpinBox::qt_metacast(_clname);
}

int MyControlBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MyControlBox::sendGraphFromControlBox(Graph * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyControlBox::sendClickedNode(Node * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyControlBox::sendName(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyControlBox::passData(float _t1, float _t2, float _t3, float _t4, int _t5, int _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyControlBox::saveNewNode()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void MyControlBox::saveNewNode(Graph * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
