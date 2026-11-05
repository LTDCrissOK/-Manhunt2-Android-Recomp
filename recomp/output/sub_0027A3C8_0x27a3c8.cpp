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

// Function: sub_0027A3C8
// Address: 0x27a3c8 - 0x27a430
void sub_0027A3C8_0x27a3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A3C8_0x27a3c8");
#endif

    switch (ctx->pc) {
        case 0x27a3f8u: goto label_27a3f8;
        default: break;
    }

    ctx->pc = 0x27a3c8u;

    // 0x27a3c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x27a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27a3cc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27A3CCu;
    {
        const bool branch_taken_0x27a3cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27a3cc) {
            ctx->pc = 0x27A424u;
            goto label_27a424;
        }
    }
    ctx->pc = 0x27A3D4u;
    // 0x27a3d4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27A3D4u;
    {
        const bool branch_taken_0x27a3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3D4u;
        // 0x27a3d8: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3d4) {
            ctx->pc = 0x27A424u;
            goto label_27a424;
        }
    }
    ctx->pc = 0x27A3DCu;
    // 0x27a3dc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x27a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x27a3e0: 0x24422cb0  addiu       $v0, $v0, 0x2CB0
    ctx->pc = 0x27a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11440));
    // 0x27a3e4: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x27a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x27a3e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a3ec: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x27a3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x27a3f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x27a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a3f4: 0x0  nop
    ctx->pc = 0x27a3f4u;
    // NOP
label_27a3f8:
    // 0x27a3f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27a3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x27a3fc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x27a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x27a400: 0xac642040  sw          $a0, 0x2040($v1)
    ctx->pc = 0x27a400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8256), GPR_U32(ctx, 4));
    // 0x27a404: 0x0  nop
    ctx->pc = 0x27a404u;
    // NOP
    // 0x27a408: 0x14a4fffb  bne         $a1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x27A408u;
    {
        const bool branch_taken_0x27a408 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x27A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A408u;
        // 0x27a40c: 0x24632080  addiu       $v1, $v1, 0x2080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a408) {
            ctx->pc = 0x27A3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a3f8;
        }
    }
    ctx->pc = 0x27A410u;
    // 0x27a410: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x27a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x27a414: 0x24c3cbc0  addiu       $v1, $a2, -0x3440
    ctx->pc = 0x27a414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953920));
    // 0x27a418: 0x24422c88  addiu       $v0, $v0, 0x2C88
    ctx->pc = 0x27a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11400));
    // 0x27a41c: 0xacc2cbc0  sw          $v0, -0x3440($a2)
    ctx->pc = 0x27a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294953920), GPR_U32(ctx, 2));
    // 0x27a420: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27a420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_27a424:
    // 0x27a424: 0x3e00008  jr          $ra
    ctx->pc = 0x27A424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A42Cu;
    // 0x27a42c: 0x0  nop
    ctx->pc = 0x27a42cu;
    // NOP
    ctx->pc = 0x27a430u;
}
