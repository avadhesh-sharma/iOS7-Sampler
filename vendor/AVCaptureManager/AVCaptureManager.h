

#import <Foundation/Foundation.h>


@protocol AVCaptureManagerDelegate <NSObject>
- (void)didFinishRecordingToOutputFileAtURL:(NSURL *)outputFileURL
                                      error:(NSError *)error;
@end


@interface AVCaptureManager : NSObject

@property (nonatomic, assign) id<AVCaptureManagerDelegate> delegate;
@property (nonatomic, readonly) BOOL isRecording;

- (id)initWithPreviewView:(UIView *)previewView;
- (void)toggleContentsGravity;
- (void)resetFormat;
- (void)switchFormatWithDesiredFPS:(CGFloat)desiredFPS;
- (void)startRecording;
- (void)stopRecording;

@end
