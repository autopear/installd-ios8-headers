/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSArray, NSURL, NSString;

__attribute__((visibility("hidden")))
@interface MIBundle : XXUnknownSuperclass {
	NSDictionary* _infoPlistSubset;
	int _bundleType;
	NSArray* _pluginKitBundles;
	NSArray* _frameworkBundles;
	NSURL* _bundleParentDirectoryURL;
	NSString* _bundleName;
}
@property(readonly, assign) BOOL needsDataContainer;
@property(retain) NSURL* bundleParentDirectoryURL;
@property(readonly, assign) int bundleType;
@property(readonly, assign) NSString* bundleName;
@property(readonly, assign) NSURL* bundleURL;
@property(readonly, assign) NSString* identifier;
@property(readonly, assign) NSDictionary* infoPlistSubset;
+(id)bundleWithExtension:(id)extension inDirectory:(id)directory error:(id*)error;
+(id)bundleForURL:(id)url error:(id*)error;
-(void).cxx_destruct;
-(id)description;
-(BOOL)isApplicableToCurrentOSVersionWithError:(id*)error;
-(id)frameworkBundlesWithError:(id*)error;
-(id)pluginKitBundlesWithError:(id*)error;
-(id)initWithBundleInDirectory:(id)directory withExtension:(id)extension error:(id*)error;
-(BOOL)_scanForBundleInDirectory:(id)directory withExtension:(id)extension error:(id*)error;
-(id)initWithBundleURL:(id)bundleURL error:(id*)error;
-(BOOL)_validateWithError:(id*)error;
@end

