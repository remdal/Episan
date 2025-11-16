/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                        +       +          */
/*      File: RMDLGameApplication.h            +++     +++  **/
/*                                        +       +          */
/*      By: Laboitederemdal      **        +       +        **/
/*                                       +           +       */
/*      Created: 27/10/2025 15:33:46      + + + + + +   * ****/
/*                                                           */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#import <Cocoa/Cocoa.h>
#import <MetalKit/MetalKit.h>

@interface RMDLGameApplication : NSObject <NSApplicationDelegate, NSWindowDelegate, MTKViewDelegate>

@property (nonatomic, strong, readonly) MTKView *mtkView;

- (void)setBrightness:(id)sender;
- (void)setEDRBias:(id)sender;

- (void)applicationDidFinishLaunching:(NSNotification *)notification;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)sender;

- (void)keyDown:(NSEvent *)event;
- (void)keyUp:(NSEvent *)event;
- (void)mouseDown:(NSEvent *)event;
- (void)mouseUp:(NSEvent *)event;
- (void)mouseDragged:(NSEvent *)event;
- (void)rightMouseDown:(NSEvent *)event;
- (void)rightMouseUp:(NSEvent *)event;
- (void)otherMouseDown:(NSEvent *)event;
- (void)otherMouseUp:(NSEvent *)event;
- (void)scrollWheel:(NSEvent *)event;
- (void)updateTrackingAreas;

- (void)mtkView:(MTKView *)view drawableSizeWillChange:(CGSize)size;
- (void)drawInMTKView:(MTKView *)view;

- (void)moveCameraX:(float)x Y:(float)y Z:(float)z;

- (void)rotateCameraYaw:(float)yaw Pitch:(float)pitch;

@end
