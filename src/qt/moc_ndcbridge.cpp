/****************************************************************************
** Meta object code from reading C++ file 'ndcbridge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ndc/src/qt/ndcbridge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ndcbridge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NDCBridge_t {
    QByteArrayData data[97];
    char stringdata0[1059];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NDCBridge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NDCBridge_t qt_meta_stringdata_NDCBridge = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NDCBridge"
QT_MOC_LITERAL(1, 10, 9), // "emitPaste"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "text"
QT_MOC_LITERAL(4, 26, 16), // "emitTransactions"
QT_MOC_LITERAL(5, 43, 12), // "transactions"
QT_MOC_LITERAL(6, 56, 13), // "emitAddresses"
QT_MOC_LITERAL(7, 70, 9), // "addresses"
QT_MOC_LITERAL(8, 80, 12), // "emitMessages"
QT_MOC_LITERAL(9, 93, 8), // "messages"
QT_MOC_LITERAL(10, 102, 5), // "reset"
QT_MOC_LITERAL(11, 108, 11), // "emitMessage"
QT_MOC_LITERAL(12, 120, 2), // "id"
QT_MOC_LITERAL(13, 123, 4), // "type"
QT_MOC_LITERAL(14, 128, 4), // "sent"
QT_MOC_LITERAL(15, 133, 8), // "received"
QT_MOC_LITERAL(16, 142, 7), // "label_v"
QT_MOC_LITERAL(17, 150, 5), // "label"
QT_MOC_LITERAL(18, 156, 2), // "to"
QT_MOC_LITERAL(19, 159, 4), // "from"
QT_MOC_LITERAL(20, 164, 4), // "read"
QT_MOC_LITERAL(21, 169, 7), // "message"
QT_MOC_LITERAL(22, 177, 21), // "emitCoinControlUpdate"
QT_MOC_LITERAL(23, 199, 8), // "quantity"
QT_MOC_LITERAL(24, 208, 6), // "amount"
QT_MOC_LITERAL(25, 215, 3), // "fee"
QT_MOC_LITERAL(26, 219, 8), // "afterfee"
QT_MOC_LITERAL(27, 228, 5), // "bytes"
QT_MOC_LITERAL(28, 234, 8), // "priority"
QT_MOC_LITERAL(29, 243, 3), // "low"
QT_MOC_LITERAL(30, 247, 6), // "change"
QT_MOC_LITERAL(31, 254, 21), // "emitAddressBookReturn"
QT_MOC_LITERAL(32, 276, 7), // "address"
QT_MOC_LITERAL(33, 284, 14), // "emitReceipient"
QT_MOC_LITERAL(34, 299, 9), // "narration"
QT_MOC_LITERAL(35, 309, 14), // "triggerElement"
QT_MOC_LITERAL(36, 324, 7), // "element"
QT_MOC_LITERAL(37, 332, 7), // "trigger"
QT_MOC_LITERAL(38, 340, 12), // "networkAlert"
QT_MOC_LITERAL(39, 353, 5), // "alert"
QT_MOC_LITERAL(40, 359, 18), // "updateTransactions"
QT_MOC_LITERAL(41, 378, 7), // "topLeft"
QT_MOC_LITERAL(42, 386, 11), // "bottomRight"
QT_MOC_LITERAL(43, 398, 15), // "updateAddresses"
QT_MOC_LITERAL(44, 414, 18), // "insertTransactions"
QT_MOC_LITERAL(45, 433, 6), // "parent"
QT_MOC_LITERAL(46, 440, 5), // "start"
QT_MOC_LITERAL(47, 446, 3), // "end"
QT_MOC_LITERAL(48, 450, 15), // "insertAddresses"
QT_MOC_LITERAL(49, 466, 14), // "insertMessages"
QT_MOC_LITERAL(50, 481, 14), // "appendMessages"
QT_MOC_LITERAL(51, 496, 20), // "populateMessageTable"
QT_MOC_LITERAL(52, 517, 4), // "copy"
QT_MOC_LITERAL(53, 522, 5), // "paste"
QT_MOC_LITERAL(54, 528, 15), // "getAddressLabel"
QT_MOC_LITERAL(55, 544, 10), // "newAddress"
QT_MOC_LITERAL(56, 555, 3), // "own"
QT_MOC_LITERAL(57, 559, 18), // "transactionDetails"
QT_MOC_LITERAL(58, 578, 4), // "txid"
QT_MOC_LITERAL(59, 583, 9), // "getPubKey"
QT_MOC_LITERAL(60, 593, 10), // "userAction"
QT_MOC_LITERAL(61, 604, 6), // "action"
QT_MOC_LITERAL(62, 611, 24), // "populateTransactionTable"
QT_MOC_LITERAL(63, 636, 18), // "updateAddressLabel"
QT_MOC_LITERAL(64, 655, 15), // "validateAddress"
QT_MOC_LITERAL(65, 671, 13), // "deleteAddress"
QT_MOC_LITERAL(66, 685, 13), // "deleteMessage"
QT_MOC_LITERAL(67, 699, 3), // "key"
QT_MOC_LITERAL(68, 703, 17), // "markMessageAsRead"
QT_MOC_LITERAL(69, 721, 15), // "openAddressBook"
QT_MOC_LITERAL(70, 737, 7), // "sending"
QT_MOC_LITERAL(71, 745, 15), // "openCoinControl"
QT_MOC_LITERAL(72, 761, 12), // "addRecipient"
QT_MOC_LITERAL(73, 774, 7), // "txnType"
QT_MOC_LITERAL(74, 782, 9), // "nRingSize"
QT_MOC_LITERAL(75, 792, 9), // "sendCoins"
QT_MOC_LITERAL(76, 802, 15), // "fUseCoinControl"
QT_MOC_LITERAL(77, 818, 11), // "sChangeAddr"
QT_MOC_LITERAL(78, 830, 9), // "setPubKey"
QT_MOC_LITERAL(79, 840, 6), // "pubkey"
QT_MOC_LITERAL(80, 847, 11), // "sendMessage"
QT_MOC_LITERAL(81, 859, 23), // "updateCoinControlAmount"
QT_MOC_LITERAL(82, 883, 23), // "updateCoinControlLabels"
QT_MOC_LITERAL(83, 907, 5), // "uint&"
QT_MOC_LITERAL(84, 913, 8), // "int64_t&"
QT_MOC_LITERAL(85, 922, 8), // "QString&"
QT_MOC_LITERAL(86, 931, 15), // "listAnonOutputs"
QT_MOC_LITERAL(87, 947, 9), // "findBlock"
QT_MOC_LITERAL(88, 957, 8), // "searchID"
QT_MOC_LITERAL(89, 966, 16), // "listLatestBlocks"
QT_MOC_LITERAL(90, 983, 12), // "blockDetails"
QT_MOC_LITERAL(91, 996, 5), // "blkid"
QT_MOC_LITERAL(92, 1002, 24), // "listTransactionsForBlock"
QT_MOC_LITERAL(93, 1027, 10), // "txnDetails"
QT_MOC_LITERAL(94, 1038, 7), // "blkHash"
QT_MOC_LITERAL(95, 1046, 7), // "txnHash"
QT_MOC_LITERAL(96, 1054, 4) // "info"

    },
    "NDCBridge\0emitPaste\0\0text\0emitTransactions\0"
    "transactions\0emitAddresses\0addresses\0"
    "emitMessages\0messages\0reset\0emitMessage\0"
    "id\0type\0sent\0received\0label_v\0label\0"
    "to\0from\0read\0message\0emitCoinControlUpdate\0"
    "quantity\0amount\0fee\0afterfee\0bytes\0"
    "priority\0low\0change\0emitAddressBookReturn\0"
    "address\0emitReceipient\0narration\0"
    "triggerElement\0element\0trigger\0"
    "networkAlert\0alert\0updateTransactions\0"
    "topLeft\0bottomRight\0updateAddresses\0"
    "insertTransactions\0parent\0start\0end\0"
    "insertAddresses\0insertMessages\0"
    "appendMessages\0populateMessageTable\0"
    "copy\0paste\0getAddressLabel\0newAddress\0"
    "own\0transactionDetails\0txid\0getPubKey\0"
    "userAction\0action\0populateTransactionTable\0"
    "updateAddressLabel\0validateAddress\0"
    "deleteAddress\0deleteMessage\0key\0"
    "markMessageAsRead\0openAddressBook\0"
    "sending\0openCoinControl\0addRecipient\0"
    "txnType\0nRingSize\0sendCoins\0fUseCoinControl\0"
    "sChangeAddr\0setPubKey\0pubkey\0sendMessage\0"
    "updateCoinControlAmount\0updateCoinControlLabels\0"
    "uint&\0int64_t&\0QString&\0listAnonOutputs\0"
    "findBlock\0searchID\0listLatestBlocks\0"
    "blockDetails\0blkid\0listTransactionsForBlock\0"
    "txnDetails\0blkHash\0txnHash\0info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NDCBridge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       1,  454, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  234,    2, 0x06 /* Public */,
       4,    1,  237,    2, 0x06 /* Public */,
       6,    1,  240,    2, 0x06 /* Public */,
       8,    2,  243,    2, 0x06 /* Public */,
      11,   10,  248,    2, 0x06 /* Public */,
      22,    8,  269,    2, 0x06 /* Public */,
      31,    2,  286,    2, 0x06 /* Public */,
      33,    4,  291,    2, 0x06 /* Public */,
      35,    2,  300,    2, 0x06 /* Public */,
      38,    1,  305,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      40,    2,  308,    2, 0x08 /* Private */,
      43,    2,  313,    2, 0x08 /* Private */,
      44,    3,  318,    2, 0x08 /* Private */,
      48,    3,  325,    2, 0x08 /* Private */,
      49,    3,  332,    2, 0x08 /* Private */,
      50,    2,  339,    2, 0x08 /* Private */,
      51,    0,  344,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      52,    1,  345,    2, 0x02 /* Public */,
      53,    0,  348,    2, 0x02 /* Public */,
      54,    1,  349,    2, 0x02 /* Public */,
      55,    1,  352,    2, 0x02 /* Public */,
      57,    1,  355,    2, 0x02 /* Public */,
      59,    2,  358,    2, 0x02 /* Public */,
      60,    1,  363,    2, 0x02 /* Public */,
      62,    0,  366,    2, 0x02 /* Public */,
      63,    2,  367,    2, 0x02 /* Public */,
      64,    1,  372,    2, 0x02 /* Public */,
      65,    1,  375,    2, 0x02 /* Public */,
      66,    1,  378,    2, 0x02 /* Public */,
      68,    1,  381,    2, 0x02 /* Public */,
      69,    1,  384,    2, 0x02 /* Public */,
      71,    0,  387,    2, 0x02 /* Public */,
      72,    6,  388,    2, 0x02 /* Public */,
      75,    2,  401,    2, 0x02 /* Public */,
      78,    2,  406,    2, 0x02 /* Public */,
      80,    3,  411,    2, 0x02 /* Public */,
      81,    1,  418,    2, 0x02 /* Public */,
      82,    8,  421,    2, 0x02 /* Public */,
      86,    0,  438,    2, 0x02 /* Public */,
      87,    1,  439,    2, 0x02 /* Public */,
      89,    0,  442,    2, 0x02 /* Public */,
      90,    1,  443,    2, 0x02 /* Public */,
      92,    1,  446,    2, 0x02 /* Public */,
      93,    2,  449,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QVariantList,    5,
    QMetaType::Void, QMetaType::QVariantList,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::LongLong, QMetaType::LongLong, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,
    QMetaType::Void, QMetaType::UInt, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::LongLong,   23,   24,   25,   26,   27,   28,   29,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   32,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::LongLong,   32,   17,   34,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   36,   37,
    QMetaType::Void, QMetaType::QString,   39,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   41,   42,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   41,   42,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   45,   46,   47,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   45,   46,   47,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   45,   46,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    9,   10,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,   32,
    QMetaType::QString, QMetaType::Bool,   56,
    QMetaType::QString, QMetaType::QString,   58,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   32,   17,
    QMetaType::QVariantMap, QMetaType::QVariantMap,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   32,   17,
    QMetaType::Bool, QMetaType::QString,   56,
    QMetaType::Bool, QMetaType::QString,   32,
    QMetaType::Bool, QMetaType::QString,   67,
    QMetaType::Bool, QMetaType::QString,   67,
    QMetaType::Void, QMetaType::Bool,   70,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::LongLong, QMetaType::Int, QMetaType::Int,   32,   17,   34,   24,   73,   74,
    QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   76,   77,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   32,   79,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,   32,   21,   19,
    QMetaType::Void, QMetaType::LongLong,   24,
    QMetaType::Void, 0x80000000 | 83, 0x80000000 | 84, 0x80000000 | 84, 0x80000000 | 84, 0x80000000 | 83, 0x80000000 | 85, QMetaType::QString, 0x80000000 | 84,   23,   24,   25,   26,   27,   28,   29,   30,
    QMetaType::QVariantMap,
    QMetaType::QVariantMap, QMetaType::QString,   88,
    QMetaType::QVariantMap,
    QMetaType::QVariantMap, QMetaType::QString,   91,
    QMetaType::QVariantMap, QMetaType::QString,   91,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,   94,   95,

 // properties: name, type, flags
      96, QMetaType::QVariantMap, 0x00095001,

       0        // eod
};

void NDCBridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NDCBridge *_t = static_cast<NDCBridge *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitPaste((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->emitTransactions((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        case 2: _t->emitAddresses((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        case 3: _t->emitMessages((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->emitMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10]))); break;
        case 5: _t->emitCoinControlUpdate((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< qint64(*)>(_a[8]))); break;
        case 6: _t->emitAddressBookReturn((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->emitReceipient((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 8: _t->triggerElement((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->networkAlert((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->updateTransactions((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 11: _t->updateAddresses((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 12: _t->insertTransactions((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->insertAddresses((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->insertMessages((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->appendMessages((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->populateMessageTable(); break;
        case 17: _t->copy((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->paste(); break;
        case 19: { QString _r = _t->getAddressLabel((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->newAddress((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->transactionDetails((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->getPubKey((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QVariantMap _r = _t->userAction((*reinterpret_cast< QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 24: _t->populateTransactionTable(); break;
        case 25: _t->updateAddressLabel((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 26: { bool _r = _t->validateAddress((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->deleteAddress((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->deleteMessage((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->markMessageAsRead((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: _t->openAddressBook((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->openCoinControl(); break;
        case 32: { bool _r = _t->addRecipient((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->sendCoins((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->setPubKey((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: _t->updateCoinControlAmount((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 37: _t->updateCoinControlLabels((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3])),(*reinterpret_cast< int64_t(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int64_t(*)>(_a[8]))); break;
        case 38: { QVariantMap _r = _t->listAnonOutputs();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 39: { QVariantMap _r = _t->findBlock((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 40: { QVariantMap _r = _t->listLatestBlocks();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 41: { QVariantMap _r = _t->blockDetails((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 42: { QVariantMap _r = _t->listTransactionsForBlock((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 43: { QVariantMap _r = _t->txnDetails((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NDCBridge::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NDCBridge::emitPaste)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NDCBridge::*_t)(QVariantList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NDCBridge::emitTransactions)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NDCBridge::*_t)(QVariantList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NDCBridge::emitAddresses)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NDCBridge::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NDCBridge::emitMessages)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NDCBridge::*_t)(QString , QString , qint64 , qint64 , QString , QString , QString , QString , bool , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NDCBridge::emitMessage)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (NDCBridge::*_t)(unsigned int , qint64 , qint64 , qint64 , unsigned int , QString , QString , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NDCBridge::emitCoinControlUpdate)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (NDCBridge::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NDCBridge::emitAddressBookReturn)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (NDCBridge::*_t)(QString , QString , QString , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NDCBridge::emitReceipient)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (NDCBridge::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NDCBridge::triggerElement)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (NDCBridge::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NDCBridge::networkAlert)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        NDCBridge *_t = static_cast<NDCBridge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = _t->getInfo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject NDCBridge::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NDCBridge.data,
      qt_meta_data_NDCBridge,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NDCBridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NDCBridge::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NDCBridge.stringdata0))
        return static_cast<void*>(const_cast< NDCBridge*>(this));
    return QObject::qt_metacast(_clname);
}

int NDCBridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 44;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void NDCBridge::emitPaste(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NDCBridge::emitTransactions(QVariantList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NDCBridge::emitAddresses(QVariantList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NDCBridge::emitMessages(QString _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NDCBridge::emitMessage(QString _t1, QString _t2, qint64 _t3, qint64 _t4, QString _t5, QString _t6, QString _t7, QString _t8, bool _t9, QString _t10)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NDCBridge::emitCoinControlUpdate(unsigned int _t1, qint64 _t2, qint64 _t3, qint64 _t4, unsigned int _t5, QString _t6, QString _t7, qint64 _t8)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NDCBridge::emitAddressBookReturn(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NDCBridge::emitReceipient(QString _t1, QString _t2, QString _t3, qint64 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NDCBridge::triggerElement(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void NDCBridge::networkAlert(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
