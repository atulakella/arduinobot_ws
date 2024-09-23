
#ifndef DDS_PSMX_IOX_EXPORT_H
#define DDS_PSMX_IOX_EXPORT_H

#ifdef DDS_PSMX_IOX_STATIC_DEFINE
#  define DDS_PSMX_IOX_EXPORT
#  define DDS_PSMX_IOX_NO_EXPORT
#else
#  ifndef DDS_PSMX_IOX_EXPORT
#    ifdef psmx_iox_EXPORTS
        /* We are building this library */
#      define DDS_PSMX_IOX_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define DDS_PSMX_IOX_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef DDS_PSMX_IOX_NO_EXPORT
#    define DDS_PSMX_IOX_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef DDS_PSMX_IOX_DEPRECATED
#  define DDS_PSMX_IOX_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef DDS_PSMX_IOX_DEPRECATED_EXPORT
#  define DDS_PSMX_IOX_DEPRECATED_EXPORT DDS_PSMX_IOX_EXPORT DDS_PSMX_IOX_DEPRECATED
#endif

#ifndef DDS_PSMX_IOX_DEPRECATED_NO_EXPORT
#  define DDS_PSMX_IOX_DEPRECATED_NO_EXPORT DDS_PSMX_IOX_NO_EXPORT DDS_PSMX_IOX_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef DDS_PSMX_IOX_NO_DEPRECATED
#    define DDS_PSMX_IOX_NO_DEPRECATED
#  endif
#endif

#ifndef DDS_PSMX_IOX_INLINE_EXPORT
#  if __MINGW32__ && (!defined(__clang__) || !defined(psmx_iox_EXPORTS))
#    define DDS_PSMX_IOX_INLINE_EXPORT
#  else
#    define DDS_PSMX_IOX_INLINE_EXPORT DDS_PSMX_IOX_EXPORT
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
#ifndef DDS_PSMX_IOX_EXPORT_INTERNAL_FUNCTION
#  define DDS_PSMX_IOX_EXPORT_INTERNAL_FUNCTION DDS_PSMX_IOX_EXPORT
#endif

#endif /* DDS_PSMX_IOX_EXPORT_H */
