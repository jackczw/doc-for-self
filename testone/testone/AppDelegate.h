//
//  AppDelegate.h
//  testone
//
//  Created by chengzhiwei on 2017/3/1.
//  Copyright © 2017年 chengzhiwei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

