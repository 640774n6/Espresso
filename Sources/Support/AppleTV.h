//AppleTV 5.1

@protocol BRAppliance <NSObject>
- (id)initWithApplianceInfo:(id)applianceInfo;
- (id)applianceCategories;
- (id)applianceController;
- (id)applianceInfo;
- (id)controllerForIdentifier:(id)identifier args:(id)args;
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;
- (BOOL)handlePlay:(id)play userInfo:(id)info;
- (id)identifierForContentAlias:(id)contentAlias;
- (id)topShelfController;
@end

@interface BRSingleton: NSObject
+ (id)allocWithZone:(NSZone *)zone;	// 0x3037190d
+ (id)sharedInstance;	// 0x30371809
- (id)autorelease;	// 0x303719e9
- (id)copyWithZone:(NSZone *)zone;	// 0x303719dd
- (oneway void)release;	// 0x303719e5
- (id)retain;	// 0x303719e1
- (unsigned)retainCount;	// 0x303719ed
@end

@interface BRImage : NSObject
+ (id)imageWithCGImageRef:(CGImageRef)cgimageRef;	// 0x3023cb7d
+ (id)imageWithData:(id)data;	// 0x3023cb39
+ (id)imageWithName:(id)name ofType:(id)type inBundle:(id)bundle;	// 0x3023cca9
+ (id)imageWithPDFURL:(id)pdfurl;	// 0x3023cbc1
+ (id)imageWithPath:(id)path;	// 0x3023cad1
+ (id)imageWithRotationFromData:(id)data;	// 0x3023cd99
+ (id)imageWithRotationFromPath:(id)path;	// 0x3023cd59
+ (id)imageWithRotationFromURL:(id)url;	// 0x3023cd01
+ (id)imageWithURL:(id)url;	// 0x3023ca8d
- (id)initWithCGImageRef:(CGImageRef)cgimageRef;	// 0x3023cdf1
- (id)initWithData:(id)data;	// 0x3023d07d
- (id)initWithURL:(id)url;	// 0x3023ced1
- (void)_initializeCGImageWithRotation;	// 0x3023de0d
- (id)accessibilityLabel;	// 0x3023d7b1
- (float)aspectRatio;	// 0x3023d3fd
- (id)croppedImageForSize:(CGSize)size;	// 0x3023d8c1
- (void)dealloc;	// 0x3023d239
- (id)deletterboxedImage;	// 0x3023d4e9
- (void)drawImageInContext:(CGContextRef)context rect:(CGRect)rect;	// 0x3023d2d9
- (BOOL)enableCache;	// 0x3023d4d9
- (CGImageRef)image;	// 0x3023d30d
- (BOOL)isAccessibilityElement;	// 0x3023d799
- (BOOL)isImageBufferInMemory;	// 0x3023dc85
- (BOOL)isPowerOfTwo;	// 0x3023d441
- (CGRect)largestSquareRect;	// 0x3023dac1
- (id)mapImageWithSourceRect:(CGRect)sourceRect toSize:(CGSize)size;	// 0x3023d805
- (int)orientation;	// 0x3023dc95
- (CGSize)pixelBounds;	// 0x3023d3d1
- (void)purgeRawData;	// 0x303685dd
- (id)rawData;	// 0x303685d9
- (BOOL)rotationEnabled;	// 0x3023dca5
- (void)setAccessibilityLabel:(id)label;	// 0x3023d7c1
- (void)setEnableCache:(BOOL)cache;	// 0x3023d4a9
- (BOOL)sourceRequiresRotation;	// 0x3023d48d
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)aspectRatioLimit;	// 0x3023dba1
@end

@interface BRApplianceInfo: NSObject
+ (id)infoForApplianceDescription:(id)applianceDescription;	// 0x30245f25
- (id)_initWithMutableDictionary:(id)mutableDictionary;	// 0x30245dc9
- (id)applianceCategoryDescriptors;	// 0x30246281
- (void)dealloc;	// 0x30245e15
- (unsigned)hash;	// 0x30245ed9
- (BOOL)hideIfNoCategories;	// 0x302462a9
- (id)info;	// 0x302462f1
- (BOOL)isEqual:(id)equal;	// 0x30245e61
- (id)key;	// 0x30246151
- (id)localizedStringsFileName;	// 0x30246231
- (id)name;	// 0x30246179
- (float)preferredOrder;	// 0x302461a1
- (BOOL)primaryAppliance;	// 0x30246111
- (id)principalClassName;	// 0x30246259
- (id)requiredRemoteMediaTypes;	// 0x30246209
- (void)setInfo:(id)info;	// 0x30246301
- (id)supportedMediaTypes;	// 0x302461e1
@end

