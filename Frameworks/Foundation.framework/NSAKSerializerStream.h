/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSAKSerializerStream : NSObject <NSSerializerStream>
{
    void *memory;
    NSUInteger current;
    NSUInteger max;
    struct __CFDictionary { } *roomForIntLocations;
}


- (NSUInteger)writeInt:(NSUInteger)arg1;
- (NSUInteger)writeAlignedDataSize:(NSUInteger)arg1;
- (NSUInteger)writeData:(const void*)arg1 length:(NSUInteger)arg2;
- (NSUInteger)writeRoomForInt:(NSInteger*)arg1;
- (void)writeDelayedInt:(NSUInteger)arg1 for:(NSInteger)arg2;
- (BOOL)writeToPath:(id)arg1 safely:(BOOL)arg2;
- (void)copySerializationInto:(void*)arg1;
- (void)finalize;
- (void)dealloc;

@end