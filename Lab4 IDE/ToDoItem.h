//
//  ToDoItem.h
//  Lab4 IDE
//
//  Created by Dan on 28.05.15.
//  Copyright (c) 2015 Dan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
