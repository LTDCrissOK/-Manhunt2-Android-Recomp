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

// Function: sub_002D6570
// Address: 0x2d6570 - 0x2d65c8
void sub_002D6570_0x2d6570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6570_0x2d6570");
#endif

    switch (ctx->pc) {
        case 0x2d65a8u: goto label_2d65a8;
        default: break;
    }

    ctx->pc = 0x2d6570u;

    // 0x2d6570: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d6570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2d6574: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d6574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6578: 0x24423df8  addiu       $v0, $v0, 0x3DF8
    ctx->pc = 0x2d6578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15864));
    // 0x2d657c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2d657cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2d6580: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x2d6580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2d6584: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d6584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6588: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2d6588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2d658c: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x2d658cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2d6590: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d6590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d6594: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2d6594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2d6598: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2d6598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2d659c: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x2d659cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d65a0: 0xa0800025  sb          $zero, 0x25($a0)
    ctx->pc = 0x2d65a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d65a4: 0x0  nop
    ctx->pc = 0x2d65a4u;
    // NOP
label_2d65a8:
    // 0x2d65a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d65a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d65ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2d65acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d65b0: 0x0  nop
    ctx->pc = 0x2d65b0u;
    // NOP
    // 0x2d65b4: 0x0  nop
    ctx->pc = 0x2d65b4u;
    // NOP
    // 0x2d65b8: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D65B8u;
    {
        const bool branch_taken_0x2d65b8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2D65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D65B8u;
        // 0x2d65bc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d65b8) {
            ctx->pc = 0x2D65A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d65a8;
        }
    }
    ctx->pc = 0x2D65C0u;
    // 0x2d65c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D65C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D65C0u;
        // 0x2d65c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D65C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D65C8u;
}
