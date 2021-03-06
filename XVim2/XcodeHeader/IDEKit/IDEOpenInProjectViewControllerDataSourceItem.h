//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString, NSURL;

@interface IDEOpenInProjectViewControllerDataSourceItem : NSObject
{
    NSURL *_url;
    NSImage *_image;
    NSString *_name;
    NSString *_truncatedPath;
    NSString *_shortLastOpenedDate;
}

+ (id)itemForURL:(id)arg1;
@property(readonly) NSString *shortLastOpenedDate; // @synthesize shortLastOpenedDate=_shortLastOpenedDate;
@property(readonly) NSString *truncatedPath; // @synthesize truncatedPath=_truncatedPath;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSImage *image; // @synthesize image=_image;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 image:(id)arg2 name:(id)arg3 truncatedPath:(id)arg4 shortLastOpenedDate:(id)arg5;

@end

