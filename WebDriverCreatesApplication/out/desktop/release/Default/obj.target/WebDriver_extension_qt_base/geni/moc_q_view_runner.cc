/****************************************************************************
** Meta object code from reading C++ file 'q_view_runner.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../inc/extension_qt/q_view_runner.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q_view_runner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_webdriver__QTaskRunner[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   24,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_webdriver__QTaskRunner[] = {
    "webdriver::QTaskRunner\0\0task\0"
    "runTask(base::Closure)\0"
};

void webdriver::QTaskRunner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTaskRunner *_t = static_cast<QTaskRunner *>(_o);
        switch (_id) {
        case 0: _t->runTask((*reinterpret_cast< const base::Closure(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData webdriver::QTaskRunner::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject webdriver::QTaskRunner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_webdriver__QTaskRunner,
      qt_meta_data_webdriver__QTaskRunner, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &webdriver::QTaskRunner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *webdriver::QTaskRunner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *webdriver::QTaskRunner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_webdriver__QTaskRunner))
        return static_cast<void*>(const_cast< QTaskRunner*>(this));
    return QObject::qt_metacast(_clname);
}

int webdriver::QTaskRunner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
