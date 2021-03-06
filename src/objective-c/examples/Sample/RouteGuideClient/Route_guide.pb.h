// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class ObjectiveCFileOptions;
@class ObjectiveCFileOptionsBuilder;
@class PBDescriptorProto;
@class PBDescriptorProtoBuilder;
@class PBDescriptorProtoExtensionRange;
@class PBDescriptorProtoExtensionRangeBuilder;
@class PBEnumDescriptorProto;
@class PBEnumDescriptorProtoBuilder;
@class PBEnumOptions;
@class PBEnumOptionsBuilder;
@class PBEnumValueDescriptorProto;
@class PBEnumValueDescriptorProtoBuilder;
@class PBEnumValueOptions;
@class PBEnumValueOptionsBuilder;
@class PBFieldDescriptorProto;
@class PBFieldDescriptorProtoBuilder;
@class PBFieldOptions;
@class PBFieldOptionsBuilder;
@class PBFileDescriptorProto;
@class PBFileDescriptorProtoBuilder;
@class PBFileDescriptorSet;
@class PBFileDescriptorSetBuilder;
@class PBFileOptions;
@class PBFileOptionsBuilder;
@class PBMessageOptions;
@class PBMessageOptionsBuilder;
@class PBMethodDescriptorProto;
@class PBMethodDescriptorProtoBuilder;
@class PBMethodOptions;
@class PBMethodOptionsBuilder;
@class PBOneofDescriptorProto;
@class PBOneofDescriptorProtoBuilder;
@class PBServiceDescriptorProto;
@class PBServiceDescriptorProtoBuilder;
@class PBServiceOptions;
@class PBServiceOptionsBuilder;
@class PBSourceCodeInfo;
@class PBSourceCodeInfoBuilder;
@class PBSourceCodeInfoLocation;
@class PBSourceCodeInfoLocationBuilder;
@class PBUninterpretedOption;
@class PBUninterpretedOptionBuilder;
@class PBUninterpretedOptionNamePart;
@class PBUninterpretedOptionNamePartBuilder;
@class RGDFeature;
@class RGDFeatureBuilder;
@class RGDPoint;
@class RGDPointBuilder;
@class RGDRectangle;
@class RGDRectangleBuilder;
@class RGDRouteNote;
@class RGDRouteNoteBuilder;
@class RGDRouteSummary;
@class RGDRouteSummaryBuilder;



@interface RGDRouteGuideRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface RGDPoint : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasLatitude_:1;
  BOOL hasLongitude_:1;
  SInt32 latitude;
  SInt32 longitude;
}
- (BOOL) hasLatitude;
- (BOOL) hasLongitude;
@property (readonly) SInt32 latitude;
@property (readonly) SInt32 longitude;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RGDPointBuilder*) builder;
+ (RGDPointBuilder*) builder;
+ (RGDPointBuilder*) builderWithPrototype:(RGDPoint*) prototype;
- (RGDPointBuilder*) toBuilder;

+ (RGDPoint*) parseFromData:(NSData*) data;
+ (RGDPoint*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RGDPoint*) parseFromInputStream:(NSInputStream*) input;
+ (RGDPoint*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RGDPoint*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RGDPoint*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RGDPointBuilder : PBGeneratedMessageBuilder {
@private
  RGDPoint* resultPoint;
}

- (RGDPoint*) defaultInstance;

- (RGDPointBuilder*) clear;
- (RGDPointBuilder*) clone;

- (RGDPoint*) build;
- (RGDPoint*) buildPartial;

- (RGDPointBuilder*) mergeFrom:(RGDPoint*) other;
- (RGDPointBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RGDPointBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasLatitude;
- (SInt32) latitude;
- (RGDPointBuilder*) setLatitude:(SInt32) value;
- (RGDPointBuilder*) clearLatitude;

- (BOOL) hasLongitude;
- (SInt32) longitude;
- (RGDPointBuilder*) setLongitude:(SInt32) value;
- (RGDPointBuilder*) clearLongitude;
@end

@interface RGDRectangle : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasLo_:1;
  BOOL hasHi_:1;
  RGDPoint* lo;
  RGDPoint* hi;
}
- (BOOL) hasLo;
- (BOOL) hasHi;
@property (readonly, strong) RGDPoint* lo;
@property (readonly, strong) RGDPoint* hi;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RGDRectangleBuilder*) builder;
+ (RGDRectangleBuilder*) builder;
+ (RGDRectangleBuilder*) builderWithPrototype:(RGDRectangle*) prototype;
- (RGDRectangleBuilder*) toBuilder;

