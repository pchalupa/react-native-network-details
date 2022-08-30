#import <React/RCTBridgeModule.h>

#import "react-native-network-info.h"


@interface NetworkInfo : NSObject <RCTBridgeModule>

@property(nonatomic, assign) BOOL setBridgeOnMainQueue;

@end
