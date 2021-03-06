/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIAlertView, UIView, UIActionSheet, UIPopoverController, UIViewController, UIImagePickerController;

@interface GKPhotoPicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate, UIActionSheetDelegate> {
    UIViewController *_viewController;
    UIView *_view;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _popoverInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _actionSheetInsets;
    UIActionSheet *_actionSheet;
    UIPopoverController *_photoPopover;
    UIAlertView *_alert;
    UIImagePickerController *_imagePicker;
    BOOL _cancelled;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property(retain) UIViewController * viewController;
@property(retain) UIView * view;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } popoverInsets;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } actionSheetInsets;
@property(copy) id completionHandler;
@property(retain) UIActionSheet * actionSheet;
@property(retain) UIPopoverController * photoPopover;
@property(retain) UIAlertView * alert;
@property(retain) UIImagePickerController * imagePicker;
@property BOOL cancelled;


- (void)cancel;
- (void)dealloc;
- (id)imagePicker;
- (id)photoPopover;
- (id)actionSheet;
- (void)setActionSheetInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })actionSheetInsets;
- (void)setPopoverInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })popoverInsets;
- (void)setPhoto:(id)arg1;
- (id)editedImageFromImage:(id)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)showPopover;
- (void)setPhotoPopover:(id)arg1;
- (void)setImagePicker:(id)arg1;
- (void)takePhoto;
- (void)_pick;
- (void)choosePhoto;
- (void)showActionSheet;
- (void)setActionSheet:(id)arg1;
- (void)presentImagePickerForSourceType:(unsigned int)arg1;
- (void)dismissImagePickerAnimated:(BOOL)arg1;
- (void)didEnterBackground;
- (void)pick;
- (id)initWithViewController:(id)arg1 photoView:(id)arg2;
- (void)setAlert:(id)arg1;
- (id)alert;
- (void)cancelAlertWithoutDelegateCallback;
- (void)finish;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (BOOL)cancelled;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)setView:(id)arg1;
- (id)view;

@end
