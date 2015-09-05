//  OCHamcrest by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2014 hamcrest.org. See LICENSE.txt

#import <OCHamcrest/HCSubstringMatcher.h>


@interface HCStringContains : HCSubstringMatcher

+ (id)stringContains:(NSString *)aSubstring;

@end


FOUNDATION_EXPORT id HC_containsString(NSString *aSubstring) __attribute__((deprecated));

/**
containsString(aString) -
 Matches if object is a string containing a given string.

 @param aString  The string to search for. This value must not be @c nil.

 @b Deprecated: Use @ref containsSubstring() instead.

 This matcher first checks whether the evaluated object is a string. If so, it checks whether it
 contains @a aString.

 Example:

 @par
 @ref containsString(@"def")

 will match "abcdefg".

 (In the event of a name clash, don't \#define @c HC_SHORTHAND and use the synonym
 @c HC_containsString instead.)

 @ingroup text_matchers
 */
#ifdef HC_SHORTHAND
    #define containsString HC_containsString
#endif


FOUNDATION_EXPORT id HC_containsSubstring(NSString *aSubstring);

/**
containsSubstring(aString) -
 Matches if object is a string containing a given string.

 @param aString  The string to search for. This value must not be @c nil.

 This matcher first checks whether the evaluated object is a string. If so, it checks whether it
 contains @a aString.

 Example:

 @par
 @ref containsSubstring(@"def")

 will match "abcdefg".

 (In the event of a name clash, don't \#define @c HC_SHORTHAND and use the synonym
 @c HC_containsSubstring instead.)

 @ingroup text_matchers
 */
#ifdef HC_SHORTHAND
    #define containsSubstring HC_containsSubstring
#endif
