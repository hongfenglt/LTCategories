//
//  UIButton+LTAdd.h
//  RedMaple
//
//  Created by 洪峰 on 2018/9/4.
//  Copyright © 2018年 洪峰. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, LTButtonEdgeInsetsStyle) {
    LTButtonEdgeInsetsStyleTop,   // image在上，label在下
    LTButtonEdgeInsetsStyleLeft,  // image在左，label在右
    LTButtonEdgeInsetsStyleBottom,// image在下，label在上
    LTButtonEdgeInsetsStyleRight  // image在右，label在左
};

typedef void (^TouchedBlock)(NSInteger tag);

@interface UIButton (LTAdd)

/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)lt_layoutButtonWithEdgeInsetsStyle:(LTButtonEdgeInsetsStyle)style
                           imageTitleSpace:(CGFloat)space;



/**
 添加 addtarget
 */
-(void)addActionHandler:(TouchedBlock)touchHandler;

/**
 *  @brief  使用颜色设置按钮背景
 *
 *  @param backgroundColor 背景颜色
 *  @param state           按钮状态
 */
- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;

/*
 *  @brief
 *
 *  @param frame         frame
 *  @param buttonTitle   标题
 *  @param normalBGColor 未选中的背景色
 *  @param selectBGColor 选中的背景色
 *  @param normalColor   未选中的文字色
 *  @param selectColor   选中的文字色
 *  @param buttonFont    文字字体
 *  @param cornerRadius  圆角值 没有则为0
 *  @param doneBlock     点击事件
 *
 *  @return
 */
-(instancetype)initWithFrame:(CGRect)frame buttonTitle:(NSString *)buttonTitle normalBGColor:(UIColor *)normalBGColor selectBGColor:(UIColor *)selectBGColor
                 normalColor:(UIColor *)normalColor selectColor:(UIColor *)selectColor buttonFont:(UIFont *)buttonFont cornerRadius:(CGFloat )cornerRadius
                   doneBlock:(void(^)(UIButton *))doneBlock;


+(UIButton *)initWithFrame:(CGRect)frame buttonTitle:(NSString *)buttonTitle normalBGColor:(UIColor *)normalBGColor selectBGColor:(UIColor *)selectBGColor
               normalColor:(UIColor *)normalColor selectColor:(UIColor *)selectColor buttonFont:(UIFont *)buttonFont cornerRadius:(CGFloat )cornerRadius
                 doneBlock:(void(^)(UIButton *))doneBlock;

@end

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface APRoundedButton : UIButton

@property (nonatomic, assign) IBInspectable int style;


@end
