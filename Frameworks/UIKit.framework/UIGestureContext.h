/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch;

@interface UIGestureContext : NSObject  {
    struct CGPoint { 
        float x; 
        float y; 
    } _startLocation;
    float _startTimestamp;
    struct CGPoint { 
        float x; 
        float y; 
    } _currentLocation;
    UITouch *_touch;
    int _state;
}

@property struct CGPoint { float x1; float x2; } startLocation;
@property struct CGPoint { float x1; float x2; } currentLocation;
@property(retain) UITouch * touch;
@property int state;
@property float startTimestamp;


- (void)setStartTimestamp:(float)arg1;
- (float)startTimestamp;
- (void)setCurrentLocation:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })currentLocation;
- (struct CGPoint { float x1; float x2; })startLocation;
- (id)initWithTouch:(id)arg1 inView:(id)arg2;
- (void)setTouch:(id)arg1;
- (void)setStartLocation:(struct CGPoint { float x1; float x2; })arg1;
- (id)touch;
- (void)setState:(int)arg1;
- (int)state;

@end
