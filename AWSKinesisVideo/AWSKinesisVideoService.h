//
// Copyright 2010-2023 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License").
// You may not use this file except in compliance with the License.
// A copy of the License is located at
//
// http://aws.amazon.com/apache2.0
//
// or in the "license" file accompanying this file. This file is distributed
// on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//

#import <Foundation/Foundation.h>
#import <AWSCore/AWSCore.h>
#import "AWSKinesisVideoModel.h"
#import "AWSKinesisVideoResources.h"

NS_ASSUME_NONNULL_BEGIN

//! SDK version for AWSKinesisVideo
FOUNDATION_EXPORT NSString *const AWSKinesisVideoSDKVersion;

/**
 <p/>
 */
@interface AWSKinesisVideo : AWSService

/**
 The service configuration used to instantiate this service client.
 
 @warning Once the client is instantiated, do not modify the configuration object. It may cause unspecified behaviors.
 */
@property (nonatomic, strong, readonly) AWSServiceConfiguration *configuration;

/**
 Returns the singleton service client. If the singleton object does not exist, the SDK instantiates the default service client with `defaultServiceConfiguration` from `[AWSServiceManager defaultServiceManager]`. The reference to this object is maintained by the SDK, and you do not need to retain it manually.

 For example, set the default service configuration in `- application:didFinishLaunchingWithOptions:`
 
 *Swift*

     func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        let credentialProvider = AWSCognitoCredentialsProvider(regionType: .USEast1, identityPoolId: "YourIdentityPoolId")
        let configuration = AWSServiceConfiguration(region: .USEast1, credentialsProvider: credentialProvider)
        AWSServiceManager.default().defaultServiceConfiguration = configuration
 
        return true
    }

 *Objective-C*

     - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
          AWSCognitoCredentialsProvider *credentialsProvider = [[AWSCognitoCredentialsProvider alloc] initWithRegionType:AWSRegionUSEast1
                                                                                                          identityPoolId:@"YourIdentityPoolId"];
          AWSServiceConfiguration *configuration = [[AWSServiceConfiguration alloc] initWithRegion:AWSRegionUSEast1
                                                                               credentialsProvider:credentialsProvider];
          [AWSServiceManager defaultServiceManager].defaultServiceConfiguration = configuration;

          return YES;
      }

 Then call the following to get the default service client:

 *Swift*

     let KinesisVideo = AWSKinesisVideo.default()

 *Objective-C*

     AWSKinesisVideo *KinesisVideo = [AWSKinesisVideo defaultKinesisVideo];

 @return The default service client.
 */
+ (instancetype)defaultKinesisVideo;

/**
 Creates a service client with the given service configuration and registers it for the key.

 For example, set the default service configuration in `- application:didFinishLaunchingWithOptions:`

 *Swift*

     func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        let credentialProvider = AWSCognitoCredentialsProvider(regionType: .USEast1, identityPoolId: "YourIdentityPoolId")
        let configuration = AWSServiceConfiguration(region: .USWest2, credentialsProvider: credentialProvider)
        AWSKinesisVideo.register(with: configuration!, forKey: "USWest2KinesisVideo")
 
        return true
    }

 *Objective-C*

     - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
         AWSCognitoCredentialsProvider *credentialsProvider = [[AWSCognitoCredentialsProvider alloc] initWithRegionType:AWSRegionUSEast1
                                                                                                         identityPoolId:@"YourIdentityPoolId"];
         AWSServiceConfiguration *configuration = [[AWSServiceConfiguration alloc] initWithRegion:AWSRegionUSWest2
                                                                              credentialsProvider:credentialsProvider];

         [AWSKinesisVideo registerKinesisVideoWithConfiguration:configuration forKey:@"USWest2KinesisVideo"];

         return YES;
     }

 Then call the following to get the service client:

 *Swift*

     let KinesisVideo = AWSKinesisVideo(forKey: "USWest2KinesisVideo")

 *Objective-C*

     AWSKinesisVideo *KinesisVideo = [AWSKinesisVideo KinesisVideoForKey:@"USWest2KinesisVideo"];

 @warning After calling this method, do not modify the configuration object. It may cause unspecified behaviors.

 @param configuration A service configuration object.
 @param key           A string to identify the service client.
 */
+ (void)registerKinesisVideoWithConfiguration:(AWSServiceConfiguration *)configuration forKey:(NSString *)key;

/**
 Retrieves the service client associated with the key. You need to call `+ registerKinesisVideoWithConfiguration:forKey:` before invoking this method.

 For example, set the default service configuration in `- application:didFinishLaunchingWithOptions:`

 *Swift*

     func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        let credentialProvider = AWSCognitoCredentialsProvider(regionType: .USEast1, identityPoolId: "YourIdentityPoolId")
        let configuration = AWSServiceConfiguration(region: .USWest2, credentialsProvider: credentialProvider)
        AWSKinesisVideo.register(with: configuration!, forKey: "USWest2KinesisVideo")
 
        return true
    }

 *Objective-C*

     - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
         AWSCognitoCredentialsProvider *credentialsProvider = [[AWSCognitoCredentialsProvider alloc] initWithRegionType:AWSRegionUSEast1
                                                                                                         identityPoolId:@"YourIdentityPoolId"];
         AWSServiceConfiguration *configuration = [[AWSServiceConfiguration alloc] initWithRegion:AWSRegionUSWest2
                                                                              credentialsProvider:credentialsProvider];

         [AWSKinesisVideo registerKinesisVideoWithConfiguration:configuration forKey:@"USWest2KinesisVideo"];

         return YES;
     }

 Then call the following to get the service client:

 *Swift*

     let KinesisVideo = AWSKinesisVideo(forKey: "USWest2KinesisVideo")

 *Objective-C*

     AWSKinesisVideo *KinesisVideo = [AWSKinesisVideo KinesisVideoForKey:@"USWest2KinesisVideo"];

 @param key A string to identify the service client.

 @return An instance of the service client.
 */
+ (instancetype)KinesisVideoForKey:(NSString *)key;

/**
 Removes the service client associated with the key and release it.
 
 @warning Before calling this method, make sure no method is running on this client.
 
 @param key A string to identify the service client.
 */
+ (void)removeKinesisVideoForKey:(NSString *)key;

/**
 <p>Creates a signaling channel. </p><p><code>CreateSignalingChannel</code> is an asynchronous operation.</p>
 
 @param request A container for the necessary parameters to execute the CreateSignalingChannel service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoCreateSignalingChannelOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorAccountChannelLimitExceeded`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorTagsPerResourceExceededLimit`.
 
 @see AWSKinesisVideoCreateSignalingChannelInput
 @see AWSKinesisVideoCreateSignalingChannelOutput
 */
