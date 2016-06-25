//
//  CoreCarSignals.h
//  libCarEasyAppsSDK
//
//  Created by i810 on 16/6/16.
//  Copyright © 2016年 i810. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CoreCarSignals : NSObject

/*!
 * Threshold Alert for crash risk in seconds. (ARC: Alert Risk CRASH)
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 0.1<br>Offset : 0 s<br>Min : 0 s<br>Max : 25.3 s<br>Invalide : 0xFF<br>Unite : s
 */
extern NSString* const CARSIGNALS_ADAS_A_R_C_THRESHOLD;

/*!
 * Automatically switching Full beam to low beam lamps whenever another car is detected with the windshield camera.
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_ADAS_AUTO_ROAD_LAMP_SWITHCHING_ON;

/*!
 * Lights sensor ordering the switch from low beam to full beam (or vice-versa)
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = LowBeam<br>1 = FullBeam
 */
extern NSString* const CARSIGNALS_ADAS_AUTO_ROAD_LAMP_SWITHCHING_STATUS;

/*!
 * Blind Spot Monitoring function state.
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_ADAS_BLIND_SPOT_MONITORING_FUNCTION;

/*!
 * Blind Spot Monitoring function push. This function will warn the driver through the side mirror, whenever a car is detected in the blind spot of the side mirror. The signal is a writing signal to change the state from 0 to 1 or 1 to 0.
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_ADAS_BLIND_SPOT_MONITORING_PUSH;

/*!
 * Blind Spot Monitoring working real time. Left Side. It means that there is a car in the blind spot of the vehicle
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_ADAS_BLIND_SPOT_MONITORING_WORKING_LEFT;

/*!
 * Blind Spot Monitoring working real time. Right Side. It means that there is a car in the blind spot of the vehicle
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_ADAS_BLIND_SPOT_MONITORING_WORKING_RIGHT;

/*!
 * Abnormal left-hand crossing
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_ADAS_LEFT_HAND_CROSSING;

/*!
 * Obstacle visual distance (parking sensor) front left
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b000 = Zone 1 (obstacle very close)<br>0b001 = Zone 2<br>0b010 = Zone 3<br>0b011 = zone 4<br>0b100 = Zone 5<br>0b101 = Zone 6<br>0b110 = Zone 7<br>0b111 = Zone 8 (Obstacle very far)
 */
extern NSString* const CARSIGNALS_ADAS_PARKING_SENSORS_FRONT_LEFT_DISTANCE;

/*!
 * Obstacle visual distance (parking sensor) front center
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b000 = Zone 1 (obstacle very close)<br>0b001 = Zone 2<br>0b010 = Zone 3<br>0b011 = zone 4<br>0b100 = Zone 5<br>0b101 = Zone 6<br>0b110 = Zone 7<br>0b111 = Zone 8 (Obstacle very far)
 */
extern NSString* const CARSIGNALS_ADAS_PARKING_SENSORS_FRONT_MIDDLE_DISTANCE;

/*!
 * Obstacle visual distance (parking sensor) front right
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b000 = Zone 1 (obstacle very close)<br>0b001 = Zone 2<br>0b010 = Zone 3<br>0b011 = zone 4<br>0b100 = Zone 5<br>0b101 = Zone 6<br>0b110 = Zone 7<br>0b111 = Zone 8 (Obstacle very far)
 */
extern NSString* const CARSIGNALS_ADAS_PARKING_SENSORS_FRONT_RIGHT_DISTANCE;

/*!
 * Obstacle visual distance (parking sensor) rear left
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b000 = Zone 1 (obstacle very close)<br>0b001 = Zone 2<br>0b010 = Zone 3<br>0b011 = zone 4<br>0b100 = Zone 5<br>0b101 = Zone 6<br>0b110 = Zone 7<br>0b111 = Zone 8 (Obstacle very far)
 */
extern NSString* const CARSIGNALS_ADAS_PARKING_SENSORS_REAR_LEFT_DISTANCE;

/*!
 * Obstacle visual distance (parking sensor) rear center
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b000 = Zone 1 (obstacle very close)<br>0b001 = Zone 2<br>0b010 = Zone 3<br>0b011 = zone 4<br>0b100 = Zone 5<br>0b101 = Zone 6<br>0b110 = Zone 7<br>0b111 = Zone 8 (Obstacle very far)
 */
extern NSString* const CARSIGNALS_ADAS_PARKING_SENSORS_REAR_MIDDLE_DISTANCE;

/*!
 * Obstacle visual distance (parking sensor) rear right
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b000 = Zone 1 (obstacle very close)<br>0b001 = Zone 2<br>0b010 = Zone 3<br>0b011 = zone 4<br>0b100 = Zone 5<br>0b101 = Zone 6<br>0b110 = Zone 7<br>0b111 = Zone 8 (Obstacle very far)
 */
extern NSString* const CARSIGNALS_ADAS_PARKING_SENSORS_REAR_RIGHT_DISTANCE;

/*!
 * Abnormal right-hand crossing
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_ADAS_RIGHT_HAND_CROSSING;

/*!
 * Current TIV  (Time Inter Vehicles) in seconds
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>Resolution : 0.1<br>Offset : 0 s<br>Min : 0 s<br>Max : 25.3 s<br>Invalide : 0xFF<br>Unite : s
 */
extern NSString* const CARSIGNALS_ADAS_TIV_TIME;

/*!
 * Status of the rear doors child safety function
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_BODYWORK_DOOR_CHILDSAFETY_ON;

/*!
 * Status of vehicle locking
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b000 = Invalid<br>0b001 = Locked<br>0b010 = Superlocked<br>0b011 = Unlocked<br>0b100 = Driver unlocked<br>0b101 = Cab unlocked<br>0b110 = Loading zone unlocked<br>0b111 = Invalid
 */
