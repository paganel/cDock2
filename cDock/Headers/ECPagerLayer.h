//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "ECEventHandling.h"

@class CAScrollLayer, ECPager, ECPagerControlLayer, NSObject<OS_dispatch_source>, NSString;

@interface ECPagerLayer : CALayer <ECEventHandling>
{
    ECPager *_pager;
    ECPagerControlLayer *_controlLayer;
    CAScrollLayer *_scrollLayer;
    unsigned long long _currentPageIndex;
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
    double _startScrollValue;
    struct CGPoint _startLocation;
    struct CGPoint _lastLocation;
    double _cummulativeDelta;
    unsigned long long _lastTime;
    int _pagerControlVisibility;
    unsigned int _isDragScrolling:1;
    unsigned int _isGestureScrolling:1;
    NSObject<OS_dispatch_source> *_scrollWheelTimer;
}

@property(nonatomic) int pagerControlVisibility; // @synthesize pagerControlVisibility=_pagerControlVisibility;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(readonly, nonatomic) CAScrollLayer *scrollLayer; // @synthesize scrollLayer=_scrollLayer;
@property(readonly, nonatomic) ECPagerControlLayer *controlLayer; // @synthesize controlLayer=_controlLayer;
- (void).cxx_destruct;
- (BOOL)scrollWheel:(id)arg1;
- (BOOL)gesture:(id)arg1;
- (BOOL)leftMouseUp:(id)arg1;
- (BOOL)leftMouseDragged:(id)arg1;
- (BOOL)leftMouseDown:(id)arg1;
- (void)scrollToPageIndex:(unsigned long long)arg1;
- (void)invalidate;
- (void)layout;
@property(nonatomic) double scrollValue; // @dynamic scrollValue;
- (void)dealloc;
- (id)initWithPager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
