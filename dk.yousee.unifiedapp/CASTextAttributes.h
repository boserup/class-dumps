//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableParagraphStyle, NSShadow, UIColor, UIFont;

@interface CASTextAttributes : NSObject
{
    UIFont *_font;
    NSMutableParagraphStyle *_paragraphStyle;
    UIColor *_foregroundColor;
    UIColor *_backgroundColor;
    int _ligature;
    float _kern;
    int _strikethroughStyle;
    int _underlineStyle;
    UIColor *_strokeColor;
    float _strokeWidth;
    NSShadow *_shadow;
    float _baselineOffset;
}

@property(nonatomic) float baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) float strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) int underlineStyle; // @synthesize underlineStyle=_underlineStyle;
@property(nonatomic) int strikethroughStyle; // @synthesize strikethroughStyle=_strikethroughStyle;
@property(nonatomic) float kern; // @synthesize kern=_kern;
@property(nonatomic) int ligature; // @synthesize ligature=_ligature;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) NSMutableParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)dictionary;

@end

