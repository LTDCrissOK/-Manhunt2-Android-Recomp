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

// Function: entry_001560d8
// Address: 0x1560d8 - 0x1560e8
void entry_001560d8_0x1560d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001560d8_0x1560d8");
#endif

    ctx->pc = 0x1560d8u;

    // 0x1560d8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1560D8u;
    {
        const bool branch_taken_0x1560d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1560DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560D8u;
        // 0x1560dc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560d8) {
            ctx->pc = 0x156140u;
            return;
        }
    }
    ctx->pc = 0x1560E0u;
    // 0x1560e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1560e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1560e4: 0x2442ecc0  addiu       $v0, $v0, -0x1340
    ctx->pc = 0x1560e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962368));
    ctx->pc = 0x1560e8u;
}
