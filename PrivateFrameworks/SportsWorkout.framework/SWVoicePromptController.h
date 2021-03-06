/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NikePromptExpander, NSString, NSDecimalNumberHandler, WordsSpeaker;

@interface SWVoicePromptController : NSObject  {
    NikePromptExpander *_promptExpanderForGivenLanguage;
    NikePromptExpander *_promptExpanderForEnglish;
    WordsSpeaker *_speaker;
    NSString *_gender;
    NSString *_language;
    NSDecimalNumberHandler *_roundToTwoDigitsPastTheDecimal;
    NSDecimalNumberHandler *_roundToZeroDigitsPastTheDecimal;
}

@property(retain) NSString * gender;
@property(retain) NSString * language;
@property(readonly) BOOL isPlaying;

+ (id)__sharedFemalePromptController;
+ (id)__sharedMalePromptController;
+ (id)_currentGenderIdentifier;
+ (id)_currentLanguageIdentifier;
+ (id)sharedPromptController;

- (id)init;
- (void)dealloc;
- (void)setLanguage:(id)arg1;
- (id)language;
- (BOOL)isPlaying;
- (void)fireAmountPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4;
- (id)gender;
- (void)_fireStandaloneNumberPrompt:(id)arg1;
- (void)fireDistanceRemainingPromptWithDistanceRemaining:(id)arg1 units:(id)arg2;
- (void)fireCaloriesRemainingPromptWithCaloriesRemaining:(id)arg1;
- (void)fireTimeRemainingPromptWithTimeRemaining:(id)arg1;
- (void)fireAmountBeyondGoalPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4;
- (void)fireAmountCompletedPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4;
- (void)fireWalkAroundToActivateSensorPrompt;
- (void)setGender:(id)arg1;
- (BOOL)_fireOneLinerPromptUsingRandomGenderWithString:(id)arg1;
- (void)_firePrompt:(id)arg1 amount:(id)arg2 units:(id)arg3 words:(id*)arg4 englishWords:(id*)arg5;
- (void)_firePrompt:(id)arg1 amount:(id)arg2 units:(id)arg3 pronounceUnits:(BOOL)arg4 words:(id*)arg5 englishWords:(id*)arg6;
- (void)_firePacePromptWithAmount:(id)arg1 units:(id)arg2 isAveragePace:(BOOL)arg3;
- (id)_promptExpenderUnitsForWorkoutControllerUnits:(id)arg1;
- (id)_roundedAmount:(id)arg1 forUnits:(id)arg2;
- (BOOL)_fireOneLinerPromptWithString:(id)arg1;
- (void)_printVoicePrompt:(id)arg1;
- (void)_setUpWithSettings;
- (id)_initWithLanguage:(id)arg1 gender:(id)arg2;
- (void)fireFastestMilePrompt;
- (void)fireFastest5KWorkoutPrompt;
- (void)fireFastest10KWorkoutPrompt;
- (void)fireFastestHalfMarathonWorkoutPrompt;
- (void)fireFastestMarathonWorkoutPrompt;
- (void)fireMostCaloriesBurnedPrompt;
- (void)fireLongestWorkoutDistancePrompt;
- (void)fireHit250MilesMorePrompt;
- (void)fireHit250MilesPrompt;
- (void)fireHit500KMorePrompt;
- (void)fireHit500KPrompt;
- (void)fireGoalCompletedPromptWithDistanceGoal:(id)arg1 units:(id)arg2;
- (void)fireFinalRushPromptWithDistanceRemaining:(id)arg1 units:(id)arg2;
- (void)fireDistanceBeyondGoalPromptWithDistanceRanBeyondGoal:(id)arg1 units:(id)arg2;
- (void)fireDistanceContextPromptWithDistanceRan:(id)arg1 units:(id)arg2;
- (void)fireGoalCompletedPromptWithCaloriesGoal:(id)arg1;
- (void)fireFinalRushPromptWithCaloriesRemaining:(id)arg1;
- (void)fireCaloriesBeyondGoalPromptWithCaloriesBurnedBeyondGoal:(id)arg1;
- (void)fireCaloriesContextPromptWithCaloriesBurned:(id)arg1;
- (void)fireGoalCompletedPromptWithTimeGoal:(id)arg1;
- (void)fireFinalRushPromptWithTimeRemaining:(id)arg1;
- (void)fireAmountRemainingPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4;
- (void)fireHalfwayPointPrompt;
- (void)fireTimeBeyondGoalPromptWithElapsedTimeBeyondGoal:(id)arg1;
- (void)fireTimeContextPromptWithElapsedTime:(id)arg1;
- (void)fireCurrentPacePromptWithAmount:(id)arg1 units:(id)arg2;
- (void)fireCaloriesBurnedPromptWithAmount:(id)arg1;
- (void)fireAveragePacePromptWithAmount:(id)arg1 units:(id)arg2;
- (void)fireTimePromptWithAmount:(id)arg1;
- (void)fireWorkoutDistancePromptWithAmount:(id)arg1 units:(id)arg2;
- (void)fireWorkoutCompletedPrompt;
- (void)stopAllPrompts;
- (void)firePausingWorkoutPrompt;
- (void)fireResumingWorkoutPrompt;
- (void)fireBeginningWorkoutPrompt;
- (void)refreshSettings;

@end
