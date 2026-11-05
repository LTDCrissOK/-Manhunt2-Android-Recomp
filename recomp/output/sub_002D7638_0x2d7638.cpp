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

// Function: sub_002D7638
// Address: 0x2d7638 - 0x2d7710
void sub_002D7638_0x2d7638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7638_0x2d7638");
#endif

    switch (ctx->pc) {
        case 0x2d7658u: goto label_2d7658;
        case 0x2d7678u: goto label_2d7678;
        default: break;
    }

    ctx->pc = 0x2d7638u;

    // 0x2d7638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d7638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d763c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d7640: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d7640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d7644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7648: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d7648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d764c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d7650: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2D7650u;
    SET_GPR_U32(ctx, 31, 0x2D7658u);
    ctx->pc = 0x2D7654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7650u;
    // 0x2d7654: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2D7650u, 0x2D7658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7658u;
label_2d7658:
    // 0x2d7658: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2d7658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2d765c: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x2d765cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2d7660: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2d7660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d7664: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2d7664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d7668: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D7668u;
    {
        const bool branch_taken_0x2d7668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7668u;
        // 0x2d766c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7668) {
            ctx->pc = 0x2D7694u;
            goto label_2d7694;
        }
    }
    ctx->pc = 0x2D7670u;
    // 0x2d7670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7674: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d7674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2d7678:
    // 0x2d7678: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2d7678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d767c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D767Cu;
    {
        const bool branch_taken_0x2d767c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d767c) {
            ctx->pc = 0x2D7680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D767Cu;
            // 0x2d7680: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D768Cu;
            goto label_2d768c;
        }
    }
    ctx->pc = 0x2D7684u;
    // 0x2d7684: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2d7684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7688: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d768c:
    // 0x2d768c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D768Cu;
    {
        const bool branch_taken_0x2d768c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d768c) {
            ctx->pc = 0x2D7690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D768Cu;
            // 0x2d7690: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7678;
        }
    }
    ctx->pc = 0x2D7694u;
label_2d7694:
    // 0x2d7694: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2d7694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d7698: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7698u;
    {
        const bool branch_taken_0x2d7698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7698u;
        // 0x2d769c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7698) {
            ctx->pc = 0x2D76B4u;
            goto label_2d76b4;
        }
    }
    ctx->pc = 0x2D76A0u;
    // 0x2d76a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2d76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d76a4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2d76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d76a8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d76a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d76ac: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D76ACu;
    {
        const bool branch_taken_0x2d76ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d76ac) {
            ctx->pc = 0x2D76B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D76ACu;
            // 0x2d76b0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D76BCu;
            goto label_2d76bc;
        }
    }
    ctx->pc = 0x2D76B4u;
label_2d76b4:
    // 0x2d76b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d76b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d76b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d76bc:
    // 0x2d76bc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2d76bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2d76c0: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D76C0u;
    {
        const bool branch_taken_0x2d76c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76C0u;
        // 0x2d76c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76c0) {
            ctx->pc = 0x2D76D0u;
            goto label_2d76d0;
        }
    }
    ctx->pc = 0x2D76C8u;
    // 0x2d76c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D76C8u;
    {
        const bool branch_taken_0x2d76c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76C8u;
        // 0x2d76cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76c8) {
            ctx->pc = 0x2D76F8u;
            goto label_2d76f8;
        }
    }
    ctx->pc = 0x2D76D0u;
label_2d76d0:
    // 0x2d76d0: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2d76d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2d76d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d76d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D76D8u;
    {
        const bool branch_taken_0x2d76d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76D8u;
        // 0x2d76dc: 0x24a40014  addiu       $a0, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76d8) {
            ctx->pc = 0x2D76ECu;
            goto label_2d76ec;
        }
    }
    ctx->pc = 0x2D76E0u;
    // 0x2d76e0: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x2d76e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d76e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D76E4u;
    {
        const bool branch_taken_0x2d76e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76E4u;
        // 0x2d76e8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76e4) {
            ctx->pc = 0x2D76F0u;
            goto label_2d76f0;
        }
    }
    ctx->pc = 0x2D76ECu;
label_2d76ec:
    // 0x2d76ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d76ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d76f0:
    // 0x2d76f0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2d76f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d76f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d76f8:
    // 0x2d76f8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d76f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d76fc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d76fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7700: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d7700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7704: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7704u;
        // 0x2d7708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D770Cu;
    // 0x2d770c: 0x0  nop
    ctx->pc = 0x2d770cu;
    // NOP
    ctx->pc = 0x2d7710u;
}
