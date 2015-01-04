//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface CASObjectClassDescriptor : NSObject
{
    Class _objectClass;
    CASObjectClassDescriptor *_parent;
    NSDictionary *_propertyKeyAliases;
    NSMutableDictionary *_propertyDescriptorCache;
}

@property(retain, nonatomic) NSMutableDictionary *propertyDescriptorCache; // @synthesize propertyDescriptorCache=_propertyDescriptorCache;
@property(retain, nonatomic) NSDictionary *propertyKeyAliases; // @synthesize propertyKeyAliases=_propertyKeyAliases;
@property(retain, nonatomic) CASObjectClassDescriptor *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
- (void).cxx_destruct;
- (id)propertyDescriptorForKey:(id)arg1;
- (id)invocationForPropertyDescriptor:(id)arg1;
- (void)setArgumentDescriptors:(id)arg1 setter:(SEL)arg2 forPropertyKey:(id)arg3;
- (void)setArgumentDescriptors:(id)arg1 forPropertyKey:(id)arg2;
- (id)initWithClass:(Class)arg1;

@end

