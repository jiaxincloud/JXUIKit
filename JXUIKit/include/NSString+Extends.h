//
//  NSString+Extends.h
//

#import <UIKit/UIKit.h>

@interface NSString (Extends)

+ (BOOL)isBlankString:(NSString *)string;

- (NSString *)stringByReplacingPatternInString:(NSString *)patten
                                  withTemplate:(NSString *)replaced;

- (NSString *)stringByReplaceHTMLTag:(NSString *)tag withString:(NSString *)replaced;

+ (NSString *)convertFaceCodeToEmojiFace:(NSString *)origalstr;

+ (NSString *)timeStringFromTimeInterval:(NSTimeInterval)timeInterval;

+ (NSString *)convertToCustomEmoticons:(NSString *)text;

+ (NSString *)convertToSystemEmoji:(NSString *)text;

@end

@interface NSAttributedString (Utilities)

- (CGSize)attributeStringSizeWithFontSize:(UIFont *)aFont displaySize:(CGSize)aSize;

@end