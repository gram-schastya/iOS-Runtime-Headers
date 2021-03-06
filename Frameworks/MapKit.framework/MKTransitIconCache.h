/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, NSString, NSMutableSet;

@interface MKTransitIconCache : MKCache0  {
    NSMutableSet *_gmmIconIDs;
    NSString *_cacheFolderPath;
    unsigned int _iconSize;
    int _iconVersion;
    float _iconScale;
    BOOL _isEnabled;
}

@property unsigned int iconSize;
@property float iconScale;
@property(retain) NSString * cacheFolderPath;
@property BOOL isEnabled;
@property int iconVersion;
@property(readonly) NSArray * gmmIconIDs;

+ (id)sharedTransitIconCache;

- (void)dealloc;
- (BOOL)isEnabled;
- (void)setIconScale:(float)arg1;
- (float)iconScale;
- (void)setIconSize:(unsigned int)arg1;
- (unsigned int)iconSize;
- (id)cacheFolderPath;
- (void)setIconData:(id)arg1 forName:(id)arg2;
- (id)iconForName:(id)arg1;
- (id)gmmIconIDs;
- (void)setCacheFolderPath:(id)arg1;
- (void)evictObject:(id)arg1;
- (id)_iconPathForName:(id)arg1 canPurge:(BOOL*)arg2;
- (void)_resetCache;
- (id)_infoPath;
- (void)_updateInfoPlist;
- (id)initWithCapacity:(unsigned int)arg1 maxCapacity:(unsigned int)arg2;
- (void)setIsEnabled:(BOOL)arg1;
- (int)iconVersion;
- (void)setIconVersion:(int)arg1;

@end
