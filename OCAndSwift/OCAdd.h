//
//  OCAdd.h
//  OCAndSwift
//
//  Created by cheny on 2017/4/20.
//  Copyright © 2017年 cheny. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ResultPropertyDelegate <NSObject>
- (NSString*) printResult:(NSInteger)result;
@optional
- (void) saveResult:(NSInteger)result;
@end

@interface OCAdd : NSObject
-(NSInteger)add:(NSInteger)p1 p2:(NSInteger)p2;
@end
