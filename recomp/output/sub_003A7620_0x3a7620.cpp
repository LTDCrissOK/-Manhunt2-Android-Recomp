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

// Function: sub_003A7620
// Address: 0x3a7620 - 0x3a7810
void sub_003A7620_0x3a7620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7620_0x3a7620");
#endif

    switch (ctx->pc) {
        case 0x3a7660u: goto label_3a7660;
        case 0x3a7674u: goto label_3a7674;
        case 0x3a7690u: goto label_3a7690;
        case 0x3a7698u: goto label_3a7698;
        case 0x3a76e0u: goto label_3a76e0;
        case 0x3a7718u: goto label_3a7718;
        case 0x3a7720u: goto label_3a7720;
        case 0x3a772cu: goto label_3a772c;
        case 0x3a7740u: goto label_3a7740;
        case 0x3a77a4u: goto label_3a77a4;
        case 0x3a77b0u: goto label_3a77b0;
        case 0x3a77d0u: goto label_3a77d0;
        case 0x3a77dcu: goto label_3a77dc;
        case 0x3a77e4u: goto label_3a77e4;
        default: break;
    }

    ctx->pc = 0x3a7620u;

    // 0x3a7620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a7620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a7624: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a7624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a7628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a7628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a762c: 0x24633fb0  addiu       $v1, $v1, 0x3FB0
    ctx->pc = 0x3a762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16304));
    // 0x3a7630: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a7630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a7634: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a7634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a7638: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a763c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a7640: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a7640u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x413FB0u));
    // 0x3a7644: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a7648: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A7648u;
    {
        const bool branch_taken_0x3a7648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7648u;
        // 0x3a764c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7648) {
            ctx->pc = 0x3A76C0u;
            goto label_3a76c0;
        }
    }
    ctx->pc = 0x3A7650u;
    // 0x3a7650: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x3a7650u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x3a7654: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3a7654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7658: 0x26703fb8  addiu       $s0, $s3, 0x3FB8
    ctx->pc = 0x3a7658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16312));
    // 0x3a765c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x3a765cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3a7660:
    // 0x3a7660: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a7660u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a7664: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7664u;
    {
        const bool branch_taken_0x3a7664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a7664) {
            ctx->pc = 0x3A7668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7664u;
            // 0x3a7668: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7678u;
            goto label_3a7678;
        }
    }
    ctx->pc = 0x3A766Cu;
    // 0x3a766c: 0xc0e9b64  jal         func_3A6D90
    ctx->pc = 0x3A766Cu;
    SET_GPR_U32(ctx, 31, 0x3A7674u);
    ctx->pc = 0x3A7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A766Cu;
    // 0x3a7670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6D90u, 0x3A766Cu, 0x3A7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7674u;
label_3a7674:
    // 0x3a7674: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a7674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a7678:
    // 0x3a7678: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A7678u;
    {
        const bool branch_taken_0x3a7678 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3A767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7678u;
        // 0x3a767c: 0x26100238  addiu       $s0, $s0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7678) {
            ctx->pc = 0x3A7660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7660;
        }
    }
    ctx->pc = 0x3A7680u;
    // 0x3a7680: 0x26643fb8  addiu       $a0, $s3, 0x3FB8
    ctx->pc = 0x3a7680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16312));
    // 0x3a7684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a7684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7688: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A7688u;
    SET_GPR_U32(ctx, 31, 0x3A7690u);
    ctx->pc = 0x3A768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7688u;
    // 0x3a768c: 0x24064700  addiu       $a2, $zero, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A7688u, 0x3A7690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7690u;
label_3a7690:
    // 0x3a7690: 0xc0e9d66  jal         func_3A7598
    ctx->pc = 0x3A7690u;
    SET_GPR_U32(ctx, 31, 0x3A7698u);
    ctx->pc = 0x3A7598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7598u, 0x3A7690u, 0x3A7698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7698u;
label_3a7698:
    // 0x3a7698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a769c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a76a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a76a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a76a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a76a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a76a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a76a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a76ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a76acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a76b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a76b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a76b4: 0x80e9d36  j           func_3A74D8
    ctx->pc = 0x3A76B4u;
    ctx->pc = 0x3A76B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A76B4u;
    // 0x3a76b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74D8u;
    sub_003A74D8_0x3a74d8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A76BCu;
    // 0x3a76bc: 0x0  nop
    ctx->pc = 0x3a76bcu;
    // NOP
label_3a76c0:
    // 0x3a76c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a76c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a76c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a76c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a76c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a76c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a76cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a76ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a76d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a76d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a76d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A76D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76D4u;
        // 0x3a76d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A76D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A76DCu;
    // 0x3a76dc: 0x0  nop
    ctx->pc = 0x3a76dcu;
    // NOP
label_3a76e0:
    // 0x3a76e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a76e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a76e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a76e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a76e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a76e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a76ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a76ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a76f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a76f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a76f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a76f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a76f8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3a76f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a76fc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3a76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3a7700: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3a7700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3a7704: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a7704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a7708: 0x1860003a  blez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3A7708u;
    {
        const bool branch_taken_0x3a7708 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7708u;
        // 0x3a770c: 0x24510038  addiu       $s1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7708) {
            ctx->pc = 0x3A77F4u;
            goto label_3a77f4;
        }
    }
    ctx->pc = 0x3A7710u;
    // 0x3a7710: 0xc0e673a  jal         func_399CE8
    ctx->pc = 0x3A7710u;
    SET_GPR_U32(ctx, 31, 0x3A7718u);
    ctx->pc = 0x3A7714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7710u;
    // 0x3a7714: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399CE8u, 0x3A7710u, 0x3A7718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7718u;
