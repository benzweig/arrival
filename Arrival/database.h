//
//  database.h
//  Arrival
//
//  Created by Ben Zweig on 6/18/15.
//  Copyright (c) 2015 Hi-Lite. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@interface database : NSObject

@property (nonatomic, strong) NSMutableArray* viewArray;
+(database *)sharedInstance;
-(UIView *)coloredView: (UIColor*)color;
@end
