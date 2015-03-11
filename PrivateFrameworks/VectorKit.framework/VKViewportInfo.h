/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSDictionary;

@interface VKViewportInfo : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    } _centerCoordinate;
    double _pitch;
    int _tileSize;
    double _yaw;
    float _zoomLevel;
}

@property struct { double x1; double x2; } centerCoordinate;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property double pitch;
@property int tileSize;
@property double yaw;
@property float zoomLevel;

- (id).cxx_construct;
- (struct { double x1; double x2; })centerCoordinate;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (double)pitch;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPitch:(double)arg1;
- (void)setTileSize:(int)arg1;
- (void)setYaw:(double)arg1;
- (void)setZoomLevel:(float)arg1;
- (int)tileSize;
- (double)yaw;
- (float)zoomLevel;

@end