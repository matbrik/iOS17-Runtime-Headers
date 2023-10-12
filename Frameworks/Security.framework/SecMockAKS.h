/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Security.framework/Security
 */

@interface SecMockAKS : NSObject

+ (void)failNextDecryptRefKey:(id)arg1;
+ (bool)forceInvalidPersona;
+ (bool)forceUnwrapKeyDecodeFailure;
+ (bool)isLocked:(int)arg1;
+ (bool)isSEPDown;
+ (unsigned int)keybag_state;
+ (void)lockClassA;
+ (void)lockClassA_C;
+ (id)lockedStates;
+ (id)mutabilityQueue;
+ (id)popDecryptRefKeyFailure;
+ (void)reset;
+ (void)resetDecryptRefKeyFailures;
+ (void)setKeybag_state:(unsigned int)arg1;
+ (void)setOperationsUntilUnlock:(int)arg1;
+ (void)trapdoor;
+ (void)unlockAllClasses;
+ (void)updateOperationsUntilUnlock;
+ (bool)useGenerationCount;

@end