- (AWSTask<AWSKinesisVideoCreateSignalingChannelOutput *> *)createSignalingChannel:(AWSKinesisVideoCreateSignalingChannelInput *)request;

/**
 <p>Creates a signaling channel. </p><p><code>CreateSignalingChannel</code> is an asynchronous operation.</p>
 
 @param request A container for the necessary parameters to execute the CreateSignalingChannel service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorAccountChannelLimitExceeded`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorTagsPerResourceExceededLimit`.
 
 @see AWSKinesisVideoCreateSignalingChannelInput
 @see AWSKinesisVideoCreateSignalingChannelOutput
 */
- (void)createSignalingChannel:(AWSKinesisVideoCreateSignalingChannelInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoCreateSignalingChannelOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Creates a new Kinesis video stream. </p><p>When you create a new stream, Kinesis Video Streams assigns it a version number. When you change the stream's metadata, Kinesis Video Streams updates the version. </p><p><code>CreateStream</code> is an asynchronous operation.</p><p>For information about how the service works, see <a href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/how-it-works.html">How it Works</a>. </p><p>You must have permissions for the <code>KinesisVideo:CreateStream</code> action.</p>
 
 @param request A container for the necessary parameters to execute the CreateStream service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoCreateStreamOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorAccountStreamLimitExceeded`, `AWSKinesisVideoErrorDeviceStreamLimitExceeded`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorInvalidDevice`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorTagsPerResourceExceededLimit`.
 
 @see AWSKinesisVideoCreateStreamInput
 @see AWSKinesisVideoCreateStreamOutput
 */
- (AWSTask<AWSKinesisVideoCreateStreamOutput *> *)createStream:(AWSKinesisVideoCreateStreamInput *)request;

/**
 <p>Creates a new Kinesis video stream. </p><p>When you create a new stream, Kinesis Video Streams assigns it a version number. When you change the stream's metadata, Kinesis Video Streams updates the version. </p><p><code>CreateStream</code> is an asynchronous operation.</p><p>For information about how the service works, see <a href="https://docs.aws.amazon.com/kinesisvideostreams/latest/dg/how-it-works.html">How it Works</a>. </p><p>You must have permissions for the <code>KinesisVideo:CreateStream</code> action.</p>
 
 @param request A container for the necessary parameters to execute the CreateStream service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorAccountStreamLimitExceeded`, `AWSKinesisVideoErrorDeviceStreamLimitExceeded`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorInvalidDevice`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorTagsPerResourceExceededLimit`.
 
 @see AWSKinesisVideoCreateStreamInput
 @see AWSKinesisVideoCreateStreamOutput
 */
- (void)createStream:(AWSKinesisVideoCreateStreamInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoCreateStreamOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>An asynchronous API that deletes a stream’s existing edge configuration, as well as the corresponding media from the Edge Agent.</p><p>When you invoke this API, the sync status is set to <code>DELETING</code>. A deletion process starts, in which active edge jobs are stopped and all media is deleted from the edge device. The time to delete varies, depending on the total amount of stored media. If the deletion process fails, the sync status changes to <code>DELETE_FAILED</code>. You will need to re-try the deletion.</p><p>When the deletion process has completed successfully, the edge configuration is no longer accessible.</p>
 
 @param request A container for the necessary parameters to execute the DeleteEdgeConfiguration service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoDeleteEdgeConfigurationOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorStreamEdgeConfigurationNotFound`.
 
 @see AWSKinesisVideoDeleteEdgeConfigurationInput
 @see AWSKinesisVideoDeleteEdgeConfigurationOutput
 */
- (AWSTask<AWSKinesisVideoDeleteEdgeConfigurationOutput *> *)deleteEdgeConfiguration:(AWSKinesisVideoDeleteEdgeConfigurationInput *)request;

/**
 <p>An asynchronous API that deletes a stream’s existing edge configuration, as well as the corresponding media from the Edge Agent.</p><p>When you invoke this API, the sync status is set to <code>DELETING</code>. A deletion process starts, in which active edge jobs are stopped and all media is deleted from the edge device. The time to delete varies, depending on the total amount of stored media. If the deletion process fails, the sync status changes to <code>DELETE_FAILED</code>. You will need to re-try the deletion.</p><p>When the deletion process has completed successfully, the edge configuration is no longer accessible.</p>
 
 @param request A container for the necessary parameters to execute the DeleteEdgeConfiguration service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorStreamEdgeConfigurationNotFound`.
 
 @see AWSKinesisVideoDeleteEdgeConfigurationInput
 @see AWSKinesisVideoDeleteEdgeConfigurationOutput
 */
- (void)deleteEdgeConfiguration:(AWSKinesisVideoDeleteEdgeConfigurationInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoDeleteEdgeConfigurationOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Deletes a specified signaling channel. <code>DeleteSignalingChannel</code> is an asynchronous operation. If you don't specify the channel's current version, the most recent version is deleted.</p>
 
 @param request A container for the necessary parameters to execute the DeleteSignalingChannel service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoDeleteSignalingChannelOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorVersionMismatch`, `AWSKinesisVideoErrorResourceInUse`.
 
 @see AWSKinesisVideoDeleteSignalingChannelInput
 @see AWSKinesisVideoDeleteSignalingChannelOutput
 */
- (AWSTask<AWSKinesisVideoDeleteSignalingChannelOutput *> *)deleteSignalingChannel:(AWSKinesisVideoDeleteSignalingChannelInput *)request;

/**
 <p>Deletes a specified signaling channel. <code>DeleteSignalingChannel</code> is an asynchronous operation. If you don't specify the channel's current version, the most recent version is deleted.</p>
 
 @param request A container for the necessary parameters to execute the DeleteSignalingChannel service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorVersionMismatch`, `AWSKinesisVideoErrorResourceInUse`.
 
 @see AWSKinesisVideoDeleteSignalingChannelInput
 @see AWSKinesisVideoDeleteSignalingChannelOutput
 */
- (void)deleteSignalingChannel:(AWSKinesisVideoDeleteSignalingChannelInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoDeleteSignalingChannelOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Deletes a Kinesis video stream and the data contained in the stream. </p><p>This method marks the stream for deletion, and makes the data in the stream inaccessible immediately.</p><p></p><p> To ensure that you have the latest version of the stream before deleting it, you can specify the stream version. Kinesis Video Streams assigns a version to each stream. When you update a stream, Kinesis Video Streams assigns a new version number. To get the latest stream version, use the <code>DescribeStream</code> API. </p><p>This operation requires permission for the <code>KinesisVideo:DeleteStream</code> action.</p>
 
 @param request A container for the necessary parameters to execute the DeleteStream service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoDeleteStreamOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorVersionMismatch`, `AWSKinesisVideoErrorResourceInUse`.
 
 @see AWSKinesisVideoDeleteStreamInput
 @see AWSKinesisVideoDeleteStreamOutput
 */
- (AWSTask<AWSKinesisVideoDeleteStreamOutput *> *)deleteStream:(AWSKinesisVideoDeleteStreamInput *)request;

/**
 <p>Deletes a Kinesis video stream and the data contained in the stream. </p><p>This method marks the stream for deletion, and makes the data in the stream inaccessible immediately.</p><p></p><p> To ensure that you have the latest version of the stream before deleting it, you can specify the stream version. Kinesis Video Streams assigns a version to each stream. When you update a stream, Kinesis Video Streams assigns a new version number. To get the latest stream version, use the <code>DescribeStream</code> API. </p><p>This operation requires permission for the <code>KinesisVideo:DeleteStream</code> action.</p>
 
 @param request A container for the necessary parameters to execute the DeleteStream service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorVersionMismatch`, `AWSKinesisVideoErrorResourceInUse`.
 
 @see AWSKinesisVideoDeleteStreamInput
 @see AWSKinesisVideoDeleteStreamOutput
 */
- (void)deleteStream:(AWSKinesisVideoDeleteStreamInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoDeleteStreamOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Describes a stream’s edge configuration that was set using the <code>StartEdgeConfigurationUpdate</code> API and the latest status of the edge agent's recorder and uploader jobs. Use this API to get the status of the configuration to determine if the configuration is in sync with the Edge Agent. Use this API to evaluate the health of the Edge Agent.</p>
 
 @param request A container for the necessary parameters to execute the DescribeEdgeConfiguration service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoDescribeEdgeConfigurationOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorStreamEdgeConfigurationNotFound`.
 
 @see AWSKinesisVideoDescribeEdgeConfigurationInput
 @see AWSKinesisVideoDescribeEdgeConfigurationOutput
 */
- (AWSTask<AWSKinesisVideoDescribeEdgeConfigurationOutput *> *)describeEdgeConfiguration:(AWSKinesisVideoDescribeEdgeConfigurationInput *)request;

/**
 <p>Describes a stream’s edge configuration that was set using the <code>StartEdgeConfigurationUpdate</code> API and the latest status of the edge agent's recorder and uploader jobs. Use this API to get the status of the configuration to determine if the configuration is in sync with the Edge Agent. Use this API to evaluate the health of the Edge Agent.</p>
 
 @param request A container for the necessary parameters to execute the DescribeEdgeConfiguration service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorStreamEdgeConfigurationNotFound`.
 
 @see AWSKinesisVideoDescribeEdgeConfigurationInput
 @see AWSKinesisVideoDescribeEdgeConfigurationOutput
 */
- (void)describeEdgeConfiguration:(AWSKinesisVideoDescribeEdgeConfigurationInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoDescribeEdgeConfigurationOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Gets the <code>ImageGenerationConfiguration</code> for a given Kinesis video stream.</p>
 
 @param request A container for the necessary parameters to execute the DescribeImageGenerationConfiguration service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoDescribeImageGenerationConfigurationOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoDescribeImageGenerationConfigurationInput
 @see AWSKinesisVideoDescribeImageGenerationConfigurationOutput
 */
- (AWSTask<AWSKinesisVideoDescribeImageGenerationConfigurationOutput *> *)describeImageGenerationConfiguration:(AWSKinesisVideoDescribeImageGenerationConfigurationInput *)request;

/**
 <p>Gets the <code>ImageGenerationConfiguration</code> for a given Kinesis video stream.</p>
 
 @param request A container for the necessary parameters to execute the DescribeImageGenerationConfiguration service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoDescribeImageGenerationConfigurationInput
 @see AWSKinesisVideoDescribeImageGenerationConfigurationOutput
 */
- (void)describeImageGenerationConfiguration:(AWSKinesisVideoDescribeImageGenerationConfigurationInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoDescribeImageGenerationConfigurationOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Returns the most current information about the stream. The <code>streamName</code> or <code>streamARN</code> should be provided in the input.</p>
 
 @param request A container for the necessary parameters to execute the DescribeMappedResourceConfiguration service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoDescribeMappedResourceConfigurationOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorClientLimitExceeded`.
 
 @see AWSKinesisVideoDescribeMappedResourceConfigurationInput
 @see AWSKinesisVideoDescribeMappedResourceConfigurationOutput
 */
- (AWSTask<AWSKinesisVideoDescribeMappedResourceConfigurationOutput *> *)describeMappedResourceConfiguration:(AWSKinesisVideoDescribeMappedResourceConfigurationInput *)request;

/**
 <p>Returns the most current information about the stream. The <code>streamName</code> or <code>streamARN</code> should be provided in the input.</p>
 
 @param request A container for the necessary parameters to execute the DescribeMappedResourceConfiguration service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorClientLimitExceeded`.
 
 @see AWSKinesisVideoDescribeMappedResourceConfigurationInput
 @see AWSKinesisVideoDescribeMappedResourceConfigurationOutput
 */
- (void)describeMappedResourceConfiguration:(AWSKinesisVideoDescribeMappedResourceConfigurationInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoDescribeMappedResourceConfigurationOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <important><p>This API is related to <a href="https://docs.aws.amazon.com/kinesisvideostreams-webrtc-dg/latest/devguide/webrtc-ingestion.html">WebRTC Ingestion</a> and is only available in the <code>us-west-2</code> region.</p></important><p>Returns the most current information about the channel. Specify the <code>ChannelName</code> or <code>ChannelARN</code> in the input.</p>
 
 @param request A container for the necessary parameters to execute the DescribeMediaStorageConfiguration service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoDescribeMediaStorageConfigurationOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorClientLimitExceeded`.
 
 @see AWSKinesisVideoDescribeMediaStorageConfigurationInput
 @see AWSKinesisVideoDescribeMediaStorageConfigurationOutput
 */
- (AWSTask<AWSKinesisVideoDescribeMediaStorageConfigurationOutput *> *)describeMediaStorageConfiguration:(AWSKinesisVideoDescribeMediaStorageConfigurationInput *)request;

/**
 <important><p>This API is related to <a href="https://docs.aws.amazon.com/kinesisvideostreams-webrtc-dg/latest/devguide/webrtc-ingestion.html">WebRTC Ingestion</a> and is only available in the <code>us-west-2</code> region.</p></important><p>Returns the most current information about the channel. Specify the <code>ChannelName</code> or <code>ChannelARN</code> in the input.</p>
 
 @param request A container for the necessary parameters to execute the DescribeMediaStorageConfiguration service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorClientLimitExceeded`.
 
 @see AWSKinesisVideoDescribeMediaStorageConfigurationInput
 @see AWSKinesisVideoDescribeMediaStorageConfigurationOutput
 */
- (void)describeMediaStorageConfiguration:(AWSKinesisVideoDescribeMediaStorageConfigurationInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoDescribeMediaStorageConfigurationOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Gets the <code>NotificationConfiguration</code> for a given Kinesis video stream.</p>
 
 @param request A container for the necessary parameters to execute the DescribeNotificationConfiguration service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoDescribeNotificationConfigurationOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoDescribeNotificationConfigurationInput
 @see AWSKinesisVideoDescribeNotificationConfigurationOutput
 */
- (AWSTask<AWSKinesisVideoDescribeNotificationConfigurationOutput *> *)describeNotificationConfiguration:(AWSKinesisVideoDescribeNotificationConfigurationInput *)request;

/**
 <p>Gets the <code>NotificationConfiguration</code> for a given Kinesis video stream.</p>
 
 @param request A container for the necessary parameters to execute the DescribeNotificationConfiguration service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoDescribeNotificationConfigurationInput
 @see AWSKinesisVideoDescribeNotificationConfigurationOutput
 */
- (void)describeNotificationConfiguration:(AWSKinesisVideoDescribeNotificationConfigurationInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoDescribeNotificationConfigurationOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Returns the most current information about the signaling channel. You must specify either the name or the Amazon Resource Name (ARN) of the channel that you want to describe.</p>
 
 @param request A container for the necessary parameters to execute the DescribeSignalingChannel service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoDescribeSignalingChannelOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoDescribeSignalingChannelInput
 @see AWSKinesisVideoDescribeSignalingChannelOutput
 */
- (AWSTask<AWSKinesisVideoDescribeSignalingChannelOutput *> *)describeSignalingChannel:(AWSKinesisVideoDescribeSignalingChannelInput *)request;

/**
 <p>Returns the most current information about the signaling channel. You must specify either the name or the Amazon Resource Name (ARN) of the channel that you want to describe.</p>
 
 @param request A container for the necessary parameters to execute the DescribeSignalingChannel service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoDescribeSignalingChannelInput
 @see AWSKinesisVideoDescribeSignalingChannelOutput
 */
- (void)describeSignalingChannel:(AWSKinesisVideoDescribeSignalingChannelInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoDescribeSignalingChannelOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Returns the most current information about the specified stream. You must specify either the <code>StreamName</code> or the <code>StreamARN</code>. </p>
 
 @param request A container for the necessary parameters to execute the DescribeStream service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoDescribeStreamOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorNotAuthorized`.
 
 @see AWSKinesisVideoDescribeStreamInput
 @see AWSKinesisVideoDescribeStreamOutput
 */
- (AWSTask<AWSKinesisVideoDescribeStreamOutput *> *)describeStream:(AWSKinesisVideoDescribeStreamInput *)request;

/**
 <p>Returns the most current information about the specified stream. You must specify either the <code>StreamName</code> or the <code>StreamARN</code>. </p>
 
 @param request A container for the necessary parameters to execute the DescribeStream service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorNotAuthorized`.
 
 @see AWSKinesisVideoDescribeStreamInput
 @see AWSKinesisVideoDescribeStreamOutput
 */
- (void)describeStream:(AWSKinesisVideoDescribeStreamInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoDescribeStreamOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Gets an endpoint for a specified stream for either reading or writing. Use this endpoint in your application to read from the specified stream (using the <code>GetMedia</code> or <code>GetMediaForFragmentList</code> operations) or write to it (using the <code>PutMedia</code> operation). </p><note><p>The returned endpoint does not have the API name appended. The client needs to add the API name to the returned endpoint.</p></note><p>In the request, specify the stream either by <code>StreamName</code> or <code>StreamARN</code>.</p>
 
 @param request A container for the necessary parameters to execute the GetDataEndpoint service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoGetDataEndpointOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorNotAuthorized`.
 
 @see AWSKinesisVideoGetDataEndpointInput
 @see AWSKinesisVideoGetDataEndpointOutput
 */
- (AWSTask<AWSKinesisVideoGetDataEndpointOutput *> *)getDataEndpoint:(AWSKinesisVideoGetDataEndpointInput *)request;

/**
 <p>Gets an endpoint for a specified stream for either reading or writing. Use this endpoint in your application to read from the specified stream (using the <code>GetMedia</code> or <code>GetMediaForFragmentList</code> operations) or write to it (using the <code>PutMedia</code> operation). </p><note><p>The returned endpoint does not have the API name appended. The client needs to add the API name to the returned endpoint.</p></note><p>In the request, specify the stream either by <code>StreamName</code> or <code>StreamARN</code>.</p>
 
 @param request A container for the necessary parameters to execute the GetDataEndpoint service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorNotAuthorized`.
 
 @see AWSKinesisVideoGetDataEndpointInput
 @see AWSKinesisVideoGetDataEndpointOutput
 */
- (void)getDataEndpoint:(AWSKinesisVideoGetDataEndpointInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoGetDataEndpointOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Provides an endpoint for the specified signaling channel to send and receive messages. This API uses the <code>SingleMasterChannelEndpointConfiguration</code> input parameter, which consists of the <code>Protocols</code> and <code>Role</code> properties.</p><p><code>Protocols</code> is used to determine the communication mechanism. For example, if you specify <code>WSS</code> as the protocol, this API produces a secure websocket endpoint. If you specify <code>HTTPS</code> as the protocol, this API generates an HTTPS endpoint. </p><p><code>Role</code> determines the messaging permissions. A <code>MASTER</code> role results in this API generating an endpoint that a client can use to communicate with any of the viewers on the channel. A <code>VIEWER</code> role results in this API generating an endpoint that a client can use to communicate only with a <code>MASTER</code>. </p>
 
 @param request A container for the necessary parameters to execute the GetSignalingChannelEndpoint service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoGetSignalingChannelEndpointOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoGetSignalingChannelEndpointInput
 @see AWSKinesisVideoGetSignalingChannelEndpointOutput
 */
- (AWSTask<AWSKinesisVideoGetSignalingChannelEndpointOutput *> *)getSignalingChannelEndpoint:(AWSKinesisVideoGetSignalingChannelEndpointInput *)request;

/**
 <p>Provides an endpoint for the specified signaling channel to send and receive messages. This API uses the <code>SingleMasterChannelEndpointConfiguration</code> input parameter, which consists of the <code>Protocols</code> and <code>Role</code> properties.</p><p><code>Protocols</code> is used to determine the communication mechanism. For example, if you specify <code>WSS</code> as the protocol, this API produces a secure websocket endpoint. If you specify <code>HTTPS</code> as the protocol, this API generates an HTTPS endpoint. </p><p><code>Role</code> determines the messaging permissions. A <code>MASTER</code> role results in this API generating an endpoint that a client can use to communicate with any of the viewers on the channel. A <code>VIEWER</code> role results in this API generating an endpoint that a client can use to communicate only with a <code>MASTER</code>. </p>
 
 @param request A container for the necessary parameters to execute the GetSignalingChannelEndpoint service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoGetSignalingChannelEndpointInput
 @see AWSKinesisVideoGetSignalingChannelEndpointOutput
 */
- (void)getSignalingChannelEndpoint:(AWSKinesisVideoGetSignalingChannelEndpointInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoGetSignalingChannelEndpointOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Returns an array of edge configurations associated with the specified Edge Agent.</p><p>In the request, you must specify the Edge Agent <code>HubDeviceArn</code>.</p>
 
 @param request A container for the necessary parameters to execute the ListEdgeAgentConfigurations service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoListEdgeAgentConfigurationsOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`.
 
 @see AWSKinesisVideoListEdgeAgentConfigurationsInput
 @see AWSKinesisVideoListEdgeAgentConfigurationsOutput
 */
- (AWSTask<AWSKinesisVideoListEdgeAgentConfigurationsOutput *> *)listEdgeAgentConfigurations:(AWSKinesisVideoListEdgeAgentConfigurationsInput *)request;

/**
 <p>Returns an array of edge configurations associated with the specified Edge Agent.</p><p>In the request, you must specify the Edge Agent <code>HubDeviceArn</code>.</p>
 
 @param request A container for the necessary parameters to execute the ListEdgeAgentConfigurations service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`.
 
 @see AWSKinesisVideoListEdgeAgentConfigurationsInput
 @see AWSKinesisVideoListEdgeAgentConfigurationsOutput
 */
- (void)listEdgeAgentConfigurations:(AWSKinesisVideoListEdgeAgentConfigurationsInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoListEdgeAgentConfigurationsOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Returns an array of <code>ChannelInfo</code> objects. Each object describes a signaling channel. To retrieve only those channels that satisfy a specific condition, you can specify a <code>ChannelNameCondition</code>.</p>
 
 @param request A container for the necessary parameters to execute the ListSignalingChannels service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoListSignalingChannelsOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoListSignalingChannelsInput
 @see AWSKinesisVideoListSignalingChannelsOutput
 */
- (AWSTask<AWSKinesisVideoListSignalingChannelsOutput *> *)listSignalingChannels:(AWSKinesisVideoListSignalingChannelsInput *)request;

/**
 <p>Returns an array of <code>ChannelInfo</code> objects. Each object describes a signaling channel. To retrieve only those channels that satisfy a specific condition, you can specify a <code>ChannelNameCondition</code>.</p>
 
 @param request A container for the necessary parameters to execute the ListSignalingChannels service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoListSignalingChannelsInput
 @see AWSKinesisVideoListSignalingChannelsOutput
 */
- (void)listSignalingChannels:(AWSKinesisVideoListSignalingChannelsInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoListSignalingChannelsOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Returns an array of <code>StreamInfo</code> objects. Each object describes a stream. To retrieve only streams that satisfy a specific condition, you can specify a <code>StreamNameCondition</code>. </p>
 
 @param request A container for the necessary parameters to execute the ListStreams service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoListStreamsOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`.
 
 @see AWSKinesisVideoListStreamsInput
 @see AWSKinesisVideoListStreamsOutput
 */
- (AWSTask<AWSKinesisVideoListStreamsOutput *> *)listStreams:(AWSKinesisVideoListStreamsInput *)request;

/**
 <p>Returns an array of <code>StreamInfo</code> objects. Each object describes a stream. To retrieve only streams that satisfy a specific condition, you can specify a <code>StreamNameCondition</code>. </p>
 
 @param request A container for the necessary parameters to execute the ListStreams service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`.
 
 @see AWSKinesisVideoListStreamsInput
 @see AWSKinesisVideoListStreamsOutput
 */
- (void)listStreams:(AWSKinesisVideoListStreamsInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoListStreamsOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Returns a list of tags associated with the specified signaling channel.</p>
 
 @param request A container for the necessary parameters to execute the ListTagsForResource service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoListTagsForResourceOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoListTagsForResourceInput
 @see AWSKinesisVideoListTagsForResourceOutput
 */
- (AWSTask<AWSKinesisVideoListTagsForResourceOutput *> *)listTagsForResource:(AWSKinesisVideoListTagsForResourceInput *)request;

/**
 <p>Returns a list of tags associated with the specified signaling channel.</p>
 
 @param request A container for the necessary parameters to execute the ListTagsForResource service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoListTagsForResourceInput
 @see AWSKinesisVideoListTagsForResourceOutput
 */
- (void)listTagsForResource:(AWSKinesisVideoListTagsForResourceInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoListTagsForResourceOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Returns a list of tags associated with the specified stream.</p><p>In the request, you must specify either the <code>StreamName</code> or the <code>StreamARN</code>. </p>
 
 @param request A container for the necessary parameters to execute the ListTagsForStream service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoListTagsForStreamOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorInvalidResourceFormat`.
 
 @see AWSKinesisVideoListTagsForStreamInput
 @see AWSKinesisVideoListTagsForStreamOutput
 */
- (AWSTask<AWSKinesisVideoListTagsForStreamOutput *> *)listTagsForStream:(AWSKinesisVideoListTagsForStreamInput *)request;

/**
 <p>Returns a list of tags associated with the specified stream.</p><p>In the request, you must specify either the <code>StreamName</code> or the <code>StreamARN</code>. </p>
 
 @param request A container for the necessary parameters to execute the ListTagsForStream service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorInvalidResourceFormat`.
 
 @see AWSKinesisVideoListTagsForStreamInput
 @see AWSKinesisVideoListTagsForStreamOutput
 */
- (void)listTagsForStream:(AWSKinesisVideoListTagsForStreamInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoListTagsForStreamOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>An asynchronous API that updates a stream’s existing edge configuration. The Kinesis Video Stream will sync the stream’s edge configuration with the Edge Agent IoT Greengrass component that runs on an IoT Hub Device, setup at your premise. The time to sync can vary and depends on the connectivity of the Hub Device. The <code>SyncStatus</code> will be updated as the edge configuration is acknowledged, and synced with the Edge Agent. </p><p>If this API is invoked for the first time, a new edge configuration will be created for the stream, and the sync status will be set to <code>SYNCING</code>. You will have to wait for the sync status to reach a terminal state such as: <code>IN_SYNC</code>, or <code>SYNC_FAILED</code>, before using this API again. If you invoke this API during the syncing process, a <code>ResourceInUseException</code> will be thrown. The connectivity of the stream’s edge configuration and the Edge Agent will be retried for 15 minutes. After 15 minutes, the status will transition into the <code>SYNC_FAILED</code> state.</p><p>To move an edge configuration from one device to another, use <a>DeleteEdgeConfiguration</a> to delete the current edge configuration. You can then invoke StartEdgeConfigurationUpdate with an updated Hub Device ARN.</p>
 
 @param request A container for the necessary parameters to execute the StartEdgeConfigurationUpdate service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoStartEdgeConfigurationUpdateOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorNoDataRetention`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorResourceNotFound`.
 
 @see AWSKinesisVideoStartEdgeConfigurationUpdateInput
 @see AWSKinesisVideoStartEdgeConfigurationUpdateOutput
 */
- (AWSTask<AWSKinesisVideoStartEdgeConfigurationUpdateOutput *> *)startEdgeConfigurationUpdate:(AWSKinesisVideoStartEdgeConfigurationUpdateInput *)request;

/**
 <p>An asynchronous API that updates a stream’s existing edge configuration. The Kinesis Video Stream will sync the stream’s edge configuration with the Edge Agent IoT Greengrass component that runs on an IoT Hub Device, setup at your premise. The time to sync can vary and depends on the connectivity of the Hub Device. The <code>SyncStatus</code> will be updated as the edge configuration is acknowledged, and synced with the Edge Agent. </p><p>If this API is invoked for the first time, a new edge configuration will be created for the stream, and the sync status will be set to <code>SYNCING</code>. You will have to wait for the sync status to reach a terminal state such as: <code>IN_SYNC</code>, or <code>SYNC_FAILED</code>, before using this API again. If you invoke this API during the syncing process, a <code>ResourceInUseException</code> will be thrown. The connectivity of the stream’s edge configuration and the Edge Agent will be retried for 15 minutes. After 15 minutes, the status will transition into the <code>SYNC_FAILED</code> state.</p><p>To move an edge configuration from one device to another, use <a>DeleteEdgeConfiguration</a> to delete the current edge configuration. You can then invoke StartEdgeConfigurationUpdate with an updated Hub Device ARN.</p>
 
 @param request A container for the necessary parameters to execute the StartEdgeConfigurationUpdate service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorNoDataRetention`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorResourceNotFound`.
 
 @see AWSKinesisVideoStartEdgeConfigurationUpdateInput
 @see AWSKinesisVideoStartEdgeConfigurationUpdateOutput
 */
- (void)startEdgeConfigurationUpdate:(AWSKinesisVideoStartEdgeConfigurationUpdateInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoStartEdgeConfigurationUpdateOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Adds one or more tags to a signaling channel. A <i>tag</i> is a key-value pair (the value is optional) that you can define and assign to Amazon Web Services resources. If you specify a tag that already exists, the tag value is replaced with the value that you specify in the request. For more information, see <a href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a> in the <i>Billing and Cost Management and Cost Management User Guide</i>.</p>
 
 @param request A container for the necessary parameters to execute the TagResource service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoTagResourceOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorTagsPerResourceExceededLimit`.
 
 @see AWSKinesisVideoTagResourceInput
 @see AWSKinesisVideoTagResourceOutput
 */
- (AWSTask<AWSKinesisVideoTagResourceOutput *> *)tagResource:(AWSKinesisVideoTagResourceInput *)request;

/**
 <p>Adds one or more tags to a signaling channel. A <i>tag</i> is a key-value pair (the value is optional) that you can define and assign to Amazon Web Services resources. If you specify a tag that already exists, the tag value is replaced with the value that you specify in the request. For more information, see <a href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a> in the <i>Billing and Cost Management and Cost Management User Guide</i>.</p>
 
 @param request A container for the necessary parameters to execute the TagResource service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorTagsPerResourceExceededLimit`.
 
 @see AWSKinesisVideoTagResourceInput
 @see AWSKinesisVideoTagResourceOutput
 */
- (void)tagResource:(AWSKinesisVideoTagResourceInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoTagResourceOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Adds one or more tags to a stream. A <i>tag</i> is a key-value pair (the value is optional) that you can define and assign to Amazon Web Services resources. If you specify a tag that already exists, the tag value is replaced with the value that you specify in the request. For more information, see <a href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a> in the <i>Billing and Cost Management and Cost Management User Guide</i>. </p><p>You must provide either the <code>StreamName</code> or the <code>StreamARN</code>.</p><p>This operation requires permission for the <code>KinesisVideo:TagStream</code> action.</p><p>A Kinesis video stream can support up to 50 tags.</p>
 
 @param request A container for the necessary parameters to execute the TagStream service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoTagStreamOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorInvalidResourceFormat`, `AWSKinesisVideoErrorTagsPerResourceExceededLimit`.
 
 @see AWSKinesisVideoTagStreamInput
 @see AWSKinesisVideoTagStreamOutput
 */
- (AWSTask<AWSKinesisVideoTagStreamOutput *> *)tagStream:(AWSKinesisVideoTagStreamInput *)request;

/**
 <p>Adds one or more tags to a stream. A <i>tag</i> is a key-value pair (the value is optional) that you can define and assign to Amazon Web Services resources. If you specify a tag that already exists, the tag value is replaced with the value that you specify in the request. For more information, see <a href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a> in the <i>Billing and Cost Management and Cost Management User Guide</i>. </p><p>You must provide either the <code>StreamName</code> or the <code>StreamARN</code>.</p><p>This operation requires permission for the <code>KinesisVideo:TagStream</code> action.</p><p>A Kinesis video stream can support up to 50 tags.</p>
 
 @param request A container for the necessary parameters to execute the TagStream service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorInvalidResourceFormat`, `AWSKinesisVideoErrorTagsPerResourceExceededLimit`.
 
 @see AWSKinesisVideoTagStreamInput
 @see AWSKinesisVideoTagStreamOutput
 */
- (void)tagStream:(AWSKinesisVideoTagStreamInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoTagStreamOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Removes one or more tags from a signaling channel. In the request, specify only a tag key or keys; don't specify the value. If you specify a tag key that does not exist, it's ignored.</p>
 
 @param request A container for the necessary parameters to execute the UntagResource service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoUntagResourceOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoUntagResourceInput
 @see AWSKinesisVideoUntagResourceOutput
 */
- (AWSTask<AWSKinesisVideoUntagResourceOutput *> *)untagResource:(AWSKinesisVideoUntagResourceInput *)request;

/**
 <p>Removes one or more tags from a signaling channel. In the request, specify only a tag key or keys; don't specify the value. If you specify a tag key that does not exist, it's ignored.</p>
 
 @param request A container for the necessary parameters to execute the UntagResource service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`.
 
 @see AWSKinesisVideoUntagResourceInput
 @see AWSKinesisVideoUntagResourceOutput
 */
- (void)untagResource:(AWSKinesisVideoUntagResourceInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoUntagResourceOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Removes one or more tags from a stream. In the request, specify only a tag key or keys; don't specify the value. If you specify a tag key that does not exist, it's ignored.</p><p>In the request, you must provide the <code>StreamName</code> or <code>StreamARN</code>.</p>
 
 @param request A container for the necessary parameters to execute the UntagStream service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoUntagStreamOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorInvalidResourceFormat`.
 
 @see AWSKinesisVideoUntagStreamInput
 @see AWSKinesisVideoUntagStreamOutput
 */
- (AWSTask<AWSKinesisVideoUntagStreamOutput *> *)untagStream:(AWSKinesisVideoUntagStreamInput *)request;

/**
 <p>Removes one or more tags from a stream. In the request, specify only a tag key or keys; don't specify the value. If you specify a tag key that does not exist, it's ignored.</p><p>In the request, you must provide the <code>StreamName</code> or <code>StreamARN</code>.</p>
 
 @param request A container for the necessary parameters to execute the UntagStream service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorInvalidResourceFormat`.
 
 @see AWSKinesisVideoUntagStreamInput
 @see AWSKinesisVideoUntagStreamOutput
 */
- (void)untagStream:(AWSKinesisVideoUntagStreamInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoUntagStreamOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p> Increases or decreases the stream's data retention period by the value that you specify. To indicate whether you want to increase or decrease the data retention period, specify the <code>Operation</code> parameter in the request body. In the request, you must specify either the <code>StreamName</code> or the <code>StreamARN</code>. </p><note><p>The retention period that you specify replaces the current value.</p></note><p>This operation requires permission for the <code>KinesisVideo:UpdateDataRetention</code> action.</p><p>Changing the data retention period affects the data in the stream as follows:</p><ul><li><p>If the data retention period is increased, existing data is retained for the new retention period. For example, if the data retention period is increased from one hour to seven hours, all existing data is retained for seven hours.</p></li><li><p>If the data retention period is decreased, existing data is retained for the new retention period. For example, if the data retention period is decreased from seven hours to one hour, all existing data is retained for one hour, and any data older than one hour is deleted immediately.</p></li></ul>
 
 @param request A container for the necessary parameters to execute the UpdateDataRetention service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoUpdateDataRetentionOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorVersionMismatch`.
 
 @see AWSKinesisVideoUpdateDataRetentionInput
 @see AWSKinesisVideoUpdateDataRetentionOutput
 */
- (AWSTask<AWSKinesisVideoUpdateDataRetentionOutput *> *)updateDataRetention:(AWSKinesisVideoUpdateDataRetentionInput *)request;

/**
 <p> Increases or decreases the stream's data retention period by the value that you specify. To indicate whether you want to increase or decrease the data retention period, specify the <code>Operation</code> parameter in the request body. In the request, you must specify either the <code>StreamName</code> or the <code>StreamARN</code>. </p><note><p>The retention period that you specify replaces the current value.</p></note><p>This operation requires permission for the <code>KinesisVideo:UpdateDataRetention</code> action.</p><p>Changing the data retention period affects the data in the stream as follows:</p><ul><li><p>If the data retention period is increased, existing data is retained for the new retention period. For example, if the data retention period is increased from one hour to seven hours, all existing data is retained for seven hours.</p></li><li><p>If the data retention period is decreased, existing data is retained for the new retention period. For example, if the data retention period is decreased from seven hours to one hour, all existing data is retained for one hour, and any data older than one hour is deleted immediately.</p></li></ul>
 
 @param request A container for the necessary parameters to execute the UpdateDataRetention service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorVersionMismatch`.
 
 @see AWSKinesisVideoUpdateDataRetentionInput
 @see AWSKinesisVideoUpdateDataRetentionOutput
 */
- (void)updateDataRetention:(AWSKinesisVideoUpdateDataRetentionInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoUpdateDataRetentionOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Updates the <code>StreamInfo</code> and <code>ImageProcessingConfiguration</code> fields.</p>
 
 @param request A container for the necessary parameters to execute the UpdateImageGenerationConfiguration service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoUpdateImageGenerationConfigurationOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorNoDataRetention`.
 
 @see AWSKinesisVideoUpdateImageGenerationConfigurationInput
 @see AWSKinesisVideoUpdateImageGenerationConfigurationOutput
 */
- (AWSTask<AWSKinesisVideoUpdateImageGenerationConfigurationOutput *> *)updateImageGenerationConfiguration:(AWSKinesisVideoUpdateImageGenerationConfigurationInput *)request;

/**
 <p>Updates the <code>StreamInfo</code> and <code>ImageProcessingConfiguration</code> fields.</p>
 
 @param request A container for the necessary parameters to execute the UpdateImageGenerationConfiguration service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorNoDataRetention`.
 
 @see AWSKinesisVideoUpdateImageGenerationConfigurationInput
 @see AWSKinesisVideoUpdateImageGenerationConfigurationOutput
 */
- (void)updateImageGenerationConfiguration:(AWSKinesisVideoUpdateImageGenerationConfigurationInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoUpdateImageGenerationConfigurationOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <important><p>This API is related to <a href="https://docs.aws.amazon.com/kinesisvideostreams-webrtc-dg/latest/devguide/webrtc-ingestion.html">WebRTC Ingestion</a> and is only available in the <code>us-west-2</code> region.</p></important><p>Associates a <code>SignalingChannel</code> to a stream to store the media. There are two signaling modes that can specified :</p><ul><li><p>If the <code>StorageStatus</code> is disabled, no data will be stored, and the <code>StreamARN</code> parameter will not be needed. </p></li><li><p>If the <code>StorageStatus</code> is enabled, the data will be stored in the <code>StreamARN</code> provided. </p></li></ul><important><p>If <code>StorageStatus</code> is enabled, direct peer-to-peer (master-viewer) connections no longer occur. Peers connect directly to the storage session. You must call the <code>JoinStorageSession</code> API to trigger an SDP offer send and establish a connection between a peer and the storage session. </p></important>
 
 @param request A container for the necessary parameters to execute the UpdateMediaStorageConfiguration service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoUpdateMediaStorageConfigurationOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorNoDataRetention`.
 
 @see AWSKinesisVideoUpdateMediaStorageConfigurationInput
 @see AWSKinesisVideoUpdateMediaStorageConfigurationOutput
 */
- (AWSTask<AWSKinesisVideoUpdateMediaStorageConfigurationOutput *> *)updateMediaStorageConfiguration:(AWSKinesisVideoUpdateMediaStorageConfigurationInput *)request;

/**
 <important><p>This API is related to <a href="https://docs.aws.amazon.com/kinesisvideostreams-webrtc-dg/latest/devguide/webrtc-ingestion.html">WebRTC Ingestion</a> and is only available in the <code>us-west-2</code> region.</p></important><p>Associates a <code>SignalingChannel</code> to a stream to store the media. There are two signaling modes that can specified :</p><ul><li><p>If the <code>StorageStatus</code> is disabled, no data will be stored, and the <code>StreamARN</code> parameter will not be needed. </p></li><li><p>If the <code>StorageStatus</code> is enabled, the data will be stored in the <code>StreamARN</code> provided. </p></li></ul><important><p>If <code>StorageStatus</code> is enabled, direct peer-to-peer (master-viewer) connections no longer occur. Peers connect directly to the storage session. You must call the <code>JoinStorageSession</code> API to trigger an SDP offer send and establish a connection between a peer and the storage session. </p></important>
 
 @param request A container for the necessary parameters to execute the UpdateMediaStorageConfiguration service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorNoDataRetention`.
 
 @see AWSKinesisVideoUpdateMediaStorageConfigurationInput
 @see AWSKinesisVideoUpdateMediaStorageConfigurationOutput
 */
- (void)updateMediaStorageConfiguration:(AWSKinesisVideoUpdateMediaStorageConfigurationInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoUpdateMediaStorageConfigurationOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Updates the notification information for a stream.</p>
 
 @param request A container for the necessary parameters to execute the UpdateNotificationConfiguration service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoUpdateNotificationConfigurationOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorNoDataRetention`.
 
 @see AWSKinesisVideoUpdateNotificationConfigurationInput
 @see AWSKinesisVideoUpdateNotificationConfigurationOutput
 */
- (AWSTask<AWSKinesisVideoUpdateNotificationConfigurationOutput *> *)updateNotificationConfiguration:(AWSKinesisVideoUpdateNotificationConfigurationInput *)request;

/**
 <p>Updates the notification information for a stream.</p>
 
 @param request A container for the necessary parameters to execute the UpdateNotificationConfiguration service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorNoDataRetention`.
 
 @see AWSKinesisVideoUpdateNotificationConfigurationInput
 @see AWSKinesisVideoUpdateNotificationConfigurationOutput
 */
- (void)updateNotificationConfiguration:(AWSKinesisVideoUpdateNotificationConfigurationInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoUpdateNotificationConfigurationOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Updates the existing signaling channel. This is an asynchronous operation and takes time to complete. </p><p>If the <code>MessageTtlSeconds</code> value is updated (either increased or reduced), it only applies to new messages sent via this channel after it's been updated. Existing messages are still expired as per the previous <code>MessageTtlSeconds</code> value.</p>
 
 @param request A container for the necessary parameters to execute the UpdateSignalingChannel service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoUpdateSignalingChannelOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorVersionMismatch`.
 
 @see AWSKinesisVideoUpdateSignalingChannelInput
 @see AWSKinesisVideoUpdateSignalingChannelOutput
 */
- (AWSTask<AWSKinesisVideoUpdateSignalingChannelOutput *> *)updateSignalingChannel:(AWSKinesisVideoUpdateSignalingChannelInput *)request;

/**
 <p>Updates the existing signaling channel. This is an asynchronous operation and takes time to complete. </p><p>If the <code>MessageTtlSeconds</code> value is updated (either increased or reduced), it only applies to new messages sent via this channel after it's been updated. Existing messages are still expired as per the previous <code>MessageTtlSeconds</code> value.</p>
 
 @param request A container for the necessary parameters to execute the UpdateSignalingChannel service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorAccessDenied`, `AWSKinesisVideoErrorVersionMismatch`.
 
 @see AWSKinesisVideoUpdateSignalingChannelInput
 @see AWSKinesisVideoUpdateSignalingChannelOutput
 */
- (void)updateSignalingChannel:(AWSKinesisVideoUpdateSignalingChannelInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoUpdateSignalingChannelOutput * _Nullable response, NSError * _Nullable error))completionHandler;

/**
 <p>Updates stream metadata, such as the device name and media type.</p><p>You must provide the stream name or the Amazon Resource Name (ARN) of the stream.</p><p>To make sure that you have the latest version of the stream before updating it, you can specify the stream version. Kinesis Video Streams assigns a version to each stream. When you update a stream, Kinesis Video Streams assigns a new version number. To get the latest stream version, use the <code>DescribeStream</code> API. </p><p><code>UpdateStream</code> is an asynchronous operation, and takes time to complete.</p>
 
 @param request A container for the necessary parameters to execute the UpdateStream service method.

 @return An instance of `AWSTask`. On successful execution, `task.result` will contain an instance of `AWSKinesisVideoUpdateStreamOutput`. On failed execution, `task.error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorVersionMismatch`.
 
 @see AWSKinesisVideoUpdateStreamInput
 @see AWSKinesisVideoUpdateStreamOutput
 */
- (AWSTask<AWSKinesisVideoUpdateStreamOutput *> *)updateStream:(AWSKinesisVideoUpdateStreamInput *)request;

/**
 <p>Updates stream metadata, such as the device name and media type.</p><p>You must provide the stream name or the Amazon Resource Name (ARN) of the stream.</p><p>To make sure that you have the latest version of the stream before updating it, you can specify the stream version. Kinesis Video Streams assigns a version to each stream. When you update a stream, Kinesis Video Streams assigns a new version number. To get the latest stream version, use the <code>DescribeStream</code> API. </p><p><code>UpdateStream</code> is an asynchronous operation, and takes time to complete.</p>
 
 @param request A container for the necessary parameters to execute the UpdateStream service method.
 @param completionHandler The completion handler to call when the load request is complete.
                          `response` - A response object, or `nil` if the request failed.
                          `error` - An error object that indicates why the request failed, or `nil` if the request was successful. On failed execution, `error` may contain an `NSError` with `AWSKinesisVideoErrorDomain` domain and the following error code: `AWSKinesisVideoErrorClientLimitExceeded`, `AWSKinesisVideoErrorInvalidArgument`, `AWSKinesisVideoErrorResourceNotFound`, `AWSKinesisVideoErrorResourceInUse`, `AWSKinesisVideoErrorNotAuthorized`, `AWSKinesisVideoErrorVersionMismatch`.
 
 @see AWSKinesisVideoUpdateStreamInput
 @see AWSKinesisVideoUpdateStreamOutput
 */
- (void)updateStream:(AWSKinesisVideoUpdateStreamInput *)request completionHandler:(void (^ _Nullable)(AWSKinesisVideoUpdateStreamOutput * _Nullable response, NSError * _Nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END
