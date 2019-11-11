/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController, SBHomeGestureParticipantDelegate, SBSecureAppObserver> {
    <BSInvalidatable> * _biometricMatchingAssertion;
    unsigned long long  _currentOrientationMask;
    <SBCoverSheetSecureAppEnvironmentViewControllerDelegate> * _delegate;
    SBHomeGestureParticipant * _homeGestureParticipant;
    SBDashBoardHostedAppViewController * _secureAppViewController;
}

@property (nonatomic, readonly) bool contentOccludesBackground;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBCoverSheetSecureAppEnvironmentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHomeGestureParticipant *homeGestureParticipant;
@property (nonatomic, readonly) SBDashBoardHostedAppViewController *secureAppViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_currentSecureAppAction;
- (void)_updateSupportedOrientationsMaskForSecureAppAction;
- (bool)canHostAnApp;
- (bool)contentOccludesBackground;
- (id)delegate;
- (bool)handlesRotationIndependentOfCoverSheet;
- (id)homeGestureParticipant;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)hostedAppSceneHandle;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)initWithSecureAppViewController:(id)arg1;
- (bool)isHostingAnApp;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)arg1 animated:(bool)arg2;
- (void)relinquishHomeGesture;
- (void)requestHomeGestureOwnership;
- (void)secureAppOfTypeDidBegin:(unsigned long long)arg1;
- (void)secureAppOfTypeDidTakeNewAssertion:(unsigned long long)arg1;
- (id)secureAppViewController;
- (void)setDelegate:(id)arg1;
- (void)setHomeGestureParticipant:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)takeHiddenAssertionForHomeGrabber:(id)arg1 animated:(bool)arg2;
- (void)updateHomeGrabberHiddenAssertion:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end