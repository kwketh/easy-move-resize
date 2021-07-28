#import <Cocoa/Cocoa.h>

@interface EMRAppDelegate : NSObject <NSApplicationDelegate> {
    IBOutlet NSMenu *statusMenu;
    NSStatusItem * statusItem;
    int keyModifierFlags;
    double moveFilterInterval;
    double resizeFilterInterval;
}

- (int)modifierFlags;

- (void)initMenuItems;
- (IBAction)modifierToggle:(id)sender;
- (IBAction)resetToDefaults:(id)sender;
- (IBAction)toggleDisabled:(id)sender;
- (IBAction)toggleBringWindowToFront:(id)sender;

@property (weak) IBOutlet NSMenuItem *altMenu;
@property (weak) IBOutlet NSMenuItem *cmdMenu;
@property (weak) IBOutlet NSMenuItem *ctrlMenu;
@property (weak) IBOutlet NSMenuItem *shiftMenu;
@property (weak) IBOutlet NSMenuItem *disabledMenu;
@property (weak) IBOutlet NSMenuItem *bringWindowFrontMenu;
@property (weak) IBOutlet NSMenuItem *middleClickResizeMenu;
@property (nonatomic) BOOL sessionActive;

@end
