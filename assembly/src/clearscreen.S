.text
    .global _start

_start:
    mov $0x13,%eax
    int 10h
