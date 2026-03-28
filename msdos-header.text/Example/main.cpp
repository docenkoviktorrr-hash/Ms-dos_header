#include "dos_legacy.h"

extern "C" void _start() {
    const char* hello = "HELLO FROM CPP COM FILE!$\n";
    
    dos_print(hello);
    dos_exit();
}