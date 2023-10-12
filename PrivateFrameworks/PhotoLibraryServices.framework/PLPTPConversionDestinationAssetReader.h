/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPConversionDestinationAssetReader : PLPTPAssetReader {
    PHMediaFormatConversionDestination * _destination;
}

@property (retain) PHMediaFormatConversionDestination *destination;

- (void).cxx_destruct;
- (id)dataSourcePathForDataRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (id)destination;
- (id)initWithDestination:(id)arg1;
- (id)path;
- (void)setDestination:(id)arg1;

@end