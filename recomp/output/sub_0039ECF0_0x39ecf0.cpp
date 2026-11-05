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

// Function: sub_0039ECF0
// Address: 0x39ecf0 - 0x39ede0
void sub_0039ECF0_0x39ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039ECF0_0x39ecf0");
#endif

    switch (ctx->pc) {
        case 0x39ed30u: goto label_39ed30;
        case 0x39ed44u: goto label_39ed44;
        case 0x39ed64u: goto label_39ed64;
        case 0x39ed74u: goto label_39ed74;
        case 0x39ed88u: goto label_39ed88;
        case 0x39ed90u: goto label_39ed90;
        case 0x39ed98u: goto label_39ed98;
        case 0x39edacu: goto label_39edac;
        case 0x39edb4u: goto label_39edb4;
        default: break;
    }

    ctx->pc = 0x39ecf0u;

    // 0x39ecf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39ecf4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x39ecf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ecfc: 0x2463adfc  addiu       $v1, $v1, -0x5204
    ctx->pc = 0x39ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946300));
    // 0x39ed00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39ed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39ed04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39ed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39ed08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39ed08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39ed0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39ed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39ed10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40ADFCu));
    // 0x39ed14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39ed18: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x39ED18u;
    {
        const bool branch_taken_0x39ed18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ED18u;
        // 0x39ed1c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ed18) {
            ctx->pc = 0x39EDC0u;
            goto label_39edc0;
        }
    }
    ctx->pc = 0x39ED20u;
    // 0x39ed20: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x39ed20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x39ed24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39ed24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ed28: 0x2670ae10  addiu       $s0, $s3, -0x51F0
    ctx->pc = 0x39ed28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946320));
    // 0x39ed2c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x39ed2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39ed30:
    // 0x39ed30: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x39ed30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39ed34: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39ED34u;
    {
        const bool branch_taken_0x39ed34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x39ed34) {
            ctx->pc = 0x39ED38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ED34u;
            // 0x39ed38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39ED48u;
            goto label_39ed48;
        }
    }
    ctx->pc = 0x39ED3Cu;
    // 0x39ed3c: 0xc0e7c70  jal         func_39F1C0
    ctx->pc = 0x39ED3Cu;
    SET_GPR_U32(ctx, 31, 0x39ED44u);
    ctx->pc = 0x39ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ED3Cu;
    // 0x39ed40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F1C0u, 0x39ED3Cu, 0x39ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ED44u;
label_39ed44:
    // 0x39ed44: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39ed44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39ed48:
    // 0x39ed48: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x39ED48u;
    {
        const bool branch_taken_0x39ed48 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x39ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ED48u;
        // 0x39ed4c: 0x26100278  addiu       $s0, $s0, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ed48) {
            ctx->pc = 0x39ED30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ed30;
        }
    }
    ctx->pc = 0x39ED50u;
    // 0x39ed50: 0x2670ae10  addiu       $s0, $s3, -0x51F0
    ctx->pc = 0x39ed50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946320));
    // 0x39ed54: 0x240609e0  addiu       $a2, $zero, 0x9E0
    ctx->pc = 0x39ed54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2528));
    // 0x39ed58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ed58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed5c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x39ED5Cu;
    SET_GPR_U32(ctx, 31, 0x39ED64u);
    ctx->pc = 0x39ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ED5Cu;
    // 0x39ed60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x39ED5Cu, 0x39ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ED64u;
label_39ed64:
    // 0x39ed64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x39ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39ed68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ed68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed6c: 0xc0eb326  jal         func_3ACC98
    ctx->pc = 0x39ED6Cu;
    SET_GPR_U32(ctx, 31, 0x39ED74u);
    ctx->pc = 0x39ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ED6Cu;
    // 0x39ed70: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC98u, 0x39ED6Cu, 0x39ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ED74u;
label_39ed74:
    // 0x39ed74: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39ed78: 0x8c45ae00  lw          $a1, -0x5200($v0)
    ctx->pc = 0x39ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x40AE00u));
    // 0x39ed7c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x39ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39ed80: 0xc0eb326  jal         func_3ACC98
    ctx->pc = 0x39ED80u;
    SET_GPR_U32(ctx, 31, 0x39ED88u);
    ctx->pc = 0x39ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ED80u;
    // 0x39ed84: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC98u, 0x39ED80u, 0x39ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ED88u;
label_39ed88:
    // 0x39ed88: 0xc0e8268  jal         func_3A09A0
    ctx->pc = 0x39ED88u;
    SET_GPR_U32(ctx, 31, 0x39ED90u);
    ctx->pc = 0x3A09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A09A0u, 0x39ED88u, 0x39ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ED90u;
label_39ed90:
    // 0x39ed90: 0xc0e5874  jal         func_3961D0
    ctx->pc = 0x39ED90u;
    SET_GPR_U32(ctx, 31, 0x39ED98u);
    ctx->pc = 0x3961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3961D0u, 0x39ED90u, 0x39ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ED98u;
label_39ed98:
    // 0x39ed98: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x39ed98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39ed9c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x39ED9Cu;
    {
        const bool branch_taken_0x39ed9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ed9c) {
            ctx->pc = 0x39EDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ED9Cu;
            // 0x39eda0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EDB8u;
            goto label_39edb8;
        }
    }
    ctx->pc = 0x39EDA4u;
    // 0x39eda4: 0xc0eb2bc  jal         func_3ACAF0
    ctx->pc = 0x39EDA4u;
    SET_GPR_U32(ctx, 31, 0x39EDACu);
    ctx->pc = 0x39EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EDA4u;
    // 0x39eda8: 0x2644bda0  addiu       $a0, $s2, -0x4260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACAF0u, 0x39EDA4u, 0x39EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EDACu;
label_39edac:
    // 0x39edac: 0xc0e7c70  jal         func_39F1C0
    ctx->pc = 0x39EDACu;
    SET_GPR_U32(ctx, 31, 0x39EDB4u);
    ctx->pc = 0x39EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EDACu;
    // 0x39edb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F1C0u, 0x39EDACu, 0x39EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EDB4u;
label_39edb4:
    // 0x39edb4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39edb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39edb8:
    // 0x39edb8: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x39EDB8u;
    {
        const bool branch_taken_0x39edb8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x39EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EDB8u;
        // 0x39edbc: 0x26100278  addiu       $s0, $s0, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39edb8) {
            ctx->pc = 0x39ED98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ed98;
        }
    }
    ctx->pc = 0x39EDC0u;
label_39edc0:
    // 0x39edc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39edc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39edc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39edc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39edc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39edc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39edcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39edccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39edd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39edd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39edd4: 0x3e00008  jr          $ra
    ctx->pc = 0x39EDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EDD4u;
        // 0x39edd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EDDCu;
    // 0x39eddc: 0x0  nop
    ctx->pc = 0x39eddcu;
    // NOP
    ctx->pc = 0x39ede0u;
}
