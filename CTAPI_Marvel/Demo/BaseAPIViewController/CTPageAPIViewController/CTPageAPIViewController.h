//
//  BLQueryBrandActivityListAPIViewController.h
//  BLAPIManagers
//
//  Created by 潘灵 on 16/12/7.
//  Copyright © 2016年 casa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BLNetworking/CTAPIBaseManager.h>

@interface BLPageAPIViewController : UIViewController

@property (nonatomic, strong) CTAPIBaseManager <CTPagableAPIManager> *apiManager;

@end
