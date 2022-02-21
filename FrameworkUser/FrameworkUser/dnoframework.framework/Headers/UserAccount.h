//
//  UserAccount.h
//  dnoframework
//
//  Created by Daniel No on 4/21/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class UserInfo;

@interface UserAccount : NSObject

@property(nonatomic,strong) UserInfo *userInfo;


-(void)showUserInfo;


@end

NS_ASSUME_NONNULL_END
