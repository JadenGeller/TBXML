//
//  TBXMLArray.m
//
//  Created by Jaden Geller on 8/30/13.
//  Copyright (c) 2013 Jaden Geller. All rights reserved.
//

#import "TBXMLArray.h"

@interface TBXMLArray()

@property (nonatomic) TBXMLElement *currentChild;
@property (nonatomic) NSString *childName;
@property (nonatomic) int currentIndex;
@property (nonatomic) TBXML *document;//needwd or we lose our parent

@end

@implementation TBXMLArray

-(id)initWithDocument:(TBXML*)document parentElement:(TBXMLElement*)aParentXMLElement childName:(NSString*)childName{
    if (self = [super init]) {
        [self setDocument:document parentElement:aParentXMLElement childName:childName];
    }
    return self;
}

+(TBXMLArray*)XMLArrayWithDocument:(TBXML*)document parentElement:(TBXMLElement*)aParentXMLElement childName:(NSString*)childName{
    return [[TBXMLArray alloc]initWithDocument:document parentElement:aParentXMLElement childName:childName];
}

-(void)setDocument:(TBXML*)document parentElement:(TBXMLElement*)aParentXMLElement childName:(NSString*)childName{
    _document = document;
    _childName = childName;
    _currentChild = [TBXML childElementNamed:childName parentElement:aParentXMLElement];
    _currentIndex = 0;
    _count = [TBXML numberOfChildrenNamed:childName parentElement:aParentXMLElement];
}

-(TBXMLElement*)childElementAtIndex:(int)index{
    if (index >= 0 && index < self.count) {
        while (index > self.currentIndex) {
            self.currentIndex++;
            self.currentChild = [TBXML nextSiblingNamed:self.childName searchFromElement:self.currentChild];
        }
        while (index < self.currentIndex) {
            self.currentIndex--;
            self.currentChild = [TBXML previousSiblingNamed:self.childName searchFromElement:self.currentChild];
        }
        return self.currentChild;
    }
    else{
        [NSException raise:@"JGRangeException" format:@"index %i not within bounds of JGXMLArray", index];
        return nil;
    }
}

@end
