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

// Function: sub_0017C7B0
// Address: 0x17c7b0 - 0x17c968
void sub_0017C7B0_0x17c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C7B0_0x17c7b0");
#endif

    switch (ctx->pc) {
        case 0x17c820u: goto label_17c820;
        case 0x17c838u: goto label_17c838;
        case 0x17c874u: goto label_17c874;
        case 0x17c894u: goto label_17c894;
        case 0x17c8d8u: goto label_17c8d8;
        case 0x17c8e8u: goto label_17c8e8;
        case 0x17c8f4u: goto label_17c8f4;
        case 0x17c900u: goto label_17c900;
        case 0x17c90cu: goto label_17c90c;
        case 0x17c91cu: goto label_17c91c;
        case 0x17c934u: goto label_17c934;
        default: break;
    }

    ctx->pc = 0x17c7b0u;

    // 0x17c7b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17c7b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17c7b8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17c7bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17c7bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c7c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c7c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17c7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17c7cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17c7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17c7d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17c7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17c7d4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17c7d8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x17c7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17c7dc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17c7e0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x17c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17c7e4: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x17c7e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17c7e8: 0x12c00052  beqz        $s6, . + 4 + (0x52 << 2)
    ctx->pc = 0x17C7E8u;
    {
        const bool branch_taken_0x17c7e8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7E8u;
        // 0x17c7ec: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7e8) {
            ctx->pc = 0x17C934u;
            goto label_17c934;
        }
    }
    ctx->pc = 0x17C7F0u;
    // 0x17c7f0: 0x10b60050  beq         $a1, $s6, . + 4 + (0x50 << 2)
    ctx->pc = 0x17C7F0u;
    {
        const bool branch_taken_0x17c7f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 22));
        ctx->pc = 0x17C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7F0u;
        // 0x17c7f4: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7f0) {
            ctx->pc = 0x17C934u;
            goto label_17c934;
        }
    }
    ctx->pc = 0x17C7F8u;
    // 0x17c7f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17c7fc: 0x247e9a08  addiu       $fp, $v1, -0x65F8
    ctx->pc = 0x17c7fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x17c800: 0x27d1020c  addiu       $s1, $fp, 0x20C
    ctx->pc = 0x17c800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 524));
    // 0x17c804: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17c804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17c808: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x17c808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c80c: 0x5200004a  beql        $s0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x17C80Cu;
    {
        const bool branch_taken_0x17c80c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c80c) {
            ctx->pc = 0x17C810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C80Cu;
            // 0x17c810: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C938u;
            goto label_17c938;
        }
    }
    ctx->pc = 0x17C814u;
    // 0x17c814: 0x8e1401ec  lw          $s4, 0x1EC($s0)
    ctx->pc = 0x17c814u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x17c818: 0xc0443e2  jal         func_110F88
    ctx->pc = 0x17C818u;
    SET_GPR_U32(ctx, 31, 0x17C820u);
    ctx->pc = 0x17C81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C818u;
    // 0x17c81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F88u, 0x17C818u, 0x17C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C820u;
label_17c820:
    // 0x17c820: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C820u;
    {
        const bool branch_taken_0x17c820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c820) {
            ctx->pc = 0x17C830u;
            goto label_17c830;
        }
    }
    ctx->pc = 0x17C828u;
    // 0x17c828: 0x52800043  beql        $s4, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x17C828u;
    {
        const bool branch_taken_0x17c828 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c828) {
            ctx->pc = 0x17C82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C828u;
            // 0x17c82c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C938u;
            goto label_17c938;
        }
    }
    ctx->pc = 0x17C830u;
label_17c830:
    // 0x17c830: 0xc0443e2  jal         func_110F88
    ctx->pc = 0x17C830u;
    SET_GPR_U32(ctx, 31, 0x17C838u);
    ctx->pc = 0x17C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C830u;
    // 0x17c834: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F88u, 0x17C830u, 0x17C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C838u;
label_17c838:
    // 0x17c838: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x17C838u;
    {
        const bool branch_taken_0x17c838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c838) {
            ctx->pc = 0x17C83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C838u;
            // 0x17c83c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C938u;
            goto label_17c938;
        }
    }
    ctx->pc = 0x17C840u;
    // 0x17c840: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x17c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17c844: 0x8c5200b0  lw          $s2, 0xB0($v0)
    ctx->pc = 0x17c844u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x17c848: 0x5240003b  beql        $s2, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x17C848u;
    {
        const bool branch_taken_0x17c848 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c848) {
            ctx->pc = 0x17C84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C848u;
            // 0x17c84c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C938u;
            goto label_17c938;
        }
    }
    ctx->pc = 0x17C850u;
    // 0x17c850: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C850u;
    {
        const bool branch_taken_0x17c850 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C850u;
        // 0x17c854: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c850) {
            ctx->pc = 0x17C864u;
            goto label_17c864;
        }
    }
    ctx->pc = 0x17C858u;
    // 0x17c858: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x17c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x17c85c: 0x12420036  beq         $s2, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x17C85Cu;
    {
        const bool branch_taken_0x17c85c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C85Cu;
        // 0x17c860: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c85c) {
            ctx->pc = 0x17C938u;
            goto label_17c938;
        }
    }
    ctx->pc = 0x17C864u;
label_17c864:
    // 0x17c864: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17c864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c868: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x17c868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x17c86c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x17C86Cu;
    SET_GPR_U32(ctx, 31, 0x17C874u);
    ctx->pc = 0x17C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C86Cu;
    // 0x17c870: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x17C86Cu, 0x17C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C874u;
label_17c874:
    // 0x17c874: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x17C874u;
    {
        const bool branch_taken_0x17c874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C874u;
        // 0x17c878: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c874) {
            ctx->pc = 0x17C934u;
            goto label_17c934;
        }
    }
    ctx->pc = 0x17C87Cu;
    // 0x17c87c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17c880: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x17c880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c884: 0x5200002c  beql        $s0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x17C884u;
    {
        const bool branch_taken_0x17c884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c884) {
            ctx->pc = 0x17C888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C884u;
            // 0x17c888: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C938u;
            goto label_17c938;
        }
    }
    ctx->pc = 0x17C88Cu;
    // 0x17c88c: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x17C88Cu;
    SET_GPR_U32(ctx, 31, 0x17C894u);
    ctx->pc = 0x17C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C88Cu;
    // 0x17c890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x17C88Cu, 0x17C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C894u;
label_17c894:
    // 0x17c894: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17c894u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c898: 0x52a00027  beql        $s5, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x17C898u;
    {
        const bool branch_taken_0x17c898 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c898) {
            ctx->pc = 0x17C89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C898u;
            // 0x17c89c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C938u;
            goto label_17c938;
        }
    }
    ctx->pc = 0x17C8A0u;
    // 0x17c8a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17c8a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17c8a8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x17c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x17c8ac: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x17c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x17c8b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C8B0u;
    {
        const bool branch_taken_0x17c8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c8b0) {
            ctx->pc = 0x17C8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C8B0u;
            // 0x17c8b4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C8C0u;
            goto label_17c8c0;
        }
    }
    ctx->pc = 0x17C8B8u;
    // 0x17c8b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17C8B8u;
    {
        const bool branch_taken_0x17c8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8B8u;
        // 0x17c8bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8b8) {
            ctx->pc = 0x17C8C8u;
            goto label_17c8c8;
        }
    }
    ctx->pc = 0x17C8C0u;
label_17c8c0:
    // 0x17c8c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c8c4: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x17c8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17c8c8:
    // 0x17c8c8: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17C8C8u;
    {
        const bool branch_taken_0x17c8c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8C8u;
        // 0x17c8cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8c8) {
            ctx->pc = 0x17C934u;
            goto label_17c934;
        }
    }
    ctx->pc = 0x17C8D0u;
    // 0x17c8d0: 0xc05f194  jal         func_17C650
    ctx->pc = 0x17C8D0u;
    SET_GPR_U32(ctx, 31, 0x17C8D8u);
    ctx->pc = 0x17C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8D0u;
    // 0x17c8d4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C650u, 0x17C8D0u, 0x17C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8D8u;
label_17c8d8:
    // 0x17c8d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17c8d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8e0: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x17C8E0u;
    SET_GPR_U32(ctx, 31, 0x17C8E8u);
    ctx->pc = 0x17C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8E0u;
    // 0x17c8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x17C8E0u, 0x17C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8E8u;
label_17c8e8:
    // 0x17c8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8ec: 0xc046190  jal         func_118640
    ctx->pc = 0x17C8ECu;
    SET_GPR_U32(ctx, 31, 0x17C8F4u);
    ctx->pc = 0x17C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8ECu;
    // 0x17c8f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x17C8ECu, 0x17C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C8F4u;
label_17c8f4:
    // 0x17c8f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x17c8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8f8: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x17C8F8u;
    SET_GPR_U32(ctx, 31, 0x17C900u);
    ctx->pc = 0x17C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8F8u;
    // 0x17c8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x17C8F8u, 0x17C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C900u;
label_17c900:
    // 0x17c900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c904: 0xc046058  jal         func_118160
    ctx->pc = 0x17C904u;
    SET_GPR_U32(ctx, 31, 0x17C90Cu);
    ctx->pc = 0x17C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C904u;
    // 0x17c908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x17C904u, 0x17C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C90Cu;
label_17c90c:
    // 0x17c90c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C90Cu;
    {
        const bool branch_taken_0x17c90c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C90Cu;
        // 0x17c910: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c90c) {
            ctx->pc = 0x17C91Cu;
            goto label_17c91c;
        }
    }
    ctx->pc = 0x17C914u;
    // 0x17c914: 0xc0461e8  jal         func_1187A0
    ctx->pc = 0x17C914u;
    SET_GPR_U32(ctx, 31, 0x17C91Cu);
    ctx->pc = 0x17C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C914u;
    // 0x17c918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x17C914u, 0x17C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C91Cu;
label_17c91c:
    // 0x17c91c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x17c920: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17c920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c924: 0x2444b060  addiu       $a0, $v0, -0x4FA0
    ctx->pc = 0x17c924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x17c928: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17c928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c92c: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x17C92Cu;
    SET_GPR_U32(ctx, 31, 0x17C934u);
    ctx->pc = 0x17C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C92Cu;
    // 0x17c930: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x17C92Cu, 0x17C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C934u;
label_17c934:
    // 0x17c934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c938:
    // 0x17c938: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c93c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17c93cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c940: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17c940u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c944: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17c944u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c948: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17c948u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c94c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17c94cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c950: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17c950u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17c954: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17c954u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c958: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17c958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17c95c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C95Cu;
        // 0x17c960: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C964u;
    // 0x17c964: 0x0  nop
    ctx->pc = 0x17c964u;
    // NOP
    ctx->pc = 0x17c968u;
}
