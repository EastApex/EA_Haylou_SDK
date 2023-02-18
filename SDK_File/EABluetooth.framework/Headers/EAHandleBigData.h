//
//  EAHandleBigData.h
//  EABluetooth
//
//  Created by Aye on 2023/2/6.
//

#import <Foundation/Foundation.h>




NS_ASSUME_NONNULL_BEGIN

@interface EAHandleBigData : NSObject

/// 手表标志【SN号或者Mac地址】(app与手表没有解绑，都需要设置这个值，用于增删查改)
/// 获取 Class EAWatchModel 对象后，缓存 watchSign = .notSupportSn ? .bleMacAddr : .id_p;
@property(nonatomic,strong) NSString *watchSign;



/// 单例
+ (instancetype)defaultHandle;







/// SDK处理大数据（客户端不需要调用）
- (void)sdkHandleBigData;
@end

NS_ASSUME_NONNULL_END
