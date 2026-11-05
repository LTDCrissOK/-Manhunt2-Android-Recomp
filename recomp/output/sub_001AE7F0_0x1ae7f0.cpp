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

// Function: sub_001AE7F0
// Address: 0x1ae7f0 - 0x1ae8d0
void sub_001AE7F0_0x1ae7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE7F0_0x1ae7f0");
#endif

    switch (ctx->pc) {
        case 0x1ae810u: goto label_1ae810;
        case 0x1ae820u: goto label_1ae820;
        case 0x1ae844u: goto label_1ae844;
        case 0x1ae8a0u: goto label_1ae8a0;
        case 0x1ae8b8u: goto label_1ae8b8;
        default: break;
    }

    ctx->pc = 0x1ae7f0u;

    // 0x1ae7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae7f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ae7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ae7f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ae7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae800: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae804: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ae804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ae808: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AE808u;
    SET_GPR_U32(ctx, 31, 0x1AE810u);
    ctx->pc = 0x1AE80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE808u;
    // 0x1ae80c: 0x241101ba  addiu       $s1, $zero, 0x1BA (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AE808u, 0x1AE810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE810u;
label_1ae810:
    // 0x1ae810: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ae810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ae814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae818: 0xc08db00  jal         func_236C00
    ctx->pc = 0x1AE818u;
    SET_GPR_U32(ctx, 31, 0x1AE820u);
    ctx->pc = 0x1AE81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE818u;
    // 0x1ae81c: 0x8c64bd50  lw          $a0, -0x42B0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x1AE818u, 0x1AE820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE820u;
label_1ae820:
    // 0x1ae820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae824: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ae824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae828: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1ae828u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1ae82c: 0x12040003  beq         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE82Cu;
    {
        const bool branch_taken_0x1ae82c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ae82c) {
            ctx->pc = 0x1AE83Cu;
            goto label_1ae83c;
        }
    }
    ctx->pc = 0x1AE834u;
    // 0x1ae834: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AE834u;
    {
        const bool branch_taken_0x1ae834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE834u;
        // 0x1ae838: 0x261100bc  addiu       $s1, $s0, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae834) {
            ctx->pc = 0x1AE874u;
            goto label_1ae874;
        }
    }
    ctx->pc = 0x1AE83Cu;
label_1ae83c:
    // 0x1ae83c: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AE83Cu;
    SET_GPR_U32(ctx, 31, 0x1AE844u);
    ctx->pc = 0x1AE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE83Cu;
    // 0x1ae840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AE83Cu, 0x1AE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE844u;
label_1ae844:
    // 0x1ae844: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ae844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae848: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ae848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ae84c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE84Cu;
    {
        const bool branch_taken_0x1ae84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE84Cu;
        // 0x1ae850: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae84c) {
            ctx->pc = 0x1AE85Cu;
            goto label_1ae85c;
        }
    }
    ctx->pc = 0x1AE854u;
    // 0x1ae854: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE854u;
    {
        const bool branch_taken_0x1ae854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE854u;
        // 0x1ae858: 0x241100c1  addiu       $s1, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae854) {
            ctx->pc = 0x1AE874u;
            goto label_1ae874;
        }
    }
    ctx->pc = 0x1AE85Cu;
label_1ae85c:
    // 0x1ae85c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE85Cu;
    {
        const bool branch_taken_0x1ae85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE85Cu;
        // 0x1ae860: 0x28630000  slti        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae85c) {
            ctx->pc = 0x1AE86Cu;
            goto label_1ae86c;
        }
    }
    ctx->pc = 0x1AE864u;
    // 0x1ae864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE864u;
    {
        const bool branch_taken_0x1ae864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE864u;
        // 0x1ae868: 0x241100c3  addiu       $s1, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae864) {
            ctx->pc = 0x1AE874u;
            goto label_1ae874;
        }
    }
    ctx->pc = 0x1AE86Cu;
label_1ae86c:
    // 0x1ae86c: 0x240200c2  addiu       $v0, $zero, 0xC2
    ctx->pc = 0x1ae86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x1ae870: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x1ae870u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_1ae874:
    // 0x1ae874: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1ae874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1ae878: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE878u;
    {
        const bool branch_taken_0x1ae878 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE878u;
        // 0x1ae87c: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae878) {
            ctx->pc = 0x1AE894u;
            goto label_1ae894;
        }
    }
    ctx->pc = 0x1AE880u;
    // 0x1ae880: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1ae880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1ae884: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae888: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ae888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae88c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE88Cu;
    {
        const bool branch_taken_0x1ae88c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE88Cu;
        // 0x1ae890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae88c) {
            ctx->pc = 0x1AE8A8u;
            goto label_1ae8a8;
        }
    }
    ctx->pc = 0x1AE894u;
label_1ae894:
    // 0x1ae894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae898: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AE898u;
    SET_GPR_U32(ctx, 31, 0x1AE8A0u);
    ctx->pc = 0x1AE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE898u;
    // 0x1ae89c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AE898u, 0x1AE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8A0u;
label_1ae8a0:
    // 0x1ae8a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE8A0u;
    {
        const bool branch_taken_0x1ae8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8A0u;
        // 0x1ae8a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8a0) {
            ctx->pc = 0x1AE8BCu;
            goto label_1ae8bc;
        }
    }
    ctx->pc = 0x1AE8A8u;
label_1ae8a8:
    // 0x1ae8a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ae8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8ac: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ae8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ae8b0: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE8B0u;
    SET_GPR_U32(ctx, 31, 0x1AE8B8u);
    ctx->pc = 0x1AE8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8B0u;
    // 0x1ae8b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE8B0u, 0x1AE8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8B8u;
label_1ae8b8:
    // 0x1ae8b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae8bc:
    // 0x1ae8bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae8c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ae8c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae8c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ae8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8C8u;
        // 0x1ae8cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE8D0u;
}
