/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSArray, NSString, <CBPeripheralDelegate>, NSNumber;

@interface CBPeripheral : NSObject  {
    <CBPeripheralDelegate> *_delegate;
    struct __CFUUID { } *_UUID;
    NSString *_name;
    NSNumber *_RSSI;
    BOOL _isConnected;
    NSArray *_services;
}

@property(retain) NSArray * services;
@property BOOL isConnected;
@property(retain) NSNumber * RSSI;
@property(retain) NSString * name;
@property(readonly) struct __CFUUID { }* UUID;
@property <CBPeripheralDelegate> * delegate;


- (void)setName:(id)arg1;
- (BOOL)isConnected;
- (void)setServices:(id)arg1;
- (id)services;
- (id)RSSI;
- (void)readRSSI;
- (void)discoverServices:(id)arg1;
- (void)discoverIncludedServices:(id)arg1 forService:(id)arg2;
- (void)discoverCharacteristics:(id)arg1 forService:(id)arg2;
- (void)readValueForCharacteristic:(id)arg1;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(int)arg3;
- (void)reliablyWriteValues:(id)arg1 forCharacteristics:(id)arg2;
- (void)setBroadcastValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)setIndicateValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)discoverDescriptorsForCharacteristic:(id)arg1;
- (void)readValueForDescriptor:(id)arg1;
- (void)writeValue:(id)arg1 forDescriptor:(id)arg2;
- (void)setRSSI:(id)arg1;
- (void)setIsConnected:(BOOL)arg1;
- (id)name;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (struct __CFUUID { }*)UUID;

@end
