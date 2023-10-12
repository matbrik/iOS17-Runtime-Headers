/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate> {
    CoreDAVPropFindTask * _fetchTask;
    NSURL * _inboxURL;
    int  _state;
    NSString * _suffixToFilterOut;
    NSURL * _urlToAdd;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CoreDAVPropFindTask *fetchTask;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *inboxURL;
@property (nonatomic) int state;
@property (nonatomic, retain) NSString *suffixToFilterOut;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *urlToAdd;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_startFetchFreeBusySet;
- (void)_startPropPatchWithURLs:(id)arg1;
- (id)fetchTask;
- (id)inboxURL;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 urlToAdd:(id)arg3 suffixToFilterOut:(id)arg4 taskManager:(id)arg5;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)setFetchTask:(id)arg1;
- (void)setInboxURL:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSuffixToFilterOut:(id)arg1;
- (void)setUrlToAdd:(id)arg1;
- (void)startTaskGroup;
- (int)state;
- (id)suffixToFilterOut;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)urlToAdd;

@end