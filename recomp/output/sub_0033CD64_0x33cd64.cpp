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

// Function: sub_0033CD64
// Address: 0x33cd64 - 0x33cd70
void sub_0033CD64_0x33cd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CD64_0x33cd64");
#endif

    ctx->pc = 0x33cd64u;

    // 0x33cd64: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33cd68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33CD68u;
    {
        const bool branch_taken_0x33cd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD68u;
        // 0x33cd6c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd68) {
            ctx->pc = 0x33CD78u;
            return;
        }
    }
    ctx->pc = 0x33CD70u;
}
