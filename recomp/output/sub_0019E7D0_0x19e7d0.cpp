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

// Function: sub_0019E7D0
// Address: 0x19e7d0 - 0x19e8f4
void sub_0019E7D0_0x19e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E7D0_0x19e7d0");
#endif

    switch (ctx->pc) {
        case 0x19e7d0u: goto label_19e7d0;
        case 0x19e7d4u: goto label_19e7d4;
        case 0x19e7d8u: goto label_19e7d8;
        case 0x19e7dcu: goto label_19e7dc;
        case 0x19e7e0u: goto label_19e7e0;
        case 0x19e7e4u: goto label_19e7e4;
        case 0x19e7e8u: goto label_19e7e8;
        case 0x19e7ecu: goto label_19e7ec;
        case 0x19e7f0u: goto label_19e7f0;
        case 0x19e7f4u: goto label_19e7f4;
        case 0x19e7f8u: goto label_19e7f8;
        case 0x19e7fcu: goto label_19e7fc;
        case 0x19e800u: goto label_19e800;
        case 0x19e804u: goto label_19e804;
        case 0x19e808u: goto label_19e808;
        case 0x19e80cu: goto label_19e80c;
        case 0x19e810u: goto label_19e810;
        case 0x19e814u: goto label_19e814;
        case 0x19e818u: goto label_19e818;
        case 0x19e81cu: goto label_19e81c;
        case 0x19e820u: goto label_19e820;
        case 0x19e824u: goto label_19e824;
        case 0x19e828u: goto label_19e828;
        case 0x19e82cu: goto label_19e82c;
        case 0x19e830u: goto label_19e830;
        case 0x19e834u: goto label_19e834;
        case 0x19e838u: goto label_19e838;
        case 0x19e83cu: goto label_19e83c;
        case 0x19e840u: goto label_19e840;
        case 0x19e844u: goto label_19e844;
        case 0x19e848u: goto label_19e848;
        case 0x19e84cu: goto label_19e84c;
        case 0x19e850u: goto label_19e850;
        case 0x19e854u: goto label_19e854;
        case 0x19e858u: goto label_19e858;
        case 0x19e85cu: goto label_19e85c;
        case 0x19e860u: goto label_19e860;
        case 0x19e864u: goto label_19e864;
        case 0x19e868u: goto label_19e868;
        case 0x19e86cu: goto label_19e86c;
        case 0x19e870u: goto label_19e870;
        case 0x19e874u: goto label_19e874;
        case 0x19e878u: goto label_19e878;
        case 0x19e87cu: goto label_19e87c;
        case 0x19e880u: goto label_19e880;
        case 0x19e884u: goto label_19e884;
        case 0x19e888u: goto label_19e888;
        case 0x19e88cu: goto label_19e88c;
        case 0x19e890u: goto label_19e890;
        case 0x19e894u: goto label_19e894;
        case 0x19e898u: goto label_19e898;
        case 0x19e89cu: goto label_19e89c;
        case 0x19e8a0u: goto label_19e8a0;
        case 0x19e8a4u: goto label_19e8a4;
        case 0x19e8a8u: goto label_19e8a8;
        case 0x19e8acu: goto label_19e8ac;
        case 0x19e8b0u: goto label_19e8b0;
        case 0x19e8b4u: goto label_19e8b4;
        case 0x19e8b8u: goto label_19e8b8;
        case 0x19e8bcu: goto label_19e8bc;
        case 0x19e8c0u: goto label_19e8c0;
        case 0x19e8c4u: goto label_19e8c4;
        case 0x19e8c8u: goto label_19e8c8;
        case 0x19e8ccu: goto label_19e8cc;
        case 0x19e8d0u: goto label_19e8d0;
        case 0x19e8d4u: goto label_19e8d4;
        case 0x19e8d8u: goto label_19e8d8;
        case 0x19e8dcu: goto label_19e8dc;
        case 0x19e8e0u: goto label_19e8e0;
        case 0x19e8e4u: goto label_19e8e4;
        case 0x19e8e8u: goto label_19e8e8;
        case 0x19e8ecu: goto label_19e8ec;
        case 0x19e8f0u: goto label_19e8f0;
        default: break;
    }

    ctx->pc = 0x19e7d0u;

label_19e7d0:
    // 0x19e7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19e7d4:
    // 0x19e7d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e7d8:
    // 0x19e7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19e7dc:
    // 0x19e7dc: 0xc0679e8  jal         func_19E7A0
