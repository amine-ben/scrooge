/**
 * Generated by Scrooge
 *   version: ?
 *   rev: ?
 *   built at: ?
 */


@import ApacheThrift.TBase;

@interface TFNTwitterThriftGoldOverCapacityException : NSObject <TBase, NSCoding>

@property (nonatomic) int32_t chillTimeSeconds;
@property (nonatomic, readonly) BOOL chillTimeSecondsIsSet;


- (instancetype)initWithChillTimeSeconds:(int32_t)chillTimeSeconds;
- (void)read:(id<TProtocol>)inProtocol;
- (void)write:(id<TProtocol>)outProtocol;

@end