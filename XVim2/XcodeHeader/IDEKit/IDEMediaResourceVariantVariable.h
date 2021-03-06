//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression, NSSet, NSString;

@interface IDEMediaResourceVariantVariable : NSObject
{
    CDUnknownBlockType _searchValuesBlock;
    CDUnknownBlockType _displayStringForValueBlock;
    CDUnknownBlockType _matchesValueBlock;
    NSString *_displayName;
    long long _valueStartOffset;
    long long _valueEndOffset;
    NSSet *_validValues;
    NSRegularExpression *_expression;
}

+ (id)OSXImageScaleFactorVariantVariable;
+ (id)iOSScreenWidthVariantVariable;
+ (id)iOSHeightClassVariantVariable;
+ (id)iOSWidthClassVariantVariable;
+ (id)iOSIdiomVariantVariable;
+ (id)iOSImageScaleFactorVariantVariable;
+ (id)iOSImageResolutionVariantVariable;
@property(retain, nonatomic) NSRegularExpression *expression; // @synthesize expression=_expression;
@property(retain, nonatomic) NSSet *validValues; // @synthesize validValues=_validValues;
@property(nonatomic) long long valueEndOffset; // @synthesize valueEndOffset=_valueEndOffset;
@property(nonatomic) long long valueStartOffset; // @synthesize valueStartOffset=_valueStartOffset;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (BOOL)value:(id)arg1 matches:(id)arg2;
- (id)description;
- (id)searchValuesForValue:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToVariable:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplayName:(id)arg1 pattern:(id)arg2 valueStartOffset:(long long)arg3 valueEndOffset:(long long)arg4 validValues:(id)arg5 searchValuesBlock:(CDUnknownBlockType)arg6 displayStringForValueBlock:(CDUnknownBlockType)arg7 matchesValueBlock:(CDUnknownBlockType)arg8;
- (id)initWithDisplayName:(id)arg1 pattern:(id)arg2 valueStartOffset:(long long)arg3 valueEndOffset:(long long)arg4 validValues:(id)arg5 searchValuesBlock:(CDUnknownBlockType)arg6 displayStringForValueBlock:(CDUnknownBlockType)arg7;

@end

