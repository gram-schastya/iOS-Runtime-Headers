/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSError, NSMutableDictionary, <CalDAVCalendarPropertyRefreshDelegate>;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation  {
    NSError *_savedError;
    NSMutableDictionary *_ctags;
    BOOL _didFinish;
    BOOL _didMakeCalendars;
    BOOL _isSecondRefresh;
    int _nextCalendarOrder;
}

@property <CalDAVCalendarPropertyRefreshDelegate> * delegate;


- (void)dealloc;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)refreshCalendarProperties;
- (void)_finishRefresh;
- (id)_generateTimeZoneString:(id)arg1;
- (int)_sharingStatusForContainer:(id)arg1;
- (void)_setPropertyString:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 atURL:(id)arg4;
- (void)_scheduleMkcalendarTaskForCalendar:(id)arg1;
- (void)_createDefaultCalendarsIfNeededForPrincipal:(id)arg1;
- (void)_createDefaultCalendarForPrincipal:(id)arg1 isEventCalendar:(BOOL)arg2;
- (void)_continueHandleContainerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;

@end