label_19e7e0:
    if (ctx->pc == 0x19E7E0u) {
        ctx->pc = 0x19E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7DCu;
        // 0x19e7e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7E4u;
        goto label_19e7e4;
    }
    ctx->pc = 0x19E7DCu;
    SET_GPR_U32(ctx, 31, 0x19E7E4u);
    ctx->pc = 0x19E7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7DCu;
    // 0x19e7e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E7A0u, 0x19E7DCu, 0x19E7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7E4u;
label_19e7e4:
    // 0x19e7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e7e8:
    // 0x19e7e8: 0x3e00008  jr          $ra
label_19e7ec:
    if (ctx->pc == 0x19E7ECu) {
        ctx->pc = 0x19E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7E8u;
        // 0x19e7ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7F0u;
        goto label_19e7f0;
    }
    ctx->pc = 0x19E7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7E8u;
        // 0x19e7ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E7F0u;
label_19e7f0:
    // 0x19e7f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19e7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19e7f4:
    // 0x19e7f4: 0x0  nop
    ctx->pc = 0x19e7f4u;
    // NOP
label_19e7f8:
    // 0x19e7f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19e7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19e7fc:
    // 0x19e7fc: 0x0  nop
    ctx->pc = 0x19e7fcu;
    // NOP
label_19e800:
    // 0x19e800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19e804:
    // 0x19e804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19e808:
    // 0x19e808: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19e808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19e80c:
    // 0x19e80c: 0xc061a26  jal         func_186898
label_19e810:
    if (ctx->pc == 0x19E810u) {
        ctx->pc = 0x19E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E80Cu;
        // 0x19e810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E814u;
        goto label_19e814;
    }
    ctx->pc = 0x19E80Cu;
    SET_GPR_U32(ctx, 31, 0x19E814u);
    ctx->pc = 0x19E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E80Cu;
    // 0x19e810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19E80Cu, 0x19E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E814u;
label_19e814:
    // 0x19e814: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x19e814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_19e818:
    // 0x19e818: 0xc0f6da6  jal         func_3DB698
label_19e81c:
    if (ctx->pc == 0x19E81Cu) {
        ctx->pc = 0x19E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E818u;
        // 0x19e81c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E820u;
        goto label_19e820;
    }
    ctx->pc = 0x19E818u;
    SET_GPR_U32(ctx, 31, 0x19E820u);
    ctx->pc = 0x19E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E818u;
    // 0x19e81c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x19E818u, 0x19E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E820u;
label_19e820:
    // 0x19e820: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19e824:
    if (ctx->pc == 0x19E824u) {
        ctx->pc = 0x19E828u;
        goto label_19e828;
    }
    ctx->pc = 0x19E820u;
    {
        const bool branch_taken_0x19e820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e820) {
            ctx->pc = 0x19E838u;
            goto label_19e838;
        }
    }
    ctx->pc = 0x19E828u;
label_19e828:
    // 0x19e828: 0xc08da4c  jal         func_236930
label_19e82c:
    if (ctx->pc == 0x19E82Cu) {
        ctx->pc = 0x19E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E828u;
        // 0x19e82c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E830u;
        goto label_19e830;
    }
    ctx->pc = 0x19E828u;
    SET_GPR_U32(ctx, 31, 0x19E830u);
    ctx->pc = 0x19E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E828u;
    // 0x19e82c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236930u, 0x19E828u, 0x19E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E830u;
label_19e830:
    // 0x19e830: 0x10000033  b           . + 4 + (0x33 << 2)
label_19e834:
    if (ctx->pc == 0x19E834u) {
        ctx->pc = 0x19E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E830u;
        // 0x19e834: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E838u;
        goto label_19e838;
    }
    ctx->pc = 0x19E830u;
    {
        const bool branch_taken_0x19e830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E830u;
        // 0x19e834: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e830) {
            ctx->pc = 0x19E900u;
            return;
        }
    }
    ctx->pc = 0x19E838u;
label_19e838:
    // 0x19e838: 0xc061a1e  jal         func_186878
label_19e83c:
    if (ctx->pc == 0x19E83Cu) {
        ctx->pc = 0x19E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E838u;
        // 0x19e83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E840u;
        goto label_19e840;
    }
    ctx->pc = 0x19E838u;
    SET_GPR_U32(ctx, 31, 0x19E840u);
    ctx->pc = 0x19E83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E838u;
    // 0x19e83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19E838u, 0x19E840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E840u;
label_19e840:
    // 0x19e840: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19e840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19e844:
    // 0x19e844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e848:
    // 0x19e848: 0xc06cdda  jal         func_1B3768
label_19e84c:
    if (ctx->pc == 0x19E84Cu) {
        ctx->pc = 0x19E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E848u;
        // 0x19e84c: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E850u;
        goto label_19e850;
    }
    ctx->pc = 0x19E848u;
    SET_GPR_U32(ctx, 31, 0x19E850u);
    ctx->pc = 0x19E84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E848u;
    // 0x19e84c: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x19E848u, 0x19E850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E850u;
