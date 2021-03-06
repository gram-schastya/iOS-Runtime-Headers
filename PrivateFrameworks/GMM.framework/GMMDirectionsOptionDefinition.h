/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, NSMutableArray;

@interface GMMDirectionsOptionDefinition : PBCodable  {
    int _optionID;
    NSString *_optionText;
    int _type;
    NSMutableArray *_allowableValues;
    int _defaultValue;
}

@property int optionID;
@property(retain) NSString * optionText;
@property int type;
@property(retain) NSMutableArray * allowableValues;
@property int defaultValue;


- (int)defaultValue;
- (void)setDefaultValue:(int)arg1;
- (id)description;
- (void)dealloc;
- (int)optionID;
- (id)dictionaryRepresentation;
- (int)type;
- (void)setType:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)allowableValues;
- (id)optionText;
- (id)allowableValuesAtIndex:(unsigned int)arg1;
- (unsigned int)allowableValuesCount;
- (void)addAllowableValues:(id)arg1;
- (void)setOptionID:(int)arg1;
- (void)setAllowableValues:(id)arg1;
- (void)setOptionText:(id)arg1;

@end
