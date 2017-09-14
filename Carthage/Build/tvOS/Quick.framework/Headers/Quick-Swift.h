// Generated by Apple Swift version 4.0 effective-3.2 (swiftlang-900.0.63.10 clang-900.0.36)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import XCTest;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("Quick")



/// An object encapsulating the file and line number at which
/// a particular example is defined.
SWIFT_CLASS("_TtC5Quick8Callsite")
@interface Callsite : NSObject
/// The absolute path of the file in which an example is defined.
@property (nonatomic, readonly, copy) NSString * _Nonnull file;
/// The line number on which an example is defined.
@property (nonatomic, readonly) NSUInteger line;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end



@class Example;
@class ExampleMetadata;

/// A configuration encapsulates various options you can use
/// to configure Quick’s behavior.
SWIFT_CLASS("_TtC5Quick13Configuration")
@interface Configuration : NSObject
/// Run all examples if none match the configured filters. True by default.
@property (nonatomic) BOOL runAllWhenEverythingFiltered;
/// Registers an inclusion filter.
/// All examples are filtered using all inclusion filters.
/// The remaining examples are run. If no examples remain, all examples are run.
/// \param filter A filter that, given an example, returns a value indicating
/// whether that example should be included in the examples
/// that are run.
///
- (void)include:(BOOL (^ _Nonnull)(Example * _Nonnull))filter;
/// Registers an exclusion filter.
/// All examples that remain after being filtered by the inclusion filters are
/// then filtered via all exclusion filters.
/// \param filter A filter that, given an example, returns a value indicating
/// whether that example should be excluded from the examples
/// that are run.
///
- (void)exclude:(BOOL (^ _Nonnull)(Example * _Nonnull))filter;
- (void)beforeEachWithMetadata:(void (^ _Nonnull)(ExampleMetadata * _Nonnull))closure;
/// Like Quick.DSL.beforeEach, this configures Quick to execute the
/// given closure before each example that is run. The closure
/// passed to this method is executed before each example Quick runs,
/// globally across the test suite. You may call this method multiple
/// times across mulitple +[QuickConfigure configure:] methods in order
/// to define several closures to run before each example.
/// Note that, since Quick makes no guarantee as to the order in which
/// +[QuickConfiguration configure:] methods are evaluated, there is no
/// guarantee as to the order in which beforeEach closures are evaluated
/// either. Mulitple beforeEach defined on a single configuration, however,
/// will be executed in the order they’re defined.
/// \param closure The closure to be executed before each example
/// in the test suite.
///
- (void)beforeEach:(void (^ _Nonnull)(void))closure;
- (void)afterEachWithMetadata:(void (^ _Nonnull)(ExampleMetadata * _Nonnull))closure;
/// Like Quick.DSL.afterEach, this configures Quick to execute the
/// given closure after each example that is run. The closure
/// passed to this method is executed after each example Quick runs,
/// globally across the test suite. You may call this method multiple
/// times across mulitple +[QuickConfigure configure:] methods in order
/// to define several closures to run after each example.
/// Note that, since Quick makes no guarantee as to the order in which
/// +[QuickConfiguration configure:] methods are evaluated, there is no
/// guarantee as to the order in which afterEach closures are evaluated
/// either. Mulitple afterEach defined on a single configuration, however,
/// will be executed in the order they’re defined.
/// \param closure The closure to be executed before each example
/// in the test suite.
///
- (void)afterEach:(void (^ _Nonnull)(void))closure;
/// Like Quick.DSL.beforeSuite, this configures Quick to execute
/// the given closure prior to any and all examples that are run.
/// The two methods are functionally equivalent.
- (void)beforeSuite:(void (^ _Nonnull)(void))closure;
/// Like Quick.DSL.afterSuite, this configures Quick to execute
/// the given closure after all examples have been run.
/// The two methods are functionally equivalent.
- (void)afterSuite:(void (^ _Nonnull)(void))closure;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Examples, defined with the <code>it</code> function, use assertions to
/// demonstrate how code should behave. These are like “tests” in XCTest.
SWIFT_CLASS("_TtC5Quick7Example")
@interface Example : NSObject
/// A boolean indicating whether the example is a shared example;
/// i.e.: whether it is an example defined with <code>itBehavesLike</code>.
@property (nonatomic) BOOL isSharedExample;
/// The site at which the example is defined.
/// This must be set correctly in order for Xcode to highlight
/// the correct line in red when reporting a failure.
@property (nonatomic, strong) Callsite * _Nonnull callsite;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// The example name. A name is a concatenation of the name of
/// the example group the example belongs to, followed by the
/// description of the example itself.
/// The example name is used to generate a test method selector
/// to be displayed in Xcode’s test navigator.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// Executes the example closure, as well as all before and after
/// closures defined in the its surrounding example groups.
- (void)run;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end




/// Example groups are logical groupings of examples, defined with
/// the <code>describe</code> and <code>context</code> functions. Example groups can share
/// setup and teardown code.
SWIFT_CLASS("_TtC5Quick12ExampleGroup")
@interface ExampleGroup : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// Returns a list of examples that belong to this example group,
/// or to any of its descendant example groups.
@property (nonatomic, readonly, copy) NSArray<Example *> * _Nonnull examples;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


/// A class that encapsulates information about an example,
/// including the index at which the example was executed, as
/// well as the example itself.
SWIFT_CLASS("_TtC5Quick15ExampleMetadata")
@interface ExampleMetadata : NSObject
/// The example for which this metadata was collected.
@property (nonatomic, readonly, strong) Example * _Nonnull example;
/// The index at which this example was executed in the
/// test suite.
@property (nonatomic, readonly) NSInteger exampleIndex;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


/// A namespace for filter flag keys, defined primarily to make the
/// keys available in Objective-C.
SWIFT_CLASS("_TtC5Quick6Filter")
@interface Filter : NSObject
/// Example and example groups with [Focused: true] are included in test runs,
/// excluding all other examples without this flag. Use this to only run one or
/// two tests that you’re currently focusing on.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull focused;)
+ (NSString * _Nonnull)focused SWIFT_WARN_UNUSED_RESULT;
/// Example and example groups with [Pending: true] are excluded from test runs.
/// Use this to temporarily suspend examples that you know do not pass yet.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull pending;)
+ (NSString * _Nonnull)pending SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSString (SWIFT_EXTENSION(Quick))
@property (nonatomic, readonly, copy) NSString * _Nonnull qck_c99ExtendedIdentifier;
@end


/// A base class for a class cluster of Quick test suites, that should correctly
/// build dynamic test suites for XCTest to execute.
SWIFT_CLASS("_TtC5Quick14QuickTestSuite")
@interface QuickTestSuite : XCTestSuite
/// Construct a test suite for a specific, selected subset of test cases (rather
/// than the default, which as all test cases).
/// If this method is called multiple times for the same test case class, e.g..
/// FooSpec/testFoo
/// FooSpec/testBar
/// It is expected that the first call should return a valid test suite, and
/// all subsequent calls should return <code>nil</code>.
+ (QuickTestSuite * _Nullable)selectedTestSuiteForTestCaseWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop