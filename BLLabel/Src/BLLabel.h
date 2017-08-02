//
//  BLLabel.h
//  BLLabel
//
//  Created by Lei Bao on 2017/8/2.
//  Copyright © 2017年 iHealthlabs. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum
{
    VerticalAlignmentTop = 0, // default
    VerticalAlignmentMiddle,
    VerticalAlignmentBottom,
} VerticalAlignment;

@interface BLLabel : UILabel

@property (nonatomic) VerticalAlignment verticalAlignment;

@end