@interface BRBaseAppliance: NSObject <BRAppliance>
- (id)init;	// 0x30246325
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x30246329
- (BOOL)_anySharesAvailable;	// 0x302472b1
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x30247345
- (id)_applianceCategories;	// 0x30246c6d
- (BOOL)_isCategoryWithIdentifier:(id)identifier memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x30247225
- (id)accessibilityLabel;	// 0x30246b29
- (id)alertControllerForNoContent;	// 0x30246a55
- (id)alertControllerForNoRemoteContent;	// 0x30246ab5
- (id)applianceCategories;	// 0x30246789
- (id)applianceCategoryDescriptions;	// 0x30246b99
- (id)applianceController;	// 0x302468cd
- (id)applianceInfo;	// 0x30246b61
- (id)baseMediaType;	// 0x30246655
- (id)categoryWithIdentifier:(id)identifier;	// 0x302469bd
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x302468c9
- (void)dealloc;	// 0x3024647d
- (id)description;	// 0x302465d5
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x302468d1
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x302468d5
- (unsigned)hash;	// 0x30246589
- (id)identifierForContentAlias:(id)contentAlias;	// 0x302468c5
- (BOOL)isEqual:(id)equal;	// 0x30246511
- (id)loadCategories;	// 0x30246bc1
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x302468d9
- (int)noContentBRError;	// 0x30246aad
- (int)noRemoteContentBRError;	// 0x30246b0d
- (BOOL)previewError;	// 0x30246b15
- (id)previewErrorIconImage;	// 0x30246b21
- (id)previewErrorSubtext;	// 0x30246b1d
- (id)previewErrorText;	// 0x30246b19
- (void)reloadCategories;	// 0x30246bd1
- (void)setApplianceInfo:(id)info;	// 0x30246b75
- (id)topShelfController;	// 0x30246b25
@end

@interface BRApplianceManager: BRSingleton
+ (void)setSingleton:(id)singleton;	// 0x303234b5
+ (void)showMainMenu;	// 0x303234c5
+ (id)singleton;	// 0x303234a5
- (id)init;	// 0x30323521
- (void)_applianceDidReloadCategories:(id)_appliance;	// 0x30323819
- (id)_applianceForInfo:(id)info;	// 0x30324381
- (id)_controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x30323f01
- (void)_handleLanguageChangedNotification:(id)notification;	// 0x30324371
- (void)_handleParentalControlsChangedNotification:(id)notification;	// 0x30324361
- (BOOL)_handlePlay:(id)play userInfo:(id)info;	// 0x303241e5
- (void)_invalidateArrangedAppliances;	// 0x3032446d
- (id)_loadApplianceAtPath:(id)path;	// 0x303248d5
- (void)_loadAppliances;	// 0x30324539
- (BOOL)_shouldLoadApp:(id)app;	// 0x3032447d
- (id)applianceForInfo:(id)info;	// 0x303237dd
- (id)applianceIdentifierToApplianceDictionary;	// 0x30323ec9
- (id)applianceInfoForApplianceIdentifier:(id)applianceIdentifier;	// 0x303237a5
- (id)applianceInfoList;	// 0x30323771
- (id)appliances;	// 0x30323e91
- (id)arrangedAppliances;	// 0x30323661
- (id)controllerForApplianceInfo:(id)applianceInfo identifier:(id)identifier args:(id)args;	// 0x30323bc1
- (id)controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x30323bf1
- (id)controllerForMerchant:(id)merchant;	// 0x30323bad
- (void)dealloc;	// 0x303235dd
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x30323d89
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x30323e0d
- (void)loadAppliances;	// 0x30323671
- (void)setApplianceIdentifierToApplianceDictionary:(id)applianceDictionary;	// 0x30323edd
- (void)setAppliances:(id)appliances;	// 0x30323ea5
@end

