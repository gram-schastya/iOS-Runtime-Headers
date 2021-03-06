/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItem : NSObject  {
    struct AVItemPrivate { id x1; id x2; double x3; float x4; float x5; float x6; unsigned int x7; BOOL x8; BOOL x9; id x10; int x11; long long x12; long long x13; BOOL x14; id x15; id x16; id x17; BOOL x18; BOOL x19; id x20; id x21; struct OpaqueMD5CheckProgress {} *x22; struct OpaqueFigThread {} *x23; struct OpaqueCMByteStream {} *x24; int x25; id x26; id x27; } *_priv;
}

+ (id)avItemWithPath:(id)arg1 error:(id*)arg2;
+ (id)avItem;

- (id)init;
- (void)dealloc;
- (float)downloadProgress;
- (void)cancelDownload;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setEQPreset:(int)arg1;
- (id)attributeForKey:(id)arg1;
- (id)errorLog;
- (id)accessLog;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (long)downloadStatus;
- (long)beginDownloading;
- (void*)downloadThread;
- (int)_instantiateItem;
- (id)urlFromPath:(id)arg1;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(int)arg3;
- (id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(BOOL)arg3 maxCount:(int)arg4;
- (id)chapterImageForImageID:(int)arg1;
- (int)eqPreset;
- (void)stopDownload;
- (BOOL)setPath:(id)arg1 error:(id*)arg2;
- (id)url;
- (id)path;
- (double)duration;
- (float)volume;
- (void)setVolume:(float)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)initWithError:(id*)arg1;
- (id)formatDetailsForTracks;

@end
