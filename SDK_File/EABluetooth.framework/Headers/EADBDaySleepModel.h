//
//  EADBDaySleepModel.h
//  EABluetooth
//
//  Created by Aye on 2023/2/17.
//

#import "EADBBaseModel.h"
#import "EADBOneSleepModel.h"

NS_ASSUME_NONNULL_BEGIN



RLM_COLLECTION_TYPE(EADBOneSleepModel)



@interface EADBDaySleepModel : EADBBaseModel

@property RLMArray<EADBOneSleepModel *><EADBOneSleepModel> *array;


@end

NS_ASSUME_NONNULL_END
