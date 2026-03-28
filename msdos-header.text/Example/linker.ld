SECTIONS
{
    . = 0x100;
    .text : { *(.text) }
    .data : { *(.data) }
    .bss  : { *(.bss) }
    
    /DISCARD/ : {
        *(.comment)
        *(.eh_frame)
        *(.note*)
    }
}