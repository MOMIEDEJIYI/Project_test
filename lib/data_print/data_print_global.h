#ifndef DATA_PRINT_GLOBAL_H
#define DATA_PRINT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DATA_PRINT_LIBRARY)
#define DATA_PRINT_EXPORT Q_DECL_EXPORT
#else
#define DATA_PRINT_EXPORT Q_DECL_IMPORT
#endif

#endif // DATA_PRINT_GLOBAL_H
