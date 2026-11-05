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

// Function: FUN_00367e8e
// Address: 0x367e8e - 0x367e90
void FUN_00367e8e_0x367e8e(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00367e8e_0x367e8e");
#endif

    ctx->pc = 0x367e8eu;

    // 0x367e8e: 0xb82d8fa5  swr         $t5, -0x705B($at)
    ctx->pc = 0x367e8eu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294938533); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->pc = 0x367e90u;
}
