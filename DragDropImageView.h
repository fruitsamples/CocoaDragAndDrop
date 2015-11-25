/*
	File:		DragDropImageView.h

	Contains:	A sample to demonstrate Drag and Drop with Images in Cocoa

	Written by: 	KG

	Copyright:	Copyright � 2002 by Apple Computer, Inc., All Rights Reserved.

			You may incorporate this Apple sample source code into your program(s) without
			restriction. This Apple sample source code has been provided "AS IS" and the
			responsibility for its operation is yours. You are not permitted to redistribute
			this Apple sample source code as "Apple sample source code" after having made
			changes. If you're going to re-distribute the source, we require that you make
			it clear in the source that the code was descended from Apple sample source
			code, but that you've made changes.

	Change History (most recent first):
                        01/2002		initial version
*/
#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

@interface DragDropImageView : NSImageView
{
    BOOL highlight;//highlight the drop zone
}
- (id)initWithCoder:(NSCoder *)coder;
@end
