/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../weatherapp/mainwindow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[42];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 15), // "on_Next_clicked"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 15), // "on_Back_clicked"
QT_MOC_LITERAL(44, 18), // "on_display_clicked"
QT_MOC_LITERAL(63, 8), // "showTime"
QT_MOC_LITERAL(72, 9), // "showTime2"
QT_MOC_LITERAL(82, 8), // "onResult"
QT_MOC_LITERAL(91, 14), // "QNetworkReply*"
QT_MOC_LITERAL(106, 5), // "reply"
QT_MOC_LITERAL(112, 16), // "onResultPublicIp"
QT_MOC_LITERAL(129, 18), // "onResultMyLocation"
QT_MOC_LITERAL(148, 26), // "on_day_currentIndexChanged"
QT_MOC_LITERAL(175, 5), // "index"
QT_MOC_LITERAL(181, 21), // "on_clearInput_clicked"
QT_MOC_LITERAL(203, 21), // "on_clearInput_pressed"
QT_MOC_LITERAL(225, 22), // "on_clearInput_released"
QT_MOC_LITERAL(248, 21), // "on_myLocation_clicked"
QT_MOC_LITERAL(270, 24), // "displayCurrentConditions"
QT_MOC_LITERAL(295, 6), // "_index"
QT_MOC_LITERAL(302, 25) // "on_currConditions_clicked"

    },
    "MainWindow\0on_Next_clicked\0\0on_Back_clicked\0"
    "on_display_clicked\0showTime\0showTime2\0"
    "onResult\0QNetworkReply*\0reply\0"
    "onResultPublicIp\0onResultMyLocation\0"
    "on_day_currentIndexChanged\0index\0"
    "on_clearInput_clicked\0on_clearInput_pressed\0"
    "on_clearInput_released\0on_myLocation_clicked\0"
    "displayCurrentConditions\0_index\0"
    "on_currConditions_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x08,    1 /* Private */,
       3,    0,  105,    2, 0x08,    2 /* Private */,
       4,    0,  106,    2, 0x08,    3 /* Private */,
       5,    0,  107,    2, 0x08,    4 /* Private */,
       6,    0,  108,    2, 0x08,    5 /* Private */,
       7,    1,  109,    2, 0x08,    6 /* Private */,
      10,    1,  112,    2, 0x08,    8 /* Private */,
      11,    1,  115,    2, 0x08,   10 /* Private */,
      12,    1,  118,    2, 0x08,   12 /* Private */,
      14,    0,  121,    2, 0x08,   14 /* Private */,
      15,    0,  122,    2, 0x08,   15 /* Private */,
      16,    0,  123,    2, 0x08,   16 /* Private */,
      17,    0,  124,    2, 0x08,   17 /* Private */,
      18,    1,  125,    2, 0x08,   18 /* Private */,
      20,    0,  128,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Next_clicked(); break;
        case 1: _t->on_Back_clicked(); break;
        case 2: _t->on_display_clicked(); break;
        case 3: _t->showTime(); break;
        case 4: _t->showTime2(); break;
        case 5: _t->onResult((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->onResultPublicIp((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->onResultMyLocation((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->on_day_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_clearInput_clicked(); break;
        case 10: _t->on_clearInput_pressed(); break;
        case 11: _t->on_clearInput_released(); break;
        case 12: _t->on_myLocation_clicked(); break;
        case 13: _t->displayCurrentConditions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_currConditions_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
