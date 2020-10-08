#include "khash.h"
#include "com_github_unidbg_arm_backend_dynarmic_Dynarmic.h"

#define PAGE_SIZE 0x1000 // 4k
#define PAGE_MASK PAGE_SIZE-1

typedef struct memory_page {
  void *addr;
  int perms;
} *t_memory_page;

KHASH_MAP_INIT_INT64(memory, t_memory_page)

typedef struct dynarmic {
  bool is64Bit;
  khash_t(memory) *memory;
} *t_dynarmic;
