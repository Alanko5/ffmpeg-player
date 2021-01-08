//
//  FFMediaVideo.h
//  FFmpegPlayer
//
//  Created by youxiaobin on 2021/1/4.
//

#import <Foundation/Foundation.h>
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
}


NS_ASSUME_NONNULL_BEGIN

@interface FFMediaVideoContext : NSObject
@property (nonatomic, assign)BOOL enableHWDecode;
@property(nonatomic, assign, readonly)NSInteger streamIndex;

/// 初始化VideoContext
/// @param stream 视频流AVStream
/// @param formatContext AVFormatContext
/// @param fmt 需要显示的目标视频格式
- (instancetype)initWithAVStream:(AVStream *)stream
                   formatContext:(nonnull AVFormatContext *)formatContext
                             fmt:(AVPixelFormat)fmt
                  enableHWDecode:(BOOL)enableHWDecode;
- (AVCodecContext *)codecContext;
- (int)fps;
- (AVFrame *)decodePacket:(AVPacket *)packet;
@end

NS_ASSUME_NONNULL_END
