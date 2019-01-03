#include "compiler.h"
#include "semantic.h"
int main(int argc,char*argv[])
{
    Compiler cmplr(true,true,true,true,true);
    cmplr.genCommonFile();
    cmplr.compile("../a.c");
    return 0;
}