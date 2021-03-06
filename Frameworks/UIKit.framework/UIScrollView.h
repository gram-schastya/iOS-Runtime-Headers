/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, NSArray, UIView, UIPanGestureRecognizer, UIPinchGestureRecognizer, <UIScrollViewDelegate>;

@interface UIScrollView : UIView <NSCoding> {
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    id _delegate;
    UIImageView *_verticalScrollIndicator;
    UIImageView *_horizontalScrollIndicator;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _scrollIndicatorInset;
    struct { 
        unsigned int tracking : 1; 
        unsigned int dragging : 1; 
        unsigned int verticalBounceEnabled : 1; 
        unsigned int horizontalBounceEnabled : 1; 
        unsigned int verticalBouncing : 1; 
        unsigned int horizontalBouncing : 1; 
        unsigned int bouncesZoom : 1; 
        unsigned int zoomBouncing : 1; 
        unsigned int alwaysBounceHorizontal : 1; 
        unsigned int alwaysBounceVertical : 1; 
        unsigned int canCancelContentTouches : 1; 
        unsigned int delaysContentTouches : 1; 
        unsigned int programmaticScrollDisabled : 1; 
        unsigned int scrollDisabled : 1; 
        unsigned int zoomDisabled : 1; 
        unsigned int scrollTriggered : 1; 
        unsigned int scrollDisabledOnTouchBegan : 1; 
        unsigned int ignoreNextTouchesMoved : 1; 
        unsigned int cancelNextContentTouchEnded : 1; 
        unsigned int inContentViewCall : 1; 
        unsigned int dontSelect : 1; 
        unsigned int contentTouched : 1; 
        unsigned int cantCancel : 1; 
        unsigned int directionalLockEnabled : 1; 
        unsigned int directionalLockAutoEnabled : 1; 
        unsigned int lockVertical : 1; 
        unsigned int lockHorizontal : 1; 
        unsigned int keepLocked : 1; 
        unsigned int showsHorizontalScrollIndicator : 1; 
        unsigned int showsVerticalScrollIndicator : 1; 
        unsigned int indicatorStyle : 2; 
        unsigned int inZoom : 1; 
        unsigned int hideIndicatorsInZoom : 1; 
        unsigned int pushedTrackingMode : 1; 
        unsigned int multipleDrag : 1; 
        unsigned int displayingScrollIndicators : 1; 
        unsigned int verticalIndicatorShrunk : 1; 
        unsigned int horizontalIndicatorShrunk : 1; 
        unsigned int contentFitDisableScrolling : 1; 
        unsigned int pagingEnabled : 1; 
        unsigned int pagingLeft : 1; 
        unsigned int pagingRight : 1; 
        unsigned int pagingUp : 1; 
        unsigned int pagingDown : 1; 
        unsigned int lastHorizontalDirection : 1; 
        unsigned int lastVerticalDirection : 1; 
        unsigned int dontScrollToTop : 1; 
        unsigned int scrollingToTop : 1; 
        unsigned int useGestureRecognizers : 1; 
        unsigned int autoscrolling : 1; 
        unsigned int automaticContentOffsetAdjustmentDisabled : 1; 
        unsigned int skipStartOffsetAdjustment : 1; 
        unsigned int delegateScrollViewDidScroll : 1; 
        unsigned int delegateScrollViewDidZoom : 1; 
        unsigned int delegateContentSizeForZoomScale : 1; 
        unsigned int preserveCenterDuringRotation : 1; 
        unsigned int delaysTrackingWhileDecelerating : 1; 
        unsigned int pinnedZoomMin : 1; 
        unsigned int pinnedXMin : 1; 
        unsigned int pinnedYMin : 1; 
        unsigned int pinnedXMax : 1; 
        unsigned int pinnedYMax : 1; 
        unsigned int skipLinkChecks : 1; 
        unsigned int staysCenteredDuringPinch : 1; 
        unsigned int wasDelayingPinchForSystemGestures : 1; 
        unsigned int systemGesturesRecognitionPossible : 1; 
        unsigned int disableContentOffsetRounding : 1; 
        unsigned int adjustedDecelerationTargetX : 1; 
        unsigned int adjustedDecelerationTargetY : 1; 
    } _scrollViewFlags;
    float _farthestDistance;
    struct CGPoint { 
        float x; 
        float y; 
    } _initialTouchPosition;
    struct CGPoint { 
        float x; 
        float y; 
    } _startTouchPosition;
    double _startTouchTime;
    double _startOffsetX;
    double _startOffsetY;
    double _lastUpdateOffsetX;
    double _lastUpdateOffsetY;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastTouchPosition;
    double _lastTouchTime;
    double _lastUpdateTime;
    UIView *_contentView;
    float _minimumZoomScale;
    float _maximumZoomScale;
    UIView *_zoomView;
    double _horizontalVelocity;
    double _verticalVelocity;
    double _previousHorizontalVelocity;
    double _previousVerticalVelocity;
    void *_scrollHeartbeat;
    struct CGPoint { 
        float x; 
        float y; 
    } _pageDecelerationTarget;
    struct CGSize { 
        float width; 
        float height; 
    } _decelerationFactor;
    struct CGPoint { 
        float x; 
        float y; 
    } _adjustedDecelerationTarget;
    struct CGSize { 
        float width; 
        float height; 
    } _adjustedDecelerationFactor;
    double _decelerationLnFactorH;
    double _decelerationLnFactorV;
    NSArray *_deferredBeginTouchesInfo;
    id *_shadows;
    id _scrollNotificationViews;
    double _contentOffsetAnimationDuration;
    id _animation;
    id _pinch;
    id _pan;
    id _swipe;
    float _pagingSpringPull;
    float _pagingFriction;
    int _fastScrollCount;
    float _fastScrollMultiplier;
    float _fastScrollStartMultiplier;
    double _fastScrollEndTime;
    struct CGPoint { 
        float x; 
        float y; 
    } _parentAdjustment;
    struct CGPoint { 
        float x; 
        float y; 
    } _rotationCenterPoint;
    float _accuracy;
    float _hysteresis;
    unsigned int _zoomAnimationCount;
    struct CADoublePoint { 
        double x; 
        double y; 
    } _zoomAnchorPoint;
    id _scrollTestParameters;
}

