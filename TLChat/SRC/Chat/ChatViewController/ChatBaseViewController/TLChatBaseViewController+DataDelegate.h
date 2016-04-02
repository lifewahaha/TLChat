//
//  TLChatBaseViewController+DataDelegate.h
//  TLChat
//
//  Created by 李伯坤 on 16/3/17.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import "TLChatBaseViewController.h"

@interface TLChatBaseViewController (DataDelegate)

/**
 *  发送消息
 */
- (void)sendMessage:(id<TLMessageProtocol>)message;

@end
