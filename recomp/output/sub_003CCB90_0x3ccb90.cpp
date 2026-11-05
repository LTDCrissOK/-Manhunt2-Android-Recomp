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

// Function: sub_003CCB90
// Address: 0x3ccb90 - 0x3ccc38
void sub_003CCB90_0x3ccb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCB90_0x3ccb90");
#endif

    switch (ctx->pc) {
        case 0x3ccba8u: goto label_3ccba8;
        case 0x3ccbc0u: goto label_3ccbc0;
        case 0x3ccc04u: goto label_3ccc04;
        case 0x3ccc20u: goto label_3ccc20;
        default: break;
    }

    ctx->pc = 0x3ccb90u;

    // 0x3ccb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ccb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ccb94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ccb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ccb98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ccb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ccb9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ccb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ccba0: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3CCBA0u;
    SET_GPR_U32(ctx, 31, 0x3CCBA8u);
    ctx->pc = 0x3CCBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCBA0u;
    // 0x3ccba4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3CCBA0u, 0x3CCBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCBA8u;
label_3ccba8:
    // 0x3ccba8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3ccba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ccbac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ccbacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccbb0: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3CCBB0u;
    {
        const bool branch_taken_0x3ccbb0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3CCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBB0u;
        // 0x3ccbb4: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccbb0) {
            ctx->pc = 0x3CCC18u;
            goto label_3ccc18;
        }
    }
    ctx->pc = 0x3CCBB8u;
    // 0x3ccbb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ccbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ccbbc: 0x0  nop
    ctx->pc = 0x3ccbbcu;
    // NOP
label_3ccbc0:
    // 0x3ccbc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3ccbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ccbc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ccbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ccbc8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3CCBC8u;
    {
        const bool branch_taken_0x3ccbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ccbc8) {
            ctx->pc = 0x3CCBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CCBC8u;
            // 0x3ccbcc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CCC0Cu;
            goto label_3ccc0c;
        }
    }
    ctx->pc = 0x3CCBD0u;
    // 0x3ccbd0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x3ccbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3ccbd4: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x3ccbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x3ccbd8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3ccbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3ccbdc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ccbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ccbe0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3ccbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ccbe4: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CCBE4u;
    {
        const bool branch_taken_0x3ccbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3CCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBE4u;
        // 0x3ccbe8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccbe4) {
            ctx->pc = 0x3CCBF8u;
            goto label_3ccbf8;
        }
    }
    ctx->pc = 0x3CCBECu;
    // 0x3ccbec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3ccbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3ccbf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ccbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ccbf4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3ccbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3ccbf8:
    // 0x3ccbf8: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x3ccbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x3ccbfc: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3CCBFCu;
    SET_GPR_U32(ctx, 31, 0x3CCC04u);
    ctx->pc = 0x3CCC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCBFCu;
    // 0x3ccc00: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3CCBFCu, 0x3CCC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCC04u;
label_3ccc04:
    // 0x3ccc04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CCC04u;
    {
        const bool branch_taken_0x3ccc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC04u;
        // 0x3ccc08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccc04) {
            ctx->pc = 0x3CCC24u;
            goto label_3ccc24;
        }
    }
    ctx->pc = 0x3CCC0Cu;
label_3ccc0c:
    // 0x3ccc0c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3ccc0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3ccc10: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3CCC10u;
    {
        const bool branch_taken_0x3ccc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC10u;
        // 0x3ccc14: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccc10) {
            ctx->pc = 0x3CCBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ccbc0;
        }
    }
    ctx->pc = 0x3CCC18u;
label_3ccc18:
    // 0x3ccc18: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3CCC18u;
    SET_GPR_U32(ctx, 31, 0x3CCC20u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3CCC18u, 0x3CCC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCC20u;
label_3ccc20:
    // 0x3ccc20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ccc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ccc24:
    // 0x3ccc24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ccc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ccc28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ccc28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ccc2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ccc2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ccc30: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC30u;
        // 0x3ccc34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCC38u;
}
