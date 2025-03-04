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
#import <AWSCore/AWSNetworking.h>
#import <AWSCore/AWSModel.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const AWSKMSErrorDomain;

typedef NS_ENUM(NSInteger, AWSKMSErrorType) {
    AWSKMSErrorUnknown,
    AWSKMSErrorAlreadyExists,
    AWSKMSErrorCloudHsmClusterInUse,
    AWSKMSErrorCloudHsmClusterInvalidConfiguration,
    AWSKMSErrorCloudHsmClusterNotActive,
    AWSKMSErrorCloudHsmClusterNotFound,
    AWSKMSErrorCloudHsmClusterNotRelated,
    AWSKMSErrorCustomKeyStoreHasCMKs,
    AWSKMSErrorCustomKeyStoreInvalidState,
    AWSKMSErrorCustomKeyStoreNameInUse,
    AWSKMSErrorCustomKeyStoreNotFound,
    AWSKMSErrorDependencyTimeout,
    AWSKMSErrorDisabled,
    AWSKMSErrorDryRunOperation,
    AWSKMSErrorExpiredImportToken,
    AWSKMSErrorIncorrectKey,
    AWSKMSErrorIncorrectKeyMaterial,
    AWSKMSErrorIncorrectTrustAnchor,
    AWSKMSErrorInvalidAliasName,
    AWSKMSErrorInvalidArn,
    AWSKMSErrorInvalidCiphertext,
    AWSKMSErrorInvalidGrantId,
    AWSKMSErrorInvalidGrantToken,
    AWSKMSErrorInvalidImportToken,
    AWSKMSErrorInvalidKeyUsage,
    AWSKMSErrorInvalidMarker,
    AWSKMSErrorKMSInternal,
    AWSKMSErrorKMSInvalidMac,
    AWSKMSErrorKMSInvalidSignature,
    AWSKMSErrorKMSInvalidState,
    AWSKMSErrorKeyUnavailable,
    AWSKMSErrorLimitExceeded,
    AWSKMSErrorMalformedPolicyDocument,
    AWSKMSErrorNotFound,
    AWSKMSErrorTag,
    AWSKMSErrorUnsupportedOperation,
    AWSKMSErrorXksKeyAlreadyInUse,
    AWSKMSErrorXksKeyInvalidConfiguration,
    AWSKMSErrorXksKeyNotFound,
    AWSKMSErrorXksProxyIncorrectAuthenticationCredential,
    AWSKMSErrorXksProxyInvalidConfiguration,
    AWSKMSErrorXksProxyInvalidResponse,
    AWSKMSErrorXksProxyUriEndpointInUse,
    AWSKMSErrorXksProxyUriInUse,
    AWSKMSErrorXksProxyUriUnreachable,
    AWSKMSErrorXksProxyVpcEndpointServiceInUse,
    AWSKMSErrorXksProxyVpcEndpointServiceInvalidConfiguration,
    AWSKMSErrorXksProxyVpcEndpointServiceNotFound,
};

typedef NS_ENUM(NSInteger, AWSKMSAlgorithmSpec) {
    AWSKMSAlgorithmSpecUnknown,
    AWSKMSAlgorithmSpecRsaesPkcs1V15,
    AWSKMSAlgorithmSpecRsaesOaepSha1,
    AWSKMSAlgorithmSpecRsaesOaepSha256,
    AWSKMSAlgorithmSpecRsaAesKeyWrapSha1,
    AWSKMSAlgorithmSpecRsaAesKeyWrapSha256,
};

typedef NS_ENUM(NSInteger, AWSKMSConnectionErrorCodeType) {
    AWSKMSConnectionErrorCodeTypeUnknown,
    AWSKMSConnectionErrorCodeTypeInvalidCredentials,
    AWSKMSConnectionErrorCodeTypeClusterNotFound,
    AWSKMSConnectionErrorCodeTypeNetworkErrors,
    AWSKMSConnectionErrorCodeTypeInternalError,
    AWSKMSConnectionErrorCodeTypeInsufficientCloudhsmHsms,
    AWSKMSConnectionErrorCodeTypeUserLockedOut,
    AWSKMSConnectionErrorCodeTypeUserNotFound,
    AWSKMSConnectionErrorCodeTypeUserLoggedIn,
    AWSKMSConnectionErrorCodeTypeSubnetNotFound,
    AWSKMSConnectionErrorCodeTypeInsufficientFreeAddressesInSubnet,
    AWSKMSConnectionErrorCodeTypeXksProxyAccessDenied,
    AWSKMSConnectionErrorCodeTypeXksProxyNotReachable,
    AWSKMSConnectionErrorCodeTypeXksVpcEndpointServiceNotFound,
    AWSKMSConnectionErrorCodeTypeXksProxyInvalidResponse,
    AWSKMSConnectionErrorCodeTypeXksProxyInvalidConfiguration,
    AWSKMSConnectionErrorCodeTypeXksVpcEndpointServiceInvalidConfiguration,
    AWSKMSConnectionErrorCodeTypeXksProxyTimedOut,
    AWSKMSConnectionErrorCodeTypeXksProxyInvalidTlsConfiguration,
};

typedef NS_ENUM(NSInteger, AWSKMSConnectionStateType) {
    AWSKMSConnectionStateTypeUnknown,
    AWSKMSConnectionStateTypeConnected,
    AWSKMSConnectionStateTypeConnecting,
    AWSKMSConnectionStateTypeFailed,
    AWSKMSConnectionStateTypeDisconnected,
    AWSKMSConnectionStateTypeDisconnecting,
};

typedef NS_ENUM(NSInteger, AWSKMSCustomKeyStoreType) {
    AWSKMSCustomKeyStoreTypeUnknown,
    AWSKMSCustomKeyStoreTypeAwsCloudhsm,
    AWSKMSCustomKeyStoreTypeExternalKeyStore,
};

typedef NS_ENUM(NSInteger, AWSKMSCustomerMasterKeySpec) {
    AWSKMSCustomerMasterKeySpecUnknown,
    AWSKMSCustomerMasterKeySpecRsa2048,
    AWSKMSCustomerMasterKeySpecRsa3072,
    AWSKMSCustomerMasterKeySpecRsa4096,
    AWSKMSCustomerMasterKeySpecEccNistP256,
    AWSKMSCustomerMasterKeySpecEccNistP384,
    AWSKMSCustomerMasterKeySpecEccNistP521,
    AWSKMSCustomerMasterKeySpecEccSecgP256k1,
    AWSKMSCustomerMasterKeySpecSymmetricDefault,
    AWSKMSCustomerMasterKeySpecHmac224,
    AWSKMSCustomerMasterKeySpecHmac256,
    AWSKMSCustomerMasterKeySpecHmac384,
    AWSKMSCustomerMasterKeySpecHmac512,
    AWSKMSCustomerMasterKeySpecSm2,
};

typedef NS_ENUM(NSInteger, AWSKMSDataKeyPairSpec) {
    AWSKMSDataKeyPairSpecUnknown,
    AWSKMSDataKeyPairSpecRsa2048,
    AWSKMSDataKeyPairSpecRsa3072,
    AWSKMSDataKeyPairSpecRsa4096,
    AWSKMSDataKeyPairSpecEccNistP256,
    AWSKMSDataKeyPairSpecEccNistP384,
    AWSKMSDataKeyPairSpecEccNistP521,
    AWSKMSDataKeyPairSpecEccSecgP256k1,
    AWSKMSDataKeyPairSpecSm2,
};

typedef NS_ENUM(NSInteger, AWSKMSDataKeySpec) {
    AWSKMSDataKeySpecUnknown,
    AWSKMSDataKeySpecAes256,
    AWSKMSDataKeySpecAes128,
};

typedef NS_ENUM(NSInteger, AWSKMSEncryptionAlgorithmSpec) {
    AWSKMSEncryptionAlgorithmSpecUnknown,
    AWSKMSEncryptionAlgorithmSpecSymmetricDefault,
    AWSKMSEncryptionAlgorithmSpecRsaesOaepSha1,
    AWSKMSEncryptionAlgorithmSpecRsaesOaepSha256,
    AWSKMSEncryptionAlgorithmSpecSm2pke,
};

typedef NS_ENUM(NSInteger, AWSKMSExpirationModelType) {
    AWSKMSExpirationModelTypeUnknown,
    AWSKMSExpirationModelTypeKeyMaterialExpires,
    AWSKMSExpirationModelTypeKeyMaterialDoesNotExpire,
};

typedef NS_ENUM(NSInteger, AWSKMSGrantOperation) {
    AWSKMSGrantOperationUnknown,
    AWSKMSGrantOperationDecrypt,
    AWSKMSGrantOperationEncrypt,
    AWSKMSGrantOperationGenerateDataKey,
    AWSKMSGrantOperationGenerateDataKeyWithoutPlaintext,
    AWSKMSGrantOperationReEncryptFrom,
    AWSKMSGrantOperationReEncryptTo,
    AWSKMSGrantOperationSign,
    AWSKMSGrantOperationVerify,
    AWSKMSGrantOperationGetPublicKey,
    AWSKMSGrantOperationCreateGrant,
    AWSKMSGrantOperationRetireGrant,
    AWSKMSGrantOperationDescribeKey,
    AWSKMSGrantOperationGenerateDataKeyPair,
    AWSKMSGrantOperationGenerateDataKeyPairWithoutPlaintext,
    AWSKMSGrantOperationGenerateMac,
    AWSKMSGrantOperationVerifyMac,
};

typedef NS_ENUM(NSInteger, AWSKMSKeyEncryptionMechanism) {
    AWSKMSKeyEncryptionMechanismUnknown,
    AWSKMSKeyEncryptionMechanismRsaesOaepSha256,
};

typedef NS_ENUM(NSInteger, AWSKMSKeyManagerType) {
    AWSKMSKeyManagerTypeUnknown,
    AWSKMSKeyManagerTypeAws,
    AWSKMSKeyManagerTypeCustomer,
};

typedef NS_ENUM(NSInteger, AWSKMSKeySpec) {
    AWSKMSKeySpecUnknown,
    AWSKMSKeySpecRsa2048,
    AWSKMSKeySpecRsa3072,
    AWSKMSKeySpecRsa4096,
    AWSKMSKeySpecEccNistP256,
    AWSKMSKeySpecEccNistP384,
    AWSKMSKeySpecEccNistP521,
    AWSKMSKeySpecEccSecgP256k1,
    AWSKMSKeySpecSymmetricDefault,
    AWSKMSKeySpecHmac224,
    AWSKMSKeySpecHmac256,
    AWSKMSKeySpecHmac384,
    AWSKMSKeySpecHmac512,
    AWSKMSKeySpecSm2,
};

typedef NS_ENUM(NSInteger, AWSKMSKeyState) {
    AWSKMSKeyStateUnknown,
    AWSKMSKeyStateCreating,
    AWSKMSKeyStateEnabled,
    AWSKMSKeyStateDisabled,
    AWSKMSKeyStatePendingDeletion,
    AWSKMSKeyStatePendingImport,
    AWSKMSKeyStatePendingReplicaDeletion,
    AWSKMSKeyStateUnavailable,
    AWSKMSKeyStateUpdating,
};

typedef NS_ENUM(NSInteger, AWSKMSKeyUsageType) {
    AWSKMSKeyUsageTypeUnknown,
    AWSKMSKeyUsageTypeSignVerify,
    AWSKMSKeyUsageTypeEncryptDecrypt,
    AWSKMSKeyUsageTypeGenerateVerifyMac,
};

typedef NS_ENUM(NSInteger, AWSKMSMacAlgorithmSpec) {
    AWSKMSMacAlgorithmSpecUnknown,
    AWSKMSMacAlgorithmSpecHmacSha224,
    AWSKMSMacAlgorithmSpecHmacSha256,
    AWSKMSMacAlgorithmSpecHmacSha384,
    AWSKMSMacAlgorithmSpecHmacSha512,
};

typedef NS_ENUM(NSInteger, AWSKMSMessageType) {
    AWSKMSMessageTypeUnknown,
    AWSKMSMessageTypeRAW,
    AWSKMSMessageTypeDigest,
};

typedef NS_ENUM(NSInteger, AWSKMSMultiRegionKeyType) {
    AWSKMSMultiRegionKeyTypeUnknown,
    AWSKMSMultiRegionKeyTypePrimary,
    AWSKMSMultiRegionKeyTypeReplica,
};

typedef NS_ENUM(NSInteger, AWSKMSOriginType) {
    AWSKMSOriginTypeUnknown,
    AWSKMSOriginTypeAwsKms,
    AWSKMSOriginTypeExternal,
    AWSKMSOriginTypeAwsCloudhsm,
    AWSKMSOriginTypeExternalKeyStore,
};

typedef NS_ENUM(NSInteger, AWSKMSSigningAlgorithmSpec) {
    AWSKMSSigningAlgorithmSpecUnknown,
    AWSKMSSigningAlgorithmSpecRsassaPssSha256,
    AWSKMSSigningAlgorithmSpecRsassaPssSha384,
    AWSKMSSigningAlgorithmSpecRsassaPssSha512,
    AWSKMSSigningAlgorithmSpecRsassaPkcs1V15Sha256,
    AWSKMSSigningAlgorithmSpecRsassaPkcs1V15Sha384,
    AWSKMSSigningAlgorithmSpecRsassaPkcs1V15Sha512,
    AWSKMSSigningAlgorithmSpecEcdsaSha256,
    AWSKMSSigningAlgorithmSpecEcdsaSha384,
    AWSKMSSigningAlgorithmSpecEcdsaSha512,
    AWSKMSSigningAlgorithmSpecSm2dsa,
};

typedef NS_ENUM(NSInteger, AWSKMSWrappingKeySpec) {
    AWSKMSWrappingKeySpecUnknown,
    AWSKMSWrappingKeySpecRsa2048,
    AWSKMSWrappingKeySpecRsa3072,
    AWSKMSWrappingKeySpecRsa4096,
};

typedef NS_ENUM(NSInteger, AWSKMSXksProxyConnectivityType) {
    AWSKMSXksProxyConnectivityTypeUnknown,
    AWSKMSXksProxyConnectivityTypePublicEndpoint,
    AWSKMSXksProxyConnectivityTypeVpcEndpointService,
};

@class AWSKMSAliasListEntry;
@class AWSKMSCancelKeyDeletionRequest;
@class AWSKMSCancelKeyDeletionResponse;
@class AWSKMSConnectCustomKeyStoreRequest;
@class AWSKMSConnectCustomKeyStoreResponse;
@class AWSKMSCreateAliasRequest;
@class AWSKMSCreateCustomKeyStoreRequest;
@class AWSKMSCreateCustomKeyStoreResponse;
@class AWSKMSCreateGrantRequest;
@class AWSKMSCreateGrantResponse;
@class AWSKMSCreateKeyRequest;
@class AWSKMSCreateKeyResponse;
@class AWSKMSCustomKeyStoresListEntry;
@class AWSKMSDecryptRequest;
@class AWSKMSDecryptResponse;
@class AWSKMSDeleteAliasRequest;
@class AWSKMSDeleteCustomKeyStoreRequest;
@class AWSKMSDeleteCustomKeyStoreResponse;
@class AWSKMSDeleteImportedKeyMaterialRequest;
@class AWSKMSDescribeCustomKeyStoresRequest;
@class AWSKMSDescribeCustomKeyStoresResponse;
@class AWSKMSDescribeKeyRequest;
@class AWSKMSDescribeKeyResponse;
@class AWSKMSDisableKeyRequest;
@class AWSKMSDisableKeyRotationRequest;
@class AWSKMSDisconnectCustomKeyStoreRequest;
@class AWSKMSDisconnectCustomKeyStoreResponse;
@class AWSKMSEnableKeyRequest;
@class AWSKMSEnableKeyRotationRequest;
@class AWSKMSEncryptRequest;
@class AWSKMSEncryptResponse;
@class AWSKMSGenerateDataKeyPairRequest;
@class AWSKMSGenerateDataKeyPairResponse;
@class AWSKMSGenerateDataKeyPairWithoutPlaintextRequest;
@class AWSKMSGenerateDataKeyPairWithoutPlaintextResponse;
@class AWSKMSGenerateDataKeyRequest;
@class AWSKMSGenerateDataKeyResponse;
@class AWSKMSGenerateDataKeyWithoutPlaintextRequest;
@class AWSKMSGenerateDataKeyWithoutPlaintextResponse;
@class AWSKMSGenerateMacRequest;
@class AWSKMSGenerateMacResponse;
@class AWSKMSGenerateRandomRequest;
@class AWSKMSGenerateRandomResponse;
@class AWSKMSGetKeyPolicyRequest;
@class AWSKMSGetKeyPolicyResponse;
@class AWSKMSGetKeyRotationStatusRequest;
@class AWSKMSGetKeyRotationStatusResponse;
@class AWSKMSGetParametersForImportRequest;
@class AWSKMSGetParametersForImportResponse;
@class AWSKMSGetPublicKeyRequest;
@class AWSKMSGetPublicKeyResponse;
@class AWSKMSGrantConstraints;
@class AWSKMSGrantListEntry;
@class AWSKMSImportKeyMaterialRequest;
@class AWSKMSImportKeyMaterialResponse;
@class AWSKMSKeyListEntry;
@class AWSKMSKeyMetadata;
@class AWSKMSListAliasesRequest;
@class AWSKMSListAliasesResponse;
@class AWSKMSListGrantsRequest;
@class AWSKMSListGrantsResponse;
@class AWSKMSListKeyPoliciesRequest;
@class AWSKMSListKeyPoliciesResponse;
@class AWSKMSListKeysRequest;
@class AWSKMSListKeysResponse;
@class AWSKMSListResourceTagsRequest;
@class AWSKMSListResourceTagsResponse;
@class AWSKMSListRetirableGrantsRequest;
@class AWSKMSMultiRegionConfiguration;
@class AWSKMSMultiRegionKey;
@class AWSKMSPutKeyPolicyRequest;
@class AWSKMSReEncryptRequest;
@class AWSKMSReEncryptResponse;
@class AWSKMSRecipientInfo;
@class AWSKMSReplicateKeyRequest;
@class AWSKMSReplicateKeyResponse;
@class AWSKMSRetireGrantRequest;
@class AWSKMSRevokeGrantRequest;
@class AWSKMSScheduleKeyDeletionRequest;
@class AWSKMSScheduleKeyDeletionResponse;
@class AWSKMSSignRequest;
@class AWSKMSSignResponse;
@class AWSKMSTag;
@class AWSKMSTagResourceRequest;
@class AWSKMSUntagResourceRequest;
@class AWSKMSUpdateAliasRequest;
@class AWSKMSUpdateCustomKeyStoreRequest;
@class AWSKMSUpdateCustomKeyStoreResponse;
@class AWSKMSUpdateKeyDescriptionRequest;
@class AWSKMSUpdatePrimaryRegionRequest;
@class AWSKMSVerifyMacRequest;
@class AWSKMSVerifyMacResponse;
@class AWSKMSVerifyRequest;
@class AWSKMSVerifyResponse;
@class AWSKMSXksKeyConfigurationType;
@class AWSKMSXksProxyAuthenticationCredentialType;
@class AWSKMSXksProxyConfigurationType;

