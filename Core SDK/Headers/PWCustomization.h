//
//  PWCustomization.h
//  PWCoreSDK
//
//  Created by Tien Nhat Vu on 8/25/17.
//  Copyright © 2017 Paymentwall. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PWCustomization : NSObject

@property (nonatomic, assign) UIBarStyle barStyle;

@property (nonatomic, strong) UIColor*          headerBackgroundColor;
@property (nonatomic, strong) UIImage*          headerBackgroundImage;
@property (nonatomic, assign) UIViewContentMode headerBackgroundImageMode;

@property (nonatomic, strong) NSDictionary* infoCardTextAttribute;
@property (nonatomic, strong) UIColor*      infoCardBackgroundColor;
@property (nonatomic, strong) UIImage*      infoCardImage;
@property (nonatomic, assign) UIViewContentMode infoCardImageMode;

@property (nonatomic, strong) UIColor*          optionTextColor;
@property (nonatomic, strong) UIColor*          optionBackgroundColor;
@property (nonatomic, strong) UIImage*          optionBackgroundImage;
@property (nonatomic, assign) UIViewContentMode optionBackgroundImageMode;

@property (nonatomic, strong) UIButton* buttonConfig;

@end