label_19e850:
    // 0x19e850: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19e850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19e854:
    // 0x19e854: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19e858:
    if (ctx->pc == 0x19E858u) {
        ctx->pc = 0x19E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E854u;
        // 0x19e858: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E85Cu;
        goto label_19e85c;
    }
    ctx->pc = 0x19E854u;
    {
        const bool branch_taken_0x19e854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e854) {
            ctx->pc = 0x19E858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E854u;
            // 0x19e858: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E870u;
            goto label_19e870;
        }
    }
    ctx->pc = 0x19E85Cu;
label_19e85c:
    // 0x19e85c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19e860:
    // 0x19e860: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_19e864:
    // 0x19e864: 0x40f809  jalr        $v0
label_19e868:
    if (ctx->pc == 0x19E868u) {
        ctx->pc = 0x19E86Cu;
        goto label_19e86c;
    }
    ctx->pc = 0x19E864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E86Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E864u, 0x19E86Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E86Cu;
label_19e86c:
    // 0x19e86c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x19e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19e870:
    // 0x19e870: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x19e870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_19e874:
    // 0x19e874: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_19e878:
    if (ctx->pc == 0x19E878u) {
        ctx->pc = 0x19E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E874u;
        // 0x19e878: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E87Cu;
        goto label_19e87c;
    }
    ctx->pc = 0x19E874u;
    {
        const bool branch_taken_0x19e874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E874u;
        // 0x19e878: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e874) {
            ctx->pc = 0x19E8FCu;
            return;
        }
    }
    ctx->pc = 0x19E87Cu;
label_19e87c:
    // 0x19e87c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19e880:
    // 0x19e880: 0x2442fe60  addiu       $v0, $v0, -0x1A0
    ctx->pc = 0x19e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966880));
label_19e884:
    // 0x19e884: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19e884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19e888:
    // 0x19e888: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19e888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19e88c:
    // 0x19e88c: 0x800008  jr          $a0
label_19e890:
    if (ctx->pc == 0x19E890u) {
        ctx->pc = 0x19E894u;
        goto label_19e894;
    }
    ctx->pc = 0x19E88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E894u: goto label_19e894;
            case 0x19E8A4u: goto label_19e8a4;
            case 0x19E8B4u: goto label_19e8b4;
            case 0x19E8C4u: goto label_19e8c4;
            case 0x19E8D4u: goto label_19e8d4;
            case 0x19E8E4u: goto label_19e8e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E88Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19E894u;
label_19e894:
    // 0x19e894: 0xc067b2a  jal         func_19ECA8
label_19e898:
    if (ctx->pc == 0x19E898u) {
        ctx->pc = 0x19E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E894u;
        // 0x19e898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E89Cu;
        goto label_19e89c;
    }
    ctx->pc = 0x19E894u;
    SET_GPR_U32(ctx, 31, 0x19E89Cu);
    ctx->pc = 0x19E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E894u;
    // 0x19e898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19ECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ECA8u, 0x19E894u, 0x19E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E89Cu;
label_19e89c:
    // 0x19e89c: 0x10000018  b           . + 4 + (0x18 << 2)
label_19e8a0:
    if (ctx->pc == 0x19E8A0u) {
        ctx->pc = 0x19E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E89Cu;
        // 0x19e8a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8A4u;
        goto label_19e8a4;
    }
    ctx->pc = 0x19E89Cu;
    {
        const bool branch_taken_0x19e89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E89Cu;
        // 0x19e8a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e89c) {
            ctx->pc = 0x19E900u;
            return;
        }
    }
    ctx->pc = 0x19E8A4u;
label_19e8a4:
    // 0x19e8a4: 0xc067a52  jal         func_19E948
label_19e8a8:
    if (ctx->pc == 0x19E8A8u) {
        ctx->pc = 0x19E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8A4u;
        // 0x19e8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8ACu;
        goto label_19e8ac;
    }
    ctx->pc = 0x19E8A4u;
    SET_GPR_U32(ctx, 31, 0x19E8ACu);
    ctx->pc = 0x19E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8A4u;
    // 0x19e8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E948u, 0x19E8A4u, 0x19E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8ACu;
label_19e8ac:
    // 0x19e8ac: 0x10000014  b           . + 4 + (0x14 << 2)
label_19e8b0:
    if (ctx->pc == 0x19E8B0u) {
        ctx->pc = 0x19E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8ACu;
        // 0x19e8b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8B4u;
        goto label_19e8b4;
    }
    ctx->pc = 0x19E8ACu;
    {
        const bool branch_taken_0x19e8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8ACu;
        // 0x19e8b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8ac) {
            ctx->pc = 0x19E900u;
            return;
        }
    }
    ctx->pc = 0x19E8B4u;
