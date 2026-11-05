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

// Function: sub_0013E740
// Address: 0x13e740 - 0x13e8b0
void sub_0013E740_0x13e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E740_0x13e740");
#endif

    switch (ctx->pc) {
        case 0x13e784u: goto label_13e784;
        case 0x13e79cu: goto label_13e79c;
        case 0x13e7acu: goto label_13e7ac;
        case 0x13e7c8u: goto label_13e7c8;
        case 0x13e860u: goto label_13e860;
        default: break;
    }

    ctx->pc = 0x13e740u;

    // 0x13e740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13e744: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x13e744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x13e748: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13e748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13e74c: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x13e74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x13e750: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13e750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13e754: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13e758: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13e758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e75c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13e75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13e760: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13e760u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e764: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13e768: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13e76c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13e76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x13e770: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x13e770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x13e774: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13e774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e778: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x13e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x13e77c: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x13E77Cu;
    SET_GPR_U32(ctx, 31, 0x13E784u);
    ctx->pc = 0x13E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E77Cu;
    // 0x13e780: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x13E77Cu, 0x13E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E784u;
label_13e784:
    // 0x13e784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e788: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x13E788u;
    {
        const bool branch_taken_0x13e788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E788u;
        // 0x13e78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e788) {
            ctx->pc = 0x13E824u;
            goto label_13e824;
        }
    }
    ctx->pc = 0x13E790u;
    // 0x13e790: 0x8e140018  lw          $s4, 0x18($s0)
    ctx->pc = 0x13e790u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13e794: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x13E794u;
    SET_GPR_U32(ctx, 31, 0x13E79Cu);
    ctx->pc = 0x13E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E794u;
    // 0x13e798: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x13E794u, 0x13E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E79Cu;
label_13e79c:
    // 0x13e79c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13e7a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7a4: 0xc042128  jal         func_1084A0
    ctx->pc = 0x13E7A4u;
    SET_GPR_U32(ctx, 31, 0x13E7ACu);
    ctx->pc = 0x13E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7A4u;
    // 0x13e7a8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x13E7A4u, 0x13E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7ACu;
label_13e7ac:
    // 0x13e7ac: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E7ACu;
    {
        const bool branch_taken_0x13e7ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7ACu;
        // 0x13e7b0: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7ac) {
            ctx->pc = 0x13E7D0u;
            goto label_13e7d0;
        }
    }
    ctx->pc = 0x13E7B4u;
    // 0x13e7b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13e7b8: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x13E7B8u;
    {
        const bool branch_taken_0x13e7b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e7b8) {
            ctx->pc = 0x13E824u;
            goto label_13e824;
        }
    }
    ctx->pc = 0x13E7C0u;
    // 0x13e7c0: 0xc04fab0  jal         func_13EAC0
    ctx->pc = 0x13E7C0u;
    SET_GPR_U32(ctx, 31, 0x13E7C8u);
    ctx->pc = 0x13E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7C0u;
    // 0x13e7c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EAC0u, 0x13E7C0u, 0x13E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E7C8u;
label_13e7c8:
    // 0x13e7c8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x13E7C8u;
    {
        const bool branch_taken_0x13e7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7C8u;
        // 0x13e7cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7c8) {
            ctx->pc = 0x13E890u;
            goto label_13e890;
        }
    }
    ctx->pc = 0x13E7D0u;
label_13e7d0:
    // 0x13e7d0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x13e7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13e7d4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x13e7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7d8: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x13e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x13e7dc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e7e0: 0x8c85020c  lw          $a1, 0x20C($a0)
    ctx->pc = 0x13e7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x13e7e4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x13e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x13e7e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e7ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13e7f0: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x13e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x13e7f4: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E7F4u;
    {
        const bool branch_taken_0x13e7f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e7f4) {
            ctx->pc = 0x13E7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E7F4u;
            // 0x13e7f8: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E804u;
            goto label_13e804;
        }
    }
    ctx->pc = 0x13E7FCu;
    // 0x13e7fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E7FCu;
    {
        const bool branch_taken_0x13e7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7FCu;
        // 0x13e800: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7fc) {
            ctx->pc = 0x13E80Cu;
            goto label_13e80c;
        }
    }
    ctx->pc = 0x13E804u;
label_13e804:
    // 0x13e804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13e804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e808: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x13e808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_13e80c:
    // 0x13e80c: 0x24c39a08  addiu       $v1, $a2, -0x65F8
    ctx->pc = 0x13e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x13e810: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x13e810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x13e814: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13e814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13e818: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x13e818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x13e81c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E81Cu;
    {
        const bool branch_taken_0x13e81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e81c) {
            ctx->pc = 0x13E820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E81Cu;
            // 0x13e820: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E834u;
            goto label_13e834;
        }
    }
    ctx->pc = 0x13E824u;
label_13e824:
    // 0x13e824: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13e824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x13e828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e82c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13E82Cu;
    {
        const bool branch_taken_0x13e82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E82Cu;
        // 0x13e830: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e82c) {
            ctx->pc = 0x13E890u;
            goto label_13e890;
        }
    }
    ctx->pc = 0x13E834u;
label_13e834:
    // 0x13e834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e838: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13e83c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x13e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13e840: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E840u;
    {
        const bool branch_taken_0x13e840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e840) {
            ctx->pc = 0x13E844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E840u;
            // 0x13e844: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E850u;
            goto label_13e850;
        }
    }
    ctx->pc = 0x13E848u;
    // 0x13e848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E848u;
    {
        const bool branch_taken_0x13e848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E848u;
        // 0x13e84c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e848) {
            ctx->pc = 0x13E858u;
            goto label_13e858;
        }
    }
    ctx->pc = 0x13E850u;
label_13e850:
    // 0x13e850: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13e850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e854: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x13e854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_13e858:
    // 0x13e858: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x13E858u;
    SET_GPR_U32(ctx, 31, 0x13E860u);
    ctx->pc = 0x13E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E858u;
    // 0x13e85c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x13E858u, 0x13E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E860u;
label_13e860:
    // 0x13e860: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x13e860u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13e864: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x13e864u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e868: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x13e868u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13e86c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13e870: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x13e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13e874: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x13e874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13e878: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x13e878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13e87c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x13e87cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x13e880: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x13e880u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x13e884: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x13e884u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x13e888: 0x46000004  c1          0x4
    ctx->pc = 0x13e888u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x13e88c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13e88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e890:
    // 0x13e890: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13e890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e894: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13e894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e898: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13e898u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13e89c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13e89cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e8a0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13e8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13e8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x13E8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8A4u;
        // 0x13e8a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E8ACu;
    // 0x13e8ac: 0x0  nop
    ctx->pc = 0x13e8acu;
    // NOP
    ctx->pc = 0x13e8b0u;
}
