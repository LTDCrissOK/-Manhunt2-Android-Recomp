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

// Function: sub_003B3638
// Address: 0x3b3638 - 0x3b36e8
void sub_003B3638_0x3b3638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3638_0x3b3638");
#endif

    switch (ctx->pc) {
        case 0x3b3638u: goto label_3b3638;
        case 0x3b363cu: goto label_3b363c;
        case 0x3b3640u: goto label_3b3640;
        case 0x3b3644u: goto label_3b3644;
        case 0x3b3648u: goto label_3b3648;
        case 0x3b364cu: goto label_3b364c;
        case 0x3b3650u: goto label_3b3650;
        case 0x3b3654u: goto label_3b3654;
        case 0x3b3658u: goto label_3b3658;
        case 0x3b365cu: goto label_3b365c;
        case 0x3b3660u: goto label_3b3660;
        case 0x3b3664u: goto label_3b3664;
        case 0x3b3668u: goto label_3b3668;
        case 0x3b366cu: goto label_3b366c;
        case 0x3b3670u: goto label_3b3670;
        case 0x3b3674u: goto label_3b3674;
        case 0x3b3678u: goto label_3b3678;
        case 0x3b367cu: goto label_3b367c;
        case 0x3b3680u: goto label_3b3680;
        case 0x3b3684u: goto label_3b3684;
        case 0x3b3688u: goto label_3b3688;
        case 0x3b368cu: goto label_3b368c;
        case 0x3b3690u: goto label_3b3690;
        case 0x3b3694u: goto label_3b3694;
        case 0x3b3698u: goto label_3b3698;
        case 0x3b369cu: goto label_3b369c;
        case 0x3b36a0u: goto label_3b36a0;
        case 0x3b36a4u: goto label_3b36a4;
        case 0x3b36a8u: goto label_3b36a8;
        case 0x3b36acu: goto label_3b36ac;
        case 0x3b36b0u: goto label_3b36b0;
        case 0x3b36b4u: goto label_3b36b4;
        case 0x3b36b8u: goto label_3b36b8;
        case 0x3b36bcu: goto label_3b36bc;
        case 0x3b36c0u: goto label_3b36c0;
        case 0x3b36c4u: goto label_3b36c4;
        case 0x3b36c8u: goto label_3b36c8;
        case 0x3b36ccu: goto label_3b36cc;
        case 0x3b36d0u: goto label_3b36d0;
        case 0x3b36d4u: goto label_3b36d4;
        case 0x3b36d8u: goto label_3b36d8;
        case 0x3b36dcu: goto label_3b36dc;
        case 0x3b36e0u: goto label_3b36e0;
        case 0x3b36e4u: goto label_3b36e4;
        default: break;
    }

    ctx->pc = 0x3b3638u;

label_3b3638:
    // 0x3b3638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b363c:
    // 0x3b363c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b3640:
    // 0x3b3640: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b3640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3b3644:
    // 0x3b3644: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b3644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b3648:
    // 0x3b3648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b364c:
    // 0x3b364c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3b3650:
    // 0x3b3650: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3b3650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3b3654:
    // 0x3b3654: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x3b3654u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_3b3658:
    // 0x3b3658: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x3b3658u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3b365c:
    // 0x3b365c: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_3b3660:
    if (ctx->pc == 0x3B3660u) {
        ctx->pc = 0x3B3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B365Cu;
        // 0x3b3660: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3664u;
        goto label_3b3664;
    }
    ctx->pc = 0x3B365Cu;
    {
        const bool branch_taken_0x3b365c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B365Cu;
        // 0x3b3660: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b365c) {
            ctx->pc = 0x3B36D4u;
            goto label_3b36d4;
        }
    }
    ctx->pc = 0x3B3664u;
label_3b3664:
    // 0x3b3664: 0x0  nop
    ctx->pc = 0x3b3664u;
    // NOP
label_3b3668:
    // 0x3b3668: 0xc0f2750  jal         func_3C9D40
label_3b366c:
    if (ctx->pc == 0x3B366Cu) {
        ctx->pc = 0x3B366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3668u;
        // 0x3b366c: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3670u;
        goto label_3b3670;
    }
    ctx->pc = 0x3B3668u;
    SET_GPR_U32(ctx, 31, 0x3B3670u);
    ctx->pc = 0x3B366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3668u;
    // 0x3b366c: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9D40u, 0x3B3668u, 0x3B3670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3670u;
label_3b3670:
    // 0x3b3670: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
label_3b3674:
    if (ctx->pc == 0x3B3674u) {
        ctx->pc = 0x3B3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3670u;
        // 0x3b3674: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3678u;
        goto label_3b3678;
    }
    ctx->pc = 0x3B3670u;
    {
        const bool branch_taken_0x3b3670 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3B3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3670u;
        // 0x3b3674: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3670) {
            ctx->pc = 0x3B3668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3668;
        }
    }
    ctx->pc = 0x3B3678u;
label_3b3678:
    // 0x3b3678: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3b3678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b367c:
    // 0x3b367c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b367cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3680:
    // 0x3b3680: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b3680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3684:
    // 0x3b3684: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b3684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b3688:
    // 0x3b3688: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3b3688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3b368c:
    // 0x3b368c: 0x40f809  jalr        $v0
label_3b3690:
    if (ctx->pc == 0x3B3690u) {
        ctx->pc = 0x3B3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B368Cu;
        // 0x3b3690: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3694u;
        goto label_3b3694;
    }
    ctx->pc = 0x3B368Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3694u);
        ctx->pc = 0x3B3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B368Cu;
        // 0x3b3690: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B368Cu, 0x3B3694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3694u;
label_3b3694:
    // 0x3b3694: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b3694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3b3698:
    // 0x3b3698: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3b3698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b369c:
    // 0x3b369c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b369cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b36a0:
    // 0x3b36a0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3b36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3b36a4:
    // 0x3b36a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b36a8:
    // 0x3b36a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3b36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3b36ac:
    // 0x3b36ac: 0x40f809  jalr        $v0
label_3b36b0:
    if (ctx->pc == 0x3B36B0u) {
        ctx->pc = 0x3B36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36ACu;
        // 0x3b36b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36B4u;
        goto label_3b36b4;
    }
    ctx->pc = 0x3B36ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B36B4u);
        ctx->pc = 0x3B36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36ACu;
        // 0x3b36b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B36ACu, 0x3B36B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B36B4u;
label_3b36b4:
    // 0x3b36b4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3b36b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3b36b8:
    // 0x3b36b8: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x3b36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_3b36bc:
    // 0x3b36bc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3b36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3b36c0:
    // 0x3b36c0: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x3b36c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_3b36c4:
    // 0x3b36c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b36c8:
    // 0x3b36c8: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3b36c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3b36cc:
    // 0x3b36cc: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x3b36ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_3b36d0:
    // 0x3b36d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b36d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b36d4:
    // 0x3b36d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b36d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b36d8:
    // 0x3b36d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b36d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b36dc:
    // 0x3b36dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b36dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3b36e0:
    // 0x3b36e0: 0x3e00008  jr          $ra
label_3b36e4:
    if (ctx->pc == 0x3B36E4u) {
        ctx->pc = 0x3B36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36E0u;
        // 0x3b36e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36E8u;
        goto label_fallthrough_0x3b36e0;
    }
    ctx->pc = 0x3B36E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36E0u;
        // 0x3b36e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B36E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b36e0:
    ctx->pc = 0x3B36E8u;
}