+ (RGDRectangle*) parseFromData:(NSData*) data;
+ (RGDRectangle*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RGDRectangle*) parseFromInputStream:(NSInputStream*) input;
+ (RGDRectangle*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RGDRectangle*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RGDRectangle*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RGDRectangleBuilder : PBGeneratedMessageBuilder {
@private
  RGDRectangle* resultRectangle;
}

- (RGDRectangle*) defaultInstance;

- (RGDRectangleBuilder*) clear;
- (RGDRectangleBuilder*) clone;

- (RGDRectangle*) build;
- (RGDRectangle*) buildPartial;

- (RGDRectangleBuilder*) mergeFrom:(RGDRectangle*) other;
- (RGDRectangleBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RGDRectangleBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasLo;
- (RGDPoint*) lo;
- (RGDRectangleBuilder*) setLo:(RGDPoint*) value;
- (RGDRectangleBuilder*) setLoBuilder:(RGDPointBuilder*) builderForValue;
- (RGDRectangleBuilder*) mergeLo:(RGDPoint*) value;
- (RGDRectangleBuilder*) clearLo;

- (BOOL) hasHi;
- (RGDPoint*) hi;
- (RGDRectangleBuilder*) setHi:(RGDPoint*) value;
- (RGDRectangleBuilder*) setHiBuilder:(RGDPointBuilder*) builderForValue;
- (RGDRectangleBuilder*) mergeHi:(RGDPoint*) value;
- (RGDRectangleBuilder*) clearHi;
@end

@interface RGDFeature : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasName_:1;
  BOOL hasLocation_:1;
  NSString* name;
  RGDPoint* location;
}
- (BOOL) hasName;
- (BOOL) hasLocation;
@property (readonly, strong) NSString* name;
@property (readonly, strong) RGDPoint* location;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RGDFeatureBuilder*) builder;
+ (RGDFeatureBuilder*) builder;
+ (RGDFeatureBuilder*) builderWithPrototype:(RGDFeature*) prototype;
- (RGDFeatureBuilder*) toBuilder;

+ (RGDFeature*) parseFromData:(NSData*) data;
+ (RGDFeature*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RGDFeature*) parseFromInputStream:(NSInputStream*) input;
+ (RGDFeature*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RGDFeature*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RGDFeature*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RGDFeatureBuilder : PBGeneratedMessageBuilder {
@private
  RGDFeature* resultFeature;
}

- (RGDFeature*) defaultInstance;

- (RGDFeatureBuilder*) clear;
- (RGDFeatureBuilder*) clone;

- (RGDFeature*) build;
- (RGDFeature*) buildPartial;

- (RGDFeatureBuilder*) mergeFrom:(RGDFeature*) other;
- (RGDFeatureBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RGDFeatureBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasName;
- (NSString*) name;
- (RGDFeatureBuilder*) setName:(NSString*) value;
- (RGDFeatureBuilder*) clearName;

- (BOOL) hasLocation;
- (RGDPoint*) location;
- (RGDFeatureBuilder*) setLocation:(RGDPoint*) value;
- (RGDFeatureBuilder*) setLocationBuilder:(RGDPointBuilder*) builderForValue;
- (RGDFeatureBuilder*) mergeLocation:(RGDPoint*) value;
- (RGDFeatureBuilder*) clearLocation;
@end

@interface RGDRouteNote : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasMessage_:1;
  BOOL hasLocation_:1;
  NSString* message;
  RGDPoint* location;
}
- (BOOL) hasLocation;
- (BOOL) hasMessage;
@property (readonly, strong) RGDPoint* location;
@property (readonly, strong) NSString* message;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RGDRouteNoteBuilder*) builder;
+ (RGDRouteNoteBuilder*) builder;
+ (RGDRouteNoteBuilder*) builderWithPrototype:(RGDRouteNote*) prototype;
- (RGDRouteNoteBuilder*) toBuilder;

