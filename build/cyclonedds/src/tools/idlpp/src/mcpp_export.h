
#ifndef MCPP_EXPORT_H
#define MCPP_EXPORT_H

#ifdef MCPP_STATIC_DEFINE
#  define MCPP_EXPORT
#  define MCPP_NO_EXPORT
#else
#  ifndef MCPP_EXPORT
#    ifdef idlpp_EXPORTS
        /* We are building this library */
#      define MCPP_EXPORT 
#    else
        /* We are using this library */
#      define MCPP_EXPORT 
#    endif
#  endif

#  ifndef MCPP_NO_EXPORT
#    define MCPP_NO_EXPORT 
#  endif
#endif

#ifndef MCPP_DEPRECATED
#  define MCPP_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MCPP_DEPRECATED_EXPORT
#  define MCPP_DEPRECATED_EXPORT MCPP_EXPORT MCPP_DEPRECATED
#endif

#ifndef MCPP_DEPRECATED_NO_EXPORT
#  define MCPP_DEPRECATED_NO_EXPORT MCPP_NO_EXPORT MCPP_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MCPP_NO_DEPRECATED
#    define MCPP_NO_DEPRECATED
#  endif
#endif

#ifndef MCPP_INLINE_EXPORT
#  if __MINGW32__ && (!defined(__clang__) || !defined(idlpp_EXPORTS))
#    define MCPP_INLINE_EXPORT
#  else
#    define MCPP_INLINE_EXPORT MCPP_EXPORT
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
#ifndef MCPP_EXPORT_INTERNAL_FUNCTION
#  define MCPP_EXPORT_INTERNAL_FUNCTION MCPP_EXPORT
#endif

#endif /* MCPP_EXPORT_H */
