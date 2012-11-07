//
//  View.h
//  Nov1
//
//  Created by Lisa Jenkins on 11/1/12.
//  Copyright (c) 2012 Lisa Jenkins. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>

@interface View : UIView{
    NSInteger TZ;
};

-(void) incrementTZ;
-(void) scaleAndTranslate: (CGContextRef) c AndScale: (CGFloat) scale YTrans: (CGFloat) y XTrans: (CGFloat) x;
-(void) drawTimeZone: (CGContextRef) c withMapPoints: (CLLocationCoordinate2D *) coord ofSize: (size_t) size forScale: (CGFloat) scale;

@end