extern NSString* const CARSIGNALS_BODYWORK_DOOR_LOCKING;

/*!
 * Front Left door open
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_BODYWORK_FRONT_LEFT_DOOR_OPEN;

/*!
 * Position of the Front Left window
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b0000 = Closed<br>0b0001 = Between closed andmicro-descent<br>0b0010 = Micro-descent<br>0b0011 = Between microdescent and slight opening<br>0b0100 = Slight opening<br>0b0101 = Between slight opening and large mid-opening<br>0b0110 = Large mid-opening<br>0b0111 = Between large midopeningand fully open<br>0b1000 = Fully open<br>0b1001 = Position unknown<br>0b1010 = Invalid<br>0b1011 = Invalid<br>0b1100 = Invalid<br>0b1101 = Invalid<br>0b1110 = Invalid<br>0b1111 = Invalid
 */
extern NSString* const CARSIGNALS_BODYWORK_FRONT_LEFT_WINDOW_POSITION;

/*!
 * Front Right door open
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_BODYWORK_FRONT_RIGHT_DOOR_OPEN;

/*!
 * Position of the Front Right  window
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b0000 = Closed<br>0b0001 = Between closed andmicro-descent<br>0b0010 = Micro-descent<br>0b0011 = Between microdescent and slight opening<br>0b0100 = Slight opening<br>0b0101 = Between slight opening and large mid-opening<br>0b0110 = Large mid-opening<br>0b0111 = Between large midopeningand fully open<br>0b1000 = Fully open<br>0b1001 = Position unknown<br>0b1010 = Invalid<br>0b1011 = Invalid<br>0b1100 = Invalid<br>0b1101 = Invalid<br>0b1110 = Invalid<br>0b1111 = Invalid
 */
extern NSString* const CARSIGNALS_BODYWORK_FRONT_RIGHT_WINDOW_POSITION;

/*!
 * Hood open
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_BODYWORK_HOOD_OPEN;

/*!
 * Lamp On when any car door is open
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_BODYWORK_OPEN_DOOR_LAMP_ON;

/*!
 * Rear left  door open
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_BODYWORK_REAR_LEFT_DOOR_OPEN;

/*!
 * Position of the Rear Left window
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b0000 = Closed<br>0b0001 = Between closed andmicro-descent<br>0b0010 = Micro-descent<br>0b0011 = Between microdescent and slight opening<br>0b0100 = Slight opening<br>0b0101 = Between slight opening and large mid-opening<br>0b0110 = Large mid-opening<br>0b0111 = Between large midopeningand fully open<br>0b1000 = Fully open<br>0b1001 = Position unknown<br>0b1010 = Invalid<br>0b1011 = Invalid<br>0b1100 = Invalid<br>0b1101 = Invalid<br>0b1110 = Invalid<br>0b1111 = Invalid
 */
extern NSString* const CARSIGNALS_BODYWORK_REAR_LEFT_WINDOW_POSITION;

/*!
 * Rear Right door open
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_BODYWORK_REAR_RIGHT_DOOR_OPEN;

/*!
 * Position of the Rear Right window
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b0000 = Closed<br>0b0001 = Between closed andmicro-descent<br>0b0010 = Micro-descent<br>0b0011 = Between microdescent and slight opening<br>0b0100 = Slight opening<br>0b0101 = Between slight opening and large mid-opening<br>0b0110 = Large mid-opening<br>0b0111 = Between large midopeningand fully open<br>0b1000 = Fully open<br>0b1001 = Position unknown<br>0b1010 = Invalid<br>0b1011 = Invalid<br>0b1100 = Invalid<br>0b1101 = Invalid<br>0b1110 = Invalid<br>0b1111 = Invalid
 */
extern NSString* const CARSIGNALS_BODYWORK_REAR_RIGHT_WINDOW_POSITION;

/*!
 * Side mirror automatically aims down when the rear gear is activited (IMA). Status of the function
 *
 * <b>Data Type:</b> boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_BODYWORK_SIDE_MIRROR_AUTO_AIM_DOWN_ON;

/*!
 * Status of  automatic folding function for the  side mirrors
 *
 * <b>Data Type:</b> boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_BODYWORK_SIDE_MIRROR_FOLDING_FUNCTION_ON;

/*!
 * Trunk open
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_BODYWORK_TRUNK_OPEN;

/*!
 * Wiper sweep speed
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b0000 = Speed 0 (Low Speed)<br>0b0001 = Speed 1<br>0b0010 = Speed 2<br>0b0011 = Speed 3<br>0b0100 = Speed 4<br>0b0101 = Speed 5<br>0b0110 = Speed 6<br>0b0111 = Speed 7 <br>0b1000 = Speed 8<br>0b1001 = Speed 9<br>0b1010 = Speed 10<br>0b1011 = Speed 11<br>0b1100 = Speed 12<br>0b1101 = Speed 13<br>0b1110 = Speed 14<br>0b1111 = Speed 15 (High Speed)
 */
extern NSString* const CARSIGNALS_BODYWORK_WIPER_SPEED;

/*!
 * Window wiper status
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b00 = W in AF<br>0b01 = Other status<br>0b10 = W stopped in maintenance position<br>0b11 = Not used
 */
extern NSString* const CARSIGNALS_BODYWORK_WIPER_STATUS;

/*!
 * Vehicle brand
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 */
extern NSString* const CARSIGNALS_CONFIGURATION_BRAND;

/*!
 * Vehicle type
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 */
extern NSString* const CARSIGNALS_CONFIGURATION_CAR_TYPE;

