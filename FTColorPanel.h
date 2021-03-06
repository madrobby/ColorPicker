#import <Cocoa/Cocoa.h>
#import "NSColorAdditions.h"

#define HEX_COLOR_MODE 0
#define HEX_WITHOUT_HASH_COLOR_MODE 1
#define RGB_COLOR_MODE 2
#define RGBA_COLOR_MODE 3
#define HSL_COLOR_MODE 4
#define HSLA_COLOR_MODE 5
#define OBJC_NSCOLOR_COLOR_MODE 6
#define MACRUBY_NSCOLOR_COLOR_MODE 7
#define OBJC_UICOLOR_COLOR_MODE 8
#define MOTION_UICOLOR_COLOR_MODE 9

@interface FTColorPanel : NSColorPanel {
  NSTextField *colorCodeField;
  int _colorMode;
}

-(FTColorPanel *)init NS_DESIGNATED_INITIALIZER;

@property (NS_NONATOMIC_IOSONLY) int colorMode;

-(NSString *)representationStringOfCurrentColorMode:(BOOL)shortVersion;
-(NSString *)representationStringOfColorInMode:(int)colorMode shortVersion:(BOOL)shortVersion;
-(void)updateStringRepresentationOfColor;
@end
