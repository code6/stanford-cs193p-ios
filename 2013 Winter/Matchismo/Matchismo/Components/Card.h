//
//  Card.h
//  Matchismo
//
//  Created by Hugo Ferreira on 2013/07/24.
//  Copyright (c) 2013 Mindclick. All rights reserved.
//

#import <Foundation/Foundation.h>

/** Abstract class. */
@interface Card : NSObject

///--------------------------------------------------------------------------------
/// @name Methods to Implement in a Subclass
///--------------------------------------------------------------------------------

///--------------------------------------------------------------------------------
/// @name Card Information
///--------------------------------------------------------------------------------

@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