/*!
 * Vehicle color
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 */
extern NSString* const CARSIGNALS_CONFIGURATION_COLOR;

/*!
 * Consumption unit
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0= Volume for 100 units distance (e.g. 1/100 km)<br>1= Distance per volume unit (e.g. mpg, km/l)
 */
extern NSString* const CARSIGNALS_CONFIGURATION_CONSUMPTION_UNIT;

/*!
 * Dashboard Brightness level
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-4<br>Resolution : 1<br>Offset : 0 <br>Min : 0 <br>Max : 15 <br>Invalide : <br>Unite :
 */
extern NSString* const CARSIGNALS_CONFIGURATION_DASHBOARD_BRIGHTNESS_LEVEL;

/*!
 * Specifies the value of the day parameter of the clock
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0 day(s)<br>Min : 1 day(s)<br>Max : 31 day(s)<br>Invalide : 0x3F<br>Unite : day(s)
 */
extern NSString* const CARSIGNALS_CONFIGURATION_DATE_DAY;

/*!
 * Specifies the value of the hour parameter of the clock
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0 hour(s)<br>Min : 0 hour(s)<br>Max : 23 hour(s)<br>Invalide : 0x1F<br>Unite : hour(s)
 */
extern NSString* const CARSIGNALS_CONFIGURATION_DATE_HOUR;

/*!
 * Specifies the value of the minute parameter of the clock
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0 minute(s)<br>Min : 0 minute(s)<br>Max : 59 minute(s)<br>Invalide : 0x3F<br>Unite : minute(s)
 */
extern NSString* const CARSIGNALS_CONFIGURATION_DATE_MINUTE;

/*!
 * Specifies the value of the month parameter of the clock
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b0000 = Value not used <br>0b0001 = January<br>0b0010 = February<br>0b0011 = March<br>0b0100 = April<br>0b0101 = May<br>0b0110 = June<br>0b0111 = July<br>0b1000 = August<br>0b1001 = September<br>0b1010 = October<br>0b1011 = November<br>0b1100 = December<br>0b1101 = Value not used <br>0b1110 = Unavailable<br>0b1111 = Invalid
 */
extern NSString* const CARSIGNALS_CONFIGURATION_DATE_MONTH;

/*!
 * Specifies the value of the year parameter of the clock
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 2000 years(s)<br>Min : 0 year(s)<br>Max : 125 year(s)<br>Invalide : 0x7F<br>Unite : year(s)
 */
extern NSString* const CARSIGNALS_CONFIGURATION_DATE_YEAR;

/*!
 * Distance Unit
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0= Km<br>1= Miles
 */
extern NSString* const CARSIGNALS_CONFIGURATION_DISTANCE_UNIT;

/*!
 * Configurable driver button. It could be used for any purpose where we want the driver to start an action, give a on/off interaction, etc.
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_CONFIGURATION_DRIVER_BUTTON_PUSH;

/*!
 * Vehicle dimensions
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 */
extern NSString* const CARSIGNALS_CONFIGURATION_HEIGHT;

/*!
 * Language
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b00000 = French<br>0b00001 = English<br>0b00010 = German<br>0b00011 = Spanish<br>0b00100 = Italian<br>0b00101 = Portuguese<br>0b00110 = Dutch<br>0b00111 = Greek<br>0b01000 = Brazilian Portuguese<br>0b01001 = Polish<br>0b01010 = Traditional Chinese<br>0b01011 = Simplified Chinese<br>0b01100 = Turkish<br>0b01101 = Japanese<br>0b01110 = Russian<br>0b01111 = Czech<br>0b10000 = Croat<br>0b10001 = Hungarian<br>0b10010 = Arab<br>0b10011 = Bulgarian<br>0b10100 = Korean<br>0b10101 = Danish<br>0b10110 = Estonian<br>0b10111 = Farsi<br>0b11000 = Finnish<br>0b11001 = Hebrew<br>0b11010 = Norwegian<br>0b11011 = Rumanian<br>0b11100 = Serbian<br>0b11101 = Swedish<br>0b11110 = Ukrainian<br>0b11111 = Vietnamese
 */
extern NSString* const CARSIGNALS_CONFIGURATION_LANGUAGE;

/*!
 * Vehicle dimensions
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 */
extern NSString* const CARSIGNALS_CONFIGURATION_LENGTH;

/*!
 * Vehicle model
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 */
extern NSString* const CARSIGNALS_CONFIGURATION_MODEL;

/*!
 * Time mode, 12h or 24h
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_CONFIGURATION_TIME_MODE_24H_ON;

/*!
 * Head Unit Identification Number (UIN)
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>text
 */
extern NSString* const CARSIGNALS_CONFIGURATION_UIN;

/*!
 * Customization of the unlocking lighting function. When the car is open with the key the lights are switched on
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_CONFIGURATION_UNLOCKING_LIGHTING_ON;

/*!
 * Vehicle Identification Number (VIN)
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>text
 */
extern NSString* const CARSIGNALS_CONFIGURATION_VIN;

/*!
 * Volume unit
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0= Litre<br>1= Gallon
 */
extern NSString* const CARSIGNALS_CONFIGURATION_VOLUME_UNIT;

/*!
 * Vehicle dimensions
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 */
extern NSString* const CARSIGNALS_CONFIGURATION_WIDTH;

/*!
 * Brake pedal pressure
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-12<br>Resolution : 0.1<br>Offset : -55 Bar<br>Min : -55 Bar<br>Max : 354.4 Bar<br>Invalide : 0xFFF<br><br>
 */
extern NSString* const CARSIGNALS_DRIVING_BRAKE_PEDAL_PRESSURE;

