/****************************************************************************
** Meta object code from reading C++ file 'vncclient.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../inc/extension_qt/vncclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vncclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VNCClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   10,   11,   10, 0x0a,
      47,   42,   35,   10, 0x0a,
      80,   74,   10,   10, 0x08,
     131,  125,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VNCClient[] = {
    "VNCClient\0\0QByteArray\0readSocket()\0"
    "qint64\0data\0writeToSocket(QByteArray&)\0"
    "state\0onStateChanged(QAbstractSocket::SocketState)\0"
    "error\0onError(QAbstractSocket::SocketError)\0"
};

void VNCClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VNCClient *_t = static_cast<VNCClient *>(_o);
        switch (_id) {
        case 0: { QByteArray _r = _t->readSocket();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 1: { qint64 _r = _t->writeToSocket((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 2: _t->onStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 3: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VNCClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VNCClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VNCClient,
      qt_meta_data_VNCClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VNCClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VNCClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VNCClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VNCClient))
        return static_cast<void*>(const_cast< VNCClient*>(this));
    return QObject::qt_metacast(_clname);
}

int VNCClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
