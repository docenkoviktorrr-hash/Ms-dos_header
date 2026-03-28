#ifndef DOS_LEGACY_H
#define DOS_LEGACY_H

inline void dos_print(const char* msg) {
    asm volatile (
        "mov $0x09, %%ah\n\t"  
        "int $0x21\n\t"        
        :
        : "d"(msg)             
        : "ah"
    );
}

inline void dos_exit() {
    asm volatile (
        "mov $0x4C, %%ah\n\t"
        "int $0x21\n\t"
        :
        :
        : "ah"
    );
}

#endif