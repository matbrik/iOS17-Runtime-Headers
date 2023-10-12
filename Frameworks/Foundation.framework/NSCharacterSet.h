/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly, copy) NSData *bitmapRepresentation;
@property (readonly, copy) NSCharacterSet *invertedSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)alphanumericCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)controlCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)illegalCharacterSet;
+ (void)initialize;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)newlineCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)punctuationCharacterSet;
+ (bool)supportsSecureCoding;
+ (id)symbolCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)whitespaceCharacterSet;

- (unsigned long long)_cfTypeID;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (id)_retainedBitmapRepresentation;
- (id)bitmapRepresentation;
- (bool)characterIsMember:(unsigned short)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMemberInPlane:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)invertedSet;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isMutable;
- (bool)isSupersetOfSet:(id)arg1;
- (bool)longCharacterIsMember:(unsigned int)arg1;
- (void)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

// NSCharacterSet (NSCharacterSetPortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

// NSCharacterSet (NSURLUtilities)

+ (id)URLFragmentAllowedCharacterSet;
+ (id)URLHostAllowedCharacterSet;
+ (id)URLPasswordAllowedCharacterSet;
+ (id)URLPathAllowedCharacterSet;
+ (id)URLQueryAllowedCharacterSet;
+ (id)URLUserAllowedCharacterSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

// NSCharacterSet (_HKXMLExtractorCharacterSets)

+ (id)hk_equalCharacterSet;
+ (id)hk_forwardSlashCharacterSet;
+ (id)hk_percentCharacterSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SwiftUI.framework/SwiftUI

// NSCharacterSet (IC)

+ (id)ic_emojiCharacterSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting

+ (id)ch_arabicCombiningDiacriticSet;
+ (id)ch_arabicDiacriticSet;
+ (id)ch_arabicDigitSet;
+ (id)ch_arabicTanweenDiacriticSet;
+ (id)ch_basicAlphabeticCharacterSet;
+ (id)ch_basicAlphanumericCharacterSet;
+ (id)ch_basicArabicCharacterSet;
+ (id)ch_basicClosingParenthesesSet;
+ (id)ch_basicCyrillicCharacterSet;
+ (id)ch_basicOpeningParenthesesSet;
+ (id)ch_emptyCharacterSet;
+ (id)ch_englishCharacterSet;
+ (id)ch_hiraganaCharacterSet;
+ (id)ch_kanjiCharacterSet;
+ (id)ch_kanjiCompCharacterSet;
+ (id)ch_katakanaCharacterSet;
+ (id)ch_latinCharacterSet;
+ (id)ch_neutralQuotationMarkSet;
+ (id)ch_possibleDescenderCharSet;
+ (id)ch_russianOnlyCharacterSet;
+ (id)ch_sentenceEndPunctuationCharacterSet;
+ (id)ch_sentenceStartPunctuationCharacterSet;
+ (id)ch_thaiExtraSpaceAfterSymbolsSet;
+ (id)ch_thaiMathSymbolsNeedingSpaceSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailCore.framework/EmailCore

// NSCharacterSet (ECMessageBodyParser)

+ (id)ec_ignorableCharacterSet;
+ (id)ec_ignorableCharacterSet;
+ (id)ec_whitespaceNewlineAndTagCharacterSet;
+ (id)ec_whitespaceNewlineAndTagCharacterSet;
+ (id)ec_zeroWidthCharacterSet;
+ (id)ec_zeroWidthCharacterSet;

// NSCharacterSet (SubjectParser)

+ (id)ec_prefixDelimiterCharacterSet;
+ (id)ec_prefixDelimiterCharacterSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

// NSCharacterSet (MailCoreAdditions)

+ (id)ef_asciiAlphaNumericCharacterSet;
+ (id)ef_asciiAlphaNumericCharacterSet;
+ (id)ef_rfc6376WhitespaceCharacterSet;
+ (id)ef_rfc6376WhitespaceCharacterSet;
+ (id)ef_unsafeAddressLocalPartCharacterSet;
+ (id)ef_unsafeAddressLocalPartCharacterSet;
+ (id)ef_unsafeDomainNameCharacterSet;
+ (id)ef_unsafeDomainNameCharacterSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation

// NSCharacterSet (EMFEmojiExtras)

+ (id)_emojiCharacterSet;
+ (id)_emojiCharacterSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)invalidCharactersForFileTransferName;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

// NSCharacterSet (IC)

+ (id)ic_animatableMentionCharacterSet;
+ (id)ic_attachmentCharacterSet;
+ (id)ic_emojiCharacterSet;
+ (id)ic_hashtagAllowedCharacterSet;
+ (id)ic_hashtagTokenizingCharacterSet;
+ (id)ic_illegalFilenameCharacterSet;
+ (id)ic_uriIdentifierAllowedCharacterSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhoneNumbers.framework/PhoneNumbers

// NSCharacterSet (PhoneNumbers)

+ (id)pn_verticalServiceCharacterSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

// NSCharacterSet (TTRAdditions)

+ (id)emojis;
+ (id)hashtagTokenAllowedCharacters;
+ (id)makeFormatCharacters;
+ (void)subtractOtherPunctuationCharactersFrom:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

// NSCharacterSet (SCRCCharacterSetExtras)

+ (id)emojiCharacterSet;
+ (id)passwordBulletCharacterSet;
+ (id)whitespaceNewlineAndSpecialCharacterSet;
+ (id)wordBreakCharacterSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

// NSCharacterSet (FTCallHistorySearchModuleAdditions)

+ (id)phoneNumberSeparatorCharacterSet;

// NSCharacterSet (TelephonyUtilities)

+ (id)phoneNumberSeparatorCharacterSet;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition

// NSCharacterSet (CRCharacterSet)

+ (id)customJapaneseKoreanAsUnknownScriptCharacterSet;
+ (id)customUnknownScriptCharacterSet;

@end