/*!
 * Break pedal activated
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_BREAK_PEDAL;

/*!
 * Current gear engaged
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b0000 = P<br>0b0001 = R<br>0b0010 = N<br>0b0011 = D<br>0b0100 = 6th gear<br>0b0101 = 5th gear<br>0b0110 = 4th gear<br>0b0111 = 3rd gear<br>0b1000 = 2nd gear<br>0b1001 = 1st gear<br>0b1010 = Invalid<br>0b1011 = No gear to display<br>0b1100 = 7th gear
 */
extern NSString* const CARSIGNALS_DRIVING_CURRENT_GEAR;

/*!
 * Selection of gearbox mode
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b000 = Auto<br>0b001 = Not used<br>0b010 = Auto + Sport<br>0b011 = Not used<br>0b100 = Sequential<br>0b101 = Sequential + Sport<br>0b110 = Auto + Snow<br>0b111 = Not used
 */
extern NSString* const CARSIGNALS_DRIVING_GEARBOX_MODE;

/*!
 * Reverse gear status
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_GEARBOX_REVERSE_GEAR_ON;

/*!
 * Horn status activated
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_HORN_ACTIVATED;

/*!
 * "Daytime" lamp on
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_LAMPS_DAYTIME_ON;

/*!
 * Front fog lamp status
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_LAMPS_FRONT_FOG_ON;

/*!
 * Full beam status
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_LAMPS_FULL_BEAM_ON;

/*!
 * Low beam status
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_LAMPS_LOW_BEAM_ON;

/*!
 * Position lamps status
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_LAMPS_POSITION_ON;

/*!
 * Rear fog lamp status
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_LAMPS_REAR_FOG_ON;

/*!
 * Left indicator lamp activated
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_LAMPS_TURN_INDICATOR_LEFT_ACTIVATED;

/*!
 * Right indicator lamp activated
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_LAMPS_TURN_INDICATOR_RIGHT_ACTIVATED;

/*!
 * Parking brake activated
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_PARKING_BRAKE_ON;

/*!
 * Recommended gear indicator. Arrow up means to move up the gear, arrow down means to move down the gear
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b00 = No gear recomendation arrow<br>0b01 = Rising arrow gear recommendation<br>0b10 = Lowering arrow gear recommendation<br>0b11 = Rising and lowering arrow gear recommendation
 */
extern NSString* const CARSIGNALS_DRIVING_RECOMMENDED_GEAR_ARROW;

/*!
 * Steering wheel angle
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>SNM-16<br>Resolution : 1<br>Offset : 0<br>Min : -780<br>Max : 780
 */
extern NSString* const CARSIGNALS_DRIVING_STEERING_WHEEL_ANGLE;

/*!
 * Steering wheel position (Left/Right)
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b00 = Invalid<br>0b01 = Steering right<br>0b10 = Steering left<br>0b11 = Invalid
 */
extern NSString* const CARSIGNALS_DRIVING_STEERING_WHEEL_POSITION;

/*!
 * Steering wheel rotation direction clockwise if true, false counterclockwise
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_DRIVING_STEERING_WHEEL_ROTATION_DIRECTION_CLOCKWISE;

/*!
 * Steering wheel rotation speed in degrees per second
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-8<br>Resolution : 1<br>Offset : 0<br>Min : 0<br>Max : 1016
 */
extern NSString* const CARSIGNALS_DRIVING_STEERING_WHEEL_ROTATION_SPEED;

/*!
 * Acceleration Driver request in %
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-8<br>Resolution : 0.5<br>Offset : 0 %<br>Min : 0 %<br>Max : 100 %<br>Invalide : 0xFF<br>Unite : %
 */
extern NSString* const CARSIGNALS_DRIVING_THROTTLE_PEDAL_LEVEL;

/*!
 * Electric alternator status
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_ENGINE_ALTERNATOR_ON;

/*!
 * Current fuel  consumption
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-16<br>Resolution : 0.1<br>Offset : 0 l/100 km<br>Min : 0 l/100 km<br>Max : 30 l/100 km<br>Invalide : 0xFFFF<br>Unite : l/100 km
 */
extern NSString* const CARSIGNALS_ENGINE_CURRENT_FUEL_CONSUMPTION;

/*!
 * Engine coolant temperature
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : -40 ºC<br>Min : -40 ºC<br>Max : 215 ºC<br>Invalide : 0xFFF<br>Unite : ºC<br>
 */
extern NSString* const CARSIGNALS_ENGINE_ENGINE_COLLANT_TEMP;

/*!
 * Calculated engine load value
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0 %<br>Min : 0 %<br>Max : 255 %<br>Invalide : 0xFFF<br>Unite : %
 */
extern NSString* const CARSIGNALS_ENGINE_ENGINE_LOAD_VALUE;

/*!
 * Engine status
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b00 = Engine not running<br>0b01 = Starting<br>0b10 = Engine running<br>0b11 = Engine stopped in stop phase
 */
extern NSString* const CARSIGNALS_ENGINE_ENGINE_STATUS;

/*!
 * Fuel Autonomy
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-16<br>Resolution : 1<br>Offset : 0 km<br>Min : 0 km<br>Max : 2000 km<br>Invalide : 0xFFFF<br>Unite : km
 */
extern NSString* const CARSIGNALS_ENGINE_FUEL_AUTONOMY;

/*!
 * Fuel level
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>Level of fuel filtered<br>UNM-8<br>Resolution : 1<br>Offset : 0 %<br>Min : 0 %<br>Max : 100 %<br>Invalide : 0xFF<br>Unite : %
 */
extern NSString* const CARSIGNALS_ENGINE_FUEL_LEVEL;

