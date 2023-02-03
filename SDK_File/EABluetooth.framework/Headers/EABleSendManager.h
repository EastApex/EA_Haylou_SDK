//
//  EABleSendManager.h
//  EABluetooth
//
//  Created by Aye on 2021/3/26.
//

#import <Foundation/Foundation.h>
#import <EABluetooth/EAModelHeader.h>
#import <EABluetooth/EABleManager.h>
#import <EABluetooth/EAEnum.h>
#import <EABluetooth/EABleConfig.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN


typedef void(^ResultGetInfoBlock)(EABaseModel *baseModel);
typedef void(^RespondBlock)(EARespondModel *respondModel);


@interface EABleSendManager : NSObject


/// The singleton 单例
+ (instancetype)defaultManager;

/// Get data 获取数据
- (void)operationGetInfoWithType:(EADataInfoType)dataInfoType result:(ResultGetInfoBlock )result;
/// Get data from class ’EARequestModel‘ 获取数据
- (void)operationGetInfoWithRequestModel:(EARequestModel *)requestModel result:(ResultGetInfoBlock )result;
/// Set data 修改数据
- (void)operationChangeModel:(EABaseModel *)changeModel respond:(RespondBlock )respond;

///备注：2个获取大数据方法不能同时使用。需要等待手表发送完成大数据消息才会有数据【监听通知 kNTF_EAGetDeviceOpsPhoneMessage】,然后调用 getBigDataWithBigDataType: 获取相关大数据详细内容
///Note: The two methods of obtaining big data cannot be used at the same time.Data will not be available until the watch sends the big data message[Listening notification kNTF_EAGetDeviceOpsPhoneMessage],Then call getBigDataWithBigDataType: access to relevant data details

/// Get big data 获取所有大数据
- (void)operationgGetBigData:(EAGetBigDataRequestModel *)model respond:(RespondBlock )respond;
/// only get one big data 单独获取大数据
- (void)operationgOnlyGetBigData:(EADataInfoType )bigDataType respond:(RespondBlock )respond;

/// Get big data by bigDataType 【Data will not be available until the watch sends the big data message：EAPhoneOpsBig8803DataUpdateFinish】
/// 获取大数据【需要等待手表发送完成大数据消息才会有数据：EAPhoneOpsBig8803DataUpdateFinish】
- (NSArray *)getBigDataWithBigDataType:(EADataInfoType)bigDataType;


/// 获取睡眠大数据
/// - Parameter mergeTime: 当天睡眠合并间隔时长，单位分钟【昨天的18点至今天的18点，为今天睡眠】
- (NSDictionary *)getSleepBigDataWithMergeTime:(NSInteger)mergeTime;


/// Retrieve audio data [Call this method to retrieve audio data only when notification 'recording completed' is received]
/// 获取音频数据【通知收到 ‘录音完成’ 才能调用此方法获取录音数据】
- (NSData *)getAudioDataData;


/// upgrade [OTA]
- (BOOL)upgradeFiles:(NSArray<EAFileModel *> *)list;
/// Watch face [OTA]
- (BOOL)upgradeWatchFaceFile:(EAFileModel *)watchFaceFile;
/// AGPS OTA
- (BOOL)upgrade:(EAOTA *)ota;

/// Customize the background watch face
/// 自定义背景图片的表盘
- (NSInteger )customWatchFaceBackgroundImage:(UIImage *)backGroundImage colorType:(EACWFTimerColorType )colorType styleType:(EACWFStyleType)styleType;


/// Customize the background watch face 【自定义背景图片的表盘】
/// - Parameters:
///   - backgroundImage: background image【背景图片】
///   - numberList: Array of time numeric models【时间数字模型数组，必须含有时高位、时低位、分高位、分低位】
- (NSInteger )customNumberWatchFaceBackgroundImage:(UIImage *)backGroundImage list:(NSArray <EACustomNumberWatchFaceModel *>*)numberList;





/** * You are not advised to use */
/** Need to operate in a single thread: make sure that the call does not respond until the last operation is complete. Try to use the queue operation method above */
/** 以下不建议使用 */
/** 需要在单线程操作:确保上次操作完成后，调用才会响应，尽量使用上面队列操作方法 */

/// Get data 获取数据【单线程操作】
- (void)getInfoByInfoType:(EADataInfoType)dataInfoType result:(ResultGetInfoBlock )result;
/// Get data 获取数据【单线程操作】
- (void)getInfoByRequestModel:(EARequestModel *)requestModel result:(ResultGetInfoBlock )result;
/// Set data 修改数据【单线程操作】
- (void)changeInfo:(EABaseModel *)baseModel respond:(RespondBlock )respond;
/// Get big data 获取大数据【单线程操作】
- (void)getBigDataRequestModel:(EAGetBigDataRequestModel *)model respond:(RespondBlock )respond;;



/// ignore：
- (void)setNilBlock;
- (void)setchannelDataNil;
- (void)setBleQueueNil;
- (void)setIsConnected:(BOOL)isConnected;
@end

NS_ASSUME_NONNULL_END
