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

// Function: sub_003EB7A0
// Address: 0x3eb7a0 - 0x3eb8d8
void sub_003EB7A0_0x3eb7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB7A0_0x3eb7a0");
#endif

    switch (ctx->pc) {
        case 0x3eb7a0u: goto label_3eb7a0;
        case 0x3eb7a4u: goto label_3eb7a4;
        case 0x3eb7a8u: goto label_3eb7a8;
        case 0x3eb7acu: goto label_3eb7ac;
        case 0x3eb7b0u: goto label_3eb7b0;
        case 0x3eb7b4u: goto label_3eb7b4;
        case 0x3eb7b8u: goto label_3eb7b8;
        case 0x3eb7bcu: goto label_3eb7bc;
        case 0x3eb7c0u: goto label_3eb7c0;
        case 0x3eb7c4u: goto label_3eb7c4;
        case 0x3eb7c8u: goto label_3eb7c8;
        case 0x3eb7ccu: goto label_3eb7cc;
        case 0x3eb7d0u: goto label_3eb7d0;
        case 0x3eb7d4u: goto label_3eb7d4;
        case 0x3eb7d8u: goto label_3eb7d8;
        case 0x3eb7dcu: goto label_3eb7dc;
        case 0x3eb7e0u: goto label_3eb7e0;
        case 0x3eb7e4u: goto label_3eb7e4;
        case 0x3eb7e8u: goto label_3eb7e8;
        case 0x3eb7ecu: goto label_3eb7ec;
        case 0x3eb7f0u: goto label_3eb7f0;
        case 0x3eb7f4u: goto label_3eb7f4;
        case 0x3eb7f8u: goto label_3eb7f8;
        case 0x3eb7fcu: goto label_3eb7fc;
        case 0x3eb800u: goto label_3eb800;
        case 0x3eb804u: goto label_3eb804;
        case 0x3eb808u: goto label_3eb808;
        case 0x3eb80cu: goto label_3eb80c;
        case 0x3eb810u: goto label_3eb810;
        case 0x3eb814u: goto label_3eb814;
        case 0x3eb818u: goto label_3eb818;
        case 0x3eb81cu: goto label_3eb81c;
        case 0x3eb820u: goto label_3eb820;
        case 0x3eb824u: goto label_3eb824;
        case 0x3eb828u: goto label_3eb828;
        case 0x3eb82cu: goto label_3eb82c;
        case 0x3eb830u: goto label_3eb830;
        case 0x3eb834u: goto label_3eb834;
        case 0x3eb838u: goto label_3eb838;
        case 0x3eb83cu: goto label_3eb83c;
        case 0x3eb840u: goto label_3eb840;
        case 0x3eb844u: goto label_3eb844;
        case 0x3eb848u: goto label_3eb848;
        case 0x3eb84cu: goto label_3eb84c;
        case 0x3eb850u: goto label_3eb850;
        case 0x3eb854u: goto label_3eb854;
        case 0x3eb858u: goto label_3eb858;
        case 0x3eb85cu: goto label_3eb85c;
        case 0x3eb860u: goto label_3eb860;
        case 0x3eb864u: goto label_3eb864;
        case 0x3eb868u: goto label_3eb868;
        case 0x3eb86cu: goto label_3eb86c;
        case 0x3eb870u: goto label_3eb870;
        case 0x3eb874u: goto label_3eb874;
        case 0x3eb878u: goto label_3eb878;
        case 0x3eb87cu: goto label_3eb87c;
        case 0x3eb880u: goto label_3eb880;
        case 0x3eb884u: goto label_3eb884;
        case 0x3eb888u: goto label_3eb888;
        case 0x3eb88cu: goto label_3eb88c;
        case 0x3eb890u: goto label_3eb890;
        case 0x3eb894u: goto label_3eb894;
        case 0x3eb898u: goto label_3eb898;
        case 0x3eb89cu: goto label_3eb89c;
        case 0x3eb8a0u: goto label_3eb8a0;
        case 0x3eb8a4u: goto label_3eb8a4;
        case 0x3eb8a8u: goto label_3eb8a8;
        case 0x3eb8acu: goto label_3eb8ac;
        case 0x3eb8b0u: goto label_3eb8b0;
        case 0x3eb8b4u: goto label_3eb8b4;
        case 0x3eb8b8u: goto label_3eb8b8;
        case 0x3eb8bcu: goto label_3eb8bc;
        case 0x3eb8c0u: goto label_3eb8c0;
        case 0x3eb8c4u: goto label_3eb8c4;
        case 0x3eb8c8u: goto label_3eb8c8;
        case 0x3eb8ccu: goto label_3eb8cc;
        case 0x3eb8d0u: goto label_3eb8d0;
        case 0x3eb8d4u: goto label_3eb8d4;
        default: break;
    }

    ctx->pc = 0x3eb7a0u;

