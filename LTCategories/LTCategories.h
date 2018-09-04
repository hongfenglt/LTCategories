//
//  LTCategories.h
//  LTCatrgory
//
//  Created by 洪峰 on 2018/9/4.
//  Copyright © 2018年 洪峰. All rights reserved.
//

#import <UIKit/UIKit.h>

#if __has_include(<LTCategories/LTCategories.h>)
FOUNDATION_EXPORT double LTCategoriesVersionNumber;
// Project version string for LTCategories.
FOUNDATION_EXPORT const unsigned char LTCategoriesVersionString[];

#import <LTCategories/UIView+LTFrame.h>
#import <LTCategories/UIView+LTGestureCallbackValues.h>
#improt <LTCategories/UIButton+LTAdd.h>
#import <LTCategories/UIWindow+LTAdd.h>
#improt <LTCategories/NSString+LTAdd.h>
#improt <LTCategories/NSString+LTSize.h>
#improt <LTCategories/UIView+LTAdd.h>
#import <LTCategories/UIFont+LTAdd.h>

#import "LTCategories/NSString+LTSafe.h"
#import "LTCategories/NSArray+LTSafe.h"
#improt "LTCategories/NSDictionary+LTSafe.h"

#else
#import "UIView+LTFrame.h"
#import "UIView+LTGestureCallbackValues.h"
#improt "UIButton+LTAdd.h"
#import "UIWindow+LTAdd.h"
#improt "NSString+LTAdd.h"
#improt "NSString+LTSize.h"
#improt "UIView+LTAdd.h"
#import "UIFont+LTAdd.h"

#import "NSString+LTSafe.h"
#import "NSArray+LTSafe.h"
#improt "NSDictionary+LTSafe.h"
#endif
