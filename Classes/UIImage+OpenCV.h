//
//  UIImage+OpenCV.h
//  OpenCVTest
//
//  Created by 璐 李 on 11-11-6.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <opencv2/imgproc/imgproc_c.h>

typedef IplImage *IplImageRef;

@interface UIImage (OpenCV)

@property(nonatomic,readonly) IplImageRef IplImage;   

+ (UIImage *)imageWithIplImage:(IplImageRef)iplImage;

@end