label_3eb7a0:
    // 0x3eb7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eb7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eb7a4:
    // 0x3eb7a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eb7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eb7a8:
    // 0x3eb7a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eb7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eb7ac:
    // 0x3eb7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eb7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb7b0:
    // 0x3eb7b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eb7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eb7b4:
    // 0x3eb7b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eb7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eb7b8:
    // 0x3eb7b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb7bc:
    // 0x3eb7bc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eb7c0:
    if (ctx->pc == 0x3EB7C0u) {
        ctx->pc = 0x3EB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7BCu;
        // 0x3eb7c0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB7C4u;
        goto label_3eb7c4;
    }
    ctx->pc = 0x3EB7BCu;
    {
        const bool branch_taken_0x3eb7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7BCu;
        // 0x3eb7c0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb7bc) {
            ctx->pc = 0x3EB83Cu;
            goto label_3eb83c;
        }
    }
    ctx->pc = 0x3EB7C4u;
label_3eb7c4:
    // 0x3eb7c4: 0x0  nop
    ctx->pc = 0x3eb7c4u;
    // NOP
label_3eb7c8:
    // 0x3eb7c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb7cc:
    // 0x3eb7cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb7d0:
    // 0x3eb7d0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb7d4:
    if (ctx->pc == 0x3EB7D4u) {
        ctx->pc = 0x3EB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7D0u;
        // 0x3eb7d4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB7D8u;
        goto label_3eb7d8;
    }
    ctx->pc = 0x3EB7D0u;
    {
        const bool branch_taken_0x3eb7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb7d0) {
            ctx->pc = 0x3EB7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB7D0u;
            // 0x3eb7d4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB82Cu;
            goto label_3eb82c;
        }
    }
    ctx->pc = 0x3EB7D8u;
label_3eb7d8:
    // 0x3eb7d8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb7dc:
    // 0x3eb7dc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb7dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb7e0:
    // 0x3eb7e0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb7e4:
    // 0x3eb7e4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb7e8:
    if (ctx->pc == 0x3EB7E8u) {
        ctx->pc = 0x3EB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7E4u;
        // 0x3eb7e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB7ECu;
        goto label_3eb7ec;
    }
    ctx->pc = 0x3EB7E4u;
    {
        const bool branch_taken_0x3eb7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb7e4) {
            ctx->pc = 0x3EB7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB7E4u;
            // 0x3eb7e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB818u;
            goto label_3eb818;
        }
    }
    ctx->pc = 0x3EB7ECu;
label_3eb7ec:
    // 0x3eb7ec: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb7f0:
    // 0x3eb7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb7f4:
    // 0x3eb7f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb7f8:
    // 0x3eb7f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb7fc:
    // 0x3eb7fc: 0x40f809  jalr        $v0
label_3eb800:
    if (ctx->pc == 0x3EB800u) {
        ctx->pc = 0x3EB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7FCu;
        // 0x3eb800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB804u;
        goto label_3eb804;
    }
    ctx->pc = 0x3EB7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB804u);
        ctx->pc = 0x3EB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB7FCu;
        // 0x3eb800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB7FCu, 0x3EB804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB804u;