/*!
 * Fuel low alert
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_ENGINE_FUEL_LOW_ALERT_ON;

/*!
 * Intake air temperature
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : -40 ºC<br>Min : -40 ºC<br>Max : 215 ºC<br>Invalide : 0xFFF<br>Unite : ºC<br>
 */
extern NSString* const CARSIGNALS_ENGINE_INTAKE_AIR_TEMP;

/*!
 * Intake manifold absolute pressure
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0 kPaA<br>Min : 0 kPaA<br>Max : 255 kPaA<br>Invalide : 0xFFF<br>Unite : kPaA
 */
extern NSString* const CARSIGNALS_ENGINE_INTAKE_PRESSURE;

/*!
 * KeyCar position
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b00 = Stop<br>0b01 = Contact<br>0b10 = Starting<br>0b11 = Free
 */
extern NSString* const CARSIGNALS_ENGINE_KEY_CAR_POSITION;

/*!
 * Engine speed
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-16<br>Resolution : 0.125<br>Offset : 0 RPM<br>Min : 0 RPM<br>Max : 8191,75 RPM<br>Invalide : 0xFFFF<br>Unite : RPM
 */
extern NSString* const CARSIGNALS_ENGINE_REVOLUTIONS;

/*!
 * Trip 1 : Average fuel consumption
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-16<br>Resolution : 0.1<br>Offset : 0 l/100 km<br>Min : 0 l/100 km<br>Max : 30 l/100 km<br>Invalide : 0xFFFF<br>Unite : l/100 km
 */
extern NSString* const CARSIGNALS_ENGINE_TRIP_1_AVG_FUEL_CONSUMPTION;

/*!
 * Mileage trip  1
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-16<br>Resolution : 1<br>Offset : 0 km<br>Min : 0 km<br>Max : 50000 km<br>Invalide : 0xFFFF<br>Unite : km
 */
extern NSString* const CARSIGNALS_ENGINE_TRIP_1_MILEAGE;

/*!
 * Trip 2 : Average fuel consumption
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-16<br>Resolution : 0.1<br>Offset : 0 l/100 km<br>Min : 0 l/100 km<br>Max : 30 l/100 km<br>Invalide : 0xFFFF<br>Unite : l/100 km
 */
extern NSString* const CARSIGNALS_ENGINE_TRIP_2_AVG_FUEL_CONSUMPTION;

/*!
 * Mileage trip  1
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-16<br>Resolution : 1<br>Offset : 0 km<br>Min : 0 km<br>Max : 50000 km<br>Invalide : 0xFFFF<br>Unite : km
 */
extern NSString* const CARSIGNALS_ENGINE_TRIP_2_MILEAGE;

/*!
 * Air pressure information
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-5<br>Resolution : 15<br>Offset : 685 hPa<br>Min : 685 hPa<br>Max : 1120 hPa<br>Invalide : 0x1F<br>Unite : hPa<br>Exemple :<br>N= 20 => Info_pression_atmos = (N* 15) + 685 = 985 hPa<br>N= 20 => Info_pression_atmos = (N* 15) + 685 = 985 hPa
 */
extern NSString* const CARSIGNALS_EXTERNALENVIROMENT_AIR_PRESSURE;

/*!
 * Vehicle altitude
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-14<br>Resolution : 1<br>Offset : -999<br>Min : -999<br>Max : 15383<br>Invalide : 0x3FFF<br>Unite :<br>Exemple :<br>ALT = N*1 - 999<br>ALT = N*1 - 999
 */
extern NSString* const CARSIGNALS_EXTERNALENVIROMENT_ALTITUDE;

/*!
 * CO air polution level
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-8<br>Resolution : 0.4<br>Offset : 0 %<br>Min : 0 %<br>Max : 100 %<br>Invalide : 0xFFF<br>Unite : %
 */
extern NSString* const CARSIGNALS_EXTERNALENVIROMENT_CO_LEVEL;

/*!
 * MAF air flow rate
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>Resolution : 0,01 g/s<br>Offset : 0,01 g/s<br>Min : 0 g/s<br>Max : 655,35 g/s<br>Invalide : 0xFFF<br>Unite : g/s<br>
 */
extern NSString* const CARSIGNALS_EXTERNALENVIROMENT_MAF_AIR;

/*!
 * Day/Night status
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_EXTERNALENVIROMENT_NIGHT;

/*!
 * NOX air polution level
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-8<br>Resolution : 0.4<br>Offset : 0 %<br>Min : 0 %<br>Max : 100 %<br>Invalide : 0xFFF<br>Unite : %
 */
extern NSString* const CARSIGNALS_EXTERNALENVIROMENT_NOX_LEVEL;

/*!
 * Outside temperature
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-8<br>Resolution : 0.5<br>Offset : -40<br>Min : -40<br>Max : 85<br>Invalide : 0xFF<br>Unite :<br>Commentaires :<br>T = N/2 - 40, resolution 0,5<br>T = N/2 - 40, resolution 0.5
 */
extern NSString* const CARSIGNALS_EXTERNALENVIROMENT_TEMPERATURE;

/*!
 * Front left distribution
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b0000 = Auto Comfort<br>0b0001 = Auto Visibility<br>0b0010 = Foot<br>0b0011 = Ventilation<br>0b0100 = Defrosting<br>0b0101 = Foot ventilation<br>0b0110 = Foot defrosting<br>0b0111 = Ventilation Defrosting<br>0b1000 = Foot Ventilation Defrosting<br>0b1001 = Defrosting different<br>0b1010 = Not used<br>0b1011 = Not used<br>0b1100 = Not used<br>0b1101 = Not used<br>0b1110 = Not used<br>0b1111 = Not used
 */