@interface BRMerchantInfo: NSObject
+ (id)infoWithVendorBag:(id)vendorBag;	// 0x303487e1
- (id)initWithVendorBag:(id)vendorBag;	// 0x3034881d
- (id)_featureCode;	// 0x303491bd
- (id)appDictionary;	// 0x30349191
- (id)authType;	// 0x30348ebd
- (id)bootstrapResourceURL;	// 0x30348ee9
- (id)bootstrapResourceVersion;	// 0x30348f15
- (void)dealloc;	// 0x30348915
- (int)defaultParentalControlsAccessMode;	// 0x30349025
- (BOOL)enabled;	// 0x30348a2d
- (BOOL)enabledInBag;	// 0x30348b7d
- (id)featureName;	// 0x30348995
- (id)feedResources;	// 0x30349265
- (BOOL)hasBeenRemoved;	// 0x30348b39
- (id)javascriptURL;	// 0x30348f41
- (id)maximumVersion;	// 0x30349101
- (id)menuIconURL;	// 0x30348cc9
- (id)menuIconURLVersion;	// 0x30348df5
- (id)menuTitle;	// 0x30348c71
- (id)merchantID;	// 0x30348ca9
- (id)metadata;	// 0x30349245
- (id)minimumRequiredVersion;	// 0x303490bd
- (float)preferredOrder;	// 0x30348f6d
- (id)rootURL;	// 0x30348e65
- (void)setEnabled:(BOOL)enabled;	// 0x30348ab5
- (void)setFeatureName:(id)name;	// 0x303489ed
- (void)setFeedResources:(id)resources;	// 0x30349275
- (void)setMetadata:(id)metadata;	// 0x30349255
- (id)supportURL;	// 0x30349165
- (id)topShelfURL;	// 0x30348e91
- (void)useDefaultEnablement;	// 0x30348c41
- (BOOL)usesParentalControls;	// 0x30348fe1
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x30348975
@end

@interface BRMerchant: NSObject 
+ (id)flagstaff;	// 0x301d8bd1
+ (id)itms;	// 0x301d8b4d
+ (id)merchantForControl:(id)control;	// 0x3034803d
+ (id)merchantForControl:(id)control defaultMerchant:(id)merchant;	// 0x30348051
+ (id)merchantForObject:(id)object;	// 0x30347d55
+ (id)merchantForObject:(id)object defaultMerchant:(id)merchant;	// 0x30347d69
+ (id)merchantWithClosestAffinityToURL:(id)url;	// 0x303480ad
+ (id)sedona;	// 0x301d8b8d
- (id)initWithCoder:(id)coder;	// 0x303482a5
- (id)initWithIdentifier:(id)identifier;	// 0x30348211
- (id)initWithVendorBag:(id)vendorBag;	// 0x30348181
- (id)accountType;	// 0x303484c5
- (void)assignToControl:(id)control;	// 0x3034865d
- (BOOL)assignToObject:(id)object;	// 0x3034851d
- (Class)catalogAgent;	// 0x301d8c11
- (id)copyWithZone:(NSZone *)zone;	// 0x303482a1
- (void)dealloc;	// 0x303482ad
- (id)description;	// 0x30348329
- (BOOL)enabled;	// 0x303484c9
- (void)encodeWithCoder:(id)coder;	// 0x303482a9
- (id)evaluatePlist:(id)plist;	// 0x303487d5
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x30348695
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x303486b9
- (BOOL)hasAffinityToURL:(id)url;	// 0x303487dd
- (id)identifier;	// 0x3034849d
- (id)info;	// 0x3034844d
- (id)localizedStringForKey:(id)key;	// 0x303487c9
- (id)merchantErrorForError:(id)error;	// 0x303487d1
- (id)playerDelegate;	// 0x303487d9
- (oneway void)release;	// 0x30348295
- (id)retain;	// 0x30348291
- (unsigned)retainCount;	// 0x30348299
- (void)setEnabled:(BOOL)enabled;	// 0x303484f1
- (void)setInfo:(id)info;	// 0x3034845d
- (BOOL)updateWithVendorBag:(id)vendorBag;	// 0x303483c9
@end

