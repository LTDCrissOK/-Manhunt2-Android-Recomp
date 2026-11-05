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

// Function: sub_0011DAA0
// Address: 0x11daa0 - 0x11db28
void sub_0011DAA0_0x11daa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DAA0_0x11daa0");
#endif

    switch (ctx->pc) {
        case 0x11dab0u: goto label_11dab0;
        case 0x11dad8u: goto label_11dad8;
        case 0x11db00u: goto label_11db00;
        default: break;
    }

    ctx->pc = 0x11daa0u;

    // 0x11daa0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x11daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x11daa4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x11daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11daa8: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x11daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11daac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11daacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11dab0:
    // 0x11dab0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11dab4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11dab8: 0x0  nop
    ctx->pc = 0x11dab8u;
    // NOP
    // 0x11dabc: 0x0  nop
    ctx->pc = 0x11dabcu;
    // NOP
    // 0x11dac0: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11DAC0u;
    {
        const bool branch_taken_0x11dac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAC0u;
        // 0x11dac4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dac0) {
            ctx->pc = 0x11DAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dab0;
        }
    }
    ctx->pc = 0x11DAC8u;
    // 0x11dac8: 0x24820310  addiu       $v0, $a0, 0x310
    ctx->pc = 0x11dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x11dacc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x11daccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11dad0: 0x24860410  addiu       $a2, $a0, 0x410
    ctx->pc = 0x11dad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1040));
    // 0x11dad4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11dad8:
    // 0x11dad8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11dadc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11dae0: 0x0  nop
    ctx->pc = 0x11dae0u;
    // NOP
    // 0x11dae4: 0x0  nop
    ctx->pc = 0x11dae4u;
    // NOP
    // 0x11dae8: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11DAE8u;
    {
        const bool branch_taken_0x11dae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAE8u;
        // 0x11daec: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dae8) {
            ctx->pc = 0x11DAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dad8;
        }
    }
    ctx->pc = 0x11DAF0u;
    // 0x11daf0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x11daf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11daf4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x11daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11daf8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11daf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11dafc: 0x0  nop
    ctx->pc = 0x11dafcu;
    // NOP
label_11db00:
    // 0x11db00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11db00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x11db04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11db04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11db08: 0x0  nop
    ctx->pc = 0x11db08u;
    // NOP
    // 0x11db0c: 0x0  nop
    ctx->pc = 0x11db0cu;
    // NOP
    // 0x11db10: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11DB10u;
    {
        const bool branch_taken_0x11db10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB10u;
        // 0x11db14: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db10) {
            ctx->pc = 0x11DB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11db00;
        }
    }
    ctx->pc = 0x11DB18u;
    // 0x11db18: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11db18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db1c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB1Cu;
        // 0x11db20: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DB24u;
    // 0x11db24: 0x0  nop
    ctx->pc = 0x11db24u;
    // NOP
    ctx->pc = 0x11db28u;
}
