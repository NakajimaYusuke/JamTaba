/****************************************************************************
** Meta object code from reading C++ file 'LoginService.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/src/jamtaba/loginserver/LoginService.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoginService.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Login__LoginService_t {
    QByteArrayData data[17];
    char stringdata[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Login__LoginService_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Login__LoginService_t qt_meta_stringdata_Login__LoginService = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Login::LoginService"
QT_MOC_LITERAL(1, 20, 18), // "roomsListAvailable"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 22), // "QList<Login::RoomInfo>"
QT_MOC_LITERAL(4, 63, 11), // "publicRooms"
QT_MOC_LITERAL(5, 75, 22), // "disconnectedFromServer"
QT_MOC_LITERAL(6, 98, 13), // "connectedSlot"
QT_MOC_LITERAL(7, 112, 16), // "disconnectedSlot"
QT_MOC_LITERAL(8, 129, 9), // "errorSlot"
QT_MOC_LITERAL(9, 139, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(10, 167, 13), // "sslErrorsSlot"
QT_MOC_LITERAL(11, 181, 16), // "QList<QSslError>"
QT_MOC_LITERAL(12, 198, 24), // "connectNetworkReplySlots"
QT_MOC_LITERAL(13, 223, 14), // "QNetworkReply*"
QT_MOC_LITERAL(14, 238, 5), // "reply"
QT_MOC_LITERAL(15, 244, 7), // "Command"
QT_MOC_LITERAL(16, 252, 7) // "command"

    },
    "Login::LoginService\0roomsListAvailable\0"
    "\0QList<Login::RoomInfo>\0publicRooms\0"
    "disconnectedFromServer\0connectedSlot\0"
    "disconnectedSlot\0errorSlot\0"
    "QNetworkReply::NetworkError\0sslErrorsSlot\0"
    "QList<QSslError>\0connectNetworkReplySlots\0"
    "QNetworkReply*\0reply\0Command\0command"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Login__LoginService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,
      10,    1,   58,    2, 0x08 /* Private */,
      12,    2,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,

       0        // eod
};

void Login::LoginService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginService *_t = static_cast<LoginService *>(_o);
        switch (_id) {
        case 0: _t->roomsListAvailable((*reinterpret_cast< QList<Login::RoomInfo>(*)>(_a[1]))); break;
        case 1: _t->disconnectedFromServer(); break;
        case 2: _t->connectedSlot(); break;
        case 3: _t->disconnectedSlot(); break;
        case 4: _t->errorSlot((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 5: _t->sslErrorsSlot((*reinterpret_cast< QList<QSslError>(*)>(_a[1]))); break;
        case 6: _t->connectNetworkReplySlots((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< Command(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoginService::*_t)(QList<Login::RoomInfo> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginService::roomsListAvailable)) {
                *result = 0;
            }
        }
        {
            typedef void (LoginService::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginService::disconnectedFromServer)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Login::LoginService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Login__LoginService.data,
      qt_meta_data_Login__LoginService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Login::LoginService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Login::LoginService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Login__LoginService.stringdata))
        return static_cast<void*>(const_cast< LoginService*>(this));
    return QObject::qt_metacast(_clname);
}

int Login::LoginService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Login::LoginService::roomsListAvailable(QList<Login::RoomInfo> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Login::LoginService::disconnectedFromServer()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE