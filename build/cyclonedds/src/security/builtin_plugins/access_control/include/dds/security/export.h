
#ifndef SECURITY_EXPORT_H
#define SECURITY_EXPORT_H

#ifdef SECURITY_STATIC_DEFINE
#  define SECURITY_EXPORT
#  define SECURITY_NO_EXPORT
#else
#  ifndef SECURITY_EXPORT
#    ifdef dds_security_ac_EXPORTS
        /* We are building this library */
#      define SECURITY_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SECURITY_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SECURITY_NO_EXPORT
#    define SECURITY_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SECURITY_DEPRECATED
#  define SECURITY_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SECURITY_DEPRECATED_EXPORT
#  define SECURITY_DEPRECATED_EXPORT SECURITY_EXPORT SECURITY_DEPRECATED
#endif

#ifndef SECURITY_DEPRECATED_NO_EXPORT
#  define SECURITY_DEPRECATED_NO_EXPORT SECURITY_NO_EXPORT SECURITY_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SECURITY_NO_DEPRECATED
#    define SECURITY_NO_DEPRECATED
#  endif
#endif

#ifndef SECURITY_INLINE_EXPORT
#  if __MINGW32__ && (!defined(__clang__) || !defined(dds_security_ac_EXPORTS))
#    define SECURITY_INLINE_EXPORT
#  else
#    define SECURITY_INLINE_EXPORT SECURITY_EXPORT
#  endif
#endif

// Some internal functions are exported even though are not part of the API nor
// foreseen to ever be called by a user of the library (unlike some functions
// that are exported for convenience in building tools or even examples, such as
// the AVL tree).  One reason for this is that they are useful in instrumenting
// Cyclone DDS with some performance analysis tools, and it is in the interest
// of the projec that such analyses can be done.
//
// There is no guarantee that such internal symbols will remain available or
// that their role will be the same.
#ifndef SECURITY_EXPORT_INTERNAL_FUNCTION
#  define SECURITY_EXPORT_INTERNAL_FUNCTION SECURITY_EXPORT
#endif

#endif /* SECURITY_EXPORT_H */
