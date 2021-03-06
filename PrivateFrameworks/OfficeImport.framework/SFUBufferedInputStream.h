/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUInputStream>;

@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream> {
    <SFUInputStream> *mStream;
    char *mBuffer;
    unsigned int mBufferSize;
    unsigned int mBufferOffset;
    long long mBufferStart;
    long long mBufferEnd;
}


- (void)dealloc;
- (void)close;
- (long long)offset;
- (id)initWithSFUStream:(id)arg1;
- (id)initWithStream:(id)arg1;
- (id)initWithStream:(id)arg1 dataLength:(long long)arg2;
- (BOOL)seekWithinBufferToOffset:(long long)arg1;
- (id)closeLocalStream;
- (id)initWithStream:(id)arg1 bufferSize:(unsigned long)arg2;
- (unsigned long)readToOwnBuffer:(const char **)arg1 size:(unsigned long)arg2;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)arg1;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)disableSystemCaching;
- (void)enableSystemCaching;

@end