/**
 <p>Contains information about an alias.</p>
 */
@interface AWSKMSAliasListEntry : AWSModel


/**
 <p>String that contains the key ARN.</p>
 */
@property (nonatomic, strong) NSString * _Nullable aliasArn;

/**
 <p>String that contains the alias. This value begins with <code>alias/</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable aliasName;

/**
 <p>Date and time that the alias was most recently created in the account and Region. Formatted as Unix time.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable creationDate;

/**
 <p>Date and time that the alias was most recently associated with a KMS key in the account and Region. Formatted as Unix time.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable lastUpdatedDate;

/**
 <p>String that contains the key identifier of the KMS key associated with the alias.</p>
 */
@property (nonatomic, strong) NSString * _Nullable targetKeyId;

@end

/**
 
 */
@interface AWSKMSCancelKeyDeletionRequest : AWSRequest


/**
 <p>Identifies the KMS key whose deletion is being canceled.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSCancelKeyDeletionResponse : AWSModel


/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the KMS key whose deletion is canceled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSConnectCustomKeyStoreRequest : AWSRequest


/**
 <p>Enter the key store ID of the custom key store that you want to connect. To find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

@end

/**
 
 */
@interface AWSKMSConnectCustomKeyStoreResponse : AWSModel


@end

/**
 
 */
@interface AWSKMSCreateAliasRequest : AWSRequest


/**
 <p>Specifies the alias name. This value must begin with <code>alias/</code> followed by a name, such as <code>alias/ExampleAlias</code>. </p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>The <code>AliasName</code> value must be string of 1-256 characters. It can contain only alphanumeric characters, forward slashes (/), underscores (_), and dashes (-). The alias name cannot begin with <code>alias/aws/</code>. The <code>alias/aws/</code> prefix is reserved for <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon Web Services managed keys</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable aliasName;

/**
 <p>Associates the alias with the specified <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer managed key</a>. The KMS key must be in the same Amazon Web Services Region. </p><p>A valid key ID is required. If you supply a null or empty string value, this operation returns an error.</p><p>For help finding the key ID and ARN, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/viewing-keys.html#find-cmk-id-arn">Finding the Key ID and ARN</a> in the <i><i>Key Management Service Developer Guide</i></i>.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable targetKeyId;

@end

/**
 
 */
@interface AWSKMSCreateCustomKeyStoreRequest : AWSRequest


/**
 <p>Identifies the CloudHSM cluster for an CloudHSM key store. This parameter is required for custom key stores with <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p><p>Enter the cluster ID of any active CloudHSM cluster that is not already associated with a custom key store. To find the cluster ID, use the <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cloudHsmClusterId;

/**
 <p>Specifies a friendly name for the custom key store. The name must be unique in your Amazon Web Services account and Region. This parameter is required for all custom key stores.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreName;

/**
 <p>Specifies the type of custom key store. The default value is <code>AWS_CLOUDHSM</code>.</p><p>For a custom key store backed by an CloudHSM cluster, omit the parameter or enter <code>AWS_CLOUDHSM</code>. For a custom key store backed by an external key manager outside of Amazon Web Services, enter <code>EXTERNAL_KEY_STORE</code>. You cannot change this property after the key store is created.</p>
 */
@property (nonatomic, assign) AWSKMSCustomKeyStoreType customKeyStoreType;

/**
 <p>Specifies the <code>kmsuser</code> password for an CloudHSM key store. This parameter is required for custom key stores with a <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p><p>Enter the password of the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser"><code>kmsuser</code> crypto user (CU) account</a> in the specified CloudHSM cluster. KMS logs into the cluster as this user to manage key material on your behalf.</p><p>The password must be a string of 7 to 32 characters. Its value is case sensitive.</p><p>This parameter tells KMS the <code>kmsuser</code> account password; it does not change the password in the CloudHSM cluster.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyStorePassword;

/**
 <p>Specifies the certificate for an CloudHSM key store. This parameter is required for custom key stores with a <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p><p>Enter the content of the trust anchor certificate for the CloudHSM cluster. This is the content of the <code>customerCA.crt</code> file that you created when you <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html">initialized the cluster</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable trustAnchorCertificate;

/**
 <p>Specifies an authentication credential for the external key store proxy (XKS proxy). This parameter is required for all custom key stores with a <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p><p>The <code>XksProxyAuthenticationCredential</code> has two required elements: <code>RawSecretAccessKey</code>, a secret key, and <code>AccessKeyId</code>, a unique identifier for the <code>RawSecretAccessKey</code>. For character requirements, see <a href="kms/latest/APIReference/API_XksProxyAuthenticationCredentialType.html">XksProxyAuthenticationCredentialType</a>.</p><p>KMS uses this authentication credential to sign requests to the external key store proxy on your behalf. This credential is unrelated to Identity and Access Management (IAM) and Amazon Web Services credentials.</p><p>This parameter doesn't set or change the authentication credentials on the XKS proxy. It just tells KMS the credential that you established on your external key store proxy. If you rotate your proxy authentication credential, use the <a>UpdateCustomKeyStore</a> operation to provide the new credential to KMS.</p>
 */
@property (nonatomic, strong) AWSKMSXksProxyAuthenticationCredentialType * _Nullable xksProxyAuthenticationCredential;

/**
 <p>Indicates how KMS communicates with the external key store proxy. This parameter is required for custom key stores with a <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p><p>If the external key store proxy uses a public endpoint, specify <code>PUBLIC_ENDPOINT</code>. If the external key store proxy uses a Amazon VPC endpoint service for communication with KMS, specify <code>VPC_ENDPOINT_SERVICE</code>. For help making this choice, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/plan-xks-keystore.html#choose-xks-connectivity">Choosing a connectivity option</a> in the <i>Key Management Service Developer Guide</i>.</p><p>An Amazon VPC endpoint service keeps your communication with KMS in a private address space entirely within Amazon Web Services, but it requires more configuration, including establishing a Amazon VPC with multiple subnets, a VPC endpoint service, a network load balancer, and a verified private DNS name. A public endpoint is simpler to set up, but it might be slower and might not fulfill your security requirements. You might consider testing with a public endpoint, and then establishing a VPC endpoint service for production tasks. Note that this choice does not determine the location of the external key store proxy. Even if you choose a VPC endpoint service, the proxy can be hosted within the VPC or outside of Amazon Web Services such as in your corporate data center.</p>
 */
@property (nonatomic, assign) AWSKMSXksProxyConnectivityType xksProxyConnectivity;

/**
 <p>Specifies the endpoint that KMS uses to send requests to the external key store proxy (XKS proxy). This parameter is required for custom key stores with a <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p><p>The protocol must be HTTPS. KMS communicates on port 443. Do not specify the port in the <code>XksProxyUriEndpoint</code> value.</p><p>For external key stores with <code>XksProxyConnectivity</code> value of <code>VPC_ENDPOINT_SERVICE</code>, specify <code>https://</code> followed by the private DNS name of the VPC endpoint service.</p><p>For external key stores with <code>PUBLIC_ENDPOINT</code> connectivity, this endpoint must be reachable before you create the custom key store. KMS connects to the external key store proxy while creating the custom key store. For external key stores with <code>VPC_ENDPOINT_SERVICE</code> connectivity, KMS connects when you call the <a>ConnectCustomKeyStore</a> operation.</p><p>The value of this parameter must begin with <code>https://</code>. The remainder can contain upper and lower case letters (A-Z and a-z), numbers (0-9), dots (<code>.</code>), and hyphens (<code>-</code>). Additional slashes (<code>/</code> and <code>\</code>) are not permitted.</p><p><b>Uniqueness requirements: </b></p><ul><li><p>The combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services account and Region.</p></li><li><p>An external key store with <code>PUBLIC_ENDPOINT</code> connectivity cannot use the same <code>XksProxyUriEndpoint</code> value as an external key store with <code>VPC_ENDPOINT_SERVICE</code> connectivity in the same Amazon Web Services Region.</p></li><li><p>Each external key store with <code>VPC_ENDPOINT_SERVICE</code> connectivity must have its own private DNS name. The <code>XksProxyUriEndpoint</code> value for external key stores with <code>VPC_ENDPOINT_SERVICE</code> connectivity (private DNS name) must be unique in the Amazon Web Services account and Region.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable xksProxyUriEndpoint;

/**
 <p>Specifies the base path to the proxy APIs for this external key store. To find this value, see the documentation for your external key store proxy. This parameter is required for all custom key stores with a <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p><p>The value must start with <code>/</code> and must end with <code>/kms/xks/v1</code> where <code>v1</code> represents the version of the KMS external key store proxy API. This path can include an optional prefix between the required elements such as <code>/<i>prefix</i>/kms/xks/v1</code>.</p><p><b>Uniqueness requirements: </b></p><ul><li><p>The combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services account and Region.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable xksProxyUriPath;

/**
 <p>Specifies the name of the Amazon VPC endpoint service for interface endpoints that is used to communicate with your external key store proxy (XKS proxy). This parameter is required when the value of <code>CustomKeyStoreType</code> is <code>EXTERNAL_KEY_STORE</code> and the value of <code>XksProxyConnectivity</code> is <code>VPC_ENDPOINT_SERVICE</code>.</p><p>The Amazon VPC endpoint service must <a href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keystore.html#xks-requirements">fulfill all requirements</a> for use with an external key store. </p><p><b>Uniqueness requirements:</b></p><ul><li><p>External key stores with <code>VPC_ENDPOINT_SERVICE</code> connectivity can share an Amazon VPC, but each external key store must have its own VPC endpoint service and private DNS name.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable xksProxyVpcEndpointServiceName;

@end

/**
 
 */
@interface AWSKMSCreateCustomKeyStoreResponse : AWSModel


/**
 <p>A unique identifier for the new custom key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

@end

/**
 
 */
@interface AWSKMSCreateGrantRequest : AWSRequest


/**
 <p>Specifies a grant constraint.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>KMS supports the <code>EncryptionContextEquals</code> and <code>EncryptionContextSubset</code> grant constraints, which allow the permissions in the grant only when the encryption context in the request matches (<code>EncryptionContextEquals</code>) or includes (<code>EncryptionContextSubset</code>) the encryption context specified in the constraint. </p><p>The encryption context grant constraints are supported only on <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-grant-operations">grant operations</a> that include an <code>EncryptionContext</code> parameter, such as cryptographic operations on symmetric encryption KMS keys. Grants with grant constraints can include the <a>DescribeKey</a> and <a>RetireGrant</a> operations, but the constraint doesn't apply to these operations. If a grant with a grant constraint includes the <code>CreateGrant</code> operation, the constraint requires that any grants created with the <code>CreateGrant</code> permission have an equally strict or stricter encryption context constraint.</p><p>You cannot use an encryption context grant constraint for cryptographic operations with asymmetric KMS keys or HMAC KMS keys. Operations with these keys don't support an encryption context.</p><p>Each constraint value can include up to 8 encryption context pairs. The encryption context value in each constraint cannot exceed 384 characters. For information about grant constraints, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/create-grant-overview.html#grant-constraints">Using grant constraints</a> in the <i>Key Management Service Developer Guide</i>. For more information about encryption context, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption context</a> in the <i><i>Key Management Service Developer Guide</i></i>. </p>
 */
@property (nonatomic, strong) AWSKMSGrantConstraints * _Nullable constraints;

/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>A list of grant tokens. </p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>The identity that gets the permissions specified in the grant.</p><p>To specify the grantee principal, use the Amazon Resource Name (ARN) of an Amazon Web Services principal. Valid principals include Amazon Web Services accounts, IAM users, IAM roles, federated users, and assumed role users. For help with the ARN syntax for a principal, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM ARNs</a> in the <i><i>Identity and Access Management User Guide</i></i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable granteePrincipal;

/**
 <p>Identifies the KMS key for the grant. The grant gives principals permission to use this KMS key.</p><p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>A friendly name for the grant. Use this value to prevent the unintended creation of duplicate grants when retrying this request.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>When this value is absent, all <code>CreateGrant</code> requests result in a new grant with a unique <code>GrantId</code> even if all the supplied parameters are identical. This can result in unintended duplicates when you retry the <code>CreateGrant</code> request.</p><p>When this value is present, you can retry a <code>CreateGrant</code> request with identical parameters; if the grant already exists, the original <code>GrantId</code> is returned without creating a new grant. Note that the returned grant token is unique with every <code>CreateGrant</code> request, even when a duplicate <code>GrantId</code> is returned. All grant tokens for the same grant ID can be used interchangeably.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>A list of operations that the grant permits. </p><p>This list must include only operations that are permitted in a grant. Also, the operation must be supported on the KMS key. For example, you cannot create a grant for a symmetric encryption KMS key that allows the <a>Sign</a> operation, or a grant for an asymmetric KMS key that allows the <a>GenerateDataKey</a> operation. If you try, KMS returns a <code>ValidationError</code> exception. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-grant-operations">Grant operations</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable operations;

/**
 <p>The principal that has permission to use the <a>RetireGrant</a> operation to retire the grant. </p><p>To specify the principal, use the <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Name (ARN)</a> of an Amazon Web Services principal. Valid principals include Amazon Web Services accounts, IAM users, IAM roles, federated users, and assumed role users. For help with the ARN syntax for a principal, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM ARNs</a> in the <i><i>Identity and Access Management User Guide</i></i>.</p><p>The grant determines the retiring principal. Other principals might have permission to retire the grant or revoke the grant. For details, see <a>RevokeGrant</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#grant-delete">Retiring and revoking grants</a> in the <i>Key Management Service Developer Guide</i>. </p>
 */
@property (nonatomic, strong) NSString * _Nullable retiringPrincipal;

@end

/**
 
 */
@interface AWSKMSCreateGrantResponse : AWSModel


/**
 <p>The unique identifier for the grant.</p><p>You can use the <code>GrantId</code> in a <a>ListGrants</a>, <a>RetireGrant</a>, or <a>RevokeGrant</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable grantId;

/**
 <p>The grant token.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable grantToken;

@end

/**
 
 */
@interface AWSKMSCreateKeyRequest : AWSRequest


