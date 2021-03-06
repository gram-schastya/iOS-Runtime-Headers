/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSTimer, UITextRangeView, UIView<UITextSelectingContainer>, NSArray, UITextSelection;

@interface UITextSelectionView : UIView  {
    UIView<UITextSelectingContainer> *m_view;
    UITextSelection *m_selection;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    UITextRangeView *m_rangeView;
    BOOL m_caretBlinks;
    BOOL m_caretShowingNow;
    BOOL m_visible;
    BOOL m_activated;
    BOOL m_wasShowingCommands;
    BOOL m_delayShowingCommands;
    BOOL m_dictationReplacementsMode;
    int m_showingCommandsCounter;
    NSArray *m_replacements;
    BOOL m_deferSelectionCommands;
    struct __CFRunLoopObserver { } *m_observer;
}

@property(readonly) UIView<UITextSelectingContainer> * view;
@property(readonly) UITextSelection * selection;
@property BOOL caretBlinks;
@property BOOL visible;
@property(readonly) BOOL selectionCommandsShowing;
@property(retain) NSArray * replacements;
@property(readonly) UIView * caretView;
@property(readonly) UITextRangeView * rangeView;


- (void)dealloc;
- (void)configureForReplacementMode;
- (void)updateSelectionRectsIfNeeded;
- (void)doneMagnifying;
- (void)prepareForMagnification;
- (void)updateSelectionCommands;
- (void)caretBlinkTimerFired:(id)arg1;
- (void)hideCaret:(int)arg1;
- (void)calculateAndShowReplacements:(id)arg1;
- (void)deferredUpdateSelectionCommands;
- (id)replacements;
- (BOOL)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2;
- (void)setReplacements:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)showCommandsWithReplacements:(id)arg1;
- (void)touchCaretBlinkTimer;
- (void)showCaret:(int)arg1;
- (id)caretView;
- (void)installIfNecessary;
- (void)clearRange;
- (void)clearCaretBlinkTimer;
- (void)clearCaret;
- (BOOL)shouldBeVisible;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (BOOL)affectedByScrollerNotification:(id)arg1;
- (id)rangeView;
- (void)viewAnimate:(id)arg1;
- (void)inputViewDidAnimate;
- (void)inputViewWillAnimate;
- (void)inputViewDidMove;
- (void)inputViewWillMove;
- (void)appearOrFadeIfNecessary;
- (void)scaleDidChange:(id)arg1;
- (void)scaleWillChange:(id)arg1;
- (void)selectionDidScroll:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)textSelectionViewActivated:(id)arg1;
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3;
- (BOOL)selectionCommandsShowing;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)updateSelectionDots;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelDelayedCommandRequests;
- (void)configureForSelectionMode;
- (void)configureForHighlightMode;
- (void)showSelectionCommands;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (id)scrollView;
- (void)startCaretBlinkIfNeeded;
- (BOOL)visible;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)deferredUpdateSelectionRects;
- (void)detach;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)activate;
- (void)setVisible:(BOOL)arg1;
- (BOOL)caretBlinks;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBoundingBox;
- (void)hideSelectionCommands;
- (void)selectionChanged;
- (id)selection;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)updateSelectionRects;
- (void)deactivate;
- (id)initWithView:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)view;
- (void)removeFromSuperview;

@end
