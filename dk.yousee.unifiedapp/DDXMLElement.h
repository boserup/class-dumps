//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDXMLNode.h"

@interface DDXMLElement : DDXMLNode
{
}

+ (id)nodeWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
+ (id)nodeWithElementPrimitive:(struct _xmlNode *)arg1 owner:(id)arg2;
+ (id)elementWithName:(id)arg1 xmlns:(id)arg2;
- (void)setChildren:(id)arg1;
- (void)removeChildAtIndex:(unsigned int)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addChild:(id)arg1;
- (id)resolvePrefixForNamespaceURI:(id)arg1;
- (id)_recursiveResolvePrefixForURI:(id)arg1 atNode:(struct _xmlNode *)arg2;
- (id)resolveNamespaceForName:(id)arg1;
- (id)_recursiveResolveNamespaceForPrefix:(id)arg1 atNode:(struct _xmlNode *)arg2;
- (void)setNamespaces:(id)arg1;
- (id)namespaceForPrefix:(id)arg1;
- (id)namespaces;
- (void)removeNamespaceForPrefix:(id)arg1;
- (void)addNamespace:(id)arg1;
- (void)_addNamespace:(id)arg1;
- (void)_removeNamespaceForPrefix:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)attributes;
- (void)removeAttributeForName:(id)arg1;
- (void)addAttribute:(id)arg1;
- (void)_removeAttributeForName:(id)arg1;
- (BOOL)_hasAttributeWithName:(id)arg1;
- (id)elementsForLocalName:(id)arg1 URI:(id)arg2;
- (id)elementsForName:(id)arg1;
- (id)_elementsForName:(id)arg1 localName:(id)arg2 prefix:(id)arg3 uri:(id)arg4;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 stringValue:(id)arg2;
- (id)initWithName:(id)arg1 URI:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
- (id)initWithElementPrimitive:(struct _xmlNode *)arg1 owner:(id)arg2;
- (id)resultSet;
- (BOOL)hasResultSet;
- (BOOL)isResultSet;
- (id)delayedDeliveryDate;
- (BOOL)wasDelayed;
- (BOOL)hasForwardedPresence;
- (id)forwardedPresence;
- (BOOL)hasForwardedMessage;
- (id)forwardedMessage;
- (BOOL)hasForwardedIQ;
- (id)forwardedIQ;
- (id)forwardedStanzaDelayedDeliveryDate;
- (BOOL)isForwardedStanza;
- (BOOL)hasForwardedStanza;
- (id)forwardedStanza;
- (void)addJSONContainerWithObject:(id)arg1;
- (void)addJSONContainerWithData:(id)arg1;
- (void)addJSONContainerWithString:(id)arg1;
- (id)JSONContainerObject;
- (id)JSONContainerData;
- (id)JSONContainerString;
- (BOOL)hasJSONContainer;
- (BOOL)isJSONContainer;
- (id)JSONContainer;
- (id)namespaceStringValueForPrefix:(id)arg1 withDefaultValue:(id)arg2;
- (id)namespaceStringValueForPrefix:(id)arg1;
- (void)addNamespaceWithPrefix:(id)arg1 stringValue:(id)arg2;
- (unsigned int)stringValueAsNSUInteger;
- (int)stringValueAsNSInteger;
- (unsigned long long)stringValueAsUInt64;
- (long long)stringValueAsInt64;
- (unsigned int)stringValueAsUInt32;
- (int)stringValueAsInt32;
- (double)stringValueAsDouble;
- (float)stringValueAsFloat;
- (BOOL)stringValueAsBool;
- (int)stringValueAsInt;
- (id)attributesAsDictionary;
- (id)attributeNumberBoolValueForName:(id)arg1 withDefaultValue:(BOOL)arg2;
- (id)attributeNumberIntValueForName:(id)arg1 withDefaultValue:(int)arg2;
- (id)attributeStringValueForName:(id)arg1 withDefaultValue:(id)arg2;
- (double)attributeDoubleValueForName:(id)arg1 withDefaultValue:(double)arg2;
- (float)attributeFloatValueForName:(id)arg1 withDefaultValue:(float)arg2;
- (BOOL)attributeBoolValueForName:(id)arg1 withDefaultValue:(BOOL)arg2;
- (int)attributeIntValueForName:(id)arg1 withDefaultValue:(int)arg2;
- (id)attributeNumberUnsignedIntegerValueForName:(id)arg1;
- (id)attributeNumberIntegerValueForName:(id)arg1;
- (id)attributeNumberUInt64ValueForName:(id)arg1;
- (id)attributeNumberInt64ValueForName:(id)arg1;
- (id)attributeNumberUInt32ValueForName:(id)arg1;
- (id)attributeNumberInt32ValueForName:(id)arg1;
- (id)attributeNumberDoubleValueForName:(id)arg1;
- (id)attributeNumberFloatValueForName:(id)arg1;
- (id)attributeNumberBoolValueForName:(id)arg1;
- (id)attributeNumberIntValueForName:(id)arg1;
- (id)attributeStringValueForName:(id)arg1;
- (unsigned int)attributeUnsignedIntegerValueForName:(id)arg1;
- (int)attributeIntegerValueForName:(id)arg1;
- (unsigned long long)attributeUInt64ValueForName:(id)arg1;
- (long long)attributeInt64ValueForName:(id)arg1;
- (unsigned int)attributeUInt32ValueForName:(id)arg1;
- (int)attributeInt32ValueForName:(id)arg1;
- (double)attributeDoubleValueForName:(id)arg1;
- (float)attributeFloatValueForName:(id)arg1;
- (BOOL)attributeBoolValueForName:(id)arg1;
- (int)attributeIntValueForName:(id)arg1;
- (void)addAttributeWithName:(id)arg1 numberValue:(id)arg2;
- (void)addAttributeWithName:(id)arg1 stringValue:(id)arg2;
- (void)addAttributeWithName:(id)arg1 unsignedIntegerValue:(int)arg2;
- (void)addAttributeWithName:(id)arg1 integerValue:(int)arg2;
- (void)addAttributeWithName:(id)arg1 doubleValue:(double)arg2;
- (void)addAttributeWithName:(id)arg1 floatValue:(float)arg2;
- (void)addAttributeWithName:(id)arg1 boolValue:(BOOL)arg2;
- (void)addAttributeWithName:(id)arg1 intValue:(int)arg2;
- (id)compactXMLString;
- (id)prettyXMLString;
- (void)setXmlns:(id)arg1;
- (id)xmlns;
- (void)removeElementForName:(id)arg1 xmlnsPrefix:(id)arg2;
- (void)removeElementForName:(id)arg1 xmlns:(id)arg2;
- (void)removeElementsForName:(id)arg1;
- (void)removeElementForName:(id)arg1;
- (id)elementForName:(id)arg1 xmlnsPrefix:(id)arg2;
- (id)elementForName:(id)arg1 xmlns:(id)arg2;
- (id)elementForName:(id)arg1;
- (id)elementsForXmlnsPrefix:(id)arg1;
- (id)elementsForXmlns:(id)arg1;
- (id)initWithName:(id)arg1 xmlns:(id)arg2;

@end