+ (RGDRouteNote*) parseFromData:(NSData*) data;
+ (RGDRouteNote*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RGDRouteNote*) parseFromInputStream:(NSInputStream*) input;
+ (RGDRouteNote*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RGDRouteNote*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RGDRouteNote*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RGDRouteNoteBuilder : PBGeneratedMessageBuilder {
@private
  RGDRouteNote* resultRouteNote;
}

- (RGDRouteNote*) defaultInstance;

- (RGDRouteNoteBuilder*) clear;
- (RGDRouteNoteBuilder*) clone;

- (RGDRouteNote*) build;
- (RGDRouteNote*) buildPartial;

- (RGDRouteNoteBuilder*) mergeFrom:(RGDRouteNote*) other;
- (RGDRouteNoteBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RGDRouteNoteBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasLocation;
- (RGDPoint*) location;
- (RGDRouteNoteBuilder*) setLocation:(RGDPoint*) value;
- (RGDRouteNoteBuilder*) setLocationBuilder:(RGDPointBuilder*) builderForValue;
- (RGDRouteNoteBuilder*) mergeLocation:(RGDPoint*) value;
- (RGDRouteNoteBuilder*) clearLocation;

- (BOOL) hasMessage;
- (NSString*) message;
- (RGDRouteNoteBuilder*) setMessage:(NSString*) value;
- (RGDRouteNoteBuilder*) clearMessage;
@end

@interface RGDRouteSummary : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasPointCount_:1;
  BOOL hasFeatureCount_:1;
  BOOL hasDistance_:1;
  BOOL hasElapsedTime_:1;
  SInt32 pointCount;
  SInt32 featureCount;
  SInt32 distance;
  SInt32 elapsedTime;
}
- (BOOL) hasPointCount;
- (BOOL) hasFeatureCount;
- (BOOL) hasDistance;
- (BOOL) hasElapsedTime;
@property (readonly) SInt32 pointCount;
@property (readonly) SInt32 featureCount;
@property (readonly) SInt32 distance;
@property (readonly) SInt32 elapsedTime;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RGDRouteSummaryBuilder*) builder;
+ (RGDRouteSummaryBuilder*) builder;
+ (RGDRouteSummaryBuilder*) builderWithPrototype:(RGDRouteSummary*) prototype;
- (RGDRouteSummaryBuilder*) toBuilder;

+ (RGDRouteSummary*) parseFromData:(NSData*) data;
+ (RGDRouteSummary*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RGDRouteSummary*) parseFromInputStream:(NSInputStream*) input;
+ (RGDRouteSummary*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RGDRouteSummary*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RGDRouteSummary*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RGDRouteSummaryBuilder : PBGeneratedMessageBuilder {
@private
  RGDRouteSummary* resultRouteSummary;
}

- (RGDRouteSummary*) defaultInstance;

- (RGDRouteSummaryBuilder*) clear;
- (RGDRouteSummaryBuilder*) clone;

- (RGDRouteSummary*) build;
- (RGDRouteSummary*) buildPartial;

- (RGDRouteSummaryBuilder*) mergeFrom:(RGDRouteSummary*) other;
- (RGDRouteSummaryBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RGDRouteSummaryBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasPointCount;
- (SInt32) pointCount;
- (RGDRouteSummaryBuilder*) setPointCount:(SInt32) value;
- (RGDRouteSummaryBuilder*) clearPointCount;

- (BOOL) hasFeatureCount;
- (SInt32) featureCount;
- (RGDRouteSummaryBuilder*) setFeatureCount:(SInt32) value;
- (RGDRouteSummaryBuilder*) clearFeatureCount;

- (BOOL) hasDistance;
- (SInt32) distance;
- (RGDRouteSummaryBuilder*) setDistance:(SInt32) value;
- (RGDRouteSummaryBuilder*) clearDistance;

- (BOOL) hasElapsedTime;
- (SInt32) elapsedTime;
- (RGDRouteSummaryBuilder*) setElapsedTime:(SInt32) value;
- (RGDRouteSummaryBuilder*) clearElapsedTime;
@end


// @@protoc_insertion_point(global_scope)