/**
 <p>Skips ("bypasses") the key policy lockout safety check. The default value is false.</p><important><p>Setting this value to true increases the risk that the KMS key becomes unmanageable. Do not set this value to true indiscriminately.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-default.html#prevent-unmanageable-key">Default key policy</a> in the <i>Key Management Service Developer Guide</i>.</p></important><p>Use this parameter only when you intend to prevent the principal that is making the request from making a subsequent <a>PutKeyPolicy</a> request on the KMS key.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable bypassPolicyLockoutSafetyCheck;

/**
 <p>Creates the KMS key in the specified <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>. The <code>ConnectionState</code> of the custom key store must be <code>CONNECTED</code>. To find the CustomKeyStoreID and ConnectionState use the <a>DescribeCustomKeyStores</a> operation.</p><p>This parameter is valid only for symmetric encryption KMS keys in a single Region. You cannot create any other type of KMS key in a custom key store.</p><p>When you create a KMS key in an CloudHSM key store, KMS generates a non-exportable 256-bit symmetric key in its associated CloudHSM cluster and associates it with the KMS key. When you create a KMS key in an external key store, you must use the <code>XksKeyId</code> parameter to specify an external key that serves as key material for the KMS key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>Instead, use the <code>KeySpec</code> parameter.</p><p>The <code>KeySpec</code> and <code>CustomerMasterKeySpec</code> parameters work the same way. Only the names differ. We recommend that you use <code>KeySpec</code> parameter in your code. However, to avoid breaking changes, KMS supports both parameters.</p>
 */
@property (nonatomic, assign) AWSKMSCustomerMasterKeySpec customerMasterKeySpec;

/**
 <p>A description of the KMS key. Use a description that helps you decide whether the KMS key is appropriate for a task. The default value is an empty string (no description).</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>To set or change the description after the key is created, use <a>UpdateKeyDescription</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Specifies the type of KMS key to create. The default value, <code>SYMMETRIC_DEFAULT</code>, creates a KMS key with a 256-bit AES-GCM key that is used for encryption and decryption, except in China Regions, where it creates a 128-bit symmetric key that uses SM4 encryption. For help choosing a key spec for your KMS key, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-types.html#symm-asymm-choose">Choosing a KMS key type</a> in the <i><i>Key Management Service Developer Guide</i></i>.</p><p>The <code>KeySpec</code> determines whether the KMS key contains a symmetric key or an asymmetric key pair. It also determines the algorithms that the KMS key supports. You can't change the <code>KeySpec</code> after the KMS key is created. To further restrict the algorithms that can be used with the KMS key, use a condition key in its key policy or IAM policy. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-encryption-algorithm">kms:EncryptionAlgorithm</a>, <a href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-mac-algorithm">kms:MacAlgorithm</a> or <a href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-signing-algorithm">kms:Signing Algorithm</a> in the <i><i>Key Management Service Developer Guide</i></i>.</p><important><p><a href="http://aws.amazon.com/kms/features/#AWS_Service_Integration">Amazon Web Services services that are integrated with KMS</a> use symmetric encryption KMS keys to protect your data. These services do not support asymmetric KMS keys or HMAC KMS keys.</p></important><p>KMS supports the following key specs for KMS keys:</p><ul><li><p>Symmetric encryption key (default)</p><ul><li><p><code>SYMMETRIC_DEFAULT</code></p></li></ul></li><li><p>HMAC keys (symmetric)</p><ul><li><p><code>HMAC_224</code></p></li><li><p><code>HMAC_256</code></p></li><li><p><code>HMAC_384</code></p></li><li><p><code>HMAC_512</code></p></li></ul></li><li><p>Asymmetric RSA key pairs</p><ul><li><p><code>RSA_2048</code></p></li><li><p><code>RSA_3072</code></p></li><li><p><code>RSA_4096</code></p></li></ul></li><li><p>Asymmetric NIST-recommended elliptic curve key pairs</p><ul><li><p><code>ECC_NIST_P256</code> (secp256r1)</p></li><li><p><code>ECC_NIST_P384</code> (secp384r1)</p></li><li><p><code>ECC_NIST_P521</code> (secp521r1)</p></li></ul></li><li><p>Other asymmetric elliptic curve key pairs</p><ul><li><p><code>ECC_SECG_P256K1</code> (secp256k1), commonly used for cryptocurrencies.</p></li></ul></li><li><p>SM2 key pairs (China Regions only)</p><ul><li><p><code>SM2</code></p></li></ul></li></ul>
 */
@property (nonatomic, assign) AWSKMSKeySpec keySpec;

/**
 <p>Determines the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic operations</a> for which you can use the KMS key. The default value is <code>ENCRYPT_DECRYPT</code>. This parameter is optional when you are creating a symmetric encryption KMS key; otherwise, it is required. You can't change the <code>KeyUsage</code> value after the KMS key is created.</p><p>Select only one valid value.</p><ul><li><p>For symmetric encryption KMS keys, omit the parameter or specify <code>ENCRYPT_DECRYPT</code>.</p></li><li><p>For HMAC KMS keys (symmetric), specify <code>GENERATE_VERIFY_MAC</code>.</p></li><li><p>For asymmetric KMS keys with RSA key material, specify <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>.</p></li><li><p>For asymmetric KMS keys with ECC key material, specify <code>SIGN_VERIFY</code>.</p></li><li><p>For asymmetric KMS keys with SM2 key material (China Regions only), specify <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>.</p></li></ul>
 */
@property (nonatomic, assign) AWSKMSKeyUsageType keyUsage;

/**
 <p>Creates a multi-Region primary key that you can replicate into other Amazon Web Services Regions. You cannot change this value after you create the KMS key. </p><p>For a multi-Region key, set this parameter to <code>True</code>. For a single-Region KMS key, omit this parameter or set it to <code>False</code>. The default value is <code>False</code>.</p><p>This operation supports <i>multi-Region keys</i>, an KMS feature that lets you create multiple interoperable KMS keys in different Amazon Web Services Regions. Because these KMS keys have the same key ID, key material, and other metadata, you can use them interchangeably to encrypt data in one Amazon Web Services Region and decrypt it in a different Amazon Web Services Region without re-encrypting the data or making a cross-Region call. For more information about multi-Region keys, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p><p>This value creates a <i>primary key</i>, not a replica. To create a <i>replica key</i>, use the <a>ReplicateKey</a> operation. </p><p>You can create a symmetric or asymmetric multi-Region key, and you can create a multi-Region key with imported key material. However, you cannot create a multi-Region key in a custom key store.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable multiRegion;

/**
 <p>The source of the key material for the KMS key. You cannot change the origin after you create the KMS key. The default is <code>AWS_KMS</code>, which means that KMS creates the key material.</p><p>To <a href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-create-cmk.html">create a KMS key with no key material</a> (for imported key material), set this value to <code>EXTERNAL</code>. For more information about importing key material into KMS, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing Key Material</a> in the <i>Key Management Service Developer Guide</i>. The <code>EXTERNAL</code> origin value is valid only for symmetric KMS keys.</p><p>To <a href="https://docs.aws.amazon.com/kms/latest/developerguide/create-cmk-keystore.html">create a KMS key in an CloudHSM key store</a> and create its key material in the associated CloudHSM cluster, set this value to <code>AWS_CLOUDHSM</code>. You must also use the <code>CustomKeyStoreId</code> parameter to identify the CloudHSM key store. The <code>KeySpec</code> value must be <code>SYMMETRIC_DEFAULT</code>.</p><p>To <a href="https://docs.aws.amazon.com/kms/latest/developerguide/create-xks-keys.html">create a KMS key in an external key store</a>, set this value to <code>EXTERNAL_KEY_STORE</code>. You must also use the <code>CustomKeyStoreId</code> parameter to identify the external key store and the <code>XksKeyId</code> parameter to identify the associated external key. The <code>KeySpec</code> value must be <code>SYMMETRIC_DEFAULT</code>.</p>
 */
@property (nonatomic, assign) AWSKMSOriginType origin;

/**
 <p>The key policy to attach to the KMS key.</p><p>If you provide a key policy, it must meet the following criteria:</p><ul><li><p>The key policy must allow the calling principal to make a subsequent <code>PutKeyPolicy</code> request on the KMS key. This reduces the risk that the KMS key becomes unmanageable. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-default.html#prevent-unmanageable-key">Default key policy</a> in the <i>Key Management Service Developer Guide</i>. (To omit this condition, set <code>BypassPolicyLockoutSafetyCheck</code> to true.)</p></li><li><p>Each statement in the key policy must contain one or more principals. The principals in the key policy must exist and be visible to KMS. When you create a new Amazon Web Services principal, you might need to enforce a delay before including the new principal in a key policy because the new principal might not be immediately visible to KMS. For more information, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes that I make are not always immediately visible</a> in the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p></li></ul><p>If you do not provide a key policy, KMS attaches a default key policy to the KMS key. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default key policy</a> in the <i>Key Management Service Developer Guide</i>. </p><p>The key policy size quota is 32 kilobytes (32768 bytes).</p><p>For help writing and formatting a JSON policy document, see the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM JSON Policy Reference</a> in the <i><i>Identity and Access Management User Guide</i></i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policy;

/**
 <p>Assigns one or more tags to the KMS key. Use this parameter to tag the KMS key when it is created. To tag an existing KMS key, use the <a>TagResource</a> operation.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><note><p>Tagging or untagging a KMS key can allow or deny permission to the KMS key. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for KMS</a> in the <i>Key Management Service Developer Guide</i>.</p></note><p>To use this parameter, you must have <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a> permission in an IAM policy.</p><p>Each tag consists of a tag key and a tag value. Both the tag key and the tag value are required, but the tag value can be an empty (null) string. You cannot have more than one tag on a KMS key with the same tag key. If you specify an existing tag key with a different tag value, KMS replaces the current tag value with the specified one.</p><p>When you add tags to an Amazon Web Services resource, Amazon Web Services generates a cost allocation report with usage and costs aggregated by tags. Tags can also be used to control access to a KMS key. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging Keys</a>.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSTag *> * _Nullable tags;

/**
 <p>Identifies the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">external key</a> that serves as key material for the KMS key in an <a href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html">external key store</a>. Specify the ID that the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-xks-proxy">external key store proxy</a> uses to refer to the external key. For help, see the documentation for your external key store proxy.</p><p>This parameter is required for a KMS key with an <code>Origin</code> value of <code>EXTERNAL_KEY_STORE</code>. It is not valid for KMS keys with any other <code>Origin</code> value.</p><p>The external key must be an existing 256-bit AES symmetric encryption key hosted outside of Amazon Web Services in an external key manager associated with the external key store specified by the <code>CustomKeyStoreId</code> parameter. This key must be enabled and configured to perform encryption and decryption. Each KMS key in an external key store must use a different external key. For details, see <a href="https://docs.aws.amazon.com/create-xks-keys.html#xks-key-requirements">Requirements for a KMS key in an external key store</a> in the <i>Key Management Service Developer Guide</i>.</p><p>Each KMS key in an external key store is associated two backing keys. One is key material that KMS generates. The other is the external key specified by this parameter. When you use the KMS key in an external key store to encrypt data, the encryption operation is performed first by KMS using the KMS key material, and then by the external key manager using the specified external key, a process known as <i>double encryption</i>. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-double-encryption">Double encryption</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable xksKeyId;

@end

/**
 
 */
@interface AWSKMSCreateKeyResponse : AWSModel


/**
 <p>Metadata associated with the KMS key.</p>
 */
@property (nonatomic, strong) AWSKMSKeyMetadata * _Nullable keyMetadata;

@end

/**
 <p>Contains information about each custom key store in the custom key store list.</p>
 */
@interface AWSKMSCustomKeyStoresListEntry : AWSModel


/**
 <p>A unique identifier for the CloudHSM cluster that is associated with an CloudHSM key store. This field appears only when the <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cloudHsmClusterId;

/**
 <p>Describes the connection error. This field appears in the response only when the <code>ConnectionState</code> is <code>FAILED</code>.</p><p>Many failures can be resolved by updating the properties of the custom key store. To update a custom key store, disconnect it (<a>DisconnectCustomKeyStore</a>), correct the errors (<a>UpdateCustomKeyStore</a>), and try to connect again (<a>ConnectCustomKeyStore</a>). For additional help resolving these errors, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How to Fix a Connection Failure</a> in <i>Key Management Service Developer Guide</i>.</p><p><b>All custom key stores:</b></p><ul><li><p><code>INTERNAL_ERROR</code> — KMS could not complete the request due to an internal error. Retry the request. For <code>ConnectCustomKeyStore</code> requests, disconnect the custom key store before trying to connect again.</p></li><li><p><code>NETWORK_ERRORS</code> — Network errors are preventing KMS from connecting the custom key store to its backing key store.</p></li></ul><p><b>CloudHSM key stores:</b></p><ul><li><p><code>CLUSTER_NOT_FOUND</code> — KMS cannot find the CloudHSM cluster with the specified cluster ID.</p></li><li><p><code>INSUFFICIENT_CLOUDHSM_HSMS</code> — The associated CloudHSM cluster does not contain any active HSMs. To connect a custom key store to its CloudHSM cluster, the cluster must contain at least one active HSM.</p></li><li><p><code>INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET</code> — At least one private subnet associated with the CloudHSM cluster doesn't have any available IP addresses. A CloudHSM key store connection requires one free IP address in each of the associated private subnets, although two are preferable. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How to Fix a Connection Failure</a> in the <i>Key Management Service Developer Guide</i>.</p></li><li><p><code>INVALID_CREDENTIALS</code> — The <code>KeyStorePassword</code> for the custom key store doesn't match the current password of the <code>kmsuser</code> crypto user in the CloudHSM cluster. Before you can connect your custom key store to its CloudHSM cluster, you must change the <code>kmsuser</code> account password and update the <code>KeyStorePassword</code> value for the custom key store.</p></li><li><p><code>SUBNET_NOT_FOUND</code> — A subnet in the CloudHSM cluster configuration was deleted. If KMS cannot find all of the subnets in the cluster configuration, attempts to connect the custom key store to the CloudHSM cluster fail. To fix this error, create a cluster from a recent backup and associate it with your custom key store. (This process creates a new cluster configuration with a VPC and private subnets.) For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-failed">How to Fix a Connection Failure</a> in the <i>Key Management Service Developer Guide</i>.</p></li><li><p><code>USER_LOCKED_OUT</code> — The <code>kmsuser</code> CU account is locked out of the associated CloudHSM cluster due to too many failed password attempts. Before you can connect your custom key store to its CloudHSM cluster, you must change the <code>kmsuser</code> account password and update the key store password value for the custom key store.</p></li><li><p><code>USER_LOGGED_IN</code> — The <code>kmsuser</code> CU account is logged into the associated CloudHSM cluster. This prevents KMS from rotating the <code>kmsuser</code> account password and logging into the cluster. Before you can connect your custom key store to its CloudHSM cluster, you must log the <code>kmsuser</code> CU out of the cluster. If you changed the <code>kmsuser</code> password to log into the cluster, you must also and update the key store password value for the custom key store. For help, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#login-kmsuser-2">How to Log Out and Reconnect</a> in the <i>Key Management Service Developer Guide</i>.</p></li><li><p><code>USER_NOT_FOUND</code> — KMS cannot find a <code>kmsuser</code> CU account in the associated CloudHSM cluster. Before you can connect your custom key store to its CloudHSM cluster, you must create a <code>kmsuser</code> CU account in the cluster, and then update the key store password value for the custom key store.</p></li></ul><p><b>External key stores:</b></p><ul><li><p><code>INVALID_CREDENTIALS</code> — One or both of the <code>XksProxyAuthenticationCredential</code> values is not valid on the specified external key store proxy.</p></li><li><p><code>XKS_PROXY_ACCESS_DENIED</code> — KMS requests are denied access to the external key store proxy. If the external key store proxy has authorization rules, verify that they permit KMS to communicate with the proxy on your behalf.</p></li><li><p><code>XKS_PROXY_INVALID_CONFIGURATION</code> — A configuration error is preventing the external key store from connecting to its proxy. Verify the value of the <code>XksProxyUriPath</code>.</p></li><li><p><code>XKS_PROXY_INVALID_RESPONSE</code> — KMS cannot interpret the response from the external key store proxy. If you see this connection error code repeatedly, notify your external key store proxy vendor.</p></li><li><p><code>XKS_PROXY_INVALID_TLS_CONFIGURATION</code> — KMS cannot connect to the external key store proxy because the TLS configuration is invalid. Verify that the XKS proxy supports TLS 1.2 or 1.3. Also, verify that the TLS certificate is not expired, and that it matches the hostname in the <code>XksProxyUriEndpoint</code> value, and that it is signed by a certificate authority included in the <a href="https://github.com/aws/aws-kms-xksproxy-api-spec/blob/main/TrustedCertificateAuthorities">Trusted Certificate Authorities</a> list.</p></li><li><p><code>XKS_PROXY_NOT_REACHABLE</code> — KMS can't communicate with your external key store proxy. Verify that the <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code> are correct. Use the tools for your external key store proxy to verify that the proxy is active and available on its network. Also, verify that your external key manager instances are operating properly. Connection attempts fail with this connection error code if the proxy reports that all external key manager instances are unavailable.</p></li><li><p><code>XKS_PROXY_TIMED_OUT</code> — KMS can connect to the external key store proxy, but the proxy does not respond to KMS in the time allotted. If you see this connection error code repeatedly, notify your external key store proxy vendor.</p></li><li><p><code>XKS_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION</code> — The Amazon VPC endpoint service configuration doesn't conform to the requirements for an KMS external key store.</p><ul><li><p>The VPC endpoint service must be an endpoint service for interface endpoints in the caller's Amazon Web Services account.</p></li><li><p>It must have a network load balancer (NLB) connected to at least two subnets, each in a different Availability Zone.</p></li><li><p>The <code>Allow principals</code> list must include the KMS service principal for the Region, <code>cks.kms.&lt;region&gt;.amazonaws.com</code>, such as <code>cks.kms.us-east-1.amazonaws.com</code>.</p></li><li><p>It must <i>not</i> require <a href="https://docs.aws.amazon.com/vpc/latest/privatelink/create-endpoint-service.html">acceptance</a> of connection requests.</p></li><li><p>It must have a private DNS name. The private DNS name for an external key store with <code>VPC_ENDPOINT_SERVICE</code> connectivity must be unique in its Amazon Web Services Region.</p></li><li><p>The domain of the private DNS name must have a <a href="https://docs.aws.amazon.com/vpc/latest/privatelink/verify-domains.html">verification status</a> of <code>verified</code>.</p></li><li><p>The <a href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/create-tls-listener.html">TLS certificate</a> specifies the private DNS hostname at which the endpoint is reachable.</p></li></ul></li><li><p><code>XKS_VPC_ENDPOINT_SERVICE_NOT_FOUND</code> — KMS can't find the VPC endpoint service that it uses to communicate with the external key store proxy. Verify that the <code>XksProxyVpcEndpointServiceName</code> is correct and the KMS service principal has service consumer permissions on the Amazon VPC endpoint service.</p></li></ul>
 */
