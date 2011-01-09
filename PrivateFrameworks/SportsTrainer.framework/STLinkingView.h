/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class UIView, UIButton, UILabel, <STLinkingViewDelegate>;



@interface STLinkingView : UIView 
{
    <STLinkingViewDelegate> *_delegate;
    NSInteger _linkingType;
    UIView *_pulseView;
    BOOL _animating;
    BOOL _animateLayout;
    BOOL _bordered;
    UIButton *_rescanButton;
    UIButton *_cancelButton;
    UIButton *_linkNewButton;
    UIButton *_doneButton;
    UIButton *_unlinkButton;
    UILabel *_instructionLabel;
    UILabel *_fgsnLabel;
}

@property(copy) NSString *serialNumber;
@property BOOL bordered;
@property <STLinkingViewDelegate> *delegate;
@property NSInteger linkingType;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)_sensorHideAnimationDidStop;
- (void)_receiverHideAnimationDidStop;
- (void)setLinkingType:(NSInteger)arg1;
- (void)setLinkingType:(NSInteger)arg1 animated:(BOOL)arg2;
- (id)serialNumber;
- (void)setSerialNumber:(id)arg1;
- (void)setBordered:(BOOL)arg1;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)_rescanForEmped;
- (void)_rescanForRemote;
- (void)_done;
- (void)_linkNewEmped;
- (void)_linkNewRemote;
- (void)_unlinkRemote;
- (id)_createButton;
- (BOOL)bordered;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (NSInteger)linkingType;

@end