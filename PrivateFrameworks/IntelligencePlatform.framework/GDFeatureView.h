/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDFeatureView : NSObject <GDFeatureView> {
    <GDViewAccessAssertion> * _accessAssertion;
    _PASSqliteDatabase * _db;
    GDSQLFeatureRetriever * _featureRetriever;
}

- (void).cxx_destruct;
- (id)expectedFeatureKeysWithError:(id*)arg1;
- (id)featureForKey:(id)arg1 error:(id*)arg2;
- (id)featureKeysWithError:(id*)arg1;
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;

@end