@property (nonatomic, assign) AWSKMSConnectionErrorCodeType connectionErrorCode;

/**
 <p>Indicates whether the custom key store is connected to its backing key store. For an CloudHSM key store, the <code>ConnectionState</code> indicates whether it is connected to its CloudHSM cluster. For an external key store, the <code>ConnectionState</code> indicates whether it is connected to the external key store proxy that communicates with your external key manager.</p><p>You can create and use KMS keys in your custom key stores only when its <code>ConnectionState</code> is <code>CONNECTED</code>.</p><p>The <code>ConnectionState</code> value is <code>DISCONNECTED</code> only if the key store has never been connected or you use the <a>DisconnectCustomKeyStore</a> operation to disconnect it. If the value is <code>CONNECTED</code> but you are having trouble using the custom key store, make sure that the backing key store is reachable and active. For an CloudHSM key store, verify that its associated CloudHSM cluster is active and contains at least one active HSM. For an external key store, verify that the external key store proxy and external key manager are connected and enabled.</p><p>A value of <code>FAILED</code> indicates that an attempt to connect was unsuccessful. The <code>ConnectionErrorCode</code> field in the response indicates the cause of the failure. For help resolving a connection failure, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting a custom key store</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, assign) AWSKMSConnectionStateType connectionState;

/**
 <p>The date and time when the custom key store was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable creationDate;

/**
 <p>A unique identifier for the custom key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>The user-specified friendly name for the custom key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreName;

/**
 <p>Indicates the type of the custom key store. <code>AWS_CLOUDHSM</code> indicates a custom key store backed by an CloudHSM cluster. <code>EXTERNAL_KEY_STORE</code> indicates a custom key store backed by an external key store proxy and external key manager outside of Amazon Web Services.</p>
 */
@property (nonatomic, assign) AWSKMSCustomKeyStoreType customKeyStoreType;

/**
 <p>The trust anchor certificate of the CloudHSM cluster associated with an CloudHSM key store. When you <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/initialize-cluster.html#sign-csr">initialize the cluster</a>, you create this certificate and save it in the <code>customerCA.crt</code> file.</p><p>This field appears only when the <code>CustomKeyStoreType</code> is <code>AWS_CLOUDHSM</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable trustAnchorCertificate;

/**
 <p>Configuration settings for the external key store proxy (XKS proxy). The external key store proxy translates KMS requests into a format that your external key manager can understand. The proxy configuration includes connection information that KMS requires.</p><p>This field appears only when the <code>CustomKeyStoreType</code> is <code>EXTERNAL_KEY_STORE</code>.</p>
 */
@property (nonatomic, strong) AWSKMSXksProxyConfigurationType * _Nullable xksProxyConfiguration;

@end

/**
 
 */
@interface AWSKMSDecryptRequest : AWSRequest


/**
 <p>Ciphertext to be decrypted. The blob includes metadata.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specifies the encryption algorithm that will be used to decrypt the ciphertext. Specify the same algorithm that was used to encrypt the data. If you specify a different algorithm, the <code>Decrypt</code> operation fails.</p><p>This parameter is required only when the ciphertext was encrypted under an asymmetric KMS key. The default value, <code>SYMMETRIC_DEFAULT</code>, represents the only supported algorithm that is valid for symmetric encryption KMS keys.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec encryptionAlgorithm;

/**
 <p>Specifies the encryption context to use when decrypting the data. An encryption context is valid only for <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic operations</a> with a symmetric encryption KMS key. The standard asymmetric encryption algorithms and HMAC algorithms that KMS uses do not support an encryption context.</p><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represent additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is supported only on operations with symmetric encryption KMS keys. On operations with symmetric encryption KMS keys, an encryption context is optional, but it is strongly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption context</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens. </p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Specifies the KMS key that KMS uses to decrypt the ciphertext.</p><p>Enter a key ID of the KMS key that was used to encrypt the ciphertext. If you identify a different KMS key, the <code>Decrypt</code> operation throws an <code>IncorrectKeyException</code>.</p><p>This parameter is required only when the ciphertext was encrypted under an asymmetric KMS key. If you used a symmetric encryption KMS key, KMS can get the KMS key from metadata that it adds to the symmetric ciphertext blob. However, it is always recommended as a best practice. This practice ensures that you use the KMS key that you intend.</p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>A signed <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation document</a> from an Amazon Web Services Nitro enclave and the encryption algorithm to use with the enclave's public key. The only valid encryption algorithm is <code>RSAES_OAEP_SHA_256</code>. </p><p>This parameter only supports attestation documents for Amazon Web Services Nitro Enclaves. To include this parameter, use the <a href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK.</p><p>When you use this parameter, instead of returning the plaintext data, KMS encrypts the plaintext data with the public key in the attestation document, and returns the resulting ciphertext in the <code>CiphertextForRecipient</code> field in the response. This ciphertext can be decrypted only with the private key in the enclave. The <code>Plaintext</code> field in the response is null or empty.</p><p>For information about the interaction between KMS and Amazon Web Services Nitro Enclaves, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) AWSKMSRecipientInfo * _Nullable recipient;

@end

/**
 
 */
@interface AWSKMSDecryptResponse : AWSModel


/**
 <p>The plaintext data encrypted with the public key in the attestation document. </p><p>This field is included in the response only when the <code>Recipient</code> parameter in the request includes a valid attestation document from an Amazon Web Services Nitro enclave. For information about the interaction between KMS and Amazon Web Services Nitro Enclaves, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextForRecipient;

/**
 <p>The encryption algorithm that was used to decrypt the ciphertext.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec encryptionAlgorithm;

/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the KMS key that was used to decrypt the ciphertext.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Decrypted plaintext data. When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p><p>If the response includes the <code>CiphertextForRecipient</code> field, the <code>Plaintext</code> field is null or empty.</p>
 */
@property (nonatomic, strong) NSData * _Nullable plaintext;

@end

/**
 
 */
@interface AWSKMSDeleteAliasRequest : AWSRequest


/**
 <p>The alias to be deleted. The alias name must begin with <code>alias/</code> followed by the alias name, such as <code>alias/ExampleAlias</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable aliasName;

@end

/**
 
 */
@interface AWSKMSDeleteCustomKeyStoreRequest : AWSRequest


/**
 <p>Enter the ID of the custom key store you want to delete. To find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

@end

/**
 
 */
@interface AWSKMSDeleteCustomKeyStoreResponse : AWSModel


@end

/**
 
 */
@interface AWSKMSDeleteImportedKeyMaterialRequest : AWSRequest


/**
 <p>Identifies the KMS key from which you are deleting imported key material. The <code>Origin</code> of the KMS key must be <code>EXTERNAL</code>.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSDescribeCustomKeyStoresRequest : AWSRequest


/**
 <p>Gets only information about the specified custom key store. Enter the key store ID.</p><p>By default, this operation gets information about all custom key stores in the account and Region. To limit the output to a particular custom key store, provide either the <code>CustomKeyStoreId</code> or <code>CustomKeyStoreName</code> parameter, but not both.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>Gets only information about the specified custom key store. Enter the friendly name of the custom key store.</p><p>By default, this operation gets information about all custom key stores in the account and Region. To limit the output to a particular custom key store, provide either the <code>CustomKeyStoreId</code> or <code>CustomKeyStoreName</code> parameter, but not both.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreName;

/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, KMS does not return more than the specified number of items, but it might return fewer.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSDescribeCustomKeyStoresResponse : AWSModel


/**
 <p>Contains metadata about each custom key store.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSCustomKeyStoresListEntry *> * _Nullable customKeyStores;

/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSDescribeKeyRequest : AWSRequest


/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Describes the specified KMS key. </p><p>If you specify a predefined Amazon Web Services alias (an Amazon Web Services alias with no key ID), KMS associates the alias with an <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html##aws-managed-cmk">Amazon Web Services managed key</a> and returns its <code>KeyId</code> and <code>Arn</code> in the response.</p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSDescribeKeyResponse : AWSModel


/**
 <p>Metadata associated with the key.</p>
 */
@property (nonatomic, strong) AWSKMSKeyMetadata * _Nullable keyMetadata;

@end

/**
 
 */
@interface AWSKMSDisableKeyRequest : AWSRequest


/**
 <p>Identifies the KMS key to disable.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSDisableKeyRotationRequest : AWSRequest


/**
 <p>Identifies a symmetric encryption KMS key. You cannot enable or disable automatic rotation of <a href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html#asymmetric-cmks">asymmetric KMS keys</a>, <a href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS keys</a>, KMS keys with <a href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported key material</a>, or KMS keys in a <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSDisconnectCustomKeyStoreRequest : AWSRequest


/**
 <p>Enter the ID of the custom key store you want to disconnect. To find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

@end

/**
 
 */
@interface AWSKMSDisconnectCustomKeyStoreResponse : AWSModel


@end

/**
 
 */
@interface AWSKMSEnableKeyRequest : AWSRequest


/**
 <p>Identifies the KMS key to enable.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSEnableKeyRotationRequest : AWSRequest


/**
 <p>Identifies a symmetric encryption KMS key. You cannot enable automatic rotation of <a href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric KMS keys</a>, <a href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS keys</a>, KMS keys with <a href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported key material</a>, or KMS keys in a <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>. To enable or disable automatic rotation of a set of related <a href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region keys</a>, set the property on the primary key.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSEncryptRequest : AWSRequest


/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specifies the encryption algorithm that KMS will use to encrypt the plaintext message. The algorithm must be compatible with the KMS key that you specify.</p><p>This parameter is required only for asymmetric KMS keys. The default value, <code>SYMMETRIC_DEFAULT</code>, is the algorithm used for symmetric encryption KMS keys. If you are using an asymmetric KMS key, we recommend RSAES_OAEP_SHA_256.</p><p>The SM2PKE algorithm is only available in China Regions.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec encryptionAlgorithm;

/**
 <p>Specifies the encryption context that will be used to encrypt the data. An encryption context is valid only for <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic operations</a> with a symmetric encryption KMS key. The standard asymmetric encryption algorithms and HMAC algorithms that KMS uses do not support an encryption context. </p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represent additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is supported only on operations with symmetric encryption KMS keys. On operations with symmetric encryption KMS keys, an encryption context is optional, but it is strongly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption context</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Identifies the KMS key to use in the encryption operation. The KMS key must have a <code>KeyUsage</code> of <code>ENCRYPT_DECRYPT</code>. To find the <code>KeyUsage</code> of a KMS key, use the <a>DescribeKey</a> operation.</p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Data to be encrypted.</p>
 */
@property (nonatomic, strong) NSData * _Nullable plaintext;

@end

/**
 
 */
@interface AWSKMSEncryptResponse : AWSModel


/**
 <p>The encrypted plaintext. When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>The encryption algorithm that was used to encrypt the plaintext.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec encryptionAlgorithm;

/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the KMS key that was used to encrypt the plaintext.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyPairRequest : AWSRequest


/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specifies the encryption context that will be used when encrypting the private key in the data key pair.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represent additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is supported only on operations with symmetric encryption KMS keys. On operations with symmetric encryption KMS keys, an encryption context is optional, but it is strongly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption context</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Specifies the symmetric encryption KMS key that encrypts the private key in the data key pair. You cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Determines the type of data key pair that is generated. </p><p>The KMS rule that restricts the use of asymmetric RSA and SM2 KMS keys to encrypt and decrypt or to sign and verify (but not both), and the rule that permits you to use ECC KMS keys only to sign and verify, are not effective on data key pairs, which are used outside of KMS. The SM2 key spec is only available in China Regions.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeyPairSpec keyPairSpec;

/**
 <p>A signed <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation document</a> from an Amazon Web Services Nitro enclave and the encryption algorithm to use with the enclave's public key. The only valid encryption algorithm is <code>RSAES_OAEP_SHA_256</code>. </p><p>This parameter only supports attestation documents for Amazon Web Services Nitro Enclaves. To include this parameter, use the <a href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK.</p><p>When you use this parameter, instead of returning a plaintext copy of the private data key, KMS encrypts the plaintext private data key under the public key in the attestation document, and returns the resulting ciphertext in the <code>CiphertextForRecipient</code> field in the response. This ciphertext can be decrypted only with the private key in the enclave. The <code>CiphertextBlob</code> field in the response contains a copy of the private data key encrypted under the KMS key specified by the <code>KeyId</code> parameter. The <code>PrivateKeyPlaintext</code> field in the response is null or empty.</p><p>For information about the interaction between KMS and Amazon Web Services Nitro Enclaves, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) AWSKMSRecipientInfo * _Nullable recipient;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyPairResponse : AWSModel


/**
 <p>The plaintext private data key encrypted with the public key from the Nitro enclave. This ciphertext can be decrypted only by using a private key in the Nitro enclave. </p><p>This field is included in the response only when the <code>Recipient</code> parameter in the request includes a valid attestation document from an Amazon Web Services Nitro enclave. For information about the interaction between KMS and Amazon Web Services Nitro Enclaves, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextForRecipient;

/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the KMS key that encrypted the private key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The type of data key pair that was generated.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeyPairSpec keyPairSpec;

/**
 <p>The encrypted copy of the private key. When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable privateKeyCiphertextBlob;

/**
 <p>The plaintext copy of the private key. When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p><p>If the response includes the <code>CiphertextForRecipient</code> field, the <code>PrivateKeyPlaintext</code> field is null or empty.</p>
 */
@property (nonatomic, strong) NSData * _Nullable privateKeyPlaintext;

/**
 <p>The public key (in plaintext). When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable publicKey;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyPairWithoutPlaintextRequest : AWSRequest


/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specifies the encryption context that will be used when encrypting the private key in the data key pair.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represent additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is supported only on operations with symmetric encryption KMS keys. On operations with symmetric encryption KMS keys, an encryption context is optional, but it is strongly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption context</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Specifies the symmetric encryption KMS key that encrypts the private key in the data key pair. You cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get the type and origin of your KMS key, use the <a>DescribeKey</a> operation. </p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Determines the type of data key pair that is generated.</p><p>The KMS rule that restricts the use of asymmetric RSA and SM2 KMS keys to encrypt and decrypt or to sign and verify (but not both), and the rule that permits you to use ECC KMS keys only to sign and verify, are not effective on data key pairs, which are used outside of KMS. The SM2 key spec is only available in China Regions.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeyPairSpec keyPairSpec;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyPairWithoutPlaintextResponse : AWSModel


/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the KMS key that encrypted the private key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The type of data key pair that was generated.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeyPairSpec keyPairSpec;

/**
 <p>The encrypted copy of the private key. When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable privateKeyCiphertextBlob;

/**
 <p>The public key (in plaintext). When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable publicKey;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyRequest : AWSRequest


/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specifies the encryption context that will be used when encrypting the data key.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represent additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is supported only on operations with symmetric encryption KMS keys. On operations with symmetric encryption KMS keys, an encryption context is optional, but it is strongly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption context</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Specifies the symmetric encryption KMS key that encrypts the data key. You cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Specifies the length of the data key. Use <code>AES_128</code> to generate a 128-bit symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric key.</p><p>You must specify either the <code>KeySpec</code> or the <code>NumberOfBytes</code> parameter (but not both) in every <code>GenerateDataKey</code> request.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeySpec keySpec;

/**
 <p>Specifies the length of the data key in bytes. For example, use the value 64 to generate a 512-bit data key (64 bytes is 512 bits). For 128-bit (16-byte) and 256-bit (32-byte) data keys, use the <code>KeySpec</code> parameter.</p><p>You must specify either the <code>KeySpec</code> or the <code>NumberOfBytes</code> parameter (but not both) in every <code>GenerateDataKey</code> request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable numberOfBytes;

/**
 <p>A signed <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation document</a> from an Amazon Web Services Nitro enclave and the encryption algorithm to use with the enclave's public key. The only valid encryption algorithm is <code>RSAES_OAEP_SHA_256</code>. </p><p>This parameter only supports attestation documents for Amazon Web Services Nitro Enclaves. To include this parameter, use the <a href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK.</p><p>When you use this parameter, instead of returning the plaintext data key, KMS encrypts the plaintext data key under the public key in the attestation document, and returns the resulting ciphertext in the <code>CiphertextForRecipient</code> field in the response. This ciphertext can be decrypted only with the private key in the enclave. The <code>CiphertextBlob</code> field in the response contains a copy of the data key encrypted under the KMS key specified by the <code>KeyId</code> parameter. The <code>Plaintext</code> field in the response is null or empty.</p><p>For information about the interaction between KMS and Amazon Web Services Nitro Enclaves, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) AWSKMSRecipientInfo * _Nullable recipient;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyResponse : AWSModel


/**
 <p>The encrypted copy of the data key. When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>The plaintext data key encrypted with the public key from the Nitro enclave. This ciphertext can be decrypted only by using a private key in the Nitro enclave. </p><p>This field is included in the response only when the <code>Recipient</code> parameter in the request includes a valid attestation document from an Amazon Web Services Nitro enclave. For information about the interaction between KMS and Amazon Web Services Nitro Enclaves, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextForRecipient;

/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the KMS key that encrypted the data key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The plaintext data key. When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded. Use this data key to encrypt your data outside of KMS. Then, remove it from memory as soon as possible.</p><p>If the response includes the <code>CiphertextForRecipient</code> field, the <code>Plaintext</code> field is null or empty.</p>
 */