@interface ATVMerchant: BRMerchant
- (id)initWithIdentifier:(id)identifier;	// 0x301d8c2d
- (BOOL)assignToObject:(id)object;	// 0x301d8df1
- (void)clearFeedResources;	// 0x301d91d1
- (void)dealloc;	// 0x301d8d91
- (id)evaluatePlist:(id)plist;	// 0x301d8f81
- (id)feedResourceNamed:(id)named;	// 0x301d8fa5
- (id)localizedStringForKey:(id)key;	// 0x301d8f45
- (id)rootController;	// 0x301d8fa1
- (id)sessionResource;	// 0x301d91f1
- (void)setFeedResource:(id)resource named:(id)named;	// 0x301d91b1
@end

@interface ATVMerchantCoordinator: BRSingleton
+ (void)_bootstrapCupidAccountsAndAuthentication;	// 0x303ecce1
+ (void)setSingleton:(id)singleton;	// 0x303ece11
+ (id)singleton;	// 0x303ece01
- (id)init;	// 0x303ece21
- (void)_cleanUpAfterLegacyMerchant:(id)merchant;	// 0x303ee5c9
- (void)_cleanupAfterMerchantsHaveBeenRemoved;	// 0x303ee4a5
- (void)_handleParentalControlsChangedNotification:(id)notification;	// 0x303ed085
- (void)_loadAddSiteMerchants;	// 0x303ed869
- (id)_loadedMerchantsFilterPredicate;	// 0x303ed095
- (id)_localBags;	// 0x303ed781
- (void)_musicStorePartnerDataUpdated;	// 0x303ee821
- (id)_newMerchantWithIdentifier:(id)identifier;	// 0x303edd55
- (void)_registerAccountAndAuthenticatorForMerchant:(id)merchant;	// 0x303ede69
- (void)_updateMerchants;	// 0x303ed661
- (void)_updateMerchantsWithVendorBags:(id)vendorBags;	// 0x303ed341
- (id)allMerchants;	// 0x303ee8dd
- (void)dealloc;	// 0x303ecf09
- (id)loadedMerchants;	// 0x303ee8a9
- (id)merchantWithIdentifier:(id)identifier;	// 0x303ecfc9
- (void)setAllMerchants:(id)merchants;	// 0x303ee8ed
- (void)setLoadedMerchants:(id)merchants;	// 0x303ee8b9
@end

@protocol BRFocusContainer <NSObject>
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;
- (id)focusCandidates;
- (id)focusObjectForCandidate:(id)candidate;
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;
@end

@protocol BRResponder <NSObject>
- (BOOL)brEventAction:(id)action;
- (BOOL)brKeyEvent:(id)event;
@end

