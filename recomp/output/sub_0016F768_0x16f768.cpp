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

// Function: sub_0016F768
// Address: 0x16f768 - 0x16f8a8
void sub_0016F768_0x16f768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F768_0x16f768");
#endif

    switch (ctx->pc) {
        case 0x16f7acu: goto label_16f7ac;
        case 0x16f7bcu: goto label_16f7bc;
        case 0x16f7c4u: goto label_16f7c4;
        case 0x16f7ecu: goto label_16f7ec;
        case 0x16f7fcu: goto label_16f7fc;
        case 0x16f838u: goto label_16f838;
        case 0x16f84cu: goto label_16f84c;
        case 0x16f878u: goto label_16f878;
        default: break;
    }

    ctx->pc = 0x16f768u;

    // 0x16f768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16f768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16f76c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16f76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16f770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16f770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16f774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f778: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16f778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16f77c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16f77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16f780: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16f780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16f784: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x16f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x16f788: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x16F788u;
    {
        const bool branch_taken_0x16f788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F788u;
        // 0x16f78c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f788) {
            ctx->pc = 0x16F884u;
            goto label_16f884;
        }
    }
    ctx->pc = 0x16F790u;
    // 0x16f790: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x16f790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x16f794: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F794u;
    {
        const bool branch_taken_0x16f794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f794) {
            ctx->pc = 0x16F7A4u;
            goto label_16f7a4;
        }
    }
    ctx->pc = 0x16F79Cu;
    // 0x16f79c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x16F79Cu;
    {
        const bool branch_taken_0x16f79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F79Cu;
        // 0x16f7a0: 0xae20011c  sw          $zero, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f79c) {
            ctx->pc = 0x16F884u;
            goto label_16f884;
        }
    }
    ctx->pc = 0x16F7A4u;
label_16f7a4:
    // 0x16f7a4: 0xc05bdc0  jal         func_16F700
    ctx->pc = 0x16F7A4u;
    SET_GPR_U32(ctx, 31, 0x16F7ACu);
    ctx->pc = 0x16F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7A4u;
    // 0x16f7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F700u, 0x16F7A4u, 0x16F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7ACu;
label_16f7ac:
    // 0x16f7ac: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x16F7ACu;
    {
        const bool branch_taken_0x16f7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7ACu;
        // 0x16f7b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7ac) {
            ctx->pc = 0x16F888u;
            goto label_16f888;
        }
    }
    ctx->pc = 0x16F7B4u;
    // 0x16f7b4: 0xc05bdae  jal         func_16F6B8
    ctx->pc = 0x16F7B4u;
    SET_GPR_U32(ctx, 31, 0x16F7BCu);
    ctx->pc = 0x16F7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7B4u;
    // 0x16f7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F6B8u, 0x16F7B4u, 0x16F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7BCu;
label_16f7bc:
    // 0x16f7bc: 0xc05a618  jal         func_169860
    ctx->pc = 0x16F7BCu;
    SET_GPR_U32(ctx, 31, 0x16F7C4u);
    ctx->pc = 0x16F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7BCu;
    // 0x16f7c0: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16F7BCu, 0x16F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7C4u;
label_16f7c4:
    // 0x16f7c4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x16F7C4u;
    {
        const bool branch_taken_0x16f7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7C4u;
        // 0x16f7c8: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7c4) {
            ctx->pc = 0x16F884u;
            goto label_16f884;
        }
    }
    ctx->pc = 0x16F7CCu;
    // 0x16f7cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f7d0: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x16f7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16f7d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16f7d8: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x16f7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16f7dc: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x16F7DCu;
    {
        const bool branch_taken_0x16f7dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7DCu;
        // 0x16f7e0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7dc) {
            ctx->pc = 0x16F884u;
            goto label_16f884;
        }
    }
    ctx->pc = 0x16F7E4u;
    // 0x16f7e4: 0xc043958  jal         func_10E560
    ctx->pc = 0x16F7E4u;
    SET_GPR_U32(ctx, 31, 0x16F7ECu);
    ctx->pc = 0x16F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7E4u;
    // 0x16f7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x16F7E4u, 0x16F7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7ECu;
