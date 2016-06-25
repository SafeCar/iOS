//
//  CEARequestCode.h
//  ForLibSDK
//
//  Created by i810 on 16/6/17.
//  Copyright © 2016年 i810. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CEARequestCode : NSObject

/*!
 \brief Succeed
 */
extern NSInteger const CODE_200;

/*!
 \brief Error back data
 */
extern NSInteger const CODE_401;

/*!
 \brief Not found signal
 */
extern NSInteger const CODE_402;

/*!
 \brief Error parameter
 */
extern NSInteger const CODE_403;

/*!
 \brief Description for error code
 */
extern NSString* const CODE_200_DESC;

/*!
 \brief Description for error code
 */
extern NSString* const CODE_401_DESC;

/*!
 \brief Description for error code
 */
extern NSString* const CODE_402_DESC;

/*!
 \brief Description for error code
 */
extern NSString* const CODE_403_DESC;
@end
