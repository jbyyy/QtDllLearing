#ifndef JBYDLL_H
#define JBYDLL_H


#include <QtCore/qglobal.h>

#if defined(JBYDLL_LIBRARY)
#  define JBYDLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define JBYDLLSHARED_EXPORT Q_DECL_IMPORT
#endif

class JBYDLLSHARED_EXPORT JbyDLL
{

public:
    JbyDLL (int a,int b);
    int Add();
    int a;
    int b;
};

#endif // JBYDLL_H