@interface BRControl: NSObject <BRFocusContainer, BRResponder>
+ (id)control;	// 0x30239729
+ (id)controlWithScaledFrame:(CGRect)scaledFrame;	// 0x30311a39
+ (Class)layerClass;	// 0x30239771
- (id)init;	// 0x3023978d
- (id)initWithLayout:(id)layout;	// 0x302395c5
- (void)_axPrintSubviews:(int)subviews string:(id)string;	// 0x3023fb99
- (id)_axSubviews;	// 0x3023fcf5
- (id)_axSuperviews;	// 0x3023fafd
- (BOOL)_changeFocusTo:(id)to;	// 0x3023c16d
- (void)_dumpControlTree;	// 0x3023c815
- (void)_dumpFocusTree;	// 0x3023c609
- (BOOL)_focusControlTreeForEvent:(id)event nearPoint:(CGPoint)point;	// 0x3023c075
- (BOOL)_focusControlTreeWithDefaults;	// 0x3023c00d
- (id)_focusedLeafControl;	// 0x3023c42d
- (CGPoint)_focusedPointForEvent:(id)event;	// 0x3023befd
- (id)_initialFocus;	// 0x3023c4a1
- (void)_insertSingleControl:(id)control atIndex:(long)index;	// 0x3023b86d
- (id)_parentScrollControl;	// 0x302be42d
- (void)_reevaluateFocusTree;	// 0x3023c44d
- (void)_removeAllControls;	// 0x3023bb5d
- (void)_removeControl:(id)control;	// 0x3023ba3d
- (void)_resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x3023bbcd
- (void)_resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x3023bc95
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x302be4b1
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x302be4e1
- (void)_scrollingCompleted;	// 0x302be2f5
- (void)_scrollingInitiated;	// 0x302be341
- (void)_setControlFocused:(BOOL)focused;	// 0x3023c38d
- (void)_setFocus:(id)focus;	// 0x3023c209
- (CGRect)_visibleRectOfControl:(id)control;	// 0x302be455
- (void)_visibleScrollRectChanged;	// 0x302be521
- (BOOL)acceptsFocus;	// 0x3023b619
- (id)accessibilityAncestor:(Class)ancestor;	// 0x3023f9a9
- (id)accessibilityControls;	// 0x3023f94d
- (BOOL)accessibilityElementIsHidden;	// 0x3023f9f1
- (BOOL)accessibilityIsDescendant:(id)descendant;	// 0x3023f95d
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x3023fa6d
- (id)actionForKey:(id)key;	// 0x3023b80d
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x30239ec1
- (id)actions;	// 0x3023b84d
- (BOOL)active;	// 0x3023a86d
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x3023b78d
- (void)addControl:(id)control;	// 0x3023a97d
- (CGAffineTransform)affineTransform;	// 0x3023a2e5
- (CGPoint)anchorPoint;	// 0x3023a271
- (id)animationForKey:(id)key;	// 0x3023b7ad
- (unsigned)autoresizingMask;	// 0x3023a52d
- (BOOL)avoidsCursor;	// 0x3023b6f1
- (CGColorRef)backgroundColor;	// 0x3023ae75
- (id)badge;	// 0x30286f65
- (CGColorRef)borderColor;	// 0x3023b20d
- (float)borderWidth;	// 0x3023b24d
- (CGRect)bounds;	// 0x3023a21d
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;	// 0x3023c539
- (BOOL)brEventAction:(id)action;	// 0x30239ac5
- (BOOL)brKeyEvent:(id)event;	// 0x30239d21
- (int)contentMode;	// 0x3023b00d
- (CGAffineTransform)contentModeTransformForSize:(CGSize)size;	// 0x3023a315
- (long)controlCount;	// 0x3023ad25
- (void)controlDidDisplayAsModalDialog;	// 0x30327575
- (id)controlForPoint:(CGPoint)point;	// 0x3023b785
- (void)controlWasActivated;	// 0x3023a87d
- (void)controlWasDeactivated;	// 0x3023a8c1
- (void)controlWasFocused;	// 0x3023b695
- (void)controlWasUnfocused;	// 0x3023b699
- (id)controls;	// 0x3023acf9
- (CGPoint)convertPoint:(CGPoint)point fromControl:(id)control;	// 0x3023a671
- (CGPoint)convertPoint:(CGPoint)point toControl:(id)control;	// 0x3023a6cd
- (CGRect)convertRect:(CGRect)rect fromControl:(id)control;	// 0x3023a729
- (CGRect)convertRect:(CGRect)rect toControl:(id)control;	// 0x3023a78d
- (void)dealloc;	// 0x3023981d
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;	// 0x3023c605
- (id)defaultFocus;	// 0x3023b579
- (void)drawInContext:(CGContextRef)context;	// 0x3023ae0d
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x30239ead
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;	// 0x3023c585
- (id)eventDelegate;	// 0x30239fb1
- (id)firstControlNamed:(id)named;	// 0x3023a945
- (id)focusCandidates;	// 0x3023c4f5
- (CGRect)focusCursorFrame;	// 0x3023b721
- (id)focusObjectForCandidate:(id)candidate;	// 0x3023c571
- (id)focusedControl;	// 0x3023b4d5
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x3023b589
- (CGRect)frame;	// 0x3023a0d1
- (BOOL)handlePlayButton:(id)button;	// 0x3018fd85
- (id)identifier;	// 0x30239a9d
- (BOOL)ignoreDirectionalInfoForFocus;	// 0x30239fe9
- (id)inheritedValueForKey:(id)key;	// 0x30239d91
- (BOOL)inhibitsFocusForChildren;	// 0x3023b65d
- (BOOL)inhibitsScrollFocusForChildren;	// 0x3023b685
- (id)initialFocus;	// 0x3023b31d
- (void)insertControl:(id)control above:(id)above;	// 0x3023aa01
- (void)insertControl:(id)control atIndex:(long)index;	// 0x3023a9c1
- (void)insertControl:(id)control below:(id)below;	// 0x3023aa75
- (BOOL)isFocused;	// 0x3023b69d
- (BOOL)isHidden;	// 0x3023aef5
- (id)keyEventTargetControl;	// 0x30239fa1
- (id)layer;	// 0x30239a15
- (id)layerForBacking;	// 0x302399bd
- (void)layoutSubcontrols;	// 0x3023adad
- (void)layoutSublayersOfLayer:(id)layer;	// 0x30239ed5
- (void)mapDataObject:(id)object withMappings:(id)mappings;	// 0x3017d669
- (BOOL)masksToBounds;	// 0x3023ae31
- (id)name;	// 0x3023a925
- (id)object;	// 0x30239a4d
- (float)opacity;	// 0x3023aeb5
- (id)parent;	// 0x3023a835
- (id)parentScrollControl;	// 0x302be409
- (CGPoint)position;	// 0x3023a125
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x3023c515
- (id)preferredActionForKey:(id)key;	// 0x3023b789
- (float)preferredCursorRadius;	// 0x30286f61
- (void)removeAllAnimations;	// 0x3023b7ed
- (void)removeAnimationForKey:(id)key;	// 0x3023b7cd
- (void)removeFromParent;	// 0x3023ad5d
- (id)root;	// 0x3023a7f1
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0x302be421
- (void)scrollPoint:(CGPoint)point;	// 0x302be38d
- (void)scrollRectToVisible:(CGRect)visible;	// 0x302be3a9
- (void)scrollingCompleted;	// 0x302be419
- (void)scrollingInitiated;	// 0x302be41d
- (id)selectionHandler;	// 0x3023b761
- (void)setAcceptsFocus:(BOOL)focus;	// 0x3023b5d9
- (void)setAccessibilityOutputsRangeForChildren:(BOOL)children;	// 0x3023fac1
- (void)setActions:(id)actions;	// 0x3023b82d
- (void)setAffineTransform:(CGAffineTransform)transform;	// 0x3023a2a1
- (void)setAnchorPoint:(CGPoint)point;	// 0x3023a251
- (void)setAutoresizingMask:(unsigned)mask;	// 0x3023a51d
- (void)setAvoidsCursor:(BOOL)cursor;	// 0x3023b6ad
- (void)setBackgroundColor:(CGColorRef)color;	// 0x3023ae55
- (void)setBorderColor:(CGColorRef)color;	// 0x3023b1ed
- (void)setBorderWidth:(float)width;	// 0x3023b22d
- (void)setBounds:(CGRect)bounds;	// 0x3023a155
- (void)setContentMode:(int)mode;	// 0x3023af19
- (void)setControls:(id)controls;	// 0x3023ab15
- (void)setDefaultFocus:(id)focus;	// 0x3023b4e5
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x3023b781
- (void)setEventDelegate:(id)delegate;	// 0x30239fc5
- (BOOL)setFocusToGlyphNamed:(id)glyphNamed;	// 0x3038ddbd
- (void)setFocusedControl:(id)control;	// 0x3023b3f5
- (void)setFrame:(CGRect)frame;	// 0x3023a009
- (void)setHidden:(BOOL)hidden;	// 0x3023aed5
- (void)setIdentifier:(id)identifier;	// 0x30239a75
- (void)setIgnoreDirectionalInfoForFocus:(BOOL)focus;	// 0x30239ff9
- (void)setInhibitsFocusForChildren:(BOOL)children;	// 0x3023b629
- (void)setInhibitsScrollFocusForChildren:(bool)children;	// 0x3023b66d
- (void)setKeyEventTargetControl:(id)control;	// 0x30239f09
- (void)setMasksToBounds:(BOOL)bounds;	// 0x3023ae11
- (void)setName:(id)name;	// 0x3023a905
- (void)setNeedsDisplay;	// 0x3023adb1
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x3023add1
- (void)setNeedsLayout;	// 0x3023ad8d
- (void)setObject:(id)object;	// 0x30239a25
- (void)setOpacity:(float)opacity;	// 0x3023ae95
- (void)setPosition:(CGPoint)position;	// 0x3023a105
- (void)setSelectionHandler:(id)handler;	// 0x3023b745
- (void)setSubcontrols:(id)subcontrols;	// 0x3023ab05
- (void)setValue:(id)value forKey:(id)key cascade:(BOOL)cascade;	// 0x30239dd9
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x30239d71
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3023a53d
- (void)sizeToFit;	// 0x3023a575
- (id)subcontrols;	// 0x3023aacd
- (int)touchSensitivity;	// 0x3023b77d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x30239d51
- (CGRect)visibleScrollRect;	// 0x302be3e1
- (void)visibleScrollRectChanged;	// 0x302be3d1
- (void)windowMaxBoundsChanged;	// 0x3023b26d
@end

