//
//  SubjectViewController.h
//  ios-galaxyzoo
//
//  Created by Murray Cumming on 13/05/2015.
//  Copyright (c) 2015 Murray Cumming. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "../ZooniverseModel/ZooniverseSubject.h"

@interface SubjectViewController : UIViewController

@property (nonatomic, strong) ZooniverseSubject *subject;
@property (nonatomic) BOOL inverted;


- (BOOL) setSubjectWithCheck:(ZooniverseSubject *)subject
                 forInverted:(BOOL)inverted;

@end