extern NSString* const CARSIGNALS_INTERNALENVIROMENT_AC_FRONT_LEFT_DISTRIBUTION;

/*!
 * Current Values of front left temperature selected
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b00000 = LO<br>0b00001 = 16 &deg;C<br>0b00010 = 16,5 &deg;C <br>0b00011 = 17 &deg;C <br>0b00100 = 17,5 &deg;C <br>0b00101 = 18 &deg;C<br>0b00110 = 18,5 &deg;C<br>0b00111 = 19 &deg;C <br>0b01000 = 19,5 &deg;C <br>0b01001 = 20 &deg;C<br>0b01010 = 20,5 &deg;C<br>0b01011 = 21 &deg;C<br>0b01100 = 21,5 &deg;C<br>0b01101 = 22 &deg;C<br>0b01110 = 22,5 &deg;C<br>0b01111 = 23 &deg;C<br>0b10000 = 23,5 &deg;C<br>0b10001 = 24 &deg;C<br>0b10010 = 24,5 &deg;C<br>0b10011 = 25 &deg;C <br>0b10100 = 25,5 &deg;C <br>0b10101 = 26 &deg;C<br>0b10110 = HI<br>0bAUTRES = Not used
 */
extern NSString* const CARSIGNALS_INTERNALENVIROMENT_AC_FRONT_LEFT_TEMPERATURE;

/*!
 * Status of MONO function. Same temperature for driver and passenger
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_INTERNALENVIROMENT_AC_FRONT_MONO_ON;

/*!
 * Front right distribution
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b0000 = Auto Comfort<br>0b0001 = Auto Visibility<br>0b0010 = Foot<br>0b0011 = Ventilation<br>0b0100 = Defrosting<br>0b0101 = Foot ventilation<br>0b0110 = Foot defrosting<br>0b0111 = Ventilation Defrosting<br>0b1000 = Foot Ventilation Defrosting<br>0b1001 = Defrosting different<br>0b1010 = Not used<br>0b1011 = Not used<br>0b1100 = Not used<br>0b1101 = Not used<br>0b1110 = Not used<br>0b1111 = Not used
 */
extern NSString* const CARSIGNALS_INTERNALENVIROMENT_AC_FRONT_RIGHT_DISTRIBUTION;

/*!
 * Current values of front right temperature selected
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b00000 = LO<br>0b00001 = 16 &deg;C<br>0b00010 = 16,5 &deg;C <br>0b00011 = 17 &deg;C <br>0b00100 = 17,5 &deg;C <br>0b00101 = 18 &deg;C<br>0b00110 = 18,5 &deg;C<br>0b00111 = 19 &deg;C <br>0b01000 = 19,5 &deg;C <br>0b01001 = 20 &deg;C<br>0b01010 = 20,5 &deg;C<br>0b01011 = 21 &deg;C<br>0b01100 = 21,5 &deg;C<br>0b01101 = 22 &deg;C<br>0b01110 = 22,5 &deg;C<br>0b01111 = 23 &deg;C<br>0b10000 = 23,5 &deg;C<br>0b10001 = 24 &deg;C<br>0b10010 = 24,5 &deg;C<br>0b10011 = 25 &deg;C <br>0b10100 = 25,5 &deg;C <br>0b10101 = 26 &deg;C<br>0b10110 = HI<br>0bAUTRES = Not used
 */
extern NSString* const CARSIGNALS_INTERNALENVIROMENT_AC_FRONT_RIGHT_TEMPERATURE;

/*!
 * Air Conditioner (AC) Level
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b00 = Light<br>0b01 = Normal<br>0b10 = Strong<br>0b11 = Not used
 */
extern NSString* const CARSIGNALS_INTERNALENVIROMENT_AC_LEVEL;

/*!
 * Air Conditioner (AC) Mode (Manual / Auto / OFF)
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b00 = Auto<br>0b01 = Manual<br>0b10 = OFF<br>0b11 = Invalid
 */
extern NSString* const CARSIGNALS_INTERNALENVIROMENT_AC_MODE;

/*!
 * Status of AC REAR function (locked is when the driver blocks the rear function)
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b00 = On<br>0b01 = On locked<br>0b10 = Off<br>0b11 = Off locked
 */
extern NSString* const CARSIGNALS_INTERNALENVIROMENT_AC_REAR_STATUS;

/*!
 * Air condition speed in Manual Mode
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0b0000 = AUTO<br>0b0001 = Speed0<br>0b0010 = Speed1<br>0b0011 = Speed2<br>0b0100 = Speed3<br>0b0101 = Speed4<br>0b0110 = Speed5<br>0b0111 = Speed6<br>0b1000 = Speed7<br>0b1001 = Speed8<br>0b1010 = Not used<br>0b1011 = Not used<br>0b1100 = Not used<br>0b1101 = Not used<br>0b1110 = Not used<br>0b1111 = Not used
 */
extern NSString* const CARSIGNALS_INTERNALENVIROMENT_AC_SPEED;

/*!
 * Auto Air recycling mode: on
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b000 = Auto Comfort<br>0b001 = Auto visibility<br>0b010 = Not used<br>0b011 = Forced closed<br>0b100 = Auto comfort without AQS<br>0b101 = Not used<br>0b110 = Not used<br>0b111 = Not used
 */
extern NSString* const CARSIGNALS_INTERNALENVIROMENT_AIR_RECYCLING_AUTO;

/*!
 * Activation of Electrically Heated Rear Window
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_INTERNALENVIROMENT_REAR_HEATED_WINDOW_ON;

/*!
 * Check car status
 *
 * <b>Data Type:</b> Text
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>Text
 */
extern NSString* const CARSIGNALS_MAINTENANCE_CHECK_STATUS;

