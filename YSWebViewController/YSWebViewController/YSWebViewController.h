//
//  WebViewController.h
//  Klup
//
//  Created by eason yi on 2018/11/14.
//  Copyright © 2018年 XXXX Technology Co.,Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

// iPhoneX/iPhoneXS
#define isIphoneX_XS        (YS_ScreenWidth == 375.f && YS_ScreenHeight == 812.f ? YES : NO)
//iPhoneXR/iPhoneXSMax
#define isIphoneXR_XSMax    (YS_ScreenWidth == 414.f && YS_ScreenHeight == 896.f ? YES : NO)
//异性全面屏
#define isFullScreen        (isIphoneX_XS || isIphoneXR_XSMax)

//屏幕相关参数定义
#define YS_ScreenRect       [UIScreen mainScreen].bounds
#define YS_ScreenWidth      [UIScreen mainScreen].bounds.size.width
#define YS_ScreenHeight     [UIScreen mainScreen].bounds.size.height

#define YS_StatusBarHeight      [[UIApplication sharedApplication] statusBarFrame].size.height
#define YS_NavBarHeight         44.0
#define YS_TopBarHeight         (YS_StatusBarHeight + YS_NavBarHeight)
#define YS_BottomHomeBarHeight  (isFullScreen ? 34.0 : 0)
#define YS_ContentHeight        (YS_ScreenHeight - YS_TopBarHeight - YS_BottomHomeBarHeight)

@import WebKit;

@interface YSWebViewController : UIViewController

@property(nonatomic,strong) NSString* url;

@property (nonatomic,weak) CALayer *progressLayer;

@end
