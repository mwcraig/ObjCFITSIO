//
//  FITSHeaderLine.h
//  Stif
//
//  Created by Cédric Foellmi on 1/1/12.
//  Copyright (c) 2012 Soft Tenebras Lux. All rights reserved.
//


@interface FITSHeaderLine : NSObject {
@private
	NSString *key;
	NSString *value;
	NSString *comment;
	NSString *rawLine;
	BOOL showRaw;
}

@property(nonatomic, copy, readonly) NSString *key;
@property(nonatomic, copy, readonly) NSString *value;
@property(nonatomic, copy, readonly) NSString *comment;
@property(nonatomic, copy, readonly) NSString *rawLine;
@property(nonatomic, assign) BOOL showRaw;

+ (FITSHeaderLine *)headerLineWithKey:(NSString *)k value:(NSString *)v comment:(NSString *)c raw:(NSString *)r;

- (NSString *)whiteSpaceTrimmedKey;

@end