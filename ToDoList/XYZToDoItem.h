//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by xiaozhu on 10/11/13.
//  Copyright (c) 2013 xiaozhu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName; 
@property BOOL completed;   //这个property貌似很好用
@property (readonly) NSDate *creationDate;

@end
