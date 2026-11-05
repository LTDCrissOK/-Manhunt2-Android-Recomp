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

// Function: sub_002D3200
// Address: 0x2d3200 - 0x2d3240
void sub_002D3200_0x2d3200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3200_0x2d3200");
#endif

    switch (ctx->pc) {
        case 0x2d3210u: goto label_2d3210;
        default: break;
    }

    ctx->pc = 0x2d3200u;

    // 0x2d3200: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d3200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d3204: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d3204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3208: 0x2443b4e8  addiu       $v1, $v0, -0x4B18
    ctx->pc = 0x2d3208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948072));
    // 0x2d320c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d3210:
    // 0x2d3210: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2d3210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3214: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3214u;
    {
        const bool branch_taken_0x2d3214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3214) {
            ctx->pc = 0x2D3218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3214u;
            // 0x2d3218: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3228u;
            goto label_2d3228;
        }
    }
    ctx->pc = 0x2D321Cu;
    // 0x2d321c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2d321cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d3220: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3220u;
        // 0x2d3224: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3228u;
label_2d3228:
    // 0x2d3228: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x2d3228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d322c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D322Cu;
    {
        const bool branch_taken_0x2d322c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D322Cu;
        // 0x2d3230: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d322c) {
            ctx->pc = 0x2D3210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3210;
        }
    }
    ctx->pc = 0x2D3234u;
    // 0x2d3234: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3234u;
        // 0x2d3238: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D323Cu;
    // 0x2d323c: 0x0  nop
    ctx->pc = 0x2d323cu;
    // NOP
    ctx->pc = 0x2d3240u;
}
