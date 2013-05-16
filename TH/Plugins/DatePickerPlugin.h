//	Phonegap DatePicker Plugin
//	Copyright (c) Greg Allen 2011
//	MIT Licensed

#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>

#ifndef k_DATEPICKER_DATETIME_FORMAT
#define k_DATEPICKER_DATETIME_FORMAT @"yyyy-MM-dd'T'HH:mm:ss'Z'"
#endif

@interface DatePickerPlugin : CDVPlugin <UIActionSheetDelegate> {
	UIActionSheet *_datePickerSheet;
	UIDatePicker *_datePicker;
	NSDateFormatter *_isoDateFormatter;
	BOOL isVisible;

}

@property (nonatomic, retain) UIActionSheet* datePickerSheet;
@property (nonatomic, retain) UIDatePicker* datePicker;
@property (nonatomic, retain) NSDateFormatter* isoDateFormatter;


//- (void) prepare:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) show:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

@end
