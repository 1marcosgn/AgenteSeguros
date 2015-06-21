//
//  AppDelegate.h
//  AgenteSeguros
//
//  Created by Marcos Garcia on 6/17/15.
//
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <HKSlideMenu3DController.h>
#import "RotationNavigationController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property(strong, nonatomic) HKSlideMenu3DController *slideMenuVC;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

+ (AppDelegate *)mainDelegate;
-(void)setFirstView;
-(void)setSecondView;

@end

