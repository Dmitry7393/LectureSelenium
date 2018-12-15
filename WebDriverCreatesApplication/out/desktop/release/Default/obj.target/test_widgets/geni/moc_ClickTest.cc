/****************************************************************************
** Meta object code from reading C++ file 'ClickTest.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/Test/ClickTest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClickTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClickTestWidget[] = {

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
      17,   16,   16,   16, 0x08,
      36,   16,   16,   16, 0x08,
      54,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ClickTestWidget[] = {
    "ClickTestWidget\0\0OnNormalBtnClick()\0"
    "OnCheckBoxClick()\0OnBtnOnScrollClick()\0"
};

void ClickTestWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ClickTestWidget *_t = static_cast<ClickTestWidget *>(_o);
        switch (_id) {
        case 0: _t->OnNormalBtnClick(); break;
        case 1: _t->OnCheckBoxClick(); break;
        case 2: _t->OnBtnOnScrollClick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ClickTestWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ClickTestWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ClickTestWidget,
      qt_meta_data_ClickTestWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClickTestWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClickTestWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClickTestWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClickTestWidget))
        return static_cast<void*>(const_cast< ClickTestWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ClickTestWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
