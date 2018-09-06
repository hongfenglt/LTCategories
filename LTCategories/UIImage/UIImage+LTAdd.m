//
//  UIImage+LTAdd.m
//  LTCatrgory
//
//  Created by 洪峰 on 2018/9/6.
//  Copyright © 2018年 洪峰. All rights reserved.
//

#import "UIImage+LTAdd.h"

@implementation UIImage (LTAdd)

+ (UIImage *)lt_imageWithColor:(UIColor *)color {
    return [self lt_imageWithColor:color size:CGSizeMake(1, 1)];
}

+ (UIImage *)lt_imageWithColor:(UIColor *)color size:(CGSize)size {
    if (!color || size.width <= 0 || size.height <= 0) return nil;
    CGRect rect = CGRectMake(0.0f, 0.0f, size.width, size.height);
    UIGraphicsBeginImageContextWithOptions(rect.size, NO, 0);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, color.CGColor);
    CGContextFillRect(context, rect);
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}

@end
