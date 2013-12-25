//
//  TBXMLArray.h
//
//  Created by Jaden Geller on 8/30/13.
//  Copyright (c) 2013 Jaden Geller. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TBXML.h"

@interface TBXMLArray : NSObject

@property (nonatomic, readonly) int count;

-(id)initWithDocument:(TBXML*)document parentElement:(TBXMLElement*)aParentXMLElement childName:(NSString*)childName;
+(TBXMLArray*)XMLArrayWithDocument:(TBXML*)document parentElement:(TBXMLElement*)aParentXMLElement childName:(NSString*)childName;
-(void)setDocument:(TBXML*)document parentElement:(TBXMLElement*)aParentXMLElement childName:(NSString*)childName;
-(TBXMLElement*)childElementAtIndex:(int)index;

@end
