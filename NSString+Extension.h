//
//  NSDictionary+Extension.h
//  ESOP
//
//  Created by edison_ou on 16/3/1.
//  Copyright © 2016年 richeninfo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Extension)
+ (NSMutableDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
+ (NSString *)GetJsonStringWithDict:(NSDictionary *)dict;
- (CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;
@end