label_3eb804:
    // 0x3eb804: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb808:
    // 0x3eb808: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb80c:
    // 0x3eb80c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb810:
    if (ctx->pc == 0x3EB810u) {
        ctx->pc = 0x3EB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB80Cu;
        // 0x3eb810: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB814u;
        goto label_3eb814;
    }
    ctx->pc = 0x3EB80Cu;
    {
        const bool branch_taken_0x3eb80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB80Cu;
        // 0x3eb810: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb80c) {
            ctx->pc = 0x3EB7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb7f0;
        }
    }
    ctx->pc = 0x3EB814u;
label_3eb814:
    // 0x3eb814: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb818:
    // 0x3eb818: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb81c:
    // 0x3eb81c: 0xc0f528a  jal         func_3D4A28
label_3eb820:
    if (ctx->pc == 0x3EB820u) {
        ctx->pc = 0x3EB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB81Cu;
        // 0x3eb820: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB824u;
        goto label_3eb824;
    }
    ctx->pc = 0x3EB81Cu;
    SET_GPR_U32(ctx, 31, 0x3EB824u);
    ctx->pc = 0x3EB820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB81Cu;
    // 0x3eb820: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB81Cu, 0x3EB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB824u;
label_3eb824:
    // 0x3eb824: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb828:
    // 0x3eb828: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb828u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb82c:
    // 0x3eb82c: 0xc0f5222  jal         func_3D4888
label_3eb830:
    if (ctx->pc == 0x3EB830u) {
        ctx->pc = 0x3EB830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB82Cu;
        // 0x3eb830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB834u;
        goto label_3eb834;
    }
    ctx->pc = 0x3EB82Cu;
    SET_GPR_U32(ctx, 31, 0x3EB834u);
    ctx->pc = 0x3EB830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB82Cu;
    // 0x3eb830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB82Cu, 0x3EB834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB834u;
label_3eb834:
    // 0x3eb834: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb838:
    if (ctx->pc == 0x3EB838u) {
        ctx->pc = 0x3EB838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB834u;
        // 0x3eb838: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB83Cu;
        goto label_3eb83c;
    }
    ctx->pc = 0x3EB834u;
    {
        const bool branch_taken_0x3eb834 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB834u;
        // 0x3eb838: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb834) {
            ctx->pc = 0x3EB7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb7c8;
        }
    }
    ctx->pc = 0x3EB83Cu;
label_3eb83c:
    // 0x3eb83c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb840:
    // 0x3eb840: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eb844:
    if (ctx->pc == 0x3EB844u) {
        ctx->pc = 0x3EB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB840u;
        // 0x3eb844: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB848u;
        goto label_3eb848;
    }
    ctx->pc = 0x3EB840u;
    {
        const bool branch_taken_0x3eb840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB840u;
        // 0x3eb844: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb840) {
            ctx->pc = 0x3EB8BCu;
            goto label_3eb8bc;
        }
    }
    ctx->pc = 0x3EB848u;
label_3eb848:
    // 0x3eb848: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb84c:
    // 0x3eb84c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb850:
    // 0x3eb850: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb854:
    if (ctx->pc == 0x3EB854u) {
        ctx->pc = 0x3EB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB850u;
        // 0x3eb854: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB858u;
        goto label_3eb858;
    }
    ctx->pc = 0x3EB850u;
    {
        const bool branch_taken_0x3eb850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb850) {
            ctx->pc = 0x3EB854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB850u;
            // 0x3eb854: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB8ACu;
            goto label_3eb8ac;
        }
    }
    ctx->pc = 0x3EB858u;
label_3eb858:
    // 0x3eb858: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb85c:
    // 0x3eb85c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb85cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb860:
    // 0x3eb860: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb864:
    // 0x3eb864: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb868:
    if (ctx->pc == 0x3EB868u) {
        ctx->pc = 0x3EB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB864u;
        // 0x3eb868: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB86Cu;
        goto label_3eb86c;
    }
    ctx->pc = 0x3EB864u;
    {
        const bool branch_taken_0x3eb864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb864) {
            ctx->pc = 0x3EB868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB864u;
            // 0x3eb868: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB898u;
            goto label_3eb898;
        }
    }
    ctx->pc = 0x3EB86Cu;
