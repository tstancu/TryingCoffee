/****************************************************************************
** Meta object code from reading C++ file 'ApplicationFlowModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ApplicationFlowModel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApplicationFlowModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSApplicationFlowModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSApplicationFlowModelENDCLASS = QtMocHelpers::stringData(
    "ApplicationFlowModel",
    "stateChanged",
    "",
    "animationDurationChanged",
    "milkAmountChanged",
    "sugarAmountChanged",
    "coffeeSelected",
    "brewStarted",
    "startBrew",
    "state",
    "animationDuration",
    "milkAmount",
    "sugarAmount"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSApplicationFlowModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   63, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    5 /* Public */,
       3,    0,   57,    2, 0x06,    6 /* Public */,
       4,    0,   58,    2, 0x06,    7 /* Public */,
       5,    0,   59,    2, 0x06,    8 /* Public */,
       6,    0,   60,    2, 0x06,    9 /* Public */,
       7,    0,   61,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   62,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00015103, uint(0), 0,
      10, QMetaType::Int, 0x00015103, uint(1), 0,
      11, QMetaType::Int, 0x00015103, uint(2), 0,
      12, QMetaType::Int, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ApplicationFlowModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSApplicationFlowModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSApplicationFlowModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSApplicationFlowModelENDCLASS_t,
        // property 'state'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'animationDuration'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'milkAmount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'sugarAmount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ApplicationFlowModel, std::true_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'animationDurationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'milkAmountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sugarAmountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'coffeeSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'brewStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startBrew'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ApplicationFlowModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApplicationFlowModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->animationDurationChanged(); break;
        case 2: _t->milkAmountChanged(); break;
        case 3: _t->sugarAmountChanged(); break;
        case 4: _t->coffeeSelected(); break;
        case 5: _t->brewStarted(); break;
        case 6: _t->startBrew(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ApplicationFlowModel::*)();
            if (_t _q_method = &ApplicationFlowModel::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ApplicationFlowModel::*)();
            if (_t _q_method = &ApplicationFlowModel::animationDurationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ApplicationFlowModel::*)();
            if (_t _q_method = &ApplicationFlowModel::milkAmountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ApplicationFlowModel::*)();
            if (_t _q_method = &ApplicationFlowModel::sugarAmountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ApplicationFlowModel::*)();
            if (_t _q_method = &ApplicationFlowModel::coffeeSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ApplicationFlowModel::*)();
            if (_t _q_method = &ApplicationFlowModel::brewStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ApplicationFlowModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->animationDuration(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->milkAmount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->sugarAmount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ApplicationFlowModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setState(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAnimationDuration(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setMilkAmount(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSugarAmount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *ApplicationFlowModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationFlowModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSApplicationFlowModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ApplicationFlowModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ApplicationFlowModel::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ApplicationFlowModel::animationDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ApplicationFlowModel::milkAmountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ApplicationFlowModel::sugarAmountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ApplicationFlowModel::coffeeSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ApplicationFlowModel::brewStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