@interface BRController: BRControl
+ (id)controllerWithContentControl:(id)contentControl;	// 0x30249d05
- (id)init;	// 0x30249d41
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x3024a7b9
- (void)_handleWindowMaxBoundsChanged;	// 0x3024a47d
- (void)addLabel:(id)label;	// 0x3024a385
- (BOOL)brEventAction:(id)action;	// 0x30249f19
- (BOOL)canBeRemovedFromStack;	// 0x3024a381
- (int)contextMenuDimOption;	// 0x3024a681
- (BOOL)contextMenuIsVisible;	// 0x3024a609
- (id)controlForContextMenuPositioning;	// 0x3024a601
- (id)controlForContextMenuStart;	// 0x3024a605
- (id)controlToDim;	// 0x3024a67d
- (void)controlWasDeactivated;	// 0x30249ed9
- (void)dealloc;	// 0x30249ded
- (BOOL)depthLimited;	// 0x3024a451
- (id)description;	// 0x3024a1fd
- (void)dismissContextMenu;	// 0x3024a635
- (long)errorNumberForNoContent;	// 0x3024a465
- (id)hostingController;	// 0x3024a5ed
- (BOOL)isLabelled:(id)labelled;	// 0x3024a409
- (BOOL)isNetworkDependent;	// 0x3024a439
- (BOOL)isValidAfterDataUpdate;	// 0x3024a461
- (id)providersForContextMenu;	// 0x3024a5fd
- (BOOL)recreateOnReselect;	// 0x3024a43d
- (void)removeLabel:(id)label;	// 0x3024a3e9
- (void)setDepthLimited:(BOOL)limited;	// 0x3024a441
- (void)setHostingController:(id)controller;	// 0x30249ec9
- (void)setStack:(id)stack;	// 0x3024a331
- (void)setWasBuriedBlock:(id)block;	// 0x3024a595
- (void)setWasExhumedBlock:(id)block;	// 0x3024a5c9
- (void)setWasPoppedBlock:(id)block;	// 0x3024a561
- (void)setWasPushedBlock:(id)block;	// 0x3024a52d
- (id)stack;	// 0x3024a341
- (BOOL)topOfStack;	// 0x3024a351
- (id)transitionType;	// 0x3024a46d
- (void)wasBuried;	// 0x3024a765
- (id)wasBuriedBlock;	// 0x3024a585
- (void)wasExhumed;	// 0x3024a799
- (id)wasExhumedBlock;	// 0x3024a5b9
- (void)wasPopped;	// 0x3024a6ed
- (id)wasPoppedBlock;	// 0x3024a551
- (void)wasPushed;	// 0x3024a685
- (id)wasPushedBlock;	// 0x3024a51d
@end

