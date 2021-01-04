#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UIView, LibraryBluetoothPeripheral, LibraryBluetoothCharacteristic, CBDescriptor, LibraryKotlinByteArray, CBCharacteristic, LibraryKotlinThrowable, LibraryKotlinArray<T>, LibraryKotlinException, CBPeripheral, LibraryBluetoothService, CBService, LibraryKotlinEnum<E>, LibraryCHARACTERISTICS, LibraryCONNECTION_STATUS, LibraryFITNESS_GET_FEATURE, LibraryFITNESS_MACHINE_STATUS, LibraryFITNESS_SET_FEATURE, LibraryHEART_RATE_SENSOR_LOCATION, LibraryINDOOR_BIKE_DATA_FLAGS, LibrarySERVICES, LibraryTRAINING_STATUSES, LibraryKotlinByteIterator, LibraryKotlinBitSet, LibraryKotlinIntRange, NSData, LibraryKotlinIntIterator, LibraryKotlinIntProgression;

@protocol LibraryBlueFalconDelegate, LibraryKotlinComparable, LibraryKotlinIterator, LibraryKotlinIterable, LibraryKotlinClosedRange;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface LibraryBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface LibraryBase (LibraryBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface LibraryMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface LibraryMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorLibraryKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface LibraryNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface LibraryByte : LibraryNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface LibraryUByte : LibraryNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface LibraryShort : LibraryNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface LibraryUShort : LibraryNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface LibraryInt : LibraryNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface LibraryUInt : LibraryNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface LibraryLong : LibraryNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface LibraryULong : LibraryNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface LibraryFloat : LibraryNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface LibraryDouble : LibraryNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface LibraryBoolean : LibraryNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlueFalcon")))
@interface LibraryBlueFalcon : LibraryBase
- (instancetype)initWithContext:(UIView *)context serviceUUID:(NSString * _Nullable)serviceUUID __attribute__((swift_name("init(context:serviceUUID:)"))) __attribute__((objc_designated_initializer));
- (void)changeMTUBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral mtuSize:(int32_t)mtuSize __attribute__((swift_name("changeMTU(bluetoothPeripheral:mtuSize:)")));
- (void)connectBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral autoConnect:(BOOL)autoConnect __attribute__((swift_name("connect(bluetoothPeripheral:autoConnect:)")));
- (void)disconnectBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral __attribute__((swift_name("disconnect(bluetoothPeripheral:)")));
- (void)indicateCharacteristicBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral bluetoothCharacteristic:(LibraryBluetoothCharacteristic *)bluetoothCharacteristic indicate:(BOOL)indicate __attribute__((swift_name("indicateCharacteristic(bluetoothPeripheral:bluetoothCharacteristic:indicate:)")));
- (void)notifyAndIndicateCharacteristicBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral bluetoothCharacteristic:(LibraryBluetoothCharacteristic *)bluetoothCharacteristic enable:(BOOL)enable __attribute__((swift_name("notifyAndIndicateCharacteristic(bluetoothPeripheral:bluetoothCharacteristic:enable:)")));
- (void)notifyCharacteristicBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral bluetoothCharacteristic:(LibraryBluetoothCharacteristic *)bluetoothCharacteristic notify:(BOOL)notify __attribute__((swift_name("notifyCharacteristic(bluetoothPeripheral:bluetoothCharacteristic:notify:)")));
- (void)readCharacteristicBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral bluetoothCharacteristic:(LibraryBluetoothCharacteristic *)bluetoothCharacteristic __attribute__((swift_name("readCharacteristic(bluetoothPeripheral:bluetoothCharacteristic:)")));
- (void)readDescriptorBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral bluetoothCharacteristic:(LibraryBluetoothCharacteristic *)bluetoothCharacteristic bluetoothCharacteristicDescriptor:(CBDescriptor *)bluetoothCharacteristicDescriptor __attribute__((swift_name("readDescriptor(bluetoothPeripheral:bluetoothCharacteristic:bluetoothCharacteristicDescriptor:)")));

/**
 @note This method converts instances of BluetoothUnknownException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)scanAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("scan()")));
- (void)stopScanning __attribute__((swift_name("stopScanning()")));
- (void)writeCharacteristicBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral bluetoothCharacteristic:(LibraryBluetoothCharacteristic *)bluetoothCharacteristic value:(LibraryKotlinByteArray *)value writeType:(LibraryInt * _Nullable)writeType __attribute__((swift_name("writeCharacteristic(bluetoothPeripheral:bluetoothCharacteristic:value:writeType:)")));
- (void)writeCharacteristicBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral bluetoothCharacteristic:(LibraryBluetoothCharacteristic *)bluetoothCharacteristic value:(NSString *)value writeType_:(LibraryInt * _Nullable)writeType __attribute__((swift_name("writeCharacteristic(bluetoothPeripheral:bluetoothCharacteristic:value:writeType_:)")));
@property (readonly) LibraryMutableSet<id<LibraryBlueFalconDelegate>> *delegates __attribute__((swift_name("delegates")));
@property BOOL isScanning __attribute__((swift_name("isScanning")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("BlueFalcon.BluetoothPeripheralManager")))
@interface LibraryBlueFalconBluetoothPeripheralManager : NSObject
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("BlueFalcon.PeripheralDelegate")))
@interface LibraryBlueFalconPeripheralDelegate : NSObject
@end;

__attribute__((swift_name("BlueFalconDelegate")))
@protocol LibraryBlueFalconDelegate
@required
- (void)didCharacteristicValueChangedBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral bluetoothCharacteristic:(LibraryBluetoothCharacteristic *)bluetoothCharacteristic __attribute__((swift_name("didCharacteristicValueChanged(bluetoothPeripheral:bluetoothCharacteristic:)")));
- (void)didConnectBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral __attribute__((swift_name("didConnect(bluetoothPeripheral:)")));
- (void)didDisconnectBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral __attribute__((swift_name("didDisconnect(bluetoothPeripheral:)")));
- (void)didDiscoverCharacteristicsBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral __attribute__((swift_name("didDiscoverCharacteristics(bluetoothPeripheral:)")));
- (void)didDiscoverDeviceBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral __attribute__((swift_name("didDiscoverDevice(bluetoothPeripheral:)")));
- (void)didDiscoverServicesBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral __attribute__((swift_name("didDiscoverServices(bluetoothPeripheral:)")));
- (void)didReadDescriptorBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral bluetoothCharacteristicDescriptor:(CBDescriptor *)bluetoothCharacteristicDescriptor __attribute__((swift_name("didReadDescriptor(bluetoothPeripheral:bluetoothCharacteristicDescriptor:)")));
- (void)didRssiUpdateBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral __attribute__((swift_name("didRssiUpdate(bluetoothPeripheral:)")));
- (void)didUpdateMTUBluetoothPeripheral:(LibraryBluetoothPeripheral *)bluetoothPeripheral __attribute__((swift_name("didUpdateMTU(bluetoothPeripheral:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothCharacteristic")))
@interface LibraryBluetoothCharacteristic : LibraryBase
- (instancetype)initWithCharacteristic:(CBCharacteristic *)characteristic __attribute__((swift_name("init(characteristic:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CBCharacteristic *characteristic __attribute__((swift_name("characteristic")));
@property (readonly) NSArray<CBDescriptor *> *descriptors __attribute__((swift_name("descriptors")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) LibraryKotlinByteArray * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface LibraryKotlinThrowable : LibraryBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (LibraryKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface LibraryKotlinException : LibraryKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothNotEnabledException")))
@interface LibraryBluetoothNotEnabledException : LibraryKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothPeripheral")))
@interface LibraryBluetoothPeripheral : LibraryBase
- (instancetype)initWithBluetoothDevice:(CBPeripheral *)bluetoothDevice rssiValue:(LibraryFloat * _Nullable)rssiValue __attribute__((swift_name("init(bluetoothDevice:rssiValue:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CBPeripheral *bluetoothDevice __attribute__((swift_name("bluetoothDevice")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property LibraryFloat * _Nullable rssi __attribute__((swift_name("rssi")));
@property (readonly) LibraryFloat * _Nullable rssiValue __attribute__((swift_name("rssiValue")));
@property (readonly) NSArray<LibraryBluetoothService *> *services __attribute__((swift_name("services")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothPermissionException")))
@interface LibraryBluetoothPermissionException : LibraryKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothResettingException")))
@interface LibraryBluetoothResettingException : LibraryKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothService")))
@interface LibraryBluetoothService : LibraryBase
- (instancetype)initWithService:(CBService *)service __attribute__((swift_name("init(service:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<LibraryBluetoothCharacteristic *> *characteristics __attribute__((swift_name("characteristics")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) CBService *service __attribute__((swift_name("service")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothUnknownException")))
@interface LibraryBluetoothUnknownException : LibraryKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothUnsupportedException")))
@interface LibraryBluetoothUnsupportedException : LibraryKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol LibraryKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface LibraryKotlinEnum<E> : LibraryBase <LibraryKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CHARACTERISTICS")))
@interface LibraryCHARACTERISTICS : LibraryKotlinEnum<LibraryCHARACTERISTICS *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LibraryCHARACTERISTICS *fitnessmachinestatus __attribute__((swift_name("fitnessmachinestatus")));
@property (class, readonly) LibraryCHARACTERISTICS *indoorbikedata __attribute__((swift_name("indoorbikedata")));
@property (class, readonly) LibraryCHARACTERISTICS *trainingstatus __attribute__((swift_name("trainingstatus")));
@property (class, readonly) LibraryCHARACTERISTICS *fitnessmachinecontrolpoint __attribute__((swift_name("fitnessmachinecontrolpoint")));
@property (class, readonly) LibraryCHARACTERISTICS *fitnessmachinefeatures __attribute__((swift_name("fitnessmachinefeatures")));
@property (class, readonly) LibraryCHARACTERISTICS *heartratemeasurement __attribute__((swift_name("heartratemeasurement")));
@property (class, readonly) LibraryCHARACTERISTICS *heartratesensorlocation __attribute__((swift_name("heartratesensorlocation")));
@property (class, readonly) LibraryCHARACTERISTICS *cscmeasurement __attribute__((swift_name("cscmeasurement")));
@property (class, readonly) LibraryCHARACTERISTICS *cscfeature __attribute__((swift_name("cscfeature")));
@property (class, readonly) LibraryCHARACTERISTICS *sensorlocation __attribute__((swift_name("sensorlocation")));
@property (class, readonly) LibraryCHARACTERISTICS *sccontrolpoint __attribute__((swift_name("sccontrolpoint")));
@property (readonly) BOOL notify __attribute__((swift_name("notify")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CHARACTERISTICS.Companion")))
@interface LibraryCHARACTERISTICSCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (LibraryCHARACTERISTICS * _Nullable)getCharacteristicUuid:(NSString *)uuid __attribute__((swift_name("getCharacteristic(uuid:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CONNECTION_STATUS")))
@interface LibraryCONNECTION_STATUS : LibraryKotlinEnum<LibraryCONNECTION_STATUS *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LibraryCONNECTION_STATUS *gattSuccess __attribute__((swift_name("gattSuccess")));
@property (class, readonly) LibraryCONNECTION_STATUS *gattReadNotPermitted __attribute__((swift_name("gattReadNotPermitted")));
@property (class, readonly) LibraryCONNECTION_STATUS *gattWriteNotPermitted __attribute__((swift_name("gattWriteNotPermitted")));
@property (class, readonly) LibraryCONNECTION_STATUS *gattInsufficientAuthentication __attribute__((swift_name("gattInsufficientAuthentication")));
@property (class, readonly) LibraryCONNECTION_STATUS *gattRequestNotSupported __attribute__((swift_name("gattRequestNotSupported")));
@property (class, readonly) LibraryCONNECTION_STATUS *gattInsufficientEncryption __attribute__((swift_name("gattInsufficientEncryption")));
@property (class, readonly) LibraryCONNECTION_STATUS *gattInvalidOffset __attribute__((swift_name("gattInvalidOffset")));
@property (class, readonly) LibraryCONNECTION_STATUS *gattInvalidAttributeLength __attribute__((swift_name("gattInvalidAttributeLength")));
@property (class, readonly) LibraryCONNECTION_STATUS *gattConnectionCongested __attribute__((swift_name("gattConnectionCongested")));
@property (class, readonly) LibraryCONNECTION_STATUS *gattFailure __attribute__((swift_name("gattFailure")));
@property (readonly) int32_t bitNumber __attribute__((swift_name("bitNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CONNECTION_STATUS.Companion")))
@interface LibraryCONNECTION_STATUSCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (LibraryCONNECTION_STATUS *)getEnumBitNumber:(int32_t)bitNumber __attribute__((swift_name("getEnum(bitNumber:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FITNESS_GET_FEATURE")))
@interface LibraryFITNESS_GET_FEATURE : LibraryKotlinEnum<LibraryFITNESS_GET_FEATURE *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *averagespeedsupported __attribute__((swift_name("averagespeedsupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *cadencesupported __attribute__((swift_name("cadencesupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *totaldistancesupported __attribute__((swift_name("totaldistancesupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *inclinationsupported __attribute__((swift_name("inclinationsupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *elevationgainsupported __attribute__((swift_name("elevationgainsupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *pacesupported __attribute__((swift_name("pacesupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *stepcountsupported __attribute__((swift_name("stepcountsupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *resistancelevelsupported __attribute__((swift_name("resistancelevelsupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *stridecountsupported __attribute__((swift_name("stridecountsupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *expendedenergysupported __attribute__((swift_name("expendedenergysupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *heartratemeasurementsupported __attribute__((swift_name("heartratemeasurementsupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *metabolicequivalentsupported __attribute__((swift_name("metabolicequivalentsupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *elapsedtimesupported __attribute__((swift_name("elapsedtimesupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *remainingtimesupported __attribute__((swift_name("remainingtimesupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *powermeasurementsupported __attribute__((swift_name("powermeasurementsupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *forceonbeltandpoweroutputsupported __attribute__((swift_name("forceonbeltandpoweroutputsupported")));
@property (class, readonly) LibraryFITNESS_GET_FEATURE *userdataretentionsupported __attribute__((swift_name("userdataretentionsupported")));
@property (readonly) int32_t bitNumber __attribute__((swift_name("bitNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FITNESS_GET_FEATURE.Companion")))
@interface LibraryFITNESS_GET_FEATURECompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (NSArray<LibraryFITNESS_GET_FEATURE *> *)convertBytesToFeaturesBytes:(LibraryKotlinByteArray *)bytes __attribute__((swift_name("convertBytesToFeatures(bytes:)")));
- (LibraryFITNESS_GET_FEATURE *)getEnumBitNumber:(int32_t)bitNumber __attribute__((swift_name("getEnum(bitNumber:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FITNESS_MACHINE_STATUS")))
@interface LibraryFITNESS_MACHINE_STATUS : LibraryKotlinEnum<LibraryFITNESS_MACHINE_STATUS *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *reservedforfutureuse __attribute__((swift_name("reservedforfutureuse")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *reset __attribute__((swift_name("reset")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *fitnessmachinestoppedorpausedbyuser __attribute__((swift_name("fitnessmachinestoppedorpausedbyuser")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *fitnessmachinestoppedsafetykey __attribute__((swift_name("fitnessmachinestoppedsafetykey")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *fitnessmachinestartedorresumedbyuser __attribute__((swift_name("fitnessmachinestartedorresumedbyuser")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetspeedchanged __attribute__((swift_name("targetspeedchanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetinclinechanged __attribute__((swift_name("targetinclinechanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetresistancelevelchanged __attribute__((swift_name("targetresistancelevelchanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetpowerchanged __attribute__((swift_name("targetpowerchanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetheartratechanged __attribute__((swift_name("targetheartratechanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetedexpendedenergychanged __attribute__((swift_name("targetedexpendedenergychanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetednumberstepschanged __attribute__((swift_name("targetednumberstepschanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetednumberstrideschanged __attribute__((swift_name("targetednumberstrideschanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targeteddistancechanged __attribute__((swift_name("targeteddistancechanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetedtrainingtimechanged __attribute__((swift_name("targetedtrainingtimechanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetedchangedtimeintwoheartratezones __attribute__((swift_name("targetedchangedtimeintwoheartratezones")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetedchangedtimeinthreeheartratezones __attribute__((swift_name("targetedchangedtimeinthreeheartratezones")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetedchangedtimeinfiveheartratezones __attribute__((swift_name("targetedchangedtimeinfiveheartratezones")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *indoorbikesimulationparameterschanged __attribute__((swift_name("indoorbikesimulationparameterschanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *wheelcircumferencechanged __attribute__((swift_name("wheelcircumferencechanged")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *spindownstatusfitness __attribute__((swift_name("spindownstatusfitness")));
@property (class, readonly) LibraryFITNESS_MACHINE_STATUS *targetedcadencechanged __attribute__((swift_name("targetedcadencechanged")));
@property (readonly) int8_t hexValue __attribute__((swift_name("hexValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FITNESS_MACHINE_STATUS.Companion")))
@interface LibraryFITNESS_MACHINE_STATUSCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (LibraryFITNESS_MACHINE_STATUS *)getEnumHexValue:(int8_t)hexValue __attribute__((swift_name("getEnum(hexValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FITNESS_SET_FEATURE")))
@interface LibraryFITNESS_SET_FEATURE : LibraryKotlinEnum<LibraryFITNESS_SET_FEATURE *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *speedtargetsettingsupported __attribute__((swift_name("speedtargetsettingsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *inclinationtargetsettingsupported __attribute__((swift_name("inclinationtargetsettingsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *resistancetargetsettingsupported __attribute__((swift_name("resistancetargetsettingsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *powertargetsettingsupported __attribute__((swift_name("powertargetsettingsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *heartratetargetsettingsupported __attribute__((swift_name("heartratetargetsettingsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *targetedexpendedenergyconfigurationsupported __attribute__((swift_name("targetedexpendedenergyconfigurationsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *targetedstepnumberconfigurationsupported __attribute__((swift_name("targetedstepnumberconfigurationsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *targetedstridenumberconfigurationsupported __attribute__((swift_name("targetedstridenumberconfigurationsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *targeteddistanceconfigurationsupported __attribute__((swift_name("targeteddistanceconfigurationsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *targetedtrainingtimeconfigurationsupported __attribute__((swift_name("targetedtrainingtimeconfigurationsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *targetedtimetwoheartratezonesconfigurationsupported __attribute__((swift_name("targetedtimetwoheartratezonesconfigurationsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *targetedtimethreeheartratezonesconfigurationsupported __attribute__((swift_name("targetedtimethreeheartratezonesconfigurationsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *targetedtimefiveheartratezonesconfigurationsupported __attribute__((swift_name("targetedtimefiveheartratezonesconfigurationsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *indoorbikesimulationparameterssupported __attribute__((swift_name("indoorbikesimulationparameterssupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *wheelcircumferenceconfigurationsupported __attribute__((swift_name("wheelcircumferenceconfigurationsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *spindowncontrolsupported __attribute__((swift_name("spindowncontrolsupported")));
@property (class, readonly) LibraryFITNESS_SET_FEATURE *targetedcadenceconfigurationsupported __attribute__((swift_name("targetedcadenceconfigurationsupported")));
@property (readonly) int32_t bitNumber __attribute__((swift_name("bitNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FITNESS_SET_FEATURE.Companion")))
@interface LibraryFITNESS_SET_FEATURECompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (NSArray<LibraryFITNESS_SET_FEATURE *> *)convertBytesToFeaturesBytes:(LibraryKotlinByteArray *)bytes __attribute__((swift_name("convertBytesToFeatures(bytes:)")));
- (LibraryFITNESS_SET_FEATURE *)getEnumBitNumber:(int32_t)bitNumber __attribute__((swift_name("getEnum(bitNumber:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HEART_RATE_SENSOR_LOCATION")))
@interface LibraryHEART_RATE_SENSOR_LOCATION : LibraryKotlinEnum<LibraryHEART_RATE_SENSOR_LOCATION *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LibraryHEART_RATE_SENSOR_LOCATION *other __attribute__((swift_name("other")));
@property (class, readonly) LibraryHEART_RATE_SENSOR_LOCATION *chest __attribute__((swift_name("chest")));
@property (class, readonly) LibraryHEART_RATE_SENSOR_LOCATION *wrist __attribute__((swift_name("wrist")));
@property (class, readonly) LibraryHEART_RATE_SENSOR_LOCATION *finger __attribute__((swift_name("finger")));
@property (class, readonly) LibraryHEART_RATE_SENSOR_LOCATION *hand __attribute__((swift_name("hand")));
@property (class, readonly) LibraryHEART_RATE_SENSOR_LOCATION *earLobe __attribute__((swift_name("earLobe")));
@property (class, readonly) LibraryHEART_RATE_SENSOR_LOCATION *foot __attribute__((swift_name("foot")));
@property (readonly) int32_t intValue __attribute__((swift_name("intValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HEART_RATE_SENSOR_LOCATION.Companion")))
@interface LibraryHEART_RATE_SENSOR_LOCATIONCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (LibraryHEART_RATE_SENSOR_LOCATION *)getEnumIntValue:(int32_t)intValue __attribute__((swift_name("getEnum(intValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("INDOOR_BIKE_DATA_FLAGS")))
@interface LibraryINDOOR_BIKE_DATA_FLAGS : LibraryKotlinEnum<LibraryINDOOR_BIKE_DATA_FLAGS *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *exceedsattmtusize __attribute__((swift_name("exceedsattmtusize")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *instantaneousspeedpresent __attribute__((swift_name("instantaneousspeedpresent")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *averagespeedpresent __attribute__((swift_name("averagespeedpresent")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *instantaneouscadence __attribute__((swift_name("instantaneouscadence")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *averagecadencepresent __attribute__((swift_name("averagecadencepresent")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *totaldistancepresent __attribute__((swift_name("totaldistancepresent")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *resistancelevelpresent __attribute__((swift_name("resistancelevelpresent")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *instantaneouspowerpresent __attribute__((swift_name("instantaneouspowerpresent")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *averagepowerpresent __attribute__((swift_name("averagepowerpresent")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *expendedenergypresent __attribute__((swift_name("expendedenergypresent")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *heartratepresent __attribute__((swift_name("heartratepresent")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *metabolicequivalentpresent __attribute__((swift_name("metabolicequivalentpresent")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *elapsedtimepresent __attribute__((swift_name("elapsedtimepresent")));
@property (class, readonly) LibraryINDOOR_BIKE_DATA_FLAGS *remainingtimepresent __attribute__((swift_name("remainingtimepresent")));
@property (readonly) int32_t byteSize __attribute__((swift_name("byteSize")));
@property (readonly) int32_t flagBitNumber __attribute__((swift_name("flagBitNumber")));
@property (readonly) double resolution __attribute__((swift_name("resolution")));
@property (readonly, getter=signed) BOOL signed_ __attribute__((swift_name("signed_")));
@property (readonly) NSString *units __attribute__((swift_name("units")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("INDOOR_BIKE_DATA_FLAGS.Companion")))
@interface LibraryINDOOR_BIKE_DATA_FLAGSCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (NSString *)convertBytesAndFeaturesToCharacteristicsBytes:(LibraryKotlinByteArray *)bytes flags:(NSArray<LibraryINDOOR_BIKE_DATA_FLAGS *> *)flags __attribute__((swift_name("convertBytesAndFeaturesToCharacteristics(bytes:flags:)")));
- (NSArray<LibraryINDOOR_BIKE_DATA_FLAGS *> *)convertBytesToFlagsBytes:(LibraryKotlinByteArray *)bytes __attribute__((swift_name("convertBytesToFlags(bytes:)")));
- (LibraryINDOOR_BIKE_DATA_FLAGS *)getEnumBitNumber:(int32_t)bitNumber __attribute__((swift_name("getEnum(bitNumber:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SERVICES")))
@interface LibrarySERVICES : LibraryKotlinEnum<LibrarySERVICES *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LibrarySERVICES *genericaccess __attribute__((swift_name("genericaccess")));
@property (class, readonly) LibrarySERVICES *cyclingspeedandcadence __attribute__((swift_name("cyclingspeedandcadence")));
@property (class, readonly) LibrarySERVICES *fitnessmachine __attribute__((swift_name("fitnessmachine")));
@property (class, readonly) LibrarySERVICES *genericattribute __attribute__((swift_name("genericattribute")));
@property (class, readonly) LibrarySERVICES *heartrate __attribute__((swift_name("heartrate")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SERVICES.Companion")))
@interface LibrarySERVICESCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (LibrarySERVICES *)getServiceUuid:(NSString *)uuid __attribute__((swift_name("getService(uuid:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TRAINING_STATUSES")))
@interface LibraryTRAINING_STATUSES : LibraryKotlinEnum<LibraryTRAINING_STATUSES *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LibraryTRAINING_STATUSES *other __attribute__((swift_name("other")));
@property (class, readonly) LibraryTRAINING_STATUSES *idle __attribute__((swift_name("idle")));
@property (class, readonly) LibraryTRAINING_STATUSES *warmingup __attribute__((swift_name("warmingup")));
@property (class, readonly) LibraryTRAINING_STATUSES *lowintensityinterval __attribute__((swift_name("lowintensityinterval")));
@property (class, readonly) LibraryTRAINING_STATUSES *highintensityinterval __attribute__((swift_name("highintensityinterval")));
@property (class, readonly) LibraryTRAINING_STATUSES *recoveryinterval __attribute__((swift_name("recoveryinterval")));
@property (class, readonly) LibraryTRAINING_STATUSES *isometric __attribute__((swift_name("isometric")));
@property (class, readonly) LibraryTRAINING_STATUSES *heartratecontrol __attribute__((swift_name("heartratecontrol")));
@property (class, readonly) LibraryTRAINING_STATUSES *fitnesstest __attribute__((swift_name("fitnesstest")));
@property (class, readonly) LibraryTRAINING_STATUSES *speedoutsidecontrolregionlow __attribute__((swift_name("speedoutsidecontrolregionlow")));
@property (class, readonly) LibraryTRAINING_STATUSES *speedoutsidecontrolregionhigh __attribute__((swift_name("speedoutsidecontrolregionhigh")));
@property (class, readonly) LibraryTRAINING_STATUSES *cooldown __attribute__((swift_name("cooldown")));
@property (class, readonly) LibraryTRAINING_STATUSES *wattcontrol __attribute__((swift_name("wattcontrol")));
@property (class, readonly) LibraryTRAINING_STATUSES *manualmode __attribute__((swift_name("manualmode")));
@property (class, readonly) LibraryTRAINING_STATUSES *preworkout __attribute__((swift_name("preworkout")));
@property (class, readonly) LibraryTRAINING_STATUSES *postworkout __attribute__((swift_name("postworkout")));
@property (readonly) int8_t hexValue __attribute__((swift_name("hexValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TRAINING_STATUSES.Companion")))
@interface LibraryTRAINING_STATUSESCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (LibraryTRAINING_STATUSES *)getEnumHexValue:(int8_t)hexValue __attribute__((swift_name("getEnum(hexValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface LibraryKotlinByteArray : LibraryBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(LibraryByte *(^)(LibraryInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (LibraryKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface LibraryKotlinByteArray (Extensions)
- (int32_t)asUnsignedToInt __attribute__((swift_name("asUnsignedToInt()")));
- (LibraryKotlinBitSet *)toBitSet __attribute__((swift_name("toBitSet()")));
- (int32_t)toInt __attribute__((swift_name("toInt()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinBitSet")))
@interface LibraryKotlinBitSet : LibraryBase
- (instancetype)initWithLength:(int32_t)length initializer:(LibraryBoolean *(^)(LibraryInt *))initializer __attribute__((swift_name("init(length:initializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (void)andAnother:(LibraryKotlinBitSet *)another __attribute__((swift_name("and(another:)")));
- (void)andNotAnother:(LibraryKotlinBitSet *)another __attribute__((swift_name("andNot(another:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)clearIndex:(int32_t)index __attribute__((swift_name("clear(index:)")));
- (void)clearFrom:(int32_t)from to:(int32_t)to __attribute__((swift_name("clear(from:to:)")));
- (void)clearRange:(LibraryKotlinIntRange *)range __attribute__((swift_name("clear(range:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (void)flipIndex:(int32_t)index __attribute__((swift_name("flip(index:)")));
- (void)flipFrom:(int32_t)from to:(int32_t)to __attribute__((swift_name("flip(from:to:)")));
- (void)flipRange:(LibraryKotlinIntRange *)range __attribute__((swift_name("flip(range:)")));
- (BOOL)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)intersectsAnother:(LibraryKotlinBitSet *)another __attribute__((swift_name("intersects(another:)")));
- (int32_t)nextClearBitStartIndex:(int32_t)startIndex __attribute__((swift_name("nextClearBit(startIndex:)")));
- (int32_t)nextSetBitStartIndex:(int32_t)startIndex __attribute__((swift_name("nextSetBit(startIndex:)")));
- (void)orAnother:(LibraryKotlinBitSet *)another __attribute__((swift_name("or(another:)")));
- (int32_t)previousBitStartIndex:(int32_t)startIndex lookFor:(BOOL)lookFor __attribute__((swift_name("previousBit(startIndex:lookFor:)")));
- (int32_t)previousClearBitStartIndex:(int32_t)startIndex __attribute__((swift_name("previousClearBit(startIndex:)")));
- (int32_t)previousSetBitStartIndex:(int32_t)startIndex __attribute__((swift_name("previousSetBit(startIndex:)")));
- (void)setIndex:(int32_t)index value:(BOOL)value __attribute__((swift_name("set(index:value:)")));
- (void)setFrom:(int32_t)from to:(int32_t)to value:(BOOL)value __attribute__((swift_name("set(from:to:value:)")));
- (void)setRange:(LibraryKotlinIntRange *)range value:(BOOL)value __attribute__((swift_name("set(range:value:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)xorAnother:(LibraryKotlinBitSet *)another __attribute__((swift_name("xor(another:)")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) int32_t lastTrueIndex __attribute__((swift_name("lastTrueIndex")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface LibraryKotlinBitSet (Extensions)
- (int32_t)size_ __attribute__((swift_name("size()")));
- (int32_t)toIntNumBits:(int32_t)numBits __attribute__((swift_name("toInt(numBits:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FtmsUtilsKt")))
@interface LibraryFtmsUtilsKt : LibraryBase
@property (class, readonly) NSString *DEFAULT_CHARACTERISTIC_DESCRIPTOR_WRITE_VALUE __attribute__((swift_name("DEFAULT_CHARACTERISTIC_DESCRIPTOR_WRITE_VALUE")));
@property (class, readonly) NSString *GATT_SERVICE_MASK __attribute__((swift_name("GATT_SERVICE_MASK")));
@property (class, readonly) float MINIMUM_ACCEPTABLE_RSSI __attribute__((swift_name("MINIMUM_ACCEPTABLE_RSSI")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogKt")))
@interface LibraryLogKt : LibraryBase
+ (void)logMessage:(NSString *)message __attribute__((swift_name("log(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredicateFunctionsKt")))
@interface LibraryPredicateFunctionsKt : LibraryBase
+ (LibraryBoolean *(^)(id _Nullable))negateToNegate:(LibraryBoolean *(^)(id _Nullable))toNegate __attribute__((swift_name("negate(toNegate:)")));
+ (LibraryBoolean *(^)(id _Nullable))and:(LibraryBoolean *(^)(id _Nullable))receiver other:(LibraryBoolean *(^)(id _Nullable))other __attribute__((swift_name("and(_:other:)")));
+ (LibraryBoolean *(^)(id _Nullable))not:(LibraryBoolean *(^)(id _Nullable))receiver other:(LibraryBoolean *(^)(id _Nullable))other __attribute__((swift_name("not(_:other:)")));
+ (LibraryBoolean *(^)(id _Nullable))or:(LibraryBoolean *(^)(id _Nullable))receiver other:(LibraryBoolean *(^)(id _Nullable))other __attribute__((swift_name("or(_:other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSDataKt")))
@interface LibraryNSDataKt : LibraryBase
+ (NSString * _Nullable)string:(NSData *)receiver __attribute__((swift_name("string(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface LibraryKotlinArray<T> : LibraryBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(LibraryInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<LibraryKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol LibraryKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface LibraryKotlinByteIterator : LibraryBase <LibraryKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (LibraryByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("KotlinIterable")))
@protocol LibraryKotlinIterable
@required
- (id<LibraryKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("KotlinIntProgression")))
@interface LibraryKotlinIntProgression : LibraryBase <LibraryKotlinIterable>
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (LibraryKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end;

__attribute__((swift_name("KotlinClosedRange")))
@protocol LibraryKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface LibraryKotlinIntRange : LibraryKotlinIntProgression <LibraryKotlinClosedRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsValue:(LibraryInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) LibraryInt *start __attribute__((swift_name("start")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface LibraryKotlinIntIterator : LibraryBase <LibraryKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (LibraryInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
