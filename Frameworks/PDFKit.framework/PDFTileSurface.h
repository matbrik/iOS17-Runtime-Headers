/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFTileSurface : NSObject {
    struct CGImage { } * cgImageRef;
    struct __IOSurface { } * ioSurfaceRef;
    int  pageNumber;
    int  tileId;
    int  tileSize;
    int  type;
}

- (void)releaseSurface;

@end