//
//  FFVideoRender.h
//  FFmpegPlayer
//
//  Created by youxiaobin on 2021/1/5.
//

#import <Foundation/Foundation.h>
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
}

NS_ASSUME_NONNULL_BEGIN

@protocol FFVideoRender <NSObject>
/// display uncompress video data from ffmpeg
- (void)displayWithAVFrame:(AVFrame *)frame;
- (AVPixelFormat)piexlFormat;
@end

NS_ASSUME_NONNULL_END