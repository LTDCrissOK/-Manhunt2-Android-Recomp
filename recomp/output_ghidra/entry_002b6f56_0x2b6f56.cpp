#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_002b6f56
// Address: 0x2b6f56 - 0x2b6f66
void entry_002b6f56_0x2b6f56(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6f56_0x2b6f56");
#endif

    ctx->pc = 0x2b6f56u;

    // 0x2b6f56: 0x200200  .word       0x00200200                   # sll         $zero, $zero, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f56u;
    
    // 0x2b6f5a: 0xd6cc2405  ldc1        $f12, 0x2405($s6)
    ctx->pc = 0x2b6f5au;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2B6F5A raw=0xD6CC2405");
    // 0x2b6f5e: 0x302d0c0a  andi        $t5, $at, 0xC0A
    ctx->pc = 0x2b6f5eu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)3082);
    // 0x2b6f62: 0x290000  .word       0x00290000                   # sll         $zero, $t1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f62u;
    
    ctx->pc = 0x2b6f66u;
}
