/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHIconAnimationRootSettings : PTSettings {
    SBHCenterAcceleratedAppSuspendSettings * _centerAcceleratedSuspendSettings;
    SBHCenterAppLaunchSettings * _centerLaunchSettings;
    SBHCenterAppSuspendSettings * _centerSuspendSettings;
    SBHCrossfadeAcceleratedAppSuspendSettings * _crossfadeAcceleratedSuspendSettings;
    SBHCrossfadeAppLaunchSettings * _crossfadeLaunchSettings;
    SBHCrossfadeAppSuspendSettings * _crossfadeSuspendSettings;
    SBHFolderCloseSettings * _folderCloseSettings;
    SBHFolderOpenSettings * _folderOpenSettings;
    double  _maxAppLaunchWallpaperScale;
    double  _maxAppSuspendHintProgress;
    double  _maxFolderCloseHintProgress;
    SBHReducedMotionFadeSettings * _reducedMotionSettings;
    SBHUnlockSettings * _unlockSettings;
}

@property (nonatomic, retain) SBHCenterAcceleratedAppSuspendSettings *centerAcceleratedSuspendSettings;
@property (nonatomic, retain) SBHCenterAppLaunchSettings *centerLaunchSettings;
@property (nonatomic, retain) SBHCenterAppSuspendSettings *centerSuspendSettings;
@property (nonatomic, retain) SBHCrossfadeAcceleratedAppSuspendSettings *crossfadeAcceleratedSuspendSettings;
@property (nonatomic, retain) SBHCrossfadeAppLaunchSettings *crossfadeLaunchSettings;
@property (nonatomic, retain) SBHCrossfadeAppSuspendSettings *crossfadeSuspendSettings;
@property (nonatomic, retain) SBHFolderCloseSettings *folderCloseSettings;
@property (nonatomic, retain) SBHFolderOpenSettings *folderOpenSettings;
@property (nonatomic) double maxAppLaunchWallpaperScale;
@property (nonatomic) double maxAppSuspendHintProgress;
@property (nonatomic) double maxFolderCloseHintProgress;
@property (nonatomic, retain) SBHReducedMotionFadeSettings *reducedMotionSettings;
@property (nonatomic, retain) SBHUnlockSettings *unlockSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)centerAcceleratedSuspendSettings;
- (id)centerLaunchSettings;
- (id)centerSuspendSettings;
- (id)crossfadeAcceleratedSuspendSettings;
- (id)crossfadeLaunchSettings;
- (id)crossfadeSuspendSettings;
- (id)folderCloseSettings;
- (id)folderOpenSettings;
- (double)maxAppLaunchWallpaperScale;
- (double)maxAppSuspendHintProgress;
- (double)maxFolderCloseHintProgress;
- (id)reducedMotionSettings;
- (void)setCenterAcceleratedSuspendSettings:(id)arg1;
- (void)setCenterLaunchSettings:(id)arg1;
- (void)setCenterSuspendSettings:(id)arg1;
- (void)setCrossfadeAcceleratedSuspendSettings:(id)arg1;
- (void)setCrossfadeLaunchSettings:(id)arg1;
- (void)setCrossfadeSuspendSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setFolderCloseSettings:(id)arg1;
- (void)setFolderOpenSettings:(id)arg1;
- (void)setMaxAppLaunchWallpaperScale:(double)arg1;
- (void)setMaxAppSuspendHintProgress:(double)arg1;
- (void)setMaxFolderCloseHintProgress:(double)arg1;
- (void)setReducedMotionSettings:(id)arg1;
- (void)setUnlockSettings:(id)arg1;
- (id)unlockSettings;

@end
