#ifndef _EFI_MEM_H_
#define _EFI_MEM_H_


#define EFI_MEMORY_UC		0x0000000000000001
#define EFI_MEMORY_WC		0x0000000000000002
#define EFI_MEMORY_WT		0x0000000000000004
#define EFI_MEMORY_WB		0x0000000000000008
#define EFI_MEMORY_UCE		0x0000000000000010
#define EFI_MEMORY_WP		0x0000000000001000
#define EFI_MEMORY_RP		0x0000000000002000
#define EFI_MEMORY_XP		0x0000000000004000
#define EFI_MEMORY_RUNTIME	0x8000000000000000


typedef struct {
	uint32_t type;
	ptr_t pstart;
	ptr_t vstart;
	uint64_t pnum;
	uint64_t attr;
} efi_mem_t;


#endif