@property (nonatomic, strong) NSData * _Nullable plaintext;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyWithoutPlaintextRequest : AWSRequest


/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specifies the encryption context that will be used when encrypting the data key.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represent additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is supported only on operations with symmetric encryption KMS keys. On operations with symmetric encryption KMS keys, an encryption context is optional, but it is strongly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption context</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContext;

/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Specifies the symmetric encryption KMS key that encrypts the data key. You cannot specify an asymmetric KMS key or a KMS key in a custom key store. To get the type and origin of your KMS key, use the <a>DescribeKey</a> operation.</p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The length of the data key. Use <code>AES_128</code> to generate a 128-bit symmetric key, or <code>AES_256</code> to generate a 256-bit symmetric key.</p>
 */
@property (nonatomic, assign) AWSKMSDataKeySpec keySpec;

/**
 <p>The length of the data key in bytes. For example, use the value 64 to generate a 512-bit data key (64 bytes is 512 bits). For common key lengths (128-bit and 256-bit symmetric keys), we recommend that you use the <code>KeySpec</code> field instead of this one.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable numberOfBytes;

@end

/**
 
 */
@interface AWSKMSGenerateDataKeyWithoutPlaintextResponse : AWSModel


/**
 <p>The encrypted data key. When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the KMS key that encrypted the data key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSGenerateMacRequest : AWSRequest


/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>The HMAC KMS key to use in the operation. The MAC algorithm computes the HMAC for the message and the key as described in <a href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p><p>To identify an HMAC KMS key, use the <a>DescribeKey</a> operation and see the <code>KeySpec</code> field in the response.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The MAC algorithm used in the operation.</p><p> The algorithm must be compatible with the HMAC KMS key that you specify. To find the MAC algorithms that your HMAC KMS key supports, use the <a>DescribeKey</a> operation and see the <code>MacAlgorithms</code> field in the <code>DescribeKey</code> response.</p>
 */
@property (nonatomic, assign) AWSKMSMacAlgorithmSpec macAlgorithm;

/**
 <p>The message to be hashed. Specify a message of up to 4,096 bytes. </p><p><code>GenerateMac</code> and <a>VerifyMac</a> do not provide special handling for message digests. If you generate an HMAC for a hash digest of a message, you must verify the HMAC of the same hash digest.</p>
 */
@property (nonatomic, strong) NSData * _Nullable message;

@end

/**
 
 */
@interface AWSKMSGenerateMacResponse : AWSModel


/**
 <p>The HMAC KMS key used in the operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The hash-based message authentication code (HMAC) that was generated for the specified message, HMAC KMS key, and MAC algorithm.</p><p>This is the standard, raw HMAC defined in <a href="https://datatracker.ietf.org/doc/html/rfc2104">RFC 2104</a>.</p>
 */
@property (nonatomic, strong) NSData * _Nullable mac;

/**
 <p>The MAC algorithm that was used to generate the HMAC.</p>
 */
@property (nonatomic, assign) AWSKMSMacAlgorithmSpec macAlgorithm;

@end

/**
 
 */
@interface AWSKMSGenerateRandomRequest : AWSRequest


/**
 <p>Generates the random byte string in the CloudHSM cluster that is associated with the specified CloudHSM key store. To find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p><p>External key store IDs are not valid for this parameter. If you specify the ID of an external key store, <code>GenerateRandom</code> throws an <code>UnsupportedOperationException</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>The length of the random byte string. This parameter is required.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable numberOfBytes;

/**
 <p>A signed <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/nitro-enclave-how.html#term-attestdoc">attestation document</a> from an Amazon Web Services Nitro enclave and the encryption algorithm to use with the enclave's public key. The only valid encryption algorithm is <code>RSAES_OAEP_SHA_256</code>. </p><p>This parameter only supports attestation documents for Amazon Web Services Nitro Enclaves. To include this parameter, use the <a href="https://docs.aws.amazon.com/enclaves/latest/user/developing-applications.html#sdk">Amazon Web Services Nitro Enclaves SDK</a> or any Amazon Web Services SDK.</p><p>When you use this parameter, instead of returning plaintext bytes, KMS encrypts the plaintext bytes under the public key in the attestation document, and returns the resulting ciphertext in the <code>CiphertextForRecipient</code> field in the response. This ciphertext can be decrypted only with the private key in the enclave. The <code>Plaintext</code> field in the response is null or empty.</p><p>For information about the interaction between KMS and Amazon Web Services Nitro Enclaves, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) AWSKMSRecipientInfo * _Nullable recipient;

@end

/**
 
 */
@interface AWSKMSGenerateRandomResponse : AWSModel


/**
 <p>The plaintext random bytes encrypted with the public key from the Nitro enclave. This ciphertext can be decrypted only by using a private key in the Nitro enclave. </p><p>This field is included in the response only when the <code>Recipient</code> parameter in the request includes a valid attestation document from an Amazon Web Services Nitro enclave. For information about the interaction between KMS and Amazon Web Services Nitro Enclaves, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextForRecipient;

/**
 <p>The random byte string. When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p><p>If the response includes the <code>CiphertextForRecipient</code> field, the <code>Plaintext</code> field is null or empty.</p>
 */
@property (nonatomic, strong) NSData * _Nullable plaintext;

@end

/**
 
 */
@interface AWSKMSGetKeyPolicyRequest : AWSRequest


/**
 <p>Gets the key policy for the specified KMS key.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Specifies the name of the key policy. The only valid name is <code>default</code>. To get the names of key policies, use <a>ListKeyPolicies</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyName;

@end

/**
 
 */
@interface AWSKMSGetKeyPolicyResponse : AWSModel


/**
 <p>A key policy document in JSON format.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policy;

@end

/**
 
 */
@interface AWSKMSGetKeyRotationStatusRequest : AWSRequest


/**
 <p>Gets the rotation status for the specified KMS key.</p><p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSGetKeyRotationStatusResponse : AWSModel


/**
 <p>A Boolean value that specifies whether key rotation is enabled.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable keyRotationEnabled;

@end

/**
 
 */
@interface AWSKMSGetParametersForImportRequest : AWSRequest


/**
 <p>The identifier of the KMS key that will be associated with the imported key material. The <code>Origin</code> of the KMS key must be <code>EXTERNAL</code>.</p><p>All KMS key types are supported, including multi-Region keys. However, you cannot import key material into a KMS key in a custom key store.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The algorithm you will use with the RSA public key (<code>PublicKey</code>) in the response to protect your key material during import. For more information, see <a href="kms/latest/developerguide/importing-keys-get-public-key-and-token.html#select-wrapping-algorithm">Select a wrapping algorithm</a> in the <i>Key Management Service Developer Guide</i>.</p><p>For RSA_AES wrapping algorithms, you encrypt your key material with an AES key that you generate, then encrypt your AES key with the RSA public key from KMS. For RSAES wrapping algorithms, you encrypt your key material directly with the RSA public key from KMS.</p><p>The wrapping algorithms that you can use depend on the type of key material that you are importing. To import an RSA private key, you must use an RSA_AES wrapping algorithm.</p><ul><li><p><b>RSA_AES_KEY_WRAP_SHA_256</b> — Supported for wrapping RSA and ECC key material.</p></li><li><p><b>RSA_AES_KEY_WRAP_SHA_1</b> — Supported for wrapping RSA and ECC key material.</p></li><li><p><b>RSAES_OAEP_SHA_256</b> — Supported for all types of key material, except RSA key material (private key).</p><p>You cannot use the RSAES_OAEP_SHA_256 wrapping algorithm with the RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key material.</p></li><li><p><b>RSAES_OAEP_SHA_1</b> — Supported for all types of key material, except RSA key material (private key).</p><p>You cannot use the RSAES_OAEP_SHA_1 wrapping algorithm with the RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key material.</p></li><li><p><b>RSAES_PKCS1_V1_5</b> (Deprecated) — Supported only for symmetric encryption key material (and only in legacy mode).</p></li></ul>
 */
@property (nonatomic, assign) AWSKMSAlgorithmSpec wrappingAlgorithm;

/**
 <p>The type of RSA public key to return in the response. You will use this wrapping key with the specified wrapping algorithm to protect your key material during import. </p><p>Use the longest RSA wrapping key that is practical. </p><p>You cannot use an RSA_2048 public key to directly wrap an ECC_NIST_P521 private key. Instead, use an RSA_AES wrapping algorithm or choose a longer RSA public key.</p>
 */
@property (nonatomic, assign) AWSKMSWrappingKeySpec wrappingKeySpec;

@end

/**
 
 */
@interface AWSKMSGetParametersForImportResponse : AWSModel


/**
 <p>The import token to send in a subsequent <a>ImportKeyMaterial</a> request.</p>
 */
@property (nonatomic, strong) NSData * _Nullable importToken;

/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the KMS key to use in a subsequent <a>ImportKeyMaterial</a> request. This is the same KMS key specified in the <code>GetParametersForImport</code> request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The time at which the import token and public key are no longer valid. After this time, you cannot use them to make an <a>ImportKeyMaterial</a> request and you must send another <code>GetParametersForImport</code> request to get new ones.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable parametersValidTo;

/**
 <p>The public key to use to encrypt the key material before importing it with <a>ImportKeyMaterial</a>.</p>
 */
@property (nonatomic, strong) NSData * _Nullable publicKey;

@end

/**
 
 */
@interface AWSKMSGetPublicKeyRequest : AWSRequest


/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Identifies the asymmetric KMS key that includes the public key.</p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSGetPublicKeyResponse : AWSModel


/**
 <p>Instead, use the <code>KeySpec</code> field in the <code>GetPublicKey</code> response.</p><p>The <code>KeySpec</code> and <code>CustomerMasterKeySpec</code> fields have the same value. We recommend that you use the <code>KeySpec</code> field in your code. However, to avoid breaking changes, KMS supports both fields.</p>
 */
@property (nonatomic, assign) AWSKMSCustomerMasterKeySpec customerMasterKeySpec;

/**
 <p>The encryption algorithms that KMS supports for this key. </p><p>This information is critical. If a public key encrypts data outside of KMS by using an unsupported encryption algorithm, the ciphertext cannot be decrypted. </p><p>This field appears in the response only when the <code>KeyUsage</code> of the public key is <code>ENCRYPT_DECRYPT</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable encryptionAlgorithms;

/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the asymmetric KMS key from which the public key was downloaded.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The type of the of the public key that was downloaded.</p>
 */
@property (nonatomic, assign) AWSKMSKeySpec keySpec;

/**
 <p>The permitted use of the public key. Valid values are <code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>. </p><p>This information is critical. If a public key with <code>SIGN_VERIFY</code> key usage encrypts data outside of KMS, the ciphertext cannot be decrypted. </p>
 */
@property (nonatomic, assign) AWSKMSKeyUsageType keyUsage;

/**
 <p>The exported public key. </p><p>The value is a DER-encoded X.509 public key, also known as <code>SubjectPublicKeyInfo</code> (SPKI), as defined in <a href="https://tools.ietf.org/html/rfc5280">RFC 5280</a>. When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p><p/>
 */
@property (nonatomic, strong) NSData * _Nullable publicKey;

/**
 <p>The signing algorithms that KMS supports for this key.</p><p>This field appears in the response only when the <code>KeyUsage</code> of the public key is <code>SIGN_VERIFY</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable signingAlgorithms;

@end

/**
 <p>Use this structure to allow <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic operations</a> in the grant only when the operation request includes the specified <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption context</a>. </p><p>KMS applies the grant constraints only to cryptographic operations that support an encryption context, that is, all cryptographic operations with a <a href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-concepts.html#symmetric-cmks">symmetric KMS key</a>. Grant constraints are not applied to operations that do not support an encryption context, such as cryptographic operations with asymmetric KMS keys and management operations, such as <a>DescribeKey</a> or <a>RetireGrant</a>.</p><important><p>In a cryptographic operation, the encryption context in the decryption operation must be an exact, case-sensitive match for the keys and values in the encryption context of the encryption operation. Only the order of the pairs can vary.</p><p>However, in a grant constraint, the key in each key-value pair is not case sensitive, but the value is case sensitive.</p><p>To avoid confusion, do not use multiple encryption context pairs that differ only by case. To require a fully case-sensitive encryption context, use the <code>kms:EncryptionContext:</code> and <code>kms:EncryptionContextKeys</code> conditions in an IAM or key policy. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/policy-conditions.html#conditions-kms-encryption-context">kms:EncryptionContext:</a> in the <i><i>Key Management Service Developer Guide</i></i>.</p></important>
 */
@interface AWSKMSGrantConstraints : AWSModel


/**
 <p>A list of key-value pairs that must match the encryption context in the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic operation</a> request. The grant allows the operation only when the encryption context in the request is the same as the encryption context specified in this constraint.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContextEquals;

/**
 <p>A list of key-value pairs that must be included in the encryption context of the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic operation</a> request. The grant allows the cryptographic operation only when the encryption context in the request includes the key-value pairs specified in this constraint, although it can include additional key-value pairs.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable encryptionContextSubset;

@end

/**
 <p>Contains information about a grant.</p>
 */
@interface AWSKMSGrantListEntry : AWSModel


/**
 <p>A list of key-value pairs that must be present in the encryption context of certain subsequent operations that the grant allows.</p>
 */
@property (nonatomic, strong) AWSKMSGrantConstraints * _Nullable constraints;

/**
 <p>The date and time when the grant was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable creationDate;

/**
 <p>The unique identifier for the grant.</p>
 */
@property (nonatomic, strong) NSString * _Nullable grantId;

/**
 <p>The identity that gets the permissions in the grant.</p><p>The <code>GranteePrincipal</code> field in the <code>ListGrants</code> response usually contains the user or role designated as the grantee principal in the grant. However, when the grantee principal in the grant is an Amazon Web Services service, the <code>GranteePrincipal</code> field contains the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service principal</a>, which might represent several different grantee principals.</p>
 */
@property (nonatomic, strong) NSString * _Nullable granteePrincipal;

/**
 <p>The Amazon Web Services account under which the grant was issued.</p>
 */
@property (nonatomic, strong) NSString * _Nullable issuingAccount;

/**
 <p>The unique identifier for the KMS key to which the grant applies.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The friendly name that identifies the grant. If a name was provided in the <a>CreateGrant</a> request, that name is returned. Otherwise this value is null.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The list of operations permitted by the grant.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable operations;

/**
 <p>The principal that can retire the grant.</p>
 */
@property (nonatomic, strong) NSString * _Nullable retiringPrincipal;

@end

/**
 
 */
@interface AWSKMSImportKeyMaterialRequest : AWSRequest


/**
 <p>The encrypted key material to import. The key material must be encrypted under the public wrapping key that <a>GetParametersForImport</a> returned, using the wrapping algorithm that you specified in the same <code>GetParametersForImport</code> request.</p>
 */
@property (nonatomic, strong) NSData * _Nullable encryptedKeyMaterial;