@interface BRViewController: BRController
- (void)_handleWindowMaxBoundsChanged;	// 0x30260889
- (void)dealloc;	// 0x30260731
- (void)layoutSubcontrols;	// 0x3026081d
- (void)setView:(id)view;	// 0x3026077d
- (id)view;	// 0x3026080d
@end

@interface ATVMainMenuController: BRViewController
+ (BOOL)automaticallyNotifiesObserversOfInternetMerchants;	// 0x303db915
+ (id)mainMenu;	// 0x303db0ed
- (id)init;	// 0x303db15d
- (void)_animateContainerViewToPosition:(CGPoint)position;	// 0x303dd241
- (id)_blackBrickImage;	// 0x303df061
- (void)_cacheImageForAppliance:(id)appliance;	// 0x303df5e1
- (void)_cacheImageForMerchant:(id)merchant;	// 0x303df73d
- (void)_cleanupLayoutDocument;	// 0x303dc281
- (void)_coalescedUpdateImagesForChangedAppliances;	// 0x303dfb95
- (void)_coalescedUpdateImagesForChangedMerchants;	// 0x303dfa0d
- (id)_extraInfoForAppliance:(id)appliance;	// 0x303df309
- (void)_handleImageManagerImageUpdatedNotification:(id)notification;	// 0x303df815
- (BOOL)_handleRemoteEvent:(id)event;	// 0x303de8fd
- (BOOL)_handleTouchEvent:(id)event;	// 0x303dead1
- (void)_handleWindowMaxBoundsChanged;	// 0x303dbed9
- (id)_identifierFromImageID:(id)imageID;	// 0x303df51d
- (id)_imageBaseNameFromAppliance:(id)appliance;	// 0x303df3c1
- (id)_imageForAppliance:(id)appliance;	// 0x303df145
- (id)_imageForMerchant:(id)merchant;	// 0x303df0ad
- (id)_imageNameFromAppliance:(id)appliance;	// 0x303df415
- (id)_imageNameFromMerchant:(id)merchant;	// 0x303df2d1
- (id)_imageNameWithBaseName:(id)baseName;	// 0x303df22d
- (void)_layoutContainerView;	// 0x303dc4fd
- (void)_layoutViews;	// 0x303dc66d
- (id)_newBackgroundWithImageNamed:(id)imageNamed;	// 0x303dcc79
- (id)_newInternetContentGrid;	// 0x303dcfc5
- (id)_newMainApplicationsGrid;	// 0x303dcd2d
- (id)_prefsVersionKeyFromName:(id)name;	// 0x303df44d
- (void)_refreshTopShelfControllers;	// 0x303dcc3d
- (void)_reload;	// 0x303dbe15
- (void)_reloadTopShelf;	// 0x303ddced
- (void)_reloadTopShelfWithoutAnimating;	// 0x303ddbed
- (void)_saveVersion:(id)version forAppID:(id)appID;	// 0x303df4dd
- (void)_scrollApplicationsToVisible;	// 0x303dd785
- (void)_scrollShelfToVisible;	// 0x303dd35d
- (void)_setupTopShelfView;	// 0x303dcb05
- (void)_updateCachedApplianceImages;	// 0x303dbc41
- (void)_updateCachedMerchantImages;	// 0x303dbb95
- (id)_versionForAppID:(id)appID;	// 0x303df4a1
- (id)accessibilityLabel;	// 0x303def0d
- (id)accessibilityScreenContent;	// 0x303deebd
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x303de0c1
- (id)appliances;	// 0x303def45
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x303de3b1
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x303debfd
- (BOOL)canBeRemovedFromStack;	// 0x303deeb9
- (void)controlWasActivated;	// 0x303db8ad
- (void)dealloc;	// 0x303db6f1
- (id)delegate;	// 0x303de1c5
- (void)focusApplianceWithIdentifier:(id)identifier;	// 0x303de1d5
- (id)focusedAppliance;	// 0x303de17d
- (BOOL)handleSelectionForControl:(id)control;	// 0x303deeb5
- (id)imageManager;	// 0x303def79
- (id)internetMerchants;	// 0x303def35
- (void)loadApplication:(id)application;	// 0x303dec01
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x303dc31d
- (void)setAppliances:(id)appliances;	// 0x303def55
- (void)setDelegate:(id)delegate;	// 0x303de1b5
- (void)setFocusedAppliance:(id)appliance;	// 0x303de115
- (void)setInternetMerchants:(id)merchants;	// 0x303db919
- (id)topShelfControllerForApp:(id)app;	// 0x303de2c9
- (void)updateBoundAvailableAppliances;	// 0x303dbced
- (void)updateBoundFocusedControlOfContainerView;	// 0x303dbd79
- (void)updateBoundInternetMerchants;	// 0x303dba85
- (void)updateBoundMusicStoreMerchantInfo;	// 0x303dbd69
- (id)view;	// 0x303dbf3d
@end