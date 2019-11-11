/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBRecentAppLayouts : NSObject <SBApplicationRestrictionObserver> {
    NSDictionary * _allRecentDisplayItemsForBundleIdentifiers;
    NSMutableArray * _allRecents;
    NSDictionary * _allRecentsForBundleIdentifiers;
    SBApplicationController * _applicationController;
    NSMutableSet * _appsAllowedWhileHidden;
    SBAppSwitcherDefaults * _defaults;
    <SBRecentAppLayoutsDelegate> * _delegate;
    SBIconController * _iconController;
    SBRecentAppLayoutsPersister * _persister;
    SBMainDisplaySceneManager * _sceneManager;
    <BSInvalidatable> * _stateCaptureInvalidatable;
    NSDictionary * _unhiddenRecentDisplayItemsForBundleIdentifiers;
    NSMutableArray * _unhiddenRecents;
    NSDictionary * _unhiddenRecentsForBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBRecentAppLayoutsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAllAppsToModel;
- (void)_allowAppToAppearWhileHidden:(id)arg1;
- (id)_changeDescriptionForFilteringAppLayouts:(id)arg1 withDisplayItemTest:(id /* block */)arg2;
- (id)_changeDescriptionForFilteringRestrictedOrUnsupportedAppsFromAppLayouts:(id)arg1;
- (id)_changeDescriptionForFilteringRestrictedUnsupportedAndInvalidAppsFromAppLayouts:(id)arg1;
- (void)_disallowAppFromAppearingWhileHidden:(id)arg1;
- (id)_displayItemLayoutRolesFromLegacyPrefsForLoadedDisplayItems:(id)arg1;
- (void)_filterRestrictedOrUnsupportedAppsFromRecents;
- (void)_filterRestrictedUnsupportedAndInvalidAppsFromRecents;
- (void)_iconVisibilityDidChange:(id)arg1;
- (void)_installedApplicationsDidChange:(id)arg1;
- (bool)_isApplicationSupported:(id)arg1;
- (bool)_isDisplayItemRestrictedOrUnsupported:(id)arg1;
- (bool)_isExistingSceneIdentifierValidForClaimedMultiwindowSupportInDisplayItem:(id)arg1;
- (id)_legacyAppLayoutForItem:(id)arg1 layoutRole:(long long)arg2;
- (id)_legacyAppLayoutsForDisplayItems:(id)arg1 layoutRolesMapping:(id)arg2;
- (void)_loadPPTAppsIntoModel;
- (bool)_loadStashedModelAtPath:(id)arg1;
- (id)_migrateDisplayItemIfNeeded:(id)arg1;
- (void)_persistSoon;
- (void)_persistSynchronously;
- (id)_recentDisplayItemsFromLegacyPrefs;
- (id)_recentsFromPrefs;
- (void)_saveRecents;
- (void)_setRecents:(id)arg1 notifyForChangeDescription:(id)arg2;
- (void)_setUpStashedModelSettingsOutlets;
- (bool)_stashModelToPath:(id)arg1;
- (void)_validateAndUpdateRecents:(id)arg1;
- (void)addToFront:(id)arg1;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)hide:(id)arg1;
- (id)init;
- (id)initWithUserDefaults:(id)arg1 persister:(id)arg2 iconController:(id)arg3 applicationController:(id)arg4 sceneManager:(id)arg5;
- (id)recentDisplayItemsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(bool)arg2;
- (id)recentsForBundleIdentifier:(id)arg1 includingHiddenAppLayouts:(bool)arg2;
- (id)recentsIncludingHiddenAppLayouts:(bool)arg1;
- (void)remove:(id)arg1;
- (void)removeAppLayouts:(id)arg1;
- (void)replaceAppLayout:(id)arg1 withAppLayout:(id)arg2;
- (void)setDelegate:(id)arg1;

@end