/**
 <p>Specifies whether the key material expires. The default is <code>KEY_MATERIAL_EXPIRES</code>. For help with this choice, see <a href="https://docs.aws.amazon.com/en_us/kms/latest/developerguide/importing-keys.html#importing-keys-expiration">Setting an expiration time</a> in the <i>Key Management Service Developer Guide</i>.</p><p>When the value of <code>ExpirationModel</code> is <code>KEY_MATERIAL_EXPIRES</code>, you must specify a value for the <code>ValidTo</code> parameter. When value is <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>, you must omit the <code>ValidTo</code> parameter.</p><p>You cannot change the <code>ExpirationModel</code> or <code>ValidTo</code> values for the current import after the request completes. To change either value, you must reimport the key material.</p>
 */
@property (nonatomic, assign) AWSKMSExpirationModelType expirationModel;

/**
 <p>The import token that you received in the response to a previous <a>GetParametersForImport</a> request. It must be from the same response that contained the public key that you used to encrypt the key material.</p>
 */
@property (nonatomic, strong) NSData * _Nullable importToken;

/**
 <p>The identifier of the KMS key that will be associated with the imported key material. This must be the same KMS key specified in the <code>KeyID</code> parameter of the corresponding <a>GetParametersForImport</a> request. The <code>Origin</code> of the KMS key must be <code>EXTERNAL</code> and its <code>KeyState</code> must be <code>PendingImport</code>. </p><p>The KMS key can be a symmetric encryption KMS key, HMAC KMS key, asymmetric encryption KMS key, or asymmetric signing KMS key, including a <a href="kms/latest/developerguide/multi-region-keys-overview.html">multi-Region key</a> of any supported type. You cannot perform this operation on a KMS key in a custom key store, or on a KMS key in a different Amazon Web Services account.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The date and time when the imported key material expires. This parameter is required when the value of the <code>ExpirationModel</code> parameter is <code>KEY_MATERIAL_EXPIRES</code>. Otherwise it is not valid.</p><p>The value of this parameter must be a future date and time. The maximum value is 365 days from the request date.</p><p>When the key material expires, KMS deletes the key material from the KMS key. Without its key material, the KMS key is unusable. To use the KMS key in cryptographic operations, you must reimport the same key material.</p><p>You cannot change the <code>ExpirationModel</code> or <code>ValidTo</code> values for the current import after the request completes. To change either value, you must delete (<a>DeleteImportedKeyMaterial</a>) and reimport the key material.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validTo;

@end

/**
 
 */
@interface AWSKMSImportKeyMaterialResponse : AWSModel


@end

/**
 <p>Contains information about each entry in the key list.</p>
 */
@interface AWSKMSKeyListEntry : AWSModel


/**
 <p>ARN of the key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyArn;

/**
 <p>Unique identifier of the key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 <p>Contains metadata about a KMS key.</p><p>This data type is used as a response element for the <a>CreateKey</a>, <a>DescribeKey</a>, and <a>ReplicateKey</a> operations.</p>
 Required parameters: [KeyId]
 */
@interface AWSKMSKeyMetadata : AWSModel


/**
 <p>The twelve-digit account ID of the Amazon Web Services account that owns the KMS key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable AWSAccountId;

/**
 <p>The Amazon Resource Name (ARN) of the KMS key. For examples, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Key Management Service (KMS)</a> in the Example ARNs section of the <i>Amazon Web Services General Reference</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable arn;

/**
 <p>The cluster ID of the CloudHSM cluster that contains the key material for the KMS key. When you create a KMS key in an CloudHSM <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>, KMS creates the key material for the KMS key in the associated CloudHSM cluster. This field is present only when the KMS key is created in an CloudHSM key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cloudHsmClusterId;

/**
 <p>The date and time when the KMS key was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable creationDate;

/**
 <p>A unique identifier for the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a> that contains the KMS key. This field is present only when the KMS key is created in a custom key store.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>Instead, use the <code>KeySpec</code> field.</p><p>The <code>KeySpec</code> and <code>CustomerMasterKeySpec</code> fields have the same value. We recommend that you use the <code>KeySpec</code> field in your code. However, to avoid breaking changes, KMS supports both fields.</p>
 */
@property (nonatomic, assign) AWSKMSCustomerMasterKeySpec customerMasterKeySpec;

/**
 <p>The date and time after which KMS deletes this KMS key. This value is present only when the KMS key is scheduled for deletion, that is, when its <code>KeyState</code> is <code>PendingDeletion</code>.</p><p>When the primary key in a multi-Region key is scheduled for deletion but still has replica keys, its key state is <code>PendingReplicaDeletion</code> and the length of its waiting period is displayed in the <code>PendingDeletionWindowInDays</code> field.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable deletionDate;

/**
 <p>The description of the KMS key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Specifies whether the KMS key is enabled. When <code>KeyState</code> is <code>Enabled</code> this value is true, otherwise it is false.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

/**
 <p>The encryption algorithms that the KMS key supports. You cannot use the KMS key with other encryption algorithms within KMS.</p><p>This value is present only when the <code>KeyUsage</code> of the KMS key is <code>ENCRYPT_DECRYPT</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable encryptionAlgorithms;

/**
 <p>Specifies whether the KMS key's key material expires. This value is present only when <code>Origin</code> is <code>EXTERNAL</code>, otherwise this value is omitted.</p>
 */
@property (nonatomic, assign) AWSKMSExpirationModelType expirationModel;

/**
 <p>The globally unique identifier for the KMS key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The manager of the KMS key. KMS keys in your Amazon Web Services account are either customer managed or Amazon Web Services managed. For more information about the difference, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#kms_keys">KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, assign) AWSKMSKeyManagerType keyManager;

/**
 <p>Describes the type of key material in the KMS key.</p>
 */
@property (nonatomic, assign) AWSKMSKeySpec keySpec;

/**
 <p>The current status of the KMS key.</p><p>For more information about how key state affects the use of a KMS key, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, assign) AWSKMSKeyState keyState;

/**
 <p>The <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic operations</a> for which you can use the KMS key.</p>
 */
@property (nonatomic, assign) AWSKMSKeyUsageType keyUsage;

/**
 <p>The message authentication code (MAC) algorithm that the HMAC KMS key supports.</p><p>This value is present only when the <code>KeyUsage</code> of the KMS key is <code>GENERATE_VERIFY_MAC</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable macAlgorithms;

/**
 <p>Indicates whether the KMS key is a multi-Region (<code>True</code>) or regional (<code>False</code>) key. This value is <code>True</code> for multi-Region primary and replica keys and <code>False</code> for regional KMS keys.</p><p>For more information about multi-Region keys, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-overview.html">Multi-Region keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable multiRegion;

/**
 <p>Lists the primary and replica keys in same multi-Region key. This field is present only when the value of the <code>MultiRegion</code> field is <code>True</code>.</p><p>For more information about any listed KMS key, use the <a>DescribeKey</a> operation.</p><ul><li><p><code>MultiRegionKeyType</code> indicates whether the KMS key is a <code>PRIMARY</code> or <code>REPLICA</code> key.</p></li><li><p><code>PrimaryKey</code> displays the key ARN and Region of the primary key. This field displays the current KMS key if it is the primary key.</p></li><li><p><code>ReplicaKeys</code> displays the key ARNs and Regions of all replica keys. This field includes the current KMS key if it is a replica key.</p></li></ul>
 */
@property (nonatomic, strong) AWSKMSMultiRegionConfiguration * _Nullable multiRegionConfiguration;

/**
 <p>The source of the key material for the KMS key. When this value is <code>AWS_KMS</code>, KMS created the key material. When this value is <code>EXTERNAL</code>, the key material was imported or the KMS key doesn't have any key material. When this value is <code>AWS_CLOUDHSM</code>, the key material was created in the CloudHSM cluster associated with a custom key store.</p>
 */
@property (nonatomic, assign) AWSKMSOriginType origin;

/**
 <p>The waiting period before the primary key in a multi-Region key is deleted. This waiting period begins when the last of its replica keys is deleted. This value is present only when the <code>KeyState</code> of the KMS key is <code>PendingReplicaDeletion</code>. That indicates that the KMS key is the primary key in a multi-Region key, it is scheduled for deletion, and it still has existing replica keys.</p><p>When a single-Region KMS key or a multi-Region replica key is scheduled for deletion, its deletion date is displayed in the <code>DeletionDate</code> field. However, when the primary key in a multi-Region key is scheduled for deletion, its waiting period doesn't begin until all of its replica keys are deleted. This value displays that waiting period. When the last replica key in the multi-Region key is deleted, the <code>KeyState</code> of the scheduled primary key changes from <code>PendingReplicaDeletion</code> to <code>PendingDeletion</code> and the deletion date appears in the <code>DeletionDate</code> field.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable pendingDeletionWindowInDays;

/**
 <p>The signing algorithms that the KMS key supports. You cannot use the KMS key with other signing algorithms within KMS.</p><p>This field appears only when the <code>KeyUsage</code> of the KMS key is <code>SIGN_VERIFY</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable signingAlgorithms;

/**
 <p>The time at which the imported key material expires. When the key material expires, KMS deletes the key material and the KMS key becomes unusable. This value is present only for KMS keys whose <code>Origin</code> is <code>EXTERNAL</code> and whose <code>ExpirationModel</code> is <code>KEY_MATERIAL_EXPIRES</code>, otherwise this value is omitted.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validTo;

/**
 <p>Information about the external key that is associated with a KMS key in an external key store.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">External key</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) AWSKMSXksKeyConfigurationType * _Nullable xksKeyConfiguration;

@end

/**
 
 */
@interface AWSKMSListAliasesRequest : AWSRequest


/**
 <p>Lists only aliases that are associated with the specified KMS key. Enter a KMS key in your Amazon Web Services account. </p><p>This parameter is optional. If you omit it, <code>ListAliases</code> returns all aliases in the account and Region.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 100, inclusive. If you do not include a value, it defaults to 50.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSListAliasesResponse : AWSModel


/**
 <p>A list of aliases.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSAliasListEntry *> * _Nullable aliases;

/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSListGrantsRequest : AWSRequest


/**
 <p>Returns only the grant with the specified grant ID. The grant ID uniquely identifies the grant. </p>
 */
@property (nonatomic, strong) NSString * _Nullable grantId;

/**
 <p>Returns only grants where the specified principal is the grantee principal for the grant.</p>
 */
@property (nonatomic, strong) NSString * _Nullable granteePrincipal;

/**
 <p>Returns only grants for the specified KMS key. This parameter is required.</p><p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 100, inclusive. If you do not include a value, it defaults to 50.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSListGrantsResponse : AWSModel


/**
 <p>A list of grants.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSGrantListEntry *> * _Nullable grants;

/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSListKeyPoliciesRequest : AWSRequest


/**
 <p>Gets the names of key policies for the specified KMS key.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 1000, inclusive. If you do not include a value, it defaults to 100.</p><p>Only one policy can be attached to a key.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSListKeyPoliciesResponse : AWSModel


/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A list of key policy names. The only valid value is <code>default</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable policyNames;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSListKeysRequest : AWSRequest


/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 1000, inclusive. If you do not include a value, it defaults to 100.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSListKeysResponse : AWSModel


/**
 <p>A list of KMS keys.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSKeyListEntry *> * _Nullable keys;

/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSListResourceTagsRequest : AWSRequest


/**
 <p>Gets tags on the specified KMS key.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 50, inclusive. If you do not include a value, it defaults to 50.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p><p>Do not attempt to construct this value. Use only the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

@end

/**
 
 */
@interface AWSKMSListResourceTagsResponse : AWSModel


/**
 <p>When <code>Truncated</code> is true, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent request.</p><p>Do not assume or infer any information from this value.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextMarker;

/**
 <p>A list of tags. Each tag consists of a tag key and a tag value.</p><note><p>Tagging or untagging a KMS key can allow or deny permission to the KMS key. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for KMS</a> in the <i>Key Management Service Developer Guide</i>.</p></note>
 */
@property (nonatomic, strong) NSArray<AWSKMSTag *> * _Nullable tags;

/**
 <p>A flag that indicates whether there are more items in the list. When this value is true, the list in this response is truncated. To get more items, pass the value of the <code>NextMarker</code> element in thisresponse to the <code>Marker</code> parameter in a subsequent request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable truncated;

@end

/**
 
 */
@interface AWSKMSListRetirableGrantsRequest : AWSRequest


/**
 <p>Use this parameter to specify the maximum number of items to return. When this value is present, KMS does not return more than the specified number of items, but it might return fewer.</p><p>This value is optional. If you include a value, it must be between 1 and 100, inclusive. If you do not include a value, it defaults to 50.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable limit;

/**
 <p>Use this parameter in a subsequent request after you receive a response with truncated results. Set it to the value of <code>NextMarker</code> from the truncated response you just received.</p>
 */
@property (nonatomic, strong) NSString * _Nullable marker;

/**
 <p>The retiring principal for which to list grants. Enter a principal in your Amazon Web Services account.</p><p>To specify the retiring principal, use the <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Name (ARN)</a> of an Amazon Web Services principal. Valid principals include Amazon Web Services accounts, IAM users, IAM roles, federated users, and assumed role users. For help with the ARN syntax for a principal, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM ARNs</a> in the <i><i>Identity and Access Management User Guide</i></i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable retiringPrincipal;

@end

/**
 <p>Describes the configuration of this multi-Region key. This field appears only when the KMS key is a primary or replica of a multi-Region key.</p><p>For more information about any listed KMS key, use the <a>DescribeKey</a> operation.</p>
 */
@interface AWSKMSMultiRegionConfiguration : AWSModel


/**
 <p>Indicates whether the KMS key is a <code>PRIMARY</code> or <code>REPLICA</code> key.</p>
 */
@property (nonatomic, assign) AWSKMSMultiRegionKeyType multiRegionKeyType;

/**
 <p>Displays the key ARN and Region of the primary key. This field includes the current KMS key if it is the primary key.</p>
 */
@property (nonatomic, strong) AWSKMSMultiRegionKey * _Nullable primaryKey;

/**
 <p>displays the key ARNs and Regions of all replica keys. This field includes the current KMS key if it is a replica key.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSMultiRegionKey *> * _Nullable replicaKeys;

@end

/**
 <p>Describes the primary or replica key in a multi-Region key.</p>
 */
@interface AWSKMSMultiRegionKey : AWSModel


/**
 <p>Displays the key ARN of a primary or replica key of a multi-Region key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable arn;

/**
 <p>Displays the Amazon Web Services Region of a primary or replica key in a multi-Region key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable region;

@end

/**
 
 */
@interface AWSKMSPutKeyPolicyRequest : AWSRequest


/**
 <p>Skips ("bypasses") the key policy lockout safety check. The default value is false.</p><important><p>Setting this value to true increases the risk that the KMS key becomes unmanageable. Do not set this value to true indiscriminately.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-default.html#prevent-unmanageable-key">Default key policy</a> in the <i>Key Management Service Developer Guide</i>.</p></important><p>Use this parameter only when you intend to prevent the principal that is making the request from making a subsequent <a>PutKeyPolicy</a> request on the KMS key.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable bypassPolicyLockoutSafetyCheck;

/**
 <p>Sets the key policy on the specified KMS key.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The key policy to attach to the KMS key.</p><p>The key policy must meet the following criteria:</p><ul><li><p>The key policy must allow the calling principal to make a subsequent <code>PutKeyPolicy</code> request on the KMS key. This reduces the risk that the KMS key becomes unmanageable. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-default.html#prevent-unmanageable-key">Default key policy</a> in the <i>Key Management Service Developer Guide</i>. (To omit this condition, set <code>BypassPolicyLockoutSafetyCheck</code> to true.)</p></li><li><p>Each statement in the key policy must contain one or more principals. The principals in the key policy must exist and be visible to KMS. When you create a new Amazon Web Services principal, you might need to enforce a delay before including the new principal in a key policy because the new principal might not be immediately visible to KMS. For more information, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes that I make are not always immediately visible</a> in the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p></li></ul><p>A key policy document can include only the following characters:</p><ul><li><p>Printable ASCII characters from the space character (<code>\u0020</code>) through the end of the ASCII character range.</p></li><li><p>Printable characters in the Basic Latin and Latin-1 Supplement character set (through <code>\u00FF</code>).</p></li><li><p>The tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and carriage return (<code>\u000D</code>) special characters</p></li></ul><p>For information about key policies, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key policies in KMS</a> in the <i>Key Management Service Developer Guide</i>.For help writing and formatting a JSON policy document, see the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM JSON Policy Reference</a> in the <i><i>Identity and Access Management User Guide</i></i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policy;

/**
 <p>The name of the key policy. The only valid value is <code>default</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyName;

@end

/**
 
 */
@interface AWSKMSReEncryptRequest : AWSRequest


