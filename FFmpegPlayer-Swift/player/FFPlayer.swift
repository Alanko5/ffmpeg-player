//
//  FFPlayer.swift
//  FFmpegPlayer-Swift
//
//  Created by youxiaobin on 2021/1/4.
//

import Foundation
import AppKit

class FFPlayer {
    
    private let render = FFRGBRender.init()
    private let engine: FFEngine
    
    init() {
        self.engine = FFEngine.init(render: render)
    }
    public func play(url: String) -> Bool {
        guard engine.setup(url: url) else { return false }

        return true;
    }
}

extension FFPlayer {
    var displayRender: NSView { render.render }
}
