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

// Function: sub_00137570
// Address: 0x137570 - 0x137698
void sub_00137570_0x137570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137570_0x137570");
#endif

    switch (ctx->pc) {
        case 0x1375a8u: goto label_1375a8;
        case 0x1375c4u: goto label_1375c4;
        case 0x1375f0u: goto label_1375f0;
        case 0x137634u: goto label_137634;
        case 0x137640u: goto label_137640;
        case 0x13764cu: goto label_13764c;
        case 0x137658u: goto label_137658;
        case 0x137670u: goto label_137670;
        default: break;
    }

    ctx->pc = 0x137570u;

    // 0x137570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x137574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137578: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x137578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13757c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13757cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137580: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x137580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x137584: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x137584u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x137588: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x137588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13758c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x13758cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137590: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x137590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x137594: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x137594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x137598: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x137598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13759c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13759cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1375a0: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1375A0u;
    SET_GPR_U32(ctx, 31, 0x1375A8u);
    ctx->pc = 0x1375A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1375A0u;
    // 0x1375a4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1375A0u, 0x1375A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375A8u;
label_1375a8:
    // 0x1375a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1375a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375ac: 0x8e020464  lw          $v0, 0x464($s0)
    ctx->pc = 0x1375acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1124)));
    // 0x1375b0: 0x8c550010  lw          $s5, 0x10($v0)
    ctx->pc = 0x1375b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1375b4: 0x12a0002e  beqz        $s5, . + 4 + (0x2E << 2)
    ctx->pc = 0x1375B4u;
    {
        const bool branch_taken_0x1375b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375B4u;
        // 0x1375b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375b4) {
            ctx->pc = 0x137670u;
            goto label_137670;
        }
    }
    ctx->pc = 0x1375BCu;
    // 0x1375bc: 0xc04da3e  jal         func_1368F8
    ctx->pc = 0x1375BCu;
    SET_GPR_U32(ctx, 31, 0x1375C4u);
    ctx->pc = 0x1375C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1375BCu;
    // 0x1375c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1368F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F8u, 0x1375BCu, 0x1375C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375C4u;
label_1375c4:
    // 0x1375c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1375c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375c8: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x1375C8u;
    {
        const bool branch_taken_0x1375c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375C8u;
        // 0x1375cc: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375c8) {
            ctx->pc = 0x137670u;
            goto label_137670;
        }
    }
    ctx->pc = 0x1375D0u;
    // 0x1375d0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1375d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1375d4: 0x24749a08  addiu       $s4, $v1, -0x65F8
    ctx->pc = 0x1375d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1375d8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1375d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1375dc: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x1375dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1375e0: 0x52000024  beql        $s0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1375E0u;
    {
        const bool branch_taken_0x1375e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1375e0) {
            ctx->pc = 0x1375E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1375E0u;
            // 0x1375e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137674u;
            goto label_137674;
        }
    }
    ctx->pc = 0x1375E8u;
    // 0x1375e8: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x1375E8u;
    SET_GPR_U32(ctx, 31, 0x1375F0u);
    ctx->pc = 0x1375ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1375E8u;
    // 0x1375ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x1375E8u, 0x1375F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375F0u;
label_1375f0:
    // 0x1375f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1375f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375f4: 0x5260001f  beql        $s3, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1375F4u;
    {
        const bool branch_taken_0x1375f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1375f4) {
            ctx->pc = 0x1375F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1375F4u;
            // 0x1375f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137674u;
            goto label_137674;
        }
    }
    ctx->pc = 0x1375FCu;
    // 0x1375fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1375fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x137600: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137604: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x137604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x137608: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x137608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13760c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13760Cu;
    {
        const bool branch_taken_0x13760c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13760c) {
            ctx->pc = 0x137610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13760Cu;
            // 0x137610: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13761Cu;
            goto label_13761c;
        }
    }
    ctx->pc = 0x137614u;
    // 0x137614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137614u;
    {
        const bool branch_taken_0x137614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137614u;
        // 0x137618: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137614) {
            ctx->pc = 0x137624u;
            goto label_137624;
        }
    }
    ctx->pc = 0x13761Cu;
label_13761c:
    // 0x13761c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137620: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x137620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_137624:
    // 0x137624: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x137624u;
    {
        const bool branch_taken_0x137624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x137628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137624u;
        // 0x137628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137624) {
            ctx->pc = 0x137670u;
            goto label_137670;
        }
    }
    ctx->pc = 0x13762Cu;
    // 0x13762c: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x13762Cu;
    SET_GPR_U32(ctx, 31, 0x137634u);
    ctx->pc = 0x137630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13762Cu;
    // 0x137630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x13762Cu, 0x137634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137634u;
label_137634:
    // 0x137634: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x137634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137638: 0xc046190  jal         func_118640
    ctx->pc = 0x137638u;
    SET_GPR_U32(ctx, 31, 0x137640u);
    ctx->pc = 0x13763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137638u;
    // 0x13763c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x137638u, 0x137640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137640u;
label_137640:
    // 0x137640: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x137640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137644: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x137644u;
    SET_GPR_U32(ctx, 31, 0x13764Cu);
    ctx->pc = 0x137648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137644u;
    // 0x137648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x137644u, 0x13764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13764Cu;
label_13764c:
    // 0x13764c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137650: 0xc046058  jal         func_118160
    ctx->pc = 0x137650u;
    SET_GPR_U32(ctx, 31, 0x137658u);
    ctx->pc = 0x137654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137650u;
    // 0x137654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x137650u, 0x137658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137658u;
label_137658:
    // 0x137658: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x137658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13765c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13765cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137660: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x137660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x137664: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x137664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137668: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x137668u;
    SET_GPR_U32(ctx, 31, 0x137670u);
    ctx->pc = 0x13766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137668u;
    // 0x13766c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x137668u, 0x137670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137670u;
label_137670:
    // 0x137670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x137670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_137674:
    // 0x137674: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x137674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x137678: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x137678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13767c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13767cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137680: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x137680u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137684: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x137684u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x137688: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x137688u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13768c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13768cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x137690: 0x3e00008  jr          $ra
    ctx->pc = 0x137690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137690u;
        // 0x137694: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137698u;
}