label_16f7ec:
    // 0x16f7ec: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x16F7ECu;
    {
        const bool branch_taken_0x16f7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7ECu;
        // 0x16f7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7ec) {
            ctx->pc = 0x16F888u;
            goto label_16f888;
        }
    }
    ctx->pc = 0x16F7F4u;
    // 0x16f7f4: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x16F7F4u;
    SET_GPR_U32(ctx, 31, 0x16F7FCu);
    ctx->pc = 0x16F7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7F4u;
    // 0x16f7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x16F7F4u, 0x16F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7FCu;
label_16f7fc:
    // 0x16f7fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16f7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f800: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16f804: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f808: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16f80c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x16f810: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F810u;
    {
        const bool branch_taken_0x16f810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f810) {
            ctx->pc = 0x16F814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F810u;
            // 0x16f814: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F820u;
            goto label_16f820;
        }
    }
    ctx->pc = 0x16F818u;
    // 0x16f818: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F818u;
    {
        const bool branch_taken_0x16f818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F818u;
        // 0x16f81c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f818) {
            ctx->pc = 0x16F828u;
            goto label_16f828;
        }
    }
    ctx->pc = 0x16F820u;
label_16f820:
    // 0x16f820: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f824: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x16f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16f828:
    // 0x16f828: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x16f828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x16f82c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16f82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16f830: 0xc040eca  jal         func_103B28
    ctx->pc = 0x16F830u;
    SET_GPR_U32(ctx, 31, 0x16F838u);
    ctx->pc = 0x103B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103B28u, 0x16F830u, 0x16F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F838u;
label_16f838:
    // 0x16f838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16f838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f83c: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x16F83Cu;
    {
        const bool branch_taken_0x16f83c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f83c) {
            ctx->pc = 0x16F840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F83Cu;
            // 0x16f840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F888u;
            goto label_16f888;
        }
    }
    ctx->pc = 0x16F844u;
    // 0x16f844: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16F844u;
    SET_GPR_U32(ctx, 31, 0x16F84Cu);
    ctx->pc = 0x16F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F844u;
    // 0x16f848: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16F844u, 0x16F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F84Cu;
label_16f84c:
    // 0x16f84c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16f84cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f850: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16F850u;
    {
        const bool branch_taken_0x16f850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F850u;
        // 0x16f854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f850) {
            ctx->pc = 0x16F888u;
            goto label_16f888;
        }
    }
    ctx->pc = 0x16F858u;
    // 0x16f858: 0x26629a08  addiu       $v0, $s3, -0x65F8
    ctx->pc = 0x16f858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941192));
    // 0x16f85c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f864: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x16f864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16f868: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F868u;
    {
        const bool branch_taken_0x16f868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f868) {
            ctx->pc = 0x16F86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F868u;
            // 0x16f86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F888u;
            goto label_16f888;
        }
    }
    ctx->pc = 0x16F870u;
    // 0x16f870: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x16F870u;
    SET_GPR_U32(ctx, 31, 0x16F878u);
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x16F870u, 0x16F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F878u;
label_16f878:
    // 0x16f878: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x16f878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x16f87c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16F87Cu;
    {
        const bool branch_taken_0x16f87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F87Cu;
        // 0x16f880: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f87c) {
            ctx->pc = 0x16F888u;
            goto label_16f888;
        }
    }
    ctx->pc = 0x16F884u;
label_16f884:
    // 0x16f884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f888:
    // 0x16f888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16f888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f88c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16f88cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f890: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16f890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f894: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16f894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16f898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f89c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F89Cu;
        // 0x16f8a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F8A4u;
    // 0x16f8a4: 0x0  nop
    ctx->pc = 0x16f8a4u;
    // NOP
    ctx->pc = 0x16f8a8u;
}