label_3eb86c:
    // 0x3eb86c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb86cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb870:
    // 0x3eb870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb874:
    // 0x3eb874: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb878:
    // 0x3eb878: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb87c:
    // 0x3eb87c: 0x40f809  jalr        $v0
label_3eb880:
    if (ctx->pc == 0x3EB880u) {
        ctx->pc = 0x3EB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB87Cu;
        // 0x3eb880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB884u;
        goto label_3eb884;
    }
    ctx->pc = 0x3EB87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB884u);
        ctx->pc = 0x3EB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB87Cu;
        // 0x3eb880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB87Cu, 0x3EB884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB884u;
label_3eb884:
    // 0x3eb884: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eb884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb888:
    // 0x3eb888: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb88c:
    // 0x3eb88c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb890:
    if (ctx->pc == 0x3EB890u) {
        ctx->pc = 0x3EB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB88Cu;
        // 0x3eb890: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB894u;
        goto label_3eb894;
    }
    ctx->pc = 0x3EB88Cu;
    {
        const bool branch_taken_0x3eb88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB88Cu;
        // 0x3eb890: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb88c) {
            ctx->pc = 0x3EB870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb870;
        }
    }
    ctx->pc = 0x3EB894u;
label_3eb894:
    // 0x3eb894: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb898:
    // 0x3eb898: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb89c:
    // 0x3eb89c: 0xc0f528a  jal         func_3D4A28
label_3eb8a0:
    if (ctx->pc == 0x3EB8A0u) {
        ctx->pc = 0x3EB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB89Cu;
        // 0x3eb8a0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB8A4u;
        goto label_3eb8a4;
    }
    ctx->pc = 0x3EB89Cu;
    SET_GPR_U32(ctx, 31, 0x3EB8A4u);
    ctx->pc = 0x3EB8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB89Cu;
    // 0x3eb8a0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB89Cu, 0x3EB8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB8A4u;
label_3eb8a4:
    // 0x3eb8a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb8a8:
    // 0x3eb8a8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb8ac:
    // 0x3eb8ac: 0xc0f5222  jal         func_3D4888
label_3eb8b0:
    if (ctx->pc == 0x3EB8B0u) {
        ctx->pc = 0x3EB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB8ACu;
        // 0x3eb8b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB8B4u;
        goto label_3eb8b4;
    }
    ctx->pc = 0x3EB8ACu;
    SET_GPR_U32(ctx, 31, 0x3EB8B4u);
    ctx->pc = 0x3EB8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB8ACu;
    // 0x3eb8b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB8ACu, 0x3EB8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB8B4u;
label_3eb8b4:
    // 0x3eb8b4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb8b8:
    if (ctx->pc == 0x3EB8B8u) {
        ctx->pc = 0x3EB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB8B4u;
        // 0x3eb8b8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB8BCu;
        goto label_3eb8bc;
    }
    ctx->pc = 0x3EB8B4u;
    {
        const bool branch_taken_0x3eb8b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB8B4u;
        // 0x3eb8b8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb8b4) {
            ctx->pc = 0x3EB848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb848;
        }
    }
    ctx->pc = 0x3EB8BCu;
label_3eb8bc:
    // 0x3eb8bc: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eb8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eb8c0:
    // 0x3eb8c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eb8c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb8c4:
    // 0x3eb8c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eb8c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eb8c8:
    // 0x3eb8c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eb8c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb8cc:
    // 0x3eb8cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eb8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb8d0:
    // 0x3eb8d0: 0x3e00008  jr          $ra
label_3eb8d4:
    if (ctx->pc == 0x3EB8D4u) {
        ctx->pc = 0x3EB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB8D0u;
        // 0x3eb8d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB8D8u;
        goto label_fallthrough_0x3eb8d0;
    }
    ctx->pc = 0x3EB8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB8D0u;
        // 0x3eb8d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eb8d0:
    ctx->pc = 0x3EB8D8u;
}