label_3a7718:
    // 0x3a7718: 0xc0e6660  jal         func_399980
    ctx->pc = 0x3A7718u;
    SET_GPR_U32(ctx, 31, 0x3A7720u);
    ctx->pc = 0x3A771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7718u;
    // 0x3a771c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399980u, 0x3A7718u, 0x3A7720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7720u;
label_3a7720:
    // 0x3a7720: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x3a7720u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a7724: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A7724u;
    SET_GPR_U32(ctx, 31, 0x3A772Cu);
    ctx->pc = 0x3A7728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7724u;
    // 0x3a7728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A7724u, 0x3A772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A772Cu;
label_3a772c:
    // 0x3a772c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a772cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7730: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a7730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7734: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A7734u;
    {
        const bool branch_taken_0x3a7734 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7734u;
        // 0x3a7738: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7734) {
            ctx->pc = 0x3A775Cu;
            goto label_3a775c;
        }
    }
    ctx->pc = 0x3A773Cu;
    // 0x3a773c: 0x0  nop
    ctx->pc = 0x3a773cu;
    // NOP
label_3a7740:
    // 0x3a7740: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x3a7740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3a7744: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a7744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a7748: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a7748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a774c: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x3a774cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3a7750: 0x0  nop
    ctx->pc = 0x3a7750u;
    // NOP
    // 0x3a7754: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A7754u;
    {
        const bool branch_taken_0x3a7754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7754u;
        // 0x3a7758: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7754) {
            ctx->pc = 0x3A7740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7740;
        }
    }
    ctx->pc = 0x3A775Cu;
label_3a775c:
    // 0x3a775c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3a775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a7760: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A7760u;
    {
        const bool branch_taken_0x3a7760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7760u;
        // 0x3a7764: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7760) {
            ctx->pc = 0x3A7788u;
            goto label_3a7788;
        }
    }
    ctx->pc = 0x3A7768u;
    // 0x3a7768: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3a7768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a776c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a776cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7770: 0x2484e470  addiu       $a0, $a0, -0x1B90
    ctx->pc = 0x3a7770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960240));
    // 0x3a7774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a7774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a7778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a777c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a777cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a7780: 0x80e9d40  j           func_3A7500
    ctx->pc = 0x3A7780u;
    ctx->pc = 0x3A7784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7780u;
    // 0x3a7784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7500u;
    sub_003A7500_0x3a7500(rdram, ctx, runtime); return;
    ctx->pc = 0x3A7788u;
label_3a7788:
    // 0x3a7788: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x3a7788u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3a778c: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x3a778cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3a7790: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x3a7790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3a7794: 0x842f8  dsll        $t0, $t0, 11
    ctx->pc = 0x3a7794u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 11);
    // 0x3a7798: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3a7798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3a779c: 0xc0e65f8  jal         func_3997E0
    ctx->pc = 0x3A779Cu;
    SET_GPR_U32(ctx, 31, 0x3A77A4u);
    ctx->pc = 0x3A77A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A779Cu;
    // 0x3a77a0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3997E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3997E0u, 0x3A779Cu, 0x3A77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A77A4u;
label_3a77a4:
    // 0x3a77a4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3a77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3a77a8: 0xc0e6798  jal         func_399E60
    ctx->pc = 0x3A77A8u;
    SET_GPR_U32(ctx, 31, 0x3A77B0u);
    ctx->pc = 0x3A77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A77A8u;
    // 0x3a77ac: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x3A77A8u, 0x3A77B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A77B0u;
label_3a77b0:
    // 0x3a77b0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3a77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3a77b4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3a77b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3a77b8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x3a77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x3a77bc: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x3a77bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x3a77c0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a77c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a77c4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x3a77c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3a77c8: 0xc0e69c2  jal         func_39A708
    ctx->pc = 0x3A77C8u;
    SET_GPR_U32(ctx, 31, 0x3A77D0u);
    ctx->pc = 0x3A77CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A77C8u;
    // 0x3a77cc: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A708u, 0x3A77C8u, 0x3A77D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A77D0u;
label_3a77d0:
    // 0x3a77d0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3a77d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3a77d4: 0xc0e66bc  jal         func_399AF0
    ctx->pc = 0x3A77D4u;
    SET_GPR_U32(ctx, 31, 0x3A77DCu);
    ctx->pc = 0x3A77D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A77D4u;
    // 0x3a77d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AF0u, 0x3A77D4u, 0x3A77DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A77DCu;
label_3a77dc:
    // 0x3a77dc: 0xc0e66f8  jal         func_399BE0
    ctx->pc = 0x3A77DCu;
    SET_GPR_U32(ctx, 31, 0x3A77E4u);
    ctx->pc = 0x3A77E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A77DCu;
    // 0x3a77e0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BE0u, 0x3A77DCu, 0x3A77E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A77E4u;
label_3a77e4:
    // 0x3a77e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a77e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a77e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a77ec: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a77ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a77f0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3a77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3a77f4:
    // 0x3a77f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a77f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a77f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a77f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a77fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a77fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7800: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a7800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a7804: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7804u;
        // 0x3a7808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A780Cu;
    // 0x3a780c: 0x0  nop
    ctx->pc = 0x3a780cu;
    // NOP
    ctx->pc = 0x3a7810u;
}