@property(getter=isProgrammaticScrollEnabled) BOOL programmaticScrollEnabled;
@property struct CGPoint { float x1; float x2; } contentOffset;
@property struct CGSize { float x1; float x2; } contentSize;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property <UIScrollViewDelegate> * delegate;
@property(getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;
@property BOOL bounces;
@property BOOL alwaysBounceVertical;
@property BOOL alwaysBounceHorizontal;
@property(getter=isPagingEnabled) BOOL pagingEnabled;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property BOOL showsHorizontalScrollIndicator;
@property BOOL showsVerticalScrollIndicator;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } scrollIndicatorInsets;
@property int indicatorStyle;
@property float decelerationRate;
@property(getter=isTracking,readonly) BOOL tracking;
@property(getter=isDragging,readonly) BOOL dragging;
@property(getter=isDecelerating,readonly) BOOL decelerating;
@property BOOL delaysContentTouches;
@property BOOL canCancelContentTouches;
@property float minimumZoomScale;
@property float maximumZoomScale;
@property float zoomScale;
@property BOOL bouncesZoom;
@property(getter=isZooming,readonly) BOOL zooming;
@property(getter=isZoomBouncing,readonly) BOOL zoomBouncing;
@property BOOL scrollsToTop;
@property(readonly) UIPanGestureRecognizer * panGestureRecognizer;
@property(readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;
@property(retain) id scrollTestParameters;
@property(getter=_isVerticalBouncing,readonly) BOOL isVerticalBouncing;
@property(getter=_isHorizontalBouncing,readonly) BOOL isHorizontalBouncing;
@property(getter=_isAnimatingScroll,readonly) BOOL isAnimatingScroll;
@property(getter=_isAnimatingZoom,readonly) BOOL isAnimatingZoom;
@property(getter=_zoomAnchorPoint,setter=_setZoomAnchorPoint:) struct CADoublePoint { double x1; double x2; } zoomAnchorPoint;

+ (float)_cancelSelectDistance;
+ (SEL)_panGestureAction;
+ (SEL)_pinchGestureAction;

- (id)description;
- (void)dealloc;
- (void)setScrollViewOffsetPinned:(struct CGPoint { float x1; float x2; })arg1;
- (float)maxVelocityInDirection:(int)arg1;
- (int)scrollableDirections;
- (void)_disableScrollingIfNecessary;
- (void)_enableScrollingIfNecessary;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3;
- (id)_scrollTestExtraResults;
- (void)_incrementForScrollTest;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (BOOL)_continueScrollingAtOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_runLoopModePopped:(id)arg1;
- (void)_smoothScroll:(id)arg1;
- (void)_getStandardDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 min:(double)arg3 max:(double)arg4 decelerationFactor:(double)arg5 decelerationLnFactor:(double)arg6 velocity:(double*)arg7;
- (BOOL)_getBouncingDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 lastUpdateOffset:(double)arg3 min:(double)arg4 max:(double)arg5 decelerationFactor:(double)arg6 decelerationLnFactor:(double)arg7 velocity:(double*)arg8;
- (BOOL)_getPagingDecelerationOffset:(struct CADoublePoint { double x1; double x2; }*)arg1 forTimeInterval:(double)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForPageContainingView:(id)arg1;
- (void)_pinContentOffsetToClosestPageBoundary;
- (id)_backgroundShadowForSlideAnimation;
- (void)_adjustShadowsIfNecessaryForOffset:(float)arg1;
- (void)_adjustShadowsIfNecessary;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })autoscrollContentOffset;
- (BOOL)_isAutoscrolling;
- (void)_setAutoscrolling:(BOOL)arg1;
- (BOOL)_pagingRight;
- (BOOL)_pagingLeft;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(float*)arg3;
- (id)_panGestureRecognizer;
- (id)_parentScrollView;
- (void)_setContentOffsetPinned:(struct CGPoint { float x1; float x2; })arg1;
- (void)_shiftOffset:(struct CGSize { float x1; float x2; })arg1;
- (id)_touchedContentView;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)_forceDelegateScrollViewDidZoom:(BOOL)arg1;
- (void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)arg1;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2 animationCurve:(int)arg3;
- (void)_moveContentSubview:(id)arg1 toBack:(BOOL)arg2;
- (BOOL)_canCancelContentTouches:(id)arg1;
- (BOOL)_resetScrollingForGestureEvent:(id)arg1;
- (void)_resetScrollingWithEvent:(struct __GSEvent { }*)arg1;
- (void)_stopScrollingAndZoomingAnimations;
- (void)_scrollViewAnimationEnded;
- (struct CGPoint { float x1; float x2; })_originalOffsetForAnimatedSetContentOffset;
- (void)_addContentSubview:(id)arg1 atBack:(BOOL)arg2;
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)arg1;
- (void)_scrollViewDidEndDecelerating;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1 withOffset:(float)arg2;
- (float)_shadowHeightOffset;
- (void)didFinishGesture:(int)arg1 inView:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (void)_stopScrollDecelerationNotify:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })_pageDecelerationTarget;
- (double)_verticalVelocity;
- (double)_horizontalVelocity;
- (id)scrollTestParameters;
- (id)pinchGestureRecognizer;
- (id)panGestureRecognizer;
- (BOOL)_isAnimatingZoom;
- (BOOL)_isAnimatingScroll;
- (BOOL)isZoomBouncing;
- (void)zoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setZoomScale:(float)arg1;
- (void)_zoomToCenter:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(double)arg3;
- (BOOL)_ignoreLinkedOnChecks;
- (void)_setIgnoreLinkedOnChecks:(BOOL)arg1;
- (void)setScrollsToTop:(BOOL)arg1;
- (BOOL)scrollsToTop;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (void)setDelaysContentTouches:(BOOL)arg1;
- (BOOL)delaysContentTouches;
- (void)setCanCancelContentTouches:(BOOL)arg1;
- (BOOL)canCancelContentTouches;
- (void)setBouncesZoom:(BOOL)arg1;
- (BOOL)bouncesZoom;
- (void)cancelNextContentTouchEnded;
- (void)gestureRecognizerFailed:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (void)_setStaysCenteredDuringPinch:(BOOL)arg1;
- (void)setShowBackgroundShadow:(BOOL)arg1;
- (BOOL)_showsBackgroundShadow;
- (void)flashScrollIndicators;
- (void)setPreservesCenterDuringRotation:(BOOL)arg1;
- (BOOL)preservesCenterDuringRotation;
- (float)_scrollHysteresis;
- (BOOL)tracksImmediatelyWhileDecelerating;
- (void)setTracksImmediatelyWhileDecelerating:(BOOL)arg1;
- (BOOL)allowsMultipleFingers;
- (void)setAllowsMultipleFingers:(BOOL)arg1;
- (BOOL)usesGestureRecognizers;
- (void)setVerticalScrollDecelerationFactor:(float)arg1;
- (float)verticalScrollDecelerationFactor;
- (void)setHorizontalScrollDecelerationFactor:(float)arg1;
- (float)horizontalScrollDecelerationFactor;
- (int)indicatorStyle;
- (void)setDecelerationRate:(float)arg1;
- (float)decelerationRate;
- (void)setIndicatorStyle:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })scrollIndicatorInsets;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)showsVerticalScrollIndicator;
- (void)setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (BOOL)showsHorizontalScrollIndicator;
- (BOOL)_isHorizontalBouncing;
- (BOOL)_isVerticalBouncing;
- (void)setAlwaysBounceHorizontal:(BOOL)arg1;
- (void)setAlwaysBounceVertical:(BOOL)arg1;
- (BOOL)bouncesVertically;
- (void)setBouncesVertically:(BOOL)arg1;
- (BOOL)bouncesHorizontally;
- (void)setBouncesHorizontally:(BOOL)arg1;
- (BOOL)bounces;
- (void)setBounces:(BOOL)arg1;
- (int)_abuttedPagingEdges;
- (void)setPagingEnabled:(BOOL)arg1;
- (BOOL)isProgrammaticScrollEnabled;
- (void)setProgrammaticScrollEnabled:(BOOL)arg1;
- (BOOL)isZoomEnabled;
- (void)setZoomEnabled:(BOOL)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (float)maximumZoomScale;
- (void)setMaximumZoomScale:(float)arg1;
- (void)setMinimumZoomScale:(float)arg1;
- (BOOL)_isRectFullyVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)_ownsAnimationForKey:(id)arg1 ofView:(id)arg2;
- (void)_setContentOffsetAnimationDuration:(double)arg1;
- (double)_contentOffsetAnimationDuration;
- (float)_zoomScaleForRubberBandScale:(float)arg1;
- (void)_markScrollViewAnimationForKey:(id)arg1 ofView:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })_zoomAnchorPoint;
- (void)_adjustContentSizeForView:(id)arg1 atScale:(float)arg2;
- (void)_zoomAnimationDidStop;
- (float)_zoomAnimationDurationForScale:(float)arg1;
- (float)_zoomRubberBandScaleForScale:(float)arg1;
- (void)setZoomScale:(float)arg1 animated:(BOOL)arg2;
- (void)_zoomToCenter:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (void)_touchesEnded:(id)arg1 withEvent:(id)arg2 wasCancelled:(BOOL)arg3;
- (void)_endGesture:(id)arg1 withEvent:(id)arg2;
- (BOOL)_updateTouchPanWithStartDelta:(struct CGSize { float x1; float x2; })arg1 event:(id)arg2 ignoringDirectionalScroll:(BOOL)arg3;
- (double)_touchDelayForScrollDetection;
- (void)_deferredBeginTouchesInContentView;
- (void)_beginTouchesInContentView:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (id)_hitTestForContentView:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_changedGesture:(id)arg1 withEvent:(id)arg2;
- (void)_startGesture:(id)arg1 withEvent:(id)arg2;
- (void)_updatePanGesture;
- (void)_resetScrollingWithUIEvent:(id)arg1;
- (void)_endPanWithEvent:(id)arg1;
- (void)_prepareToPageWithHorizontalVelocity:(float)arg1 verticalVelocity:(float)arg2;
- (BOOL)_beginTrackingWithEvent:(id)arg1;
- (void)setZoomScale:(float)arg1 withAnchorPoint:(struct CADoublePoint { double x1; double x2; })arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7 force:(BOOL)arg8;
- (void)_updatePinchGestureForState:(int)arg1;
- (void)setZoomScale:(float)arg1 withAnchorPoint:(struct CADoublePoint { double x1; double x2; })arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7;
- (void)_scrollViewWillBeginZooming;
- (void)_setZoomAnchorPoint:(struct CADoublePoint { double x1; double x2; })arg1;
- (void)_scrollViewDidEndZooming;
- (float)_zoomScaleFromPresentationLayer:(BOOL)arg1;
- (BOOL)_staysCenteredDuringPinch;
- (void)_popTrackingRunLoopMode;
- (void)_startTimer:(BOOL)arg1;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (struct CADoublePoint { double x1; double x2; })_rubberBandContentOffsetForOffset:(struct CADoublePoint { double x1; double x2; })arg1 outsideX:(BOOL*)arg2 outsideY:(BOOL*)arg3;
- (void)_scrollViewWillBeginDragging;
- (BOOL)_cancelContentTouchWithEvent:(id)arg1 forced:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_touchPositionForTouches:(id)arg1;
- (BOOL)alwaysBounceVertical;
- (BOOL)alwaysBounceHorizontal;
- (id)commonHitTest:(id)arg1;
- (void)_setShowsBackgroundShadow:(BOOL)arg1;
- (void)_hideScrollIndicators;
- (void)_registerForRotation:(BOOL)arg1 ofWindow:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(id)arg1;
- (void)willRotateToInterfaceOrientation:(id)arg1;
- (float)minimumZoomScale;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)delayed:(id)arg1;
- (int)_currentlyAbuttedContentEdges;
- (int)_abuttedEdgesForContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updatePagingGesture;
- (id)_scrollViewTouchDelayGesture;
- (BOOL)isDirectionalLockEnabled;
- (void)setDirectionalLockEnabled:(BOOL)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2 animationCurve:(int)arg3;
- (void)_updatePinchGesture;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1;
- (void)_notifyDidScroll;
- (BOOL)_canScrollY;
- (BOOL)_canScrollX;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (BOOL)isPagingEnabled;
- (void)_adjustContentOffsetIfNecessary;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (float)zoomScale;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)_handleSwipe:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)setScrollTestParameters:(id)arg1;
- (void)_stopScrollingNotify:(BOOL)arg1 dealloc:(BOOL)arg2 pin:(BOOL)arg3;
- (void)_centerContentIfNecessary;
- (BOOL)isZooming;
- (id)_getDelegateZoomView;
- (void)_adjustScrollerIndicators:(BOOL)arg1 alwaysShowingThem:(BOOL)arg2;
- (void)setUsesGestureRecognizers:(BOOL)arg1;
- (void)_clearContentOffsetAnimation;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_skipNextStartOffsetAdjustment;
- (BOOL)_isScrollingEnabled;
- (void)_webCustomViewWillBeRemovedFromSuperview;
- (void)_removeScrollNotificationView:(id)arg1;
- (void)_addScrollNotificationView:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_willMoveToWindow:(id)arg1;
- (int)swipe:(int)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (BOOL)canHandleSwipes;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (BOOL)isTracking;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_scrollToTop;
- (BOOL)isScrollEnabled;
- (id)_defaultHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_gestureTargetHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_usesDifferentHitTestForGestures;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (BOOL)isDecelerating;
- (BOOL)isDragging;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)setShowsVerticalScrollIndicator:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)ab_scrollToSelectionOfTextView:(id)arg1;
- (void)ab_scrollToSelectionOfTextView:(id)arg1 animated:(BOOL)arg2;
- (float)ab_verticalOverlapUsingKeyboardInfo:(id)arg1;
- (void)ab_adjustForAutomaticKeyboardInfo:(id)arg1 lastAdjustment:(float*)arg2;
- (BOOL)restoreScrollPositionForKey:(id)arg1;
- (void)saveScrollPositionForKey:(id)arg1;
- (id)keyForContentMode:(int)arg1;
- (BOOL)mf_needsToAdjustContentOffset;
- (void)setTopExtensionViewColor:(id)arg1;
- (id)topExtensionViewColor;
- (void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3;
- (void)scrollBy:(float)arg1 forIterations:(int)arg2;
- (void)_testingScrollStep;

@end
