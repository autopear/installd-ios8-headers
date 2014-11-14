/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "installd-Structs.h"

@class MIBundleContainer, MIClientConnection, NSURL, NSArray;

__attribute__((visibility("hidden")))
@interface MIApplicationArchiver : XXUnknownSuperclass {
	MIBundleContainer* _appContainer;
	MIClientConnection* _client;
	NSURL* _output;
	NSURL* _hiddenArchsTempPath;
	NSArray* _vpnPluginBundleNames;
	unsigned long long _fileBytesCopied;
	unsigned long long _totalBytesToCopy;
	unsigned long long _totalBytesCopied;
	unsigned _lowPercent;
	unsigned _hiPercent;
}
-(void).cxx_destruct;
-(BOOL)performArchiveWithError:(id*)error;
-(void)_copyHandlerBytesCopied:(long long)copied;
-(int)_redirectForCopier:(BOMCopierRef)copier forPath:(id)path;
-(BOOL)_relpathIsBundleMetadata:(id)metadata;
-(void)_fireCallbackWithStatus:(id)status;
-(void)_fireCallbackWithStatus:(id)status percentComplete:(unsigned)complete;
-(id)initWithAppContainer:(id)appContainer vpnPluginBundleNames:(id)names client:(id)client outputURL:(id)url;
@end

