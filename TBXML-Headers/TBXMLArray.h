//
//  TBXMLArray.h
//
//  Created by Jaden Geller on 8/30/13.
//  Copyright (c) 2013 Jaden Geller. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TBXML.h"

@interface TBXMLArray : NSObject

/** Returns an initialized instance of TBXMLArray with the given parameters.
 
 @return An int value referring to the count of the TBXMLArray as given by the TBXML document structure
 
 @see https://github.com/JadenGeller/TBXMLArray for more information.
 
 */
@property (nonatomic, readonly) int count;

/** Initializes an instance of TBXMLArray with the given parameters.
 
 @param document The TBXMLElement at the head of the XML document.
 @param parentElement The element whose children will behave as an array.
 @param childName The name referring to the child elements to be included in the array.
 
 @return An instance of TBXMLArray
 
 @see https://github.com/JadenGeller/TBXMLArray for more information.
 
 */
-(id)initWithDocument:(TBXML*)document parentElement:(TBXMLElement*)aParentXMLElement childName:(NSString*)childName;

/** Returns an initialized instance of TBXMLArray with the given parameters.
 
 @param document The TBXMLElement at the head of the XML document.
 @param parentElement The element whose children will behave as an array.
 @param childName The name referring to the child elements to be included in the array.
 
 @return An instance of TBXMLArray
 
 @see https://github.com/JadenGeller/TBXMLArray for more information.
 
 */
+(TBXMLArray*)XMLArrayWithDocument:(TBXML*)document parentElement:(TBXMLElement*)aParentXMLElement childName:(NSString*)childName;

/** Sets the TBXMLArray array to the given parameters.
 
 @param document The TBXMLElement at the head of the XML document.
 @param parentElement The element whose children will behave as an array.
 @param childName The name referring to the child elements to be included in the array.
 
 @see https://github.com/JadenGeller/TBXMLArray for more information.
 
 */
-(void)setDocument:(TBXML*)document parentElement:(TBXMLElement*)aParentXMLElement childName:(NSString*)childName;

/** Returns the object located at the specified index in the TBXML structure.
 
 @param index An index within the bounds of the TBXMLArray (as indicated by the count property)
 
 @see https://github.com/JadenGeller/TBXMLArray for more information.
 
 @return A pointer to a TBXMLElement
 
 */
-(TBXMLElement*)childElementAtIndex:(int)index;

@end
