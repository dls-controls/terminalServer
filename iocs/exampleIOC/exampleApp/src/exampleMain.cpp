/* This file was automatically generated on Fri 04 Feb 2022 09:26:51 GMT from
 * source: /dls_sw/work/R3.14.12.7/support/terminalServer/etc/makeIocs/example.xml
 * 
 * *** Please do not edit this file: edit the source file instead. ***
 *  */
#include "epicsExit.h"
#include "epicsThread.h"
#include "iocsh.h"

int main(int argc, char *argv[])
{
    if(argc>=2) {
        iocsh(argv[1]);
        epicsThreadSleep(.2);
    }
    iocsh(NULL);
    epicsExit(0);
    return 0;
}
