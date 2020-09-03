//
//  InsetLabel.h
//  fzj
//
//  Created by rex on 8/25/20.
//  Copyright © 2020 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface InsetLabel : UILabel

/// 控制字体与控件边界的间隙
@property (nonatomic, assign) UIEdgeInsets textInsets;

@end

NS_ASSUME_NONNULL_END
