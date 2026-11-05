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

// Function: sub_001F4C58
// Address: 0x1f4c58 - 0x1f4c68
void sub_001F4C58_0x1f4c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4C58_0x1f4c58");
#endif

    ctx->pc = 0x1f4c58u;

    // 0x1f4c58: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4c5c: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x1f4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x1f4c60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4C60u;
    {
        const bool branch_taken_0x1f4c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C60u;
        // 0x1f4c64: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c60) {
            ctx->pc = 0x1F4C70u;
            return;
        }
    }
    ctx->pc = 0x1F4C68u;
}
