//
//  RUPerformOperationToCompletionManager.h
//  Resplendent
//
//  Created by Benjamin Maer on 12/13/14.
//  Copyright (c) 2014 Resplendent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RPOTCMPerformOperationToCompletionManagerProtocols.h"





/*
 Operations will be dispatched to main thread and executed when added. If on completion they are not successful, they will be retried if reachability is present, otherwise when reachability is regained.
 */
@interface RPOTCMPerformOperationToCompletionManager : NSObject

-(void)addOperationToBePerformedToCompletion:(id<RPOTCMPerformOperationToCompletionManagerOperation>)operation;

+(instancetype)sharedInstance;

@end
