/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSArray, NSString, NSNumber, ASFolderItemsSyncResponse;

@interface ASCollection : ASItem  {
    int _dataclass;
    NSString *_syncKey;
    NSString *_collectionId;
    NSNumber *_status;
    NSNumber *_moreAvailable;
    NSArray *_changedItems;
    NSArray *_responseItems;
    ASFolderItemsSyncResponse *_parentResponse;
    int _sniffableType;
    BOOL _checkedShouldSniffInvites;
}

+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)moreAvailable;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setStatus:(id)arg1;
- (id)status;
- (id)collectionId;
- (int)sniffableTypeForAccount:(id)arg1;
- (id)changedItems;
- (void)setParentResponse:(id)arg1;
- (void)setResponseItems:(id)arg1;
- (void)setChangedItems:(id)arg1;
- (void)setMoreAvailable:(id)arg1;
- (void)setCollectionId:(id)arg1;
- (void)setDataclassString:(id)arg1;
- (id)syncKey;
- (void)setSyncKey:(id)arg1;
- (int)dataclass;
- (id)responseItems;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
