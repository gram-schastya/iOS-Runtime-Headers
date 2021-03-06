/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@class NSMutableDictionary;

@interface SYDJournal : NSObject  {
    NSMutableDictionary *store;
    NSMutableDictionary *journal;
    BOOL readonly;
}


- (id)description;
- (id)init;
- (void)dealloc;
- (int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2;
- (BOOL)removeChangesUntilChangeCount:(long long)arg1;
- (id)changesSinceChangeCount:(long long)arg1;
- (long long)maximumChangeCount;
- (id)initWithMutableStore:(id)arg1;
- (void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3;
- (id)initWithStore:(id)arg1;

@end
