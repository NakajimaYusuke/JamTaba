/****************************************************************************
** Meta object code from reading C++ file 'NinjamJamRoomController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/src/jamtaba/NinjamJamRoomController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NinjamJamRoomController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Controller__NinjamJamRoomController_t {
    QByteArrayData data[31];
    char stringdata[489];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Controller__NinjamJamRoomController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Controller__NinjamJamRoomController_t qt_meta_stringdata_Controller__NinjamJamRoomController = {
    {
QT_MOC_LITERAL(0, 0, 35), // "Controller::NinjamJamRoomCont..."
QT_MOC_LITERAL(1, 36, 17), // "currentBpiChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 6), // "newBpi"
QT_MOC_LITERAL(4, 62, 17), // "currentBpmChanged"
QT_MOC_LITERAL(5, 80, 6), // "newBpm"
QT_MOC_LITERAL(6, 87, 19), // "intervalBeatChanged"
QT_MOC_LITERAL(7, 107, 12), // "intervalBeat"
QT_MOC_LITERAL(8, 120, 12), // "channelAdded"
QT_MOC_LITERAL(9, 133, 12), // "Ninjam::User"
QT_MOC_LITERAL(10, 146, 4), // "user"
QT_MOC_LITERAL(11, 151, 19), // "Ninjam::UserChannel"
QT_MOC_LITERAL(12, 171, 7), // "channel"
QT_MOC_LITERAL(13, 179, 9), // "channelID"
QT_MOC_LITERAL(14, 189, 14), // "channelRemoved"
QT_MOC_LITERAL(15, 204, 14), // "channelChanged"
QT_MOC_LITERAL(16, 219, 15), // "chatMsgReceived"
QT_MOC_LITERAL(17, 235, 7), // "message"
QT_MOC_LITERAL(18, 243, 22), // "ninjamServerBpmChanged"
QT_MOC_LITERAL(19, 266, 22), // "ninjamServerBpiChanged"
QT_MOC_LITERAL(20, 289, 6), // "oldBpi"
QT_MOC_LITERAL(21, 296, 20), // "ninjamAudioAvailable"
QT_MOC_LITERAL(22, 317, 12), // "channelIndex"
QT_MOC_LITERAL(23, 330, 16), // "encodedAudioData"
QT_MOC_LITERAL(24, 347, 24), // "ninjamUserChannelCreated"
QT_MOC_LITERAL(25, 372, 24), // "ninjamUserChannelRemoved"
QT_MOC_LITERAL(26, 397, 24), // "ninjamUserChannelUpdated"
QT_MOC_LITERAL(27, 422, 15), // "ninjamUserLeave"
QT_MOC_LITERAL(28, 438, 28), // "ninjamDisconnectedFromServer"
QT_MOC_LITERAL(29, 467, 14), // "Ninjam::Server"
QT_MOC_LITERAL(30, 482, 6) // "server"

    },
    "Controller::NinjamJamRoomController\0"
    "currentBpiChanged\0\0newBpi\0currentBpmChanged\0"
    "newBpm\0intervalBeatChanged\0intervalBeat\0"
    "channelAdded\0Ninjam::User\0user\0"
    "Ninjam::UserChannel\0channel\0channelID\0"
    "channelRemoved\0channelChanged\0"
    "chatMsgReceived\0message\0ninjamServerBpmChanged\0"
    "ninjamServerBpiChanged\0oldBpi\0"
    "ninjamAudioAvailable\0channelIndex\0"
    "encodedAudioData\0ninjamUserChannelCreated\0"
    "ninjamUserChannelRemoved\0"
    "ninjamUserChannelUpdated\0ninjamUserLeave\0"
    "ninjamDisconnectedFromServer\0"
    "Ninjam::Server\0server"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Controller__NinjamJamRoomController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       6,    1,   95,    2, 0x06 /* Public */,
       8,    3,   98,    2, 0x06 /* Public */,
      14,    3,  105,    2, 0x06 /* Public */,
      15,    3,  112,    2, 0x06 /* Public */,
      16,    2,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  124,    2, 0x08 /* Private */,
      19,    2,  127,    2, 0x08 /* Private */,
      21,    3,  132,    2, 0x08 /* Private */,
      24,    2,  139,    2, 0x08 /* Private */,
      25,    2,  144,    2, 0x08 /* Private */,
      26,    2,  149,    2, 0x08 /* Private */,
      27,    1,  154,    2, 0x08 /* Private */,
      28,    1,  157,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, QMetaType::Long,   10,   12,   13,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, QMetaType::Long,   10,   12,   13,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, QMetaType::Long,   10,   12,   13,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   17,

 // slots: parameters
    QMetaType::Void, QMetaType::Short,    5,
    QMetaType::Void, QMetaType::Short, QMetaType::Short,   20,    3,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::QByteArray,   10,   22,   23,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 29,   30,

       0        // eod
};

