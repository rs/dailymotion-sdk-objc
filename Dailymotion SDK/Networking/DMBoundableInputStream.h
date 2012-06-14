//
//  DMBoundableInputStream.h
//  Dailymotion
//
//  Created by Olivier Poitrey on 15/10/10.
//  Copyright 2010 Dailymotion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DMBoundableInputStream : NSInputStream

@property (nonatomic) NSData *headData;
@property (nonatomic) NSData *tailData;
@property (nonatomic) NSInputStream *middleStream;

- (NSInteger)read:(uint8_t *)buffer maxLength:(NSUInteger)len;
- (BOOL)hasBytesAvailable;

@end
