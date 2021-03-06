/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPVideoView, MPImageCache, UIMovieChapterListView;

@interface MPVideoChaptersViewController : MPViewController <UITableViewDataSource, UITableViewDelegate> {
    MPVideoView *_videoView;
    MPImageCache *_imageCache;
    unsigned int _currentMarker;
    NSArray *_chapterTimeMarkers;
    UIMovieChapterListView *_chapterListView;
    float _timeColumnWidth;
    unsigned int _haveThumbnails : 1;
    unsigned int _videoOutActive : 1;
}

@property unsigned int currentMarkerIndex;
@property(retain) NSArray * chapterTimeMarkers;
@property float topPadding;
@property BOOL videoOutActive;
@property(retain) MPVideoView * videoView;


- (id)init;
- (void)dealloc;
- (unsigned int)currentMarkerIndex;
- (void)setCurrentMarker:(unsigned int)arg1;
- (id)newImageRequestWithMediaEntity:(id)arg1 timeMarker:(id)arg2;
- (float)topPadding;
- (void)_sizeColumnsToFit;
- (void)setTopPadding:(float)arg1;
- (void)_reloadThumbnails;
- (void)setVideoOutActive:(BOOL)arg1;
- (void)setCurrentMarkerIndex:(unsigned int)arg1;
- (void)setChapterTimeMarkers:(id)arg1;
- (BOOL)videoOutActive;
- (void)setVideoView:(id)arg1;
- (id)chapterTimeMarkers;
- (id)videoView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