void Controller::NinjamJamRoomController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NinjamJamRoomController *_t = static_cast<NinjamJamRoomController *>(_o);
        switch (_id) {
        case 0: _t->currentBpiChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentBpmChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->intervalBeatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->channelAdded((*reinterpret_cast< Ninjam::User(*)>(_a[1])),(*reinterpret_cast< Ninjam::UserChannel(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3]))); break;
        case 4: _t->channelRemoved((*reinterpret_cast< Ninjam::User(*)>(_a[1])),(*reinterpret_cast< Ninjam::UserChannel(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3]))); break;
        case 5: _t->channelChanged((*reinterpret_cast< Ninjam::User(*)>(_a[1])),(*reinterpret_cast< Ninjam::UserChannel(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3]))); break;
        case 6: _t->chatMsgReceived((*reinterpret_cast< Ninjam::User(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->ninjamServerBpmChanged((*reinterpret_cast< short(*)>(_a[1]))); break;
        case 8: _t->ninjamServerBpiChanged((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2]))); break;
        case 9: _t->ninjamAudioAvailable((*reinterpret_cast< Ninjam::User(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 10: _t->ninjamUserChannelCreated((*reinterpret_cast< Ninjam::User(*)>(_a[1])),(*reinterpret_cast< Ninjam::UserChannel(*)>(_a[2]))); break;
        case 11: _t->ninjamUserChannelRemoved((*reinterpret_cast< Ninjam::User(*)>(_a[1])),(*reinterpret_cast< Ninjam::UserChannel(*)>(_a[2]))); break;
        case 12: _t->ninjamUserChannelUpdated((*reinterpret_cast< Ninjam::User(*)>(_a[1])),(*reinterpret_cast< Ninjam::UserChannel(*)>(_a[2]))); break;
        case 13: _t->ninjamUserLeave((*reinterpret_cast< Ninjam::User(*)>(_a[1]))); break;
        case 14: _t->ninjamDisconnectedFromServer((*reinterpret_cast< Ninjam::Server(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NinjamJamRoomController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NinjamJamRoomController::currentBpiChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (NinjamJamRoomController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NinjamJamRoomController::currentBpmChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (NinjamJamRoomController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NinjamJamRoomController::intervalBeatChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (NinjamJamRoomController::*_t)(Ninjam::User , Ninjam::UserChannel , long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NinjamJamRoomController::channelAdded)) {
                *result = 3;
            }
        }
        {
            typedef void (NinjamJamRoomController::*_t)(Ninjam::User , Ninjam::UserChannel , long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NinjamJamRoomController::channelRemoved)) {
                *result = 4;
            }
        }
        {
            typedef void (NinjamJamRoomController::*_t)(Ninjam::User , Ninjam::UserChannel , long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NinjamJamRoomController::channelChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (NinjamJamRoomController::*_t)(Ninjam::User , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NinjamJamRoomController::chatMsgReceived)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject Controller::NinjamJamRoomController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Controller__NinjamJamRoomController.data,
      qt_meta_data_Controller__NinjamJamRoomController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Controller::NinjamJamRoomController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controller::NinjamJamRoomController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Controller__NinjamJamRoomController.stringdata))
        return static_cast<void*>(const_cast< NinjamJamRoomController*>(this));
    return QObject::qt_metacast(_clname);
}

int Controller::NinjamJamRoomController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Controller::NinjamJamRoomController::currentBpiChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Controller::NinjamJamRoomController::currentBpmChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Controller::NinjamJamRoomController::intervalBeatChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Controller::NinjamJamRoomController::channelAdded(Ninjam::User _t1, Ninjam::UserChannel _t2, long _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Controller::NinjamJamRoomController::channelRemoved(Ninjam::User _t1, Ninjam::UserChannel _t2, long _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Controller::NinjamJamRoomController::channelChanged(Ninjam::User _t1, Ninjam::UserChannel _t2, long _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Controller::NinjamJamRoomController::chatMsgReceived(Ninjam::User _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE