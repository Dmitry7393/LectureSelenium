/****************************************************************************
** Meta object code from reading C++ file 'BasicKeyboardInterfaceTest.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/Test/BasicKeyboardInterfaceTest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BasicKeyboardInterfaceTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BasicKeyboardInterfaceTestWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   34,   33,   33, 0x08,
      65,   33,   33,   33, 0x08,
      81,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BasicKeyboardInterfaceTestWidget[] = {
    "BasicKeyboardInterfaceTestWidget\0\0str\0"
    "setResultModifier(QString)\0setResultDown()\0"
    "setResultUp()\0"
};

void BasicKeyboardInterfaceTestWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BasicKeyboardInterfaceTestWidget *_t = static_cast<BasicKeyboardInterfaceTestWidget *>(_o);
        switch (_id) {
        case 0: _t->setResultModifier((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setResultDown(); break;
        case 2: _t->setResultUp(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BasicKeyboardInterfaceTestWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BasicKeyboardInterfaceTestWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BasicKeyboardInterfaceTestWidget,
      qt_meta_data_BasicKeyboardInterfaceTestWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BasicKeyboardInterfaceTestWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BasicKeyboardInterfaceTestWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BasicKeyboardInterfaceTestWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BasicKeyboardInterfaceTestWidget))
        return static_cast<void*>(const_cast< BasicKeyboardInterfaceTestWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BasicKeyboardInterfaceTestWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_LEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      17,    6,    6,    6, 0x05,
      29,   25,    6,    6, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_LEdit[] = {
    "LEdit\0\0keyDown()\0keyUp()\0str\0"
    "keyModifier(QString)\0"
};

void LEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LEdit *_t = static_cast<LEdit *>(_o);
        switch (_id) {
        case 0: _t->keyDown(); break;
        case 1: _t->keyUp(); break;
        case 2: _t->keyModifier((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_LEdit,
      qt_meta_data_LEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LEdit))
        return static_cast<void*>(const_cast< LEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int LEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LEdit::keyDown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void LEdit::keyUp()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void LEdit::keyModifier(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
