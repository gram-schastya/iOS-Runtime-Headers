/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKDateRangePredicate : NSPredicate  {
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(readonly) NSDate * startDate;
@property(readonly) NSDate * endDate;

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2;

- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)endDate;
- (id)startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
