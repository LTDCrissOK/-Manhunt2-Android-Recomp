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

// Function: sub_001F4BA8
// Address: 0x1f4ba8 - 0x1f4bb8
void sub_001F4BA8_0x1f4ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4BA8_0x1f4ba8");
#endif

    ctx->pc = 0x1f4ba8u;

    // 0x1f4ba8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4bac: 0x2442f5a8  addiu       $v0, $v0, -0xA58
    ctx->pc = 0x1f4bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964648));
    // 0x1f4bb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4BB0u;
    {
        const bool branch_taken_0x1f4bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4BB0u;
        // 0x1f4bb4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4bb0) {
            ctx->pc = 0x1F4BC0u;
            return;
        }
    }
    ctx->pc = 0x1F4BB8u;
}
