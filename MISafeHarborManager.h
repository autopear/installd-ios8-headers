/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface MISafeHarborManager : XXUnknownSuperclass {
}
+(id)defaultManager;
-(id)safeHarborListForType:(int)type withError:(id*)error;
-(BOOL)removeSafeHarborWithIdentifier:(id)identifier ofType:(int)type options:(id)options error:(id*)error;
-(BOOL)registerSafeHarborAtURL:(id)url withOptions:(id)options forIdentifier:(id)identifier ofType:(int)type error:(id*)error;
@end

