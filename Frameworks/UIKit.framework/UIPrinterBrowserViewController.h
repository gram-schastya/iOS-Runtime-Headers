/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintPanelViewController, PKPrinter, UIPrinterSearchingView, NSMutableArray, PKPrinterBrowser;

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
    UIPrintPanelViewController *_printPanelViewController;
    PKPrinterBrowser *_printerBrowser;
    NSMutableArray *_printers;
    PKPrinter *_lockedPrinter;
    BOOL _loaded;
    UIPrinterSearchingView *_searchingView;
    double _displayTime;
    BOOL _clearCurrentPrinter;
}


- (void)dealloc;
- (void)removePrinter:(id)arg1 moreGoing:(BOOL)arg2;
- (void)addPrinter:(id)arg1 moreComing:(BOOL)arg2;
- (void)updateSearching;
- (void)startPrinterBrowser;
- (void)adjustPopoverSize;
- (void)willEnterForeground;
- (void)stopPrinterBrowser;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