/*!
 * Flat tire sensor
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_ADAS_FLAT_TIRE;

/*!
 * Number of days before next maintenance
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-12<br>Resolution : 1<br>Offset : 0 day<br>Min : 0 day<br>Max : 730 days<br>Invalide : 0xFFF<br>Unite : days
 */
extern NSString* const CARSIGNALS_MAINTENANCE_DAYS_FOR_NEXT_MAINTENANCE;

/*!
 * Mileage for next maintenance (If MaintenanceExceed variable is TRUE, it indicates the KM exceed from the recommended revision)
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-16<br>Resolution : 20<br>Offset : 0 km<br>Min : 0 km<br>Max : 140000 km<br>Invalide : 0xFFFF<br>Unite : km
 */
extern NSString* const CARSIGNALS_MAINTENANCE_K_M_BEFORE_NEXT_MAINTENANCE;

/*!
 * Maintencance Exceed, it indicates the sign of the KM before maintenance. -(negative) is for MaintenanceExceeded. +(positive) is for before Maintenance (related with the signal: KMBeforeNextMaintenance)
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_MAINTENANCE_MAINTENANCE_EXCEED;

/*!
 * Vehicle mileage
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>Resolution : 0.1<br>Offset : 0 km<br>Min : 0 km<br>Max : 1677721,4 km<br>Invalide : 0xFFFFFF<br>Unite : km
 */
extern NSString* const CARSIGNALS_MAINTENANCE_MILEAGE;

/*!
 * Engine oil level
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0 %<br>Min : 0 %<br>Max : 250 %<br>Invalide : 0xFF<br>Units : %  If rate exceeds 100%, to allow overtake, indicate the maximum oil level.<br>"0xFE code current measurement".<br>"0xFD code measure oil level not effected"<br>"0xFC code a non-OK indeterminate oil level" <br> "0xFB code an oil level OK indeterminate"
 */
extern NSString* const CARSIGNALS_MAINTENANCE_OIL_LEVEL;

/*!
 * Recomended maintenance (Dashboard indicator)
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_MAINTENANCE_RECOMENDED_MAINTENANCE_ON;

/*!
 * Insert new audio input over the current (overlaped)
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>text
 */
extern NSString* const CARSIGNALS_MEDIA_ADD_AUDIO_INPUT;

/*!
 * Media Ambiance mode
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = Normal<br>1 = Rock<br>2 = Jazz<br>3 = Bass<br>4 = Classic
 */
extern NSString* const CARSIGNALS_MEDIA_AMBIANCE_MODE;

/*!
 * Media Balance status
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0<br>Min : -9<br>Max : 9<br>Invalide : 0xFF
 */
extern NSString* const CARSIGNALS_MEDIA_BALANCE_STATUS;

/*!
 * Media Bass on
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0<br>Min : -9<br>Max : 9<br>Invalide : 0xFF
 */
extern NSString* const CARSIGNALS_MEDIA_BASS;

/*!
 * Media Bleep play
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = Song0<br>1 = Song1<br>2 = Song2<br>3 = Song3<br>4 = Song4<br>5 = Song5
 */
extern NSString* const CARSIGNALS_MEDIA_BLEEP_PLAY;

/*!
 * Current sound volume level
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0<br>Min : 0<br>Max : 30<br>Invalide : 0xFF
 */
extern NSString* const CARSIGNALS_MEDIA_CURRENT_VOLUME;

/*!
 * Media Fader on
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0<br>Min : -9<br>Max : 9<br>Invalide : 0xFF
 */
extern NSString* const CARSIGNALS_MEDIA_FADER;

/*!
 * Get ID3 Content
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>text
 */
extern NSString* const CARSIGNALS_MEDIA_ID3_CONTENT;

/*!
 * Media Loudness on
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_MEDIA_LOUDNESS;

/*!
 * Media Mute on
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_MEDIA_MUTE;

/*!
 * Depending on the current Source, NEXT radio_station, song etc
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_MEDIA_NEXT;

/*!
 * Get Radio Station Programme Identification (PiCode)
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>text
 */
extern NSString* const CARSIGNALS_MEDIA_PICODE;

/*!
 * Depending on the current Source, PREVIOUS radio_station, song etc
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_MEDIA_PREVIOUS;

/*!
 * GET/SET Radio Station Frequency
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 0.001<br>Offset : 1 Mhz<br>Min : 0,153 Mhz<br>Max : 26,1 Mhz<br>Unite : Mhz
 */
extern NSString* const CARSIGNALS_MEDIA_RADIO_STATION_FREQUENCY;

/*!
 * Get Radio Station Name
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>text
 */
extern NSString* const CARSIGNALS_MEDIA_RADIO_STATION_NAME;

/*!
 * Radio Station Source
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = FM<br>1 = AM<br>2 = USB<br>3 = Audio streaming
 */
extern NSString* const CARSIGNALS_MEDIA_RADIO_STATION_SOURCE;

/*!
 * Get Radio Station extra Text information
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>text
 */
extern NSString* const CARSIGNALS_MEDIA_RADIO_STATION_TEXT;

/*!
 * Get Current Time of the playing song
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>text
 */
extern NSString* const CARSIGNALS_MEDIA_SONG_CURRENT_TIME;

/*!
 * Get Total time of the playing song
 *
 * <b>Data Type:</b> text
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>text
 */
extern NSString* const CARSIGNALS_MEDIA_SONG_TOTAL_TIME;

/*!
 * Media Treble on
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0<br>Min : -9<br>Max : 9<br>Invalide : 0xFF
 */
extern NSString* const CARSIGNALS_MEDIA_TREBLE;


