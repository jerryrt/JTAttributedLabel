//
//  JTAttributedLabel.h
//  JTAttributedLabel
//
//  Created by james on 6/1/13.
//  Copyright (c) 2013 Mystcolor. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface JTAttributedLabel : UILabel

@property (nonatomic, copy) NSAttributedString *attributedText;

@end


@interface JTTextLayer : CATextLayer

@property(copy) id string;

@end