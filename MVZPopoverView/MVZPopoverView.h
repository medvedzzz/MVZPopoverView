//
//  MVZPopoverView.h
//
//  Created by EvgenyMikhaylov on 11/27/14.
//  Copyright (c) 2014 Rosberry. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MVZPopoverViewTriangleSide) {
    MVZPopoverViewTriangleSideNone,
    MVZPopoverViewTriangleSideTop,
    MVZPopoverViewTriangleSideLeft,
    MVZPopoverViewTriangleSideBottom,
    MVZPopoverViewTriangleSideRight
};

typedef NS_ENUM(NSUInteger, MVZPopoverViewTriangleType) {
    MVZPopoverViewTriangleTypeDefault,
    MVZPopoverViewTriangleTypeRounded,
};

@class MVZPopoverView;

@protocol MVZPopoverViewDelegate <NSObject>

@optional
- (void)popoverView:(MVZPopoverView *)popoverView touchedAtPoint:(CGPoint)point withEvent:(UIEvent *)event;

@end

@interface MVZPopoverView : UIView

@property (nonatomic, weak) id<MVZPopoverViewDelegate> delegate;

@property (nonatomic) UIEdgeInsets containerInsets;

@property (nonatomic) CGFloat cornerRadius;

@property (nonatomic) CGFloat borderWidth;
@property (nonatomic) UIColor *borderColor;

@property (nonatomic) CGFloat shadowOpacity;
@property (nonatomic) CGFloat shadowRadius;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) UIColor *shadowColor;

@property (nonatomic) CGSize triangleSize;
@property (nonatomic) CGFloat preferedTriangleOffset;
@property (nonatomic) MVZPopoverViewTriangleSide preferedTriangleSide;
@property (nonatomic) MVZPopoverViewTriangleType triangleType;

@property (nonatomic) UIEdgeInsets contentInsets;
@property (nonatomic) CGSize preferedContentSize;
@property (nonatomic) UIView *contentView;

@property (nonatomic, readonly) CGPoint point;

- (void)showFromView:(UIView *)view inContainer:(UIView *)containerView;
- (void)showFromPoint:(CGPoint)point inContainer:(UIView *)containerView;

@end
