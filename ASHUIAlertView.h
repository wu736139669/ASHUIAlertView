//
//  ASHUIAlertView.h
//  Ash_AWord
//
//  Created by xmfish on 15/6/29.
//  Copyright (c) 2015年 ash. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ASHUIAlertView : UIAlertView
/**
 *  弹出提示框
 *
 *  @param title             <#title description#>
 *  @param message           <#message description#>
 *  @param block             <#block description#>
 *  @param cancelButtonTitle <#cancelButtonTitle description#>
 *  @param otherButtonTitles <#otherButtonTitles description#>
 *
 *  @return <#return value description#>
 */
+ (id)showAlertWithTitle:(NSString *)title
                 message:(NSString *)message
         completionBlock:(void (^)(NSUInteger buttonIndex, ASHUIAlertView *alertView))block
       cancelButtonTitle:(NSString *)cancelButtonTitle
       otherButtonTitles:(NSString *)otherButtonTitles, ...;
@end
