/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAEmitterLayer : CALayer

@property float birthRate;
@property double cullMaxZ;
@property double cullMinZ;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cullRect;
@property (copy) NSArray *emitterBehaviors;
@property (copy) NSArray *emitterCells;
@property double emitterDepth;
@property float emitterDuration;
@property (copy) NSString *emitterMode;
@property struct CGPath { }*emitterPath;
@property struct CGPoint { double x1; double x2; } emitterPosition;
@property (copy) NSArray *emitterRects;
@property (copy) NSString *emitterShape;
@property struct CGSize { double x1; double x2; } emitterSize;
@property double emitterZPosition;
@property float lifetime;
@property bool preservesDepth;
@property (copy) NSString *renderMode;
@property float scale;
@property unsigned int seed;
@property float spin;
@property float spinBias;
@property double updateInterval;
@property float velocity;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

- (bool)CA_validateValue:(id)arg1 forKey:(id)arg2;
- (void)_colorSpaceDidChange;
- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (float)birthRate;
- (void)didChangeValueForKey:(id)arg1;
- (id)emitterCells;
- (double)emitterDepth;
- (id)emitterMode;
- (struct CGPoint { double x1; double x2; })emitterPosition;
- (id)emitterShape;
- (struct CGSize { double x1; double x2; })emitterSize;
- (double)emitterZPosition;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (float)lifetime;
- (bool)preservesDepth;
- (void)reloadValueForKeyPath:(id)arg1;
- (id)renderMode;
- (float)scale;
- (unsigned int)seed;
- (void)setBirthRate:(float)arg1;
- (void)setEmitterCells:(id)arg1;
- (void)setEmitterDepth:(double)arg1;
- (void)setEmitterMode:(id)arg1;
- (void)setEmitterPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEmitterShape:(id)arg1;
- (void)setEmitterSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEmitterZPosition:(double)arg1;
- (void)setLifetime:(float)arg1;
- (void)setPreservesDepth:(bool)arg1;
- (void)setRenderMode:(id)arg1;
- (void)setScale:(float)arg1;
- (void)setSeed:(unsigned int)arg1;
- (void)setSpin:(float)arg1;
- (void)setVelocity:(float)arg1;
- (float)spin;
- (float)velocity;

// CAEmitterLayer (CAEmitterLayerPrivate)

- (double)cullMaxZ;
- (double)cullMinZ;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cullRect;
- (id)emitterBehaviors;
- (float)emitterDuration;
- (struct CGPath { }*)emitterPath;
- (id)emitterRects;
- (void)setCullMaxZ:(double)arg1;
- (void)setCullMinZ:(double)arg1;
- (void)setCullRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEmitterBehaviors:(id)arg1;
- (void)setEmitterDuration:(float)arg1;
- (void)setEmitterPath:(struct CGPath { }*)arg1;
- (void)setEmitterRects:(id)arg1;
- (void)setSpinBias:(float)arg1;
- (void)setUpdateInterval:(double)arg1;
- (float)spinBias;
- (double)updateInterval;

@end