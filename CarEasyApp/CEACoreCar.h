//
//  CEACoreCar.h
//  libCarEasyAppsSDK
//
//  Created by i810 on 16/6/16.
//  Copyright © 2016年 i810. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CoreCarSignals.h"

@interface CEACoreCar : NSObject

/*!
 \brief		Set the token base url
 \details   Example: "1-1"  area1-ceasimulator1 -> 1-1
 \param[in] tokenBaseUrlPath{NSString} Token url base
 \internal
 \author    nyt
 \endinternal
 \ingroup
 */
-(void)setTokenBasePath:(NSString*)tokenBaseUrlPath;

/*!
 \brief		Gets the related car signal name value
 \details
 \param[in] signalName{NSString} The car signal name
 \param[in] succes{(^Success)(NSDictionary*)} Block on success
 \param[in] failure{(^Failure)(NSError*)} Block on error
 \internal
 \author    nyt810
 \endinternal
 \ingroup
 */
-(void)getValue:(NSString*)signalName
        Success:(void(^)(NSDictionary*))success
        Failure:(void(^)(NSError*))failure;

/*!
 \brief		Gets the related car signal name values
 \details
 \param[in] signalsName{NSArray} The car signals name array # example:    signalNames = @[signal1,signal2,signal3……]
 \param[in] succes{(^Success)(NSDictionary*)} Block on success
 \param[in] failure{(^Failure)(NSError*)} Block on error
 \internal
 \author    nyt810
 \endinternal
 \ingroup
 */
-(void)getValues:(NSArray*)signalNames
         Success:(void(^)(NSDictionary*))success
         Failure:(void(^)(NSError*))failure;




/*!
 \brief		Set the related car signal value
 \details
 \param[in] signalValue{NSDictionary} The car signal name and value to set ForExample:@{CARSIGNALS_ADAS_AUTO_ROAD_LAMP_SWITHCHING_ON:@"1"}
 \param[in] succes{(^Success)(NSDictionary*)} Block on success
 \param[in] failure{(^Failure)(NSError*)} Block on error
 \internal
 \author    nyt810
 \endinternal
 \ingroup
 */
-(void)setValue:(NSDictionary *)signalValue
        Success:(void(^)(NSDictionary*))success
        Failure:(void(^)(NSError*))failure;

/*!
 \brief		Set the related car signal values
 \details
 \param[in] signalValue{NSDictionary} The car signal name and value to set 
            ForExample:@{CARSIGNALS_ADAS_AUTO_ROAD_LAMP_SWITHCHING_ON:@"1",
                         CARSIGNALS_ADAS_BLIND_SPOT_MONITORING_FUNCTION:@"1"}
 \param[in] succes{(^Success)(NSDictionary*)} Block on success
 \param[in] failure{(^Failure)(NSError*)} Block on error
 \internal
 \author    nyt810
 \endinternal
 \ingroup
 */
-(void)setValues:(NSDictionary*)signalValues
         Success:(void(^)(NSDictionary*))success
         Failure:(void(^)(NSError*))failure;
@end
