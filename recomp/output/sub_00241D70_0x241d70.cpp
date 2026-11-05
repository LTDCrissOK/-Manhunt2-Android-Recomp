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

// Function: sub_00241D70
// Address: 0x241d70 - 0x241e18
void sub_00241D70_0x241d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241D70_0x241d70");
#endif

    switch (ctx->pc) {
        case 0x241d98u: goto label_241d98;
        case 0x241dc0u: goto label_241dc0;
        case 0x241de8u: goto label_241de8;
        default: break;
    }

    ctx->pc = 0x241d70u;

    // 0x241d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x241d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241d78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x241d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x241d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x241d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241d80: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x241d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x241d84: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x241d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x241d88: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x241D88u;
    {
        const bool branch_taken_0x241d88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x241D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D88u;
        // 0x241d8c: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d88) {
            ctx->pc = 0x241DB4u;
            goto label_241db4;
        }
    }
    ctx->pc = 0x241D90u;
    // 0x241d90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x241d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241d94: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x241d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_241d98:
    // 0x241d98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241d9c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241D9Cu;
    {
        const bool branch_taken_0x241d9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x241DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D9Cu;
        // 0x241da0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d9c) {
            ctx->pc = 0x241DB4u;
            goto label_241db4;
        }
    }
    ctx->pc = 0x241DA4u;
    // 0x241da4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x241da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x241da8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x241DA8u;
    {
        const bool branch_taken_0x241da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DA8u;
        // 0x241dac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241da8) {
            ctx->pc = 0x241D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241d98;
        }
    }
    ctx->pc = 0x241DB0u;
    // 0x241db0: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x241db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_241db4:
    // 0x241db4: 0x24a563e0  addiu       $a1, $a1, 0x63E0
    ctx->pc = 0x241db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25568));
    // 0x241db8: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x241DB8u;
    SET_GPR_U32(ctx, 31, 0x241DC0u);
    ctx->pc = 0x241DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DB8u;
    // 0x241dbc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x241DB8u, 0x241DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DC0u;
label_241dc0:
    // 0x241dc0: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x241dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x241dc4: 0x24050577  addiu       $a1, $zero, 0x577
    ctx->pc = 0x241dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1399));
    // 0x241dc8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x241dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x241dcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241dd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241dd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241dd8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x241DD8u;
    {
        const bool branch_taken_0x241dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x241DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DD8u;
        // 0x241ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241dd8) {
            ctx->pc = 0x241DE8u;
            goto label_241de8;
        }
    }
    ctx->pc = 0x241DE0u;
    // 0x241de0: 0xc08dc16  jal         func_237058
    ctx->pc = 0x241DE0u;
    SET_GPR_U32(ctx, 31, 0x241DE8u);
    ctx->pc = 0x241DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DE0u;
    // 0x241de4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x241DE0u, 0x241DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DE8u;
label_241de8:
    // 0x241de8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x241de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x241dec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x241decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x241df0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x241df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x241df4: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x241df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x241df8: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x241df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x241dfc: 0xa200070c  sb          $zero, 0x70C($s0)
    ctx->pc = 0x241dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1804), (uint8_t)GPR_U32(ctx, 0));
    // 0x241e00: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x241e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x241e04: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x241e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x241e08: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x241e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x241e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241e10: 0x3e00008  jr          $ra
    ctx->pc = 0x241E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E10u;
        // 0x241e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241E18u;
}
