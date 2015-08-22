#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (strong, nonatomic) NSStatusItem* statusItem;

- (void)setActiveConversationAtIndex:(NSString*)index;

@end

