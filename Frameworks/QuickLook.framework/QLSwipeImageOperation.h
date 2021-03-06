/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIImage, <QLPreviewItem>;

@interface QLSwipeImageOperation : NSOperation  {
    <QLPreviewItem> *_previewItem;
    struct CGSize { 
        float width; 
        float height; 
    } _destinationSize;
    UIImage *_image;
    int _index;
}

@property int index;
@property(retain) UIImage * image;
@property struct CGSize { float width; float height; } destinationSize;
@property(retain) <QLPreviewItem> * previewItem;


- (id)init;
- (void)dealloc;
- (int)index;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setIndex:(int)arg1;
- (struct CGSize { float x1; float x2; })destinationSize;
- (void)setDestinationSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPreviewItem:(id)arg1;
- (id)previewItem;

@end
