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

// Function: sub_002D3240
// Address: 0x2d3240 - 0x2d3268
void sub_002D3240_0x2d3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3240_0x2d3240");
#endif

    ctx->pc = 0x2d3240u;

    // 0x2d3240: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d3240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d3244: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d3244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3248: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3248u;
    {
        const bool branch_taken_0x2d3248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3248u;
        // 0x2d324c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3248) {
            ctx->pc = 0x2D325Cu;
            goto label_2d325c;
        }
    }
    ctx->pc = 0x2D3250u;
    // 0x2d3250: 0x2442b4e8  addiu       $v0, $v0, -0x4B18
    ctx->pc = 0x2d3250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948072));
    // 0x2d3254: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d3254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3258: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2d3258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2d325c:
    // 0x2d325c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D325Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3264u;
    // 0x2d3264: 0x0  nop
    ctx->pc = 0x2d3264u;
    // NOP
    ctx->pc = 0x2d3268u;
}
