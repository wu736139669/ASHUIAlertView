# ASHUIAlertView

可直接调用这个方法，直接使用block代替之前的delegate回调。
比传统的UIAlertView好用的地方就是block代替了delegate.

+ (id)showAlertWithTitle:(NSString *)title
                 message:(NSString *)message
               completionBlock:(void (^)(NSUInteger buttonIndex, EMAlertView *alertView))block
       cancelButtonTitle:(NSString *)cancelButtonTitle
       otherButtonTitles:(NSString *)otherButtonTitles, ...;
