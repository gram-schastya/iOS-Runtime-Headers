/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject <SSRequestDelegate> {
    NSMutableDictionary *_rentals;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2;
- (void)removeRentalWithItemID:(unsigned long long)arg1;
- (void)_saveRentals;
- (void)_loadRentals;
- (void)removeAllRentalsForDatabaseID:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (id)_init;

@end
