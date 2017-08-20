#import <Cordova/CDVPlugin.h>
#import <Cordova/CDVPluginResult.h>
#import <DataTransform.h>
#import <RemoteSession.h>
#import <DeviceModel.h>
#import <ConfigClass.h>
#import <HttpManager.h>



@interface esptouchPlugin : CDVPlugin
@property (nonatomic, strong) NSCondition *_condition;
@property (atomic, strong) ESPTouchTask *_esptouchTask;
@property (atomic, strong) DataTransform *_dataTransform;  
@property (atomic, strong) ConfigClass *_configClass;  


- (void)smartConfig:(CDVInvokedUrlCommand*)command;

- (void)cancelConfig:(CDVInvokedUrlCommand*)command;

@end
