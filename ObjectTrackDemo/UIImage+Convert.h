//
//  UIImage+Convert.h
//  ObjectTrackDemo
//
//  Created by baiya on 2017/6/22.
//  Copyright © 2017年 Maxcw. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Convert)

+ (UIImage*)imageWithImageBuffer:(CVImageBufferRef)imageBuffer;

@end
