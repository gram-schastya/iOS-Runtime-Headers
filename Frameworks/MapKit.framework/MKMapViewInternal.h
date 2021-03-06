/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKMapViewDelegate><MKMapViewDelegatePrivate>, UIGestureRecognizer, MKMapView, GEOTileAvailabilityRequest, UITouch, UILabel, UIEvent, UIColor, MKMapViewPositioningChange, MKAnnotationContainerView, UILongPressGestureRecognizer, UIView, MKVariableDelayTapRecognizer, MKOverlayContainerView, MKMapTileView, MKScrollView, UITapGestureRecognizer, UIImageView, NSTimer;

@interface MKMapViewInternal : NSObject <UITextFieldDelegate, PBRequesterDelegate> {
    MKMapView *view;
    UIView *contentView;
    MKScrollView *scrollView;
    MKMapTileView *mapTileView;
    MKAnnotationContainerView *annotationContainer;
    UIImageView *badgeView;
    UILabel *copyrightLabel;
    int trafficStatus;
    GEOTileAvailabilityRequest *hasTrafficRequest;
    NSTimer *annotationTimer;
    NSTimer *startEffectsTimer;
    NSTimer *copyrightLabelTimer;
    unsigned int lastCopyrightMapType;
    <MKMapViewDelegate><MKMapViewDelegatePrivate> *delegate;
    int animationType;
    unsigned int suspendedEffectsCount;
    unsigned int eventMode;
    unsigned int eventModeHistory;
    unsigned int mapType;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } centeringRect;
    unsigned int tileCount;
    unsigned int levelViewLoadingCount;
    unsigned int levelViewTrafficLoadingCount;
    NSTimer *defaultLocationTimer;
    double hoverStartTime;
    NSTimer *hoverExpirationTimer;
    NSTimer *scrollToReCenterUserTimer;
    NSTimer *positioningChangeTimer;
    NSTimer *trafficAvailabilityTimer;
    UILabel *debugView;
    NSTimer *debugTimer;
    MKMapViewPositioningChange *positioningChange;
    NSTimer *tapAndHoldTimer;
    int rotationDirection;
    double heading;
    double annotationViewPerspectiveHeading;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    UITapGestureRecognizer *tapGestureRecognizer;
    UITapGestureRecognizer *immediateTapGesture;
    MKVariableDelayTapRecognizer *doubleTapGestureRecognizer;
    UITapGestureRecognizer *twoFingerTapGestureRecognizer;
    UIGestureRecognizer *locationConsoleGesture;
    UIGestureRecognizer *toggleCountryGesture;
    int scrollViewTouchCount;
    UITouch *savedTouchBegan;
    UIEvent *savedEventBegan;
    MKOverlayContainerView *overlayContainer;
    int rotationState;
    float angularVelocity;
    UIColor *darkCopyrightTextColor;
    UIColor *darkCopyrightShadowColor;
    UIColor *lightCopyrightTextColor;
    UIColor *lightCopyrightShadowColor;
    int userTrackingMode;
    struct { 
        unsigned int callsDelegateForAllRegionChanges : 1; 
        unsigned int changingRegion : 1; 
        unsigned int checkTrafficAvailable : 1; 
        unsigned int debugViewHeading : 1; 
        unsigned int didStartDragging : 1; 
        unsigned int draggingInterrupted : 1; 
        unsigned int didStartSmoothScrolling : 1; 
        unsigned int drawGridBackground : 1; 
        unsigned int hasRenderedSomething : 1; 
        unsigned int hot : 1; 
        unsigned int ignoreHeadingUpdates : 1; 
        unsigned int ignoreLocationUpdates : 1; 
        unsigned int isRunningPositioningChange : 1; 
        unsigned int isSuspended : 1; 
        unsigned int levelCrossFade : 1; 
        unsigned int liveTrackingAutoSelectZoomLevel : 1; 
        unsigned int longPressing : 1; 
        unsigned int needsPerspectiveUpdate : 1; 
        unsigned int persistFixedUserLocation : 1; 
        unsigned int regionChangeIsAnimated : 1; 
        unsigned int regionChangeIsUserInitiated : 1; 
        unsigned int rotationSupported : 1; 
        unsigned int scrollEnabled : 1; 
        unsigned int scrolling : 1; 
        unsigned int scrollIsAnimated : 1; 
        unsigned int shouldRotateForHeading : 1; 
        unsigned int showsUserLocation : 1; 
        unsigned int trafficEnabled : 1; 
        unsigned int zoomEnabled : 1; 
        unsigned int zoomIsAnimated : 1; 
        unsigned int zooming : 1; 
        unsigned int wasZooming : 1; 
        unsigned int inSetZoomScale : 1; 
        unsigned int annotationViewsAreAddedImmediately : 1; 
        unsigned int nextPositioningChangeIsInstant : 1; 
        unsigned int isChangingViewSize : 1; 
        unsigned int delegateShouldReceiveTouch : 1; 
        unsigned int delegateShouldDelayTapResponse : 1; 
        unsigned int delegateWillChangeRotation : 1; 
        unsigned int delegateWillChangeRotationAnimation : 1; 
        unsigned int delegateDidUpdateUserLocation : 1; 
        unsigned int delegateDidFailToLocateUser : 1; 
        unsigned int delegateWillChangeRegion : 1; 
        unsigned int delegateDidChangeRegion : 1; 
        unsigned int delegateDidStartMapRendering : 1; 
        unsigned int delegateDidFinishMapRendering : 1; 
        unsigned int delegateDidChangeUserTrackingMode : 1; 
        unsigned int delegateDidChangeUserTrackingModeButton : 1; 
        unsigned int delegateDidChangeMapType : 1; 
    } flags;
}


- (void)runPositioningChangeIfNeeded:(id)arg1;
- (void)runPositioningChangeIfNeeded;
- (void)scrollToUserLocation;
- (void)stopHoverWithChange:(id)arg1;
- (void)showAddedAnnotationsAndRouteAnimated;
- (void)delayedShowAddedAnnotationsAnimated;
- (void)updateTrafficAvailable;
- (void)startEffects;

@end