label_19e8b4:
    // 0x19e8b4: 0xc067a44  jal         func_19E910
label_19e8b8:
    if (ctx->pc == 0x19E8B8u) {
        ctx->pc = 0x19E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8B4u;
        // 0x19e8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8BCu;
        goto label_19e8bc;
    }
    ctx->pc = 0x19E8B4u;
    SET_GPR_U32(ctx, 31, 0x19E8BCu);
    ctx->pc = 0x19E8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8B4u;
    // 0x19e8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E910u, 0x19E8B4u, 0x19E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8BCu;
label_19e8bc:
    // 0x19e8bc: 0x10000010  b           . + 4 + (0x10 << 2)
label_19e8c0:
    if (ctx->pc == 0x19E8C0u) {
        ctx->pc = 0x19E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8BCu;
        // 0x19e8c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8C4u;
        goto label_19e8c4;
    }
    ctx->pc = 0x19E8BCu;
    {
        const bool branch_taken_0x19e8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8BCu;
        // 0x19e8c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8bc) {
            ctx->pc = 0x19E900u;
            return;
        }
    }
    ctx->pc = 0x19E8C4u;
label_19e8c4:
    // 0x19e8c4: 0xc067acc  jal         func_19EB30
label_19e8c8:
    if (ctx->pc == 0x19E8C8u) {
        ctx->pc = 0x19E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8C4u;
        // 0x19e8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8CCu;
        goto label_19e8cc;
    }
    ctx->pc = 0x19E8C4u;
    SET_GPR_U32(ctx, 31, 0x19E8CCu);
    ctx->pc = 0x19E8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8C4u;
    // 0x19e8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EB30u, 0x19E8C4u, 0x19E8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8CCu;
label_19e8cc:
    // 0x19e8cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_19e8d0:
    if (ctx->pc == 0x19E8D0u) {
        ctx->pc = 0x19E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8CCu;
        // 0x19e8d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8D4u;
        goto label_19e8d4;
    }
    ctx->pc = 0x19E8CCu;
    {
        const bool branch_taken_0x19e8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8CCu;
        // 0x19e8d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8cc) {
            ctx->pc = 0x19E900u;
            return;
        }
    }
    ctx->pc = 0x19E8D4u;
label_19e8d4:
    // 0x19e8d4: 0xc067b34  jal         func_19ECD0
label_19e8d8:
    if (ctx->pc == 0x19E8D8u) {
        ctx->pc = 0x19E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8D4u;
        // 0x19e8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8DCu;
        goto label_19e8dc;
    }
    ctx->pc = 0x19E8D4u;
    SET_GPR_U32(ctx, 31, 0x19E8DCu);
    ctx->pc = 0x19E8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8D4u;
    // 0x19e8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ECD0u, 0x19E8D4u, 0x19E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8DCu;
label_19e8dc:
    // 0x19e8dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_19e8e0:
    if (ctx->pc == 0x19E8E0u) {
        ctx->pc = 0x19E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8DCu;
        // 0x19e8e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8E4u;
        goto label_19e8e4;
    }
    ctx->pc = 0x19E8DCu;
    {
        const bool branch_taken_0x19e8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8DCu;
        // 0x19e8e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8dc) {
            ctx->pc = 0x19E900u;
            return;
        }
    }
    ctx->pc = 0x19E8E4u;
label_19e8e4:
    // 0x19e8e4: 0xc067b78  jal         func_19EDE0
label_19e8e8:
    if (ctx->pc == 0x19E8E8u) {
        ctx->pc = 0x19E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8E4u;
        // 0x19e8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8ECu;
        goto label_19e8ec;
    }
    ctx->pc = 0x19E8E4u;
    SET_GPR_U32(ctx, 31, 0x19E8ECu);
    ctx->pc = 0x19E8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8E4u;
    // 0x19e8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EDE0u, 0x19E8E4u, 0x19E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8ECu;
label_19e8ec:
    // 0x19e8ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_19e8f0:
    if (ctx->pc == 0x19E8F0u) {
        ctx->pc = 0x19E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8ECu;
        // 0x19e8f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8F4u;
        goto label_fallthrough_0x19e8ec;
    }
    ctx->pc = 0x19E8ECu;
    {
        const bool branch_taken_0x19e8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8ECu;
        // 0x19e8f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8ec) {
            ctx->pc = 0x19E900u;
            return;
        }
    }
label_fallthrough_0x19e8ec:
    ctx->pc = 0x19E8F4u;
}