/**
 <p>Ciphertext of the data to reencrypt.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>Specifies the encryption algorithm that KMS will use to reecrypt the data after it has decrypted it. The default value, <code>SYMMETRIC_DEFAULT</code>, represents the encryption algorithm used for symmetric encryption KMS keys.</p><p>This parameter is required only when the destination KMS key is an asymmetric KMS key.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec destinationEncryptionAlgorithm;

/**
 <p>Specifies that encryption context to use when the reencrypting the data.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>A destination encryption context is valid only when the destination KMS key is a symmetric encryption KMS key. The standard ciphertext format for asymmetric KMS keys does not include fields for metadata.</p><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represent additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is supported only on operations with symmetric encryption KMS keys. On operations with symmetric encryption KMS keys, an encryption context is optional, but it is strongly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption context</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable destinationEncryptionContext;

/**
 <p>A unique identifier for the KMS key that is used to reencrypt the data. Specify a symmetric encryption KMS key or an asymmetric KMS key with a <code>KeyUsage</code> value of <code>ENCRYPT_DECRYPT</code>. To find the <code>KeyUsage</code> value of a KMS key, use the <a>DescribeKey</a> operation.</p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationKeyId;

/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Specifies the encryption algorithm that KMS will use to decrypt the ciphertext before it is reencrypted. The default value, <code>SYMMETRIC_DEFAULT</code>, represents the algorithm used for symmetric encryption KMS keys.</p><p>Specify the same algorithm that was used to encrypt the ciphertext. If you specify a different algorithm, the decrypt attempt fails.</p><p>This parameter is required only when the ciphertext was encrypted under an asymmetric KMS key.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec sourceEncryptionAlgorithm;

/**
 <p>Specifies the encryption context to use to decrypt the ciphertext. Enter the same encryption context that was used to encrypt the ciphertext.</p><p>An <i>encryption context</i> is a collection of non-secret key-value pairs that represent additional authenticated data. When you use an encryption context to encrypt data, you must specify the same (an exact case-sensitive match) encryption context to decrypt the data. An encryption context is supported only on operations with symmetric encryption KMS keys. On operations with symmetric encryption KMS keys, an encryption context is optional, but it is strongly recommended.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption context</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> * _Nullable sourceEncryptionContext;

/**
 <p>Specifies the KMS key that KMS will use to decrypt the ciphertext before it is re-encrypted.</p><p>Enter a key ID of the KMS key that was used to encrypt the ciphertext. If you identify a different KMS key, the <code>ReEncrypt</code> operation throws an <code>IncorrectKeyException</code>.</p><p>This parameter is required only when the ciphertext was encrypted under an asymmetric KMS key. If you used a symmetric encryption KMS key, KMS can get the KMS key from metadata that it adds to the symmetric ciphertext blob. However, it is always recommended as a best practice. This practice ensures that you use the KMS key that you intend.</p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceKeyId;

@end

/**
 
 */
@interface AWSKMSReEncryptResponse : AWSModel


/**
 <p>The reencrypted data. When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable ciphertextBlob;

/**
 <p>The encryption algorithm that was used to reencrypt the data.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec destinationEncryptionAlgorithm;

/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the KMS key that was used to reencrypt the data.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The encryption algorithm that was used to decrypt the ciphertext before it was reencrypted.</p>
 */
@property (nonatomic, assign) AWSKMSEncryptionAlgorithmSpec sourceEncryptionAlgorithm;

/**
 <p>Unique identifier of the KMS key used to originally encrypt the data.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceKeyId;

@end

/**
 <p>Contains information about the party that receives the response from the API operation.</p><p>This data type is designed to support Amazon Web Services Nitro Enclaves, which lets you create an isolated compute environment in Amazon EC2. For information about the interaction between KMS and Amazon Web Services Nitro Enclaves, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/services-nitro-enclaves.html">How Amazon Web Services Nitro Enclaves uses KMS</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@interface AWSKMSRecipientInfo : AWSModel


/**
 <p>The attestation document for an Amazon Web Services Nitro Enclave. This document includes the enclave's public key.</p>
 */
@property (nonatomic, strong) NSData * _Nullable attestationDocument;

/**
 <p>The encryption algorithm that KMS should use with the public key for an Amazon Web Services Nitro Enclave to encrypt plaintext values for the response. The only valid value is <code>RSAES_OAEP_SHA_256</code>.</p>
 */
@property (nonatomic, assign) AWSKMSKeyEncryptionMechanism keyEncryptionAlgorithm;

@end

/**
 
 */
@interface AWSKMSReplicateKeyRequest : AWSRequest


/**
 <p>Skips ("bypasses") the key policy lockout safety check. The default value is false.</p><important><p>Setting this value to true increases the risk that the KMS key becomes unmanageable. Do not set this value to true indiscriminately.</p><p>For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-default.html#prevent-unmanageable-key">Default key policy</a> in the <i>Key Management Service Developer Guide</i>.</p></important><p>Use this parameter only when you intend to prevent the principal that is making the request from making a subsequent <a>PutKeyPolicy</a> request on the KMS key.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable bypassPolicyLockoutSafetyCheck;

/**
 <p>A description of the KMS key. The default value is an empty string (no description).</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>The description is not a shared property of multi-Region keys. You can specify the same description or a different description for each key in a set of related multi-Region keys. KMS does not synchronize this property.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Identifies the multi-Region primary key that is being replicated. To determine whether a KMS key is a multi-Region primary key, use the <a>DescribeKey</a> operation to check the value of the <code>MultiRegionKeyType</code> property.</p><p>Specify the key ID or key ARN of a multi-Region primary key.</p><p>For example:</p><ul><li><p>Key ID: <code>mrk-1234abcd12ab34cd56ef1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The key policy to attach to the KMS key. This parameter is optional. If you do not provide a key policy, KMS attaches the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">default key policy</a> to the KMS key.</p><p>The key policy is not a shared property of multi-Region keys. You can specify the same key policy or a different key policy for each key in a set of related multi-Region keys. KMS does not synchronize this property.</p><p>If you provide a key policy, it must meet the following criteria:</p><ul><li><p>The key policy must allow the calling principal to make a subsequent <code>PutKeyPolicy</code> request on the KMS key. This reduces the risk that the KMS key becomes unmanageable. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policy-default.html#prevent-unmanageable-key">Default key policy</a> in the <i>Key Management Service Developer Guide</i>. (To omit this condition, set <code>BypassPolicyLockoutSafetyCheck</code> to true.)</p></li><li><p>Each statement in the key policy must contain one or more principals. The principals in the key policy must exist and be visible to KMS. When you create a new Amazon Web Services principal, you might need to enforce a delay before including the new principal in a key policy because the new principal might not be immediately visible to KMS. For more information, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes that I make are not always immediately visible</a> in the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p></li></ul><p>A key policy document can include only the following characters:</p><ul><li><p>Printable ASCII characters from the space character (<code>\u0020</code>) through the end of the ASCII character range.</p></li><li><p>Printable characters in the Basic Latin and Latin-1 Supplement character set (through <code>\u00FF</code>).</p></li><li><p>The tab (<code>\u0009</code>), line feed (<code>\u000A</code>), and carriage return (<code>\u000D</code>) special characters</p></li></ul><p>For information about key policies, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key policies in KMS</a> in the <i>Key Management Service Developer Guide</i>. For help writing and formatting a JSON policy document, see the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM JSON Policy Reference</a> in the <i><i>Identity and Access Management User Guide</i></i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policy;

/**
 <p>The Region ID of the Amazon Web Services Region for this replica key. </p><p>Enter the Region ID, such as <code>us-east-1</code> or <code>ap-southeast-2</code>. For a list of Amazon Web Services Regions in which KMS is supported, see <a href="https://docs.aws.amazon.com/general/latest/gr/kms.html#kms_region">KMS service endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p><note><p>HMAC KMS keys are not supported in all Amazon Web Services Regions. If you try to replicate an HMAC KMS key in an Amazon Web Services Region in which HMAC keys are not supported, the <code>ReplicateKey</code> operation returns an <code>UnsupportedOperationException</code>. For a list of Regions in which HMAC KMS keys are supported, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC keys in KMS</a> in the <i>Key Management Service Developer Guide</i>.</p></note><p>The replica must be in a different Amazon Web Services Region than its primary key and other replicas of that primary key, but in the same Amazon Web Services partition. KMS must be available in the replica Region. If the Region is not enabled by default, the Amazon Web Services account must be enabled in the Region. For information about Amazon Web Services partitions, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>. For information about enabling and disabling Regions, see <a href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Enabling a Region</a> and <a href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-disable">Disabling a Region</a> in the <i>Amazon Web Services General Reference</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable replicaRegion;

/**
 <p>Assigns one or more tags to the replica key. Use this parameter to tag the KMS key when it is created. To tag an existing KMS key, use the <a>TagResource</a> operation.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><note><p>Tagging or untagging a KMS key can allow or deny permission to the KMS key. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for KMS</a> in the <i>Key Management Service Developer Guide</i>.</p></note><p>To use this parameter, you must have <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a> permission in an IAM policy.</p><p>Tags are not a shared property of multi-Region keys. You can specify the same tags or different tags for each key in a set of related multi-Region keys. KMS does not synchronize this property.</p><p>Each tag consists of a tag key and a tag value. Both the tag key and the tag value are required, but the tag value can be an empty (null) string. You cannot have more than one tag on a KMS key with the same tag key. If you specify an existing tag key with a different tag value, KMS replaces the current tag value with the specified one.</p><p>When you add tags to an Amazon Web Services resource, Amazon Web Services generates a cost allocation report with usage and costs aggregated by tags. Tags can also be used to control access to a KMS key. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging Keys</a>.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSTag *> * _Nullable tags;

@end

/**
 
 */
@interface AWSKMSReplicateKeyResponse : AWSModel


/**
 <p>Displays details about the new replica key, including its Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key states of KMS keys</a>. It also includes the ARN and Amazon Web Services Region of its primary key and other replica keys.</p>
 */
@property (nonatomic, strong) AWSKMSKeyMetadata * _Nullable replicaKeyMetadata;

/**
 <p>The key policy of the new replica key. The value is a key policy document in JSON format.</p>
 */
@property (nonatomic, strong) NSString * _Nullable replicaPolicy;

/**
 <p>The tags on the new replica key. The value is a list of tag key and tag value pairs.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSTag *> * _Nullable replicaTags;

@end

/**
 
 */
@interface AWSKMSRetireGrantRequest : AWSRequest


/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Identifies the grant to retire. To get the grant ID, use <a>CreateGrant</a>, <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p><ul><li><p>Grant ID Example - 0123456789012345678901234567890123456789012345678901234567890123</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable grantId;

/**
 <p>Identifies the grant to be retired. You can use a grant token to identify a new grant even before it has achieved eventual consistency.</p><p>Only the <a>CreateGrant</a> operation returns a grant token. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#terms-eventual-consistency">Eventual consistency</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable grantToken;

/**
 <p>The key ARN KMS key associated with the grant. To find the key ARN, use the <a>ListKeys</a> operation.</p><p>For example: <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSRevokeGrantRequest : AWSRequest


/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Identifies the grant to revoke. To get the grant ID, use <a>CreateGrant</a>, <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable grantId;

/**
 <p>A unique identifier for the KMS key associated with the grant. To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p><p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSScheduleKeyDeletionRequest : AWSRequest


/**
 <p>The unique identifier of the KMS key to delete.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The waiting period, specified in number of days. After the waiting period ends, KMS deletes the KMS key.</p><p>If the KMS key is a multi-Region primary key with replica keys, the waiting period begins when the last of its replica keys is deleted. Otherwise, the waiting period begins immediately.</p><p>This value is optional. If you include a value, it must be between 7 and 30, inclusive. If you do not include a value, it defaults to 30. You can use the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/conditions-kms.html#conditions-kms-schedule-key-deletion-pending-window-in-days"><code>kms:ScheduleKeyDeletionPendingWindowInDays</code></a> condition key to further constrain the values that principals can specify in the <code>PendingWindowInDays</code> parameter.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable pendingWindowInDays;

@end

/**
 
 */
@interface AWSKMSScheduleKeyDeletionResponse : AWSModel


/**
 <p>The date and time after which KMS deletes the KMS key.</p><p>If the KMS key is a multi-Region primary key with replica keys, this field does not appear. The deletion date for the primary key isn't known until its last replica key is deleted.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable deletionDate;

/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the KMS key whose deletion is scheduled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The current status of the KMS key.</p><p>For more information about how key state affects the use of a KMS key, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">Key states of KMS keys</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, assign) AWSKMSKeyState keyState;

/**
 <p>The waiting period before the KMS key is deleted. </p><p>If the KMS key is a multi-Region primary key with replicas, the waiting period begins when the last of its replica keys is deleted. Otherwise, the waiting period begins immediately.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable pendingWindowInDays;

@end

/**
 
 */
@interface AWSKMSSignRequest : AWSRequest


/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Identifies an asymmetric KMS key. KMS uses the private key in the asymmetric KMS key to sign the message. The <code>KeyUsage</code> type of the KMS key must be <code>SIGN_VERIFY</code>. To find the <code>KeyUsage</code> of a KMS key, use the <a>DescribeKey</a> operation.</p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Specifies the message or message digest to sign. Messages can be 0-4096 bytes. To sign a larger message, provide a message digest.</p><p>If you provide a message digest, use the <code>DIGEST</code> value of <code>MessageType</code> to prevent the digest from being hashed again while signing.</p>
 */
@property (nonatomic, strong) NSData * _Nullable message;

/**
 <p>Tells KMS whether the value of the <code>Message</code> parameter should be hashed as part of the signing algorithm. Use <code>RAW</code> for unhashed messages; use <code>DIGEST</code> for message digests, which are already hashed.</p><p>When the value of <code>MessageType</code> is <code>RAW</code>, KMS uses the standard signing algorithm, which begins with a hash function. When the value is <code>DIGEST</code>, KMS skips the hashing step in the signing algorithm.</p><important><p>Use the <code>DIGEST</code> value only when the value of the <code>Message</code> parameter is a message digest. If you use the <code>DIGEST</code> value with an unhashed message, the security of the signing operation can be compromised.</p></important><p>When the value of <code>MessageType</code>is <code>DIGEST</code>, the length of the <code>Message</code> value must match the length of hashed messages for the specified signing algorithm.</p><p>You can submit a message digest and omit the <code>MessageType</code> or specify <code>RAW</code> so the digest is hashed again while signing. However, this can cause verification failures when verifying with a system that assumes a single hash.</p><p>The hashing algorithm in that <code>Sign</code> uses is based on the <code>SigningAlgorithm</code> value.</p><ul><li><p>Signing algorithms that end in SHA_256 use the SHA_256 hashing algorithm.</p></li><li><p>Signing algorithms that end in SHA_384 use the SHA_384 hashing algorithm.</p></li><li><p>Signing algorithms that end in SHA_512 use the SHA_512 hashing algorithm.</p></li><li><p>SM2DSA uses the SM3 hashing algorithm. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/asymmetric-key-specs.html#key-spec-sm-offline-verification">Offline verification with SM2 key pairs</a>.</p></li></ul>
 */
@property (nonatomic, assign) AWSKMSMessageType messageType;

/**
 <p>Specifies the signing algorithm to use when signing the message. </p><p>Choose an algorithm that is compatible with the type and size of the specified asymmetric KMS key. When signing with RSA key pairs, RSASSA-PSS algorithms are preferred. We include RSASSA-PKCS1-v1_5 algorithms for compatibility with existing applications.</p>
 */
@property (nonatomic, assign) AWSKMSSigningAlgorithmSpec signingAlgorithm;

@end

/**
 
 */
@interface AWSKMSSignResponse : AWSModel


/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the asymmetric KMS key that was used to sign the message.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The cryptographic signature that was generated for the message. </p><ul><li><p>When used with the supported RSA signing algorithms, the encoding of this value is defined by <a href="https://tools.ietf.org/html/rfc8017">PKCS #1 in RFC 8017</a>.</p></li><li><p>When used with the <code>ECDSA_SHA_256</code>, <code>ECDSA_SHA_384</code>, or <code>ECDSA_SHA_512</code> signing algorithms, this value is a DER-encoded object as defined by ANSI X9.62–2005 and <a href="https://tools.ietf.org/html/rfc3279#section-2.2.3">RFC 3279 Section 2.2.3</a>. This is the most commonly used signature format and is appropriate for most uses. </p></li></ul><p>When you use the HTTP API or the Amazon Web Services CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
 */
@property (nonatomic, strong) NSData * _Nullable signature;

/**
 <p>The signing algorithm that was used to sign the message.</p>
 */
@property (nonatomic, assign) AWSKMSSigningAlgorithmSpec signingAlgorithm;

@end

/**
 <p>A key-value pair. A tag consists of a tag key and a tag value. Tag keys and tag values are both required, but tag values can be empty (null) strings.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>For information about the rules that apply to tag keys and tag values, see <a href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined Tag Restrictions</a> in the <i>Amazon Web Services Billing and Cost Management User Guide</i>.</p>
 Required parameters: [TagKey, TagValue]
 */
@interface AWSKMSTag : AWSModel


/**
 <p>The key of the tag.</p>
 */
@property (nonatomic, strong) NSString * _Nullable tagKey;

/**
 <p>The value of the tag.</p>
 */
@property (nonatomic, strong) NSString * _Nullable tagValue;

@end

/**
 
 */
@interface AWSKMSTagResourceRequest : AWSRequest


