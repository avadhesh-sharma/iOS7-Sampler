



#import <Foundation/Foundation.h>

/**
 Standard random float code
 @param min
 @param max
 @result random number between min and max
 */
#define RANDOM_FLOAT(MIN,MAX) (((CGFloat)arc4random() / 0x100000000) * (MAX - MIN) + MIN);


@interface HUTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic, assign) BOOL presenting;
@end


/**
 The imports for the subclasses, just included here to make switching easier in the Tokyo iOS Meetup Demo.
 */
#import "HUTransitionGhostAnimator.h"
#import "HUTransitionVerticalLinesAnimator.h"
#import "HUTransitionHorizontalLinesAnimator.h"