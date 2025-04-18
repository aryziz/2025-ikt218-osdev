#include "libc/stdbool.h"
#include "multiboot2.h"
#include "libc/stdint.h"
#include "libc/stddef.h"
#include "libc/string.h"
#include "libc/stdio.h"
#include "gdt.h"

struct multiboot_info
{
    uint32_t size;
    uint32_t reserved;
    struct multiboot_tag *first;
};

int main(uint32_t magic, struct multiboot_info *mb_info_addr)
{
    terminal_initialize();
    init_gdt();

    printf("Hello %s!", "Aryan");

    return 0;
}