/**
 <p>Identifies a customer managed key in the account and Region.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>One or more tags. Each tag consists of a tag key and a tag value. The tag value can be an empty (null) string. </p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>You cannot have more than one tag on a KMS key with the same tag key. If you specify an existing tag key with a different tag value, KMS replaces the current tag value with the specified one.</p>
 */
@property (nonatomic, strong) NSArray<AWSKMSTag *> * _Nullable tags;

@end

/**
 
 */
@interface AWSKMSUntagResourceRequest : AWSRequest


/**
 <p>Identifies the KMS key from which you are removing tags.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>One or more tag keys. Specify only the tag keys, not the tag values.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable tagKeys;

@end

/**
 
 */
@interface AWSKMSUpdateAliasRequest : AWSRequest


/**
 <p>Identifies the alias that is changing its KMS key. This value must begin with <code>alias/</code> followed by the alias name, such as <code>alias/ExampleAlias</code>. You cannot use <code>UpdateAlias</code> to change the alias name.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable aliasName;

/**
 <p>Identifies the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer managed key</a> to associate with the alias. You don't have permission to associate an alias with an <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon Web Services managed key</a>.</p><p>The KMS key must be in the same Amazon Web Services account and Region as the alias. Also, the new target KMS key must be the same type as the current target KMS key (both symmetric or both asymmetric or both HMAC) and they must have the same key usage. </p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p><p>To verify that the alias is mapped to the correct KMS key, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable targetKeyId;

@end

/**
 
 */
@interface AWSKMSUpdateCustomKeyStoreRequest : AWSRequest


/**
 <p>Associates the custom key store with a related CloudHSM cluster. This parameter is valid only for custom key stores with a <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p><p>Enter the cluster ID of the cluster that you used to create the custom key store or a cluster that shares a backup history and has the same cluster certificate as the original cluster. You cannot use this parameter to associate a custom key store with an unrelated cluster. In addition, the replacement cluster must <a href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">fulfill the requirements</a> for a cluster associated with a custom key store. To view the cluster certificate of a cluster, use the <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a> operation.</p><p>To change this value, the CloudHSM key store must be disconnected.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cloudHsmClusterId;

/**
 <p>Identifies the custom key store that you want to update. Enter the ID of the custom key store. To find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a> operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customKeyStoreId;

/**
 <p>Enter the current password of the <code>kmsuser</code> crypto user (CU) in the CloudHSM cluster that is associated with the custom key store. This parameter is valid only for custom key stores with a <code>CustomKeyStoreType</code> of <code>AWS_CLOUDHSM</code>.</p><p>This parameter tells KMS the current password of the <code>kmsuser</code> crypto user (CU). It does not set or change the password of any users in the CloudHSM cluster.</p><p>To change this value, the CloudHSM key store must be disconnected.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyStorePassword;

/**
 <p>Changes the friendly name of the custom key store to the value that you specify. The custom key store name must be unique in the Amazon Web Services account.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important><p>To change this value, an CloudHSM key store must be disconnected. An external key store can be connected or disconnected.</p>
 */
@property (nonatomic, strong) NSString * _Nullable latestCustomKeyStoreName;

/**
 <p>Changes the credentials that KMS uses to sign requests to the external key store proxy (XKS proxy). This parameter is valid only for custom key stores with a <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p><p>You must specify both the <code>AccessKeyId</code> and <code>SecretAccessKey</code> value in the authentication credential, even if you are only updating one value.</p><p>This parameter doesn't establish or change your authentication credentials on the proxy. It just tells KMS the credential that you established with your external key store proxy. For example, if you rotate the credential on your external key store proxy, you can use this parameter to update the credential in KMS.</p><p>You can change this value when the external key store is connected or disconnected.</p>
 */
@property (nonatomic, strong) AWSKMSXksProxyAuthenticationCredentialType * _Nullable xksProxyAuthenticationCredential;

/**
 <p>Changes the connectivity setting for the external key store. To indicate that the external key store proxy uses a Amazon VPC endpoint service to communicate with KMS, specify <code>VPC_ENDPOINT_SERVICE</code>. Otherwise, specify <code>PUBLIC_ENDPOINT</code>.</p><p>If you change the <code>XksProxyConnectivity</code> to <code>VPC_ENDPOINT_SERVICE</code>, you must also change the <code>XksProxyUriEndpoint</code> and add an <code>XksProxyVpcEndpointServiceName</code> value. </p><p>If you change the <code>XksProxyConnectivity</code> to <code>PUBLIC_ENDPOINT</code>, you must also change the <code>XksProxyUriEndpoint</code> and specify a null or empty string for the <code>XksProxyVpcEndpointServiceName</code> value.</p><p>To change this value, the external key store must be disconnected.</p>
 */
@property (nonatomic, assign) AWSKMSXksProxyConnectivityType xksProxyConnectivity;

/**
 <p>Changes the URI endpoint that KMS uses to connect to your external key store proxy (XKS proxy). This parameter is valid only for custom key stores with a <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p><p>For external key stores with an <code>XksProxyConnectivity</code> value of <code>PUBLIC_ENDPOINT</code>, the protocol must be HTTPS.</p><p>For external key stores with an <code>XksProxyConnectivity</code> value of <code>VPC_ENDPOINT_SERVICE</code>, specify <code>https://</code> followed by the private DNS name associated with the VPC endpoint service. Each external key store must use a different private DNS name.</p><p>The combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services account and Region.</p><p>To change this value, the external key store must be disconnected.</p>
 */
@property (nonatomic, strong) NSString * _Nullable xksProxyUriEndpoint;

/**
 <p>Changes the base path to the proxy APIs for this external key store. To find this value, see the documentation for your external key manager and external key store proxy (XKS proxy). This parameter is valid only for custom key stores with a <code>CustomKeyStoreType</code> of <code>EXTERNAL_KEY_STORE</code>.</p><p>The value must start with <code>/</code> and must end with <code>/kms/xks/v1</code>, where <code>v1</code> represents the version of the KMS external key store proxy API. You can include an optional prefix between the required elements such as <code>/<i>example</i>/kms/xks/v1</code>.</p><p>The combined <code>XksProxyUriEndpoint</code> and <code>XksProxyUriPath</code> values must be unique in the Amazon Web Services account and Region.</p><p>You can change this value when the external key store is connected or disconnected.</p>
 */
@property (nonatomic, strong) NSString * _Nullable xksProxyUriPath;

/**
 <p>Changes the name that KMS uses to identify the Amazon VPC endpoint service for your external key store proxy (XKS proxy). This parameter is valid when the <code>CustomKeyStoreType</code> is <code>EXTERNAL_KEY_STORE</code> and the <code>XksProxyConnectivity</code> is <code>VPC_ENDPOINT_SERVICE</code>.</p><p>To change this value, the external key store must be disconnected.</p>
 */
@property (nonatomic, strong) NSString * _Nullable xksProxyVpcEndpointServiceName;

@end

/**
 
 */
@interface AWSKMSUpdateCustomKeyStoreResponse : AWSModel


@end

/**
 
 */
@interface AWSKMSUpdateKeyDescriptionRequest : AWSRequest


/**
 <p>New description for the KMS key.</p><important><p>Do not include confidential or sensitive information in this field. This field may be displayed in plaintext in CloudTrail logs and other output.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Updates the description of the specified KMS key.</p><p>Specify the key ID or key ARN of the KMS key.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

@end

/**
 
 */
@interface AWSKMSUpdatePrimaryRegionRequest : AWSRequest


/**
 <p>Identifies the current primary key. When the operation completes, this KMS key will be a replica key.</p><p>Specify the key ID or key ARN of a multi-Region primary key.</p><p>For example:</p><ul><li><p>Key ID: <code>mrk-1234abcd12ab34cd56ef1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The Amazon Web Services Region of the new primary key. Enter the Region ID, such as <code>us-east-1</code> or <code>ap-southeast-2</code>. There must be an existing replica key in this Region. </p><p>When the operation completes, the multi-Region key in this Region will be the primary key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable primaryRegion;

@end

/**
 
 */
@interface AWSKMSVerifyMacRequest : AWSRequest


/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>The KMS key that will be used in the verification.</p><p>Enter a key ID of the KMS key that was used to generate the HMAC. If you identify a different KMS key, the <code>VerifyMac</code> operation fails.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The HMAC to verify. Enter the HMAC that was generated by the <a>GenerateMac</a> operation when you specified the same message, HMAC KMS key, and MAC algorithm as the values specified in this request.</p>
 */
@property (nonatomic, strong) NSData * _Nullable mac;

/**
 <p>The MAC algorithm that will be used in the verification. Enter the same MAC algorithm that was used to compute the HMAC. This algorithm must be supported by the HMAC KMS key identified by the <code>KeyId</code> parameter.</p>
 */
@property (nonatomic, assign) AWSKMSMacAlgorithmSpec macAlgorithm;

/**
 <p>The message that will be used in the verification. Enter the same message that was used to generate the HMAC.</p><p><a>GenerateMac</a> and <code>VerifyMac</code> do not provide special handling for message digests. If you generated an HMAC for a hash digest of a message, you must verify the HMAC for the same hash digest.</p>
 */
@property (nonatomic, strong) NSData * _Nullable message;

@end

/**
 
 */
@interface AWSKMSVerifyMacResponse : AWSModel


/**
 <p>The HMAC KMS key used in the verification.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>The MAC algorithm used in the verification.</p>
 */
@property (nonatomic, assign) AWSKMSMacAlgorithmSpec macAlgorithm;

/**
 <p>A Boolean value that indicates whether the HMAC was verified. A value of <code>True</code> indicates that the HMAC (<code>Mac</code>) was generated with the specified <code>Message</code>, HMAC KMS key (<code>KeyID</code>) and <code>MacAlgorithm.</code>.</p><p>If the HMAC is not verified, the <code>VerifyMac</code> operation fails with a <code>KMSInvalidMacException</code> exception. This exception indicates that one or more of the inputs changed since the HMAC was computed.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable macValid;

@end

/**
 
 */
@interface AWSKMSVerifyRequest : AWSRequest


/**
 <p>Checks if your request will succeed. <code>DryRun</code> is an optional parameter. </p><p>To learn more about how to use this parameter, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-dryrun.html">Testing your KMS API calls</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>A list of grant tokens.</p><p>Use a grant token when your permission to call this operation comes from a new grant that has not yet achieved <i>eventual consistency</i>. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant token</a> and <a href="https://docs.aws.amazon.com/kms/latest/developerguide/grant-manage.html#using-grant-token">Using a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable grantTokens;

/**
 <p>Identifies the asymmetric KMS key that will be used to verify the signature. This must be the same KMS key that was used to generate the signature. If you specify a different KMS key, the signature verification fails.</p><p>To specify a KMS key, use its key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services account, you must use the key ARN or alias ARN.</p><p>For example:</p><ul><li><p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Key ARN: <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code></p></li><li><p>Alias name: <code>alias/ExampleAlias</code></p></li><li><p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code></p></li></ul><p>To get the key ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use <a>ListAliases</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>Specifies the message that was signed. You can submit a raw message of up to 4096 bytes, or a hash digest of the message. If you submit a digest, use the <code>MessageType</code> parameter with a value of <code>DIGEST</code>.</p><p>If the message specified here is different from the message that was signed, the signature verification fails. A message and its hash digest are considered to be the same message.</p>
 */
@property (nonatomic, strong) NSData * _Nullable message;

/**
 <p>Tells KMS whether the value of the <code>Message</code> parameter should be hashed as part of the signing algorithm. Use <code>RAW</code> for unhashed messages; use <code>DIGEST</code> for message digests, which are already hashed.</p><p>When the value of <code>MessageType</code> is <code>RAW</code>, KMS uses the standard signing algorithm, which begins with a hash function. When the value is <code>DIGEST</code>, KMS skips the hashing step in the signing algorithm.</p><important><p>Use the <code>DIGEST</code> value only when the value of the <code>Message</code> parameter is a message digest. If you use the <code>DIGEST</code> value with an unhashed message, the security of the verification operation can be compromised.</p></important><p>When the value of <code>MessageType</code>is <code>DIGEST</code>, the length of the <code>Message</code> value must match the length of hashed messages for the specified signing algorithm.</p><p>You can submit a message digest and omit the <code>MessageType</code> or specify <code>RAW</code> so the digest is hashed again while signing. However, if the signed message is hashed once while signing, but twice while verifying, verification fails, even when the message hasn't changed.</p><p>The hashing algorithm in that <code>Verify</code> uses is based on the <code>SigningAlgorithm</code> value.</p><ul><li><p>Signing algorithms that end in SHA_256 use the SHA_256 hashing algorithm.</p></li><li><p>Signing algorithms that end in SHA_384 use the SHA_384 hashing algorithm.</p></li><li><p>Signing algorithms that end in SHA_512 use the SHA_512 hashing algorithm.</p></li><li><p>SM2DSA uses the SM3 hashing algorithm. For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/asymmetric-key-specs.html#key-spec-sm-offline-verification">Offline verification with SM2 key pairs</a>.</p></li></ul>
 */
@property (nonatomic, assign) AWSKMSMessageType messageType;

/**
 <p>The signature that the <code>Sign</code> operation generated.</p>
 */
@property (nonatomic, strong) NSData * _Nullable signature;

/**
 <p>The signing algorithm that was used to sign the message. If you submit a different algorithm, the signature verification fails.</p>
 */
@property (nonatomic, assign) AWSKMSSigningAlgorithmSpec signingAlgorithm;

@end

/**
 
 */
@interface AWSKMSVerifyResponse : AWSModel


/**
 <p>The Amazon Resource Name (<a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key ARN</a>) of the asymmetric KMS key that was used to verify the signature.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyId;

/**
 <p>A Boolean value that indicates whether the signature was verified. A value of <code>True</code> indicates that the <code>Signature</code> was produced by signing the <code>Message</code> with the specified <code>KeyID</code> and <code>SigningAlgorithm.</code> If the signature is not verified, the <code>Verify</code> operation fails with a <code>KMSInvalidSignatureException</code> exception. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable signatureValid;

/**
 <p>The signing algorithm that was used to verify the signature.</p>
 */
@property (nonatomic, assign) AWSKMSSigningAlgorithmSpec signingAlgorithm;

@end

/**
 <p>Information about the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">external key </a>that is associated with a KMS key in an external key store. </p><p>This element appears in a <a>CreateKey</a> or <a>DescribeKey</a> response only for a KMS key in an external key store.</p><p>The <i>external key</i> is a symmetric encryption key that is hosted by an external key manager outside of Amazon Web Services. When you use the KMS key in an external key store in a cryptographic operation, the cryptographic operation is performed in the external key manager using the specified external key. For more information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">External key</a> in the <i>Key Management Service Developer Guide</i>.</p>
 */
@interface AWSKMSXksKeyConfigurationType : AWSModel


/**
 <p>The ID of the external key in its external key manager. This is the ID that the external key store proxy uses to identify the external key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identifier;

@end

/**
 <p>KMS uses the authentication credential to sign requests that it sends to the external key store proxy (XKS proxy) on your behalf. You establish these credentials on your external key store proxy and report them to KMS.</p><p>The <code>XksProxyAuthenticationCredential</code> includes two required elements.</p>
 Required parameters: [AccessKeyId, RawSecretAccessKey]
 */
@interface AWSKMSXksProxyAuthenticationCredentialType : AWSModel


/**
 <p>A unique identifier for the raw secret access key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable accessKeyId;

/**
 <p>A secret string of 43-64 characters. Valid characters are a-z, A-Z, 0-9, /, +, and =.</p>
 */
@property (nonatomic, strong) NSString * _Nullable rawSecretAccessKey;

@end

/**
 <p>Detailed information about the external key store proxy (XKS proxy). Your external key store proxy translates KMS requests into a format that your external key manager can understand. These fields appear in a <a>DescribeCustomKeyStores</a> response only when the <code>CustomKeyStoreType</code> is <code>EXTERNAL_KEY_STORE</code>.</p>
 */
@interface AWSKMSXksProxyConfigurationType : AWSModel


/**
 <p>The part of the external key store <a href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateCustomKeyStore.html#KMS-CreateCustomKeyStore-request-XksProxyAuthenticationCredential">proxy authentication credential</a> that uniquely identifies the secret access key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable accessKeyId;

/**
 <p>Indicates whether the external key store proxy uses a public endpoint or an Amazon VPC endpoint service to communicate with KMS.</p>
 */
@property (nonatomic, assign) AWSKMSXksProxyConnectivityType connectivity;

/**
 <p>The URI endpoint for the external key store proxy.</p><p>If the external key store proxy has a public endpoint, it is displayed here.</p><p>If the external key store proxy uses an Amazon VPC endpoint service name, this field displays the private DNS name associated with the VPC endpoint service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable uriEndpoint;

/**
 <p>The path to the external key store proxy APIs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable uriPath;

/**
 <p>The Amazon VPC endpoint service used to communicate with the external key store proxy. This field appears only when the external key store proxy uses an Amazon VPC endpoint service to communicate with KMS.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcEndpointServiceName;

@end

NS_ASSUME_NONNULL_END
