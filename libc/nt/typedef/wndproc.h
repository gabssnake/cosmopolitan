#ifndef COSMOPOLITAN_LIBC_NT_TYPEDEF_WNDPROC_H_
#define COSMOPOLITAN_LIBC_NT_TYPEDEF_WNDPROC_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

typedef int64_t (*NtWndProc)(int64_t, uint32_t, uint64_t, int64_t);

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_NT_TYPEDEF_WNDPROC_H_ */