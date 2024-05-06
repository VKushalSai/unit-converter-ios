#import <UIKit/UIKit.h>

@interface UnitConverterViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *tempText;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (nonatomic, weak) IBOutlet UITextField *milesText;
@property (nonatomic, weak) IBOutlet UILabel *distanceResultLabel;
- (IBAction)convertTemp:(id)sender;
- (IBAction)convertDistance:(id)sender;


@end
