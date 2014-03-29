//
//  ToDoItem.h
//  ToDoList
//
//  Created by Josh Lieberman on 3/29/14.
//
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
