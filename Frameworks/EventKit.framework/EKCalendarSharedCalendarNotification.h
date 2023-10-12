/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification {
    unsigned long long  _allowedEntityTypes;
    unsigned long long  _sharingInvitationResponse;
}

@property (nonatomic) unsigned long long allowedEntityTypes;
@property (nonatomic) unsigned long long sharingInvitationResponse;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKit.framework/EventKit

- (unsigned long long)allowedEntityTypes;
- (id)calendarFromEventStore:(id)arg1;
- (id)initWithType:(long long)arg1;
- (bool)isSharedCalendarInvitation;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
- (void)setSharingInvitationResponse:(unsigned long long)arg1;
- (unsigned long long)sharingInvitationResponse;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

// EKCalendarSharedCalendarNotification (CUIKDescription)

- (id)_actionStringWithOptions:(unsigned long long)arg1;
- (id)allDescriptionStringsWithOptions:(unsigned long long)arg1;
- (id)descriptionStrings:(unsigned long long)arg1;
- (id)senderStringWithOptions:(unsigned long long)arg1;
- (bool)supportsDisplay;
- (id)titleStringWithOptions:(unsigned long long)arg1;

@end