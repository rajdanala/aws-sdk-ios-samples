/*
 * Copyright 2010-2013 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import <Foundation/Foundation.h>

#import <AWSS3/AWSS3.h>
#import <AWSSimpleDB/AWSSimpleDB.h>
#import <AWSSQS/AWSSQS.h>
#import <AWSSNS/AWSSNS.h>
#import "Constants.h"
#import "AmazonTVMClient.h"
#import "Response.h"

@interface AmazonClientManager:NSObject {
}

+(void)setup:(NSString *)accessKey secretKey:(NSString *)secretKey securityToken:(NSString *)token expiration:(NSString *)expiration;

+(AmazonS3Client *)s3;
+(AmazonSimpleDBClient *)sdb;
+(AmazonSQSClient *)sqs;
+(AmazonSNSClient *)sns;

+(AmazonTVMClient *)tvm;

+(bool)isLoggedIn;
+(Response *)login:(NSString *)username password:(NSString *)password;
+(bool)hasCredentials;
+(Response *)validateCredentials;
+(void)wipeAllCredentials;
+ (BOOL)wipeCredentialsOnAuthError:(NSError *)error;

@end
