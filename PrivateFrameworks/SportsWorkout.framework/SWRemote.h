/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWRemote : SWAccessory  {
    BOOL _isListeningToRemote;
}

@property(readonly) BOOL isListeningToRemote;


- (BOOL)isListeningToRemote;
- (void)stopListeningToRemoteCommands;
- (void)beginListeningToRemoteCommands;

@end