/*!
 * Media USB connected
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_MEDIA_USB_CONNECTED;

/*!
 * Media Volume Offset (could be negative)
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>Resolution : 1<br>Offset : 0<br>Min : -30<br>Max : 30<br>Invalide : 0xFF
 */
extern NSString* const CARSIGNALS_MEDIA_VOLUME_OFF_SET;

/*!
 * GPS current position
 *
 * <br><b>Writing Signal:</b> no
 */
extern NSString* const CARSIGNALS_NAVIGATION_GPS_CURRENT;

/*!
 * GPS destination
 *
 * <br><b>Writing Signal:</b> yes
 */
extern NSString* const CARSIGNALS_NAVIGATION_GPS_DESTINATION;

/*!
 * Distance left to destination
 *
 * <br><b>Writing Signal:</b> no
 */
extern NSString* const CARSIGNALS_NAVIGATION_GPS_DISTANCE_TO_DESTINATION;

/*!
 * Estimated time to Arrival (ETA)
 *
 * <br><b>Writing Signal:</b> no
 */
extern NSString* const CARSIGNALS_NAVIGATION_GPS_ETA;

/*!
 * Crash info detected
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_SECURITY_AIRBAG_CRASH_INFO_DETECTED;

/*!
 * State of driver"s seat belt
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_SECURITY_DRIVER_BELT_FASTENED;

/*!
 * Electronic Stability Control (ESC) Inhibition status
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_SECURITY_ESC_INHIBITION;

/*!
 * Electronic Stability Control (ESC) is Working
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_SECURITY_ESC_IS_WORKING;

/*!
 * Passenger airbag inhibited status
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_SECURITY_PASSENGER_AIRBAG_INHIBITED;

/*!
 * State of passenger"s seat belt
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_SECURITY_PASSENGER_BELT_FASTENED;

/*!
 * State of row 1 rear center belt
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_SECURITY_R_1_REAR_CENTER_BELT_FASTENED;

/*!
 * State of row 1 rear left belt
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_SECURITY_R_1_REAR_LEFT_BELT_FASTENED;

/*!
 * State of row 1 rear right belt
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_SECURITY_R_1_REAR_RIGHT_BELT_FASTENED;

/*!
 * Selection of the Cruise or Limit function
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b00 = All functions OFF<br>0b01 = Cruise control ON<br>0b10 = Limit function ON
 */
extern NSString* const CARSIGNALS_SPEED_CONTROL_TYPE;

/*!
 * Status of the active cruise or limit function
 *
 * <b>Data Type:</b> Enum
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>0b000 = Stand by<br>0b001 = Activity without overspeeding<br>0b010 = Limitation activated by cruise control<br>0b011 = Activity with overspeeding without pedal pick-up<br>0b100 = Activity with overspeeding on pedal pick-up<br>0b101 = Reserved<br>0b110 = Function no activation possible<br>0b111 = Fault
 */
extern NSString* const CARSIGNALS_SPEED_CONTROL_TYPE_STATUS;

/*!
 * Cruise control, speed memory 1
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_CRUISE_CONTROL_MEM_1;

/*!
 * Cruise control, speed memory 2
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_CRUISE_CONTROL_MEM_2;

/*!
 * Cruise control, speed memory 3
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_CRUISE_CONTROL_MEM_3;

/*!
 * Cruise control, speed memory 4
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_CRUISE_CONTROL_MEM_4;

/*!
 * Cruise control, speed memory 5
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_CRUISE_CONTROL_MEM_5;

/*!
 * Cruise control, speed memory 6
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_CRUISE_CONTROL_MEM_6;

/*!
 * Instant vehicle speed
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_INSTANT_SPEED;

/*!
 * Speed limitator, memory 1 speed limit
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_SPEED_LIMIT_MEM_1;

/*!
 * Speed limitator, memory 2 speed limit
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_SPEED_LIMIT_MEM_2;

/*!
 * Speed limitator, memory 3 speed limit
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_SPEED_LIMIT_MEM_3;

/*!
 * Speed limitator, memory 4 speed limit
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_SPEED_LIMIT_MEM_4;

/*!
 * Speed limitator, memory 5 speed limit
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_SPEED_LIMIT_MEM_5;

/*!
 * Speed limitator, memory 6 speed limit
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>UNM-8 Resolution : 1 <br>Offset : 0 km/h <br>Min : 0 km/h <br>Max : 254 km/h <br>Invalid :  <br>Unit : km/h
 */
extern NSString* const CARSIGNALS_SPEED_SPEED_LIMIT_MEM_6;

/*!
 * Trip 1: Average speed
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-8<br>Resolution : 1<br>Offset : 0 km/h<br>Min : 0 km/h<br>Max : 250 km/h<br>Invalide : 0xFF<br>Unite : km/h
 */
extern NSString* const CARSIGNALS_SPEED_TRIP_1_AVERAGE_SPEED;

/*!
 * Reset trip  1
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_SPEED_TRIP_1_RESET;

/*!
 * Trip 2: Average speed
 *
 * <b>Data Type:</b> Range
 * <br><b>Writing Signal:</b> no
 * <br><b>Signal Values:</b><br>UNM-8<br>Resolution : 1<br>Offset : 0 km/h<br>Min : 0 km/h<br>Max : 250 km/h<br>Invalide : 0xFF<br>Unite : km/h
 */
extern NSString* const CARSIGNALS_SPEED_TRIP_2_AVERAGE_SPEED;

/*!
 * Reset trip  2
 *
 * <b>Data Type:</b> Boolean
 * <br><b>Writing Signal:</b> yes
 * <br><b>Signal Values:</b><br>0 = False<br>1 = True
 */
extern NSString* const CARSIGNALS_SPEED_TRIP_2_RESET;







@end
