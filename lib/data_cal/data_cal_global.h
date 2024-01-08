#ifndef DATA_CAL_GLOBAL_H
#define DATA_CAL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DATA_CAL_LIBRARY)
#define DATA_CAL_EXPORT Q_DECL_EXPORT
#else
#define DATA_CAL_EXPORT Q_DECL_IMPORT
#endif

#endif // DATA_CAL_GLOBAL_H
