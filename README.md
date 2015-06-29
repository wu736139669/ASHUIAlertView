# ASHUIAlertView

可直接调用这个方法，直接使用block代替之前的delegate回调。

+ (id)showAlertWithTitle:(NSString *)title
                 message:(NSString *)message
               completionBlock:(void (^)(NSUInteger buttonIndex, EMAlertView *alertView))block
       cancelButtonTitle:(NSString *)cancelButtonTitle
       otherButtonTitles:(NSString *)otherButtonTitles, ...;
