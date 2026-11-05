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

// Function: sub_0036E728
// Address: 0x36e728 - 0x36e870
void sub_0036E728_0x36e728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E728_0x36e728");
#endif

    switch (ctx->pc) {
        case 0x36e764u: goto label_36e764;
        case 0x36e7a4u: goto label_36e7a4;
        case 0x36e7c8u: goto label_36e7c8;
        case 0x36e7fcu: goto label_36e7fc;
        case 0x36e818u: goto label_36e818;
        case 0x36e844u: goto label_36e844;
        case 0x36e860u: goto label_36e860;
        default: break;
    }

    ctx->pc = 0x36e728u;

    // 0x36e728: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36e728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36e72c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e730: 0x8c43cc1c  lw          $v1, -0x33E4($v0)
    ctx->pc = 0x36e730u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCC1Cu));
    // 0x36e734: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36e734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e73c: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x36E73Cu;
    {
        const bool branch_taken_0x36e73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x36E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E73Cu;
        // 0x36e740: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e73c) {
            ctx->pc = 0x36E76Cu;
            goto label_36e76c;
        }
    }
    ctx->pc = 0x36E744u;
    // 0x36e744: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36e744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36e748: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36e748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e74c: 0x8c43cc20  lw          $v1, -0x33E0($v0)
    ctx->pc = 0x36e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCC20u));
    // 0x36e750: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36E750u;
    {
        const bool branch_taken_0x36e750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x36E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E750u;
        // 0x36e754: 0x8ca4cc1c  lw          $a0, -0x33E4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e750) {
            ctx->pc = 0x36E770u;
            goto label_36e770;
        }
    }
    ctx->pc = 0x36E758u;
    // 0x36e758: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x36e758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x36e75c: 0xc0db9c2  jal         func_36E708
    ctx->pc = 0x36E75Cu;
    SET_GPR_U32(ctx, 31, 0x36E764u);
    ctx->pc = 0x36E760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E75Cu;
    // 0x36e760: 0x2405006a  addiu       $a1, $zero, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E708u, 0x36E75Cu, 0x36E764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E764u;
label_36e764:
    // 0x36e764: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x36E764u;
    {
        const bool branch_taken_0x36e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E764u;
        // 0x36e768: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e764) {
            ctx->pc = 0x36E864u;
            goto label_36e864;
        }
    }
    ctx->pc = 0x36E76Cu;
label_36e76c:
    // 0x36e76c: 0x8ca4cc1c  lw          $a0, -0x33E4($a1)
    ctx->pc = 0x36e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954012)));
label_36e770:
    // 0x36e770: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e774: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x36E774u;
    {
        const bool branch_taken_0x36e774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x36E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E774u;
        // 0x36e778: 0x8ca3cc1c  lw          $v1, -0x33E4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e774) {
            ctx->pc = 0x36E7D0u;
            goto label_36e7d0;
        }
    }
    ctx->pc = 0x36E77Cu;
    // 0x36e77c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36e780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e784: 0x8c42cc20  lw          $v0, -0x33E0($v0)
    ctx->pc = 0x36e784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCC20u));
    // 0x36e788: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E788u;
    {
        const bool branch_taken_0x36e788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x36e788) {
            ctx->pc = 0x36E7ACu;
            goto label_36e7ac;
        }
    }
    ctx->pc = 0x36E790u;
    // 0x36e790: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x36e790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x36e794: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x36e794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x36e798: 0x34a500a8  ori         $a1, $a1, 0xA8
    ctx->pc = 0x36e798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)168);
    // 0x36e79c: 0xc0db9c2  jal         func_36E708
    ctx->pc = 0x36E79Cu;
    SET_GPR_U32(ctx, 31, 0x36E7A4u);
    ctx->pc = 0x36E7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E79Cu;
    // 0x36e7a0: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E708u, 0x36E79Cu, 0x36E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E7A4u;
label_36e7a4:
    // 0x36e7a4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x36E7A4u;
    {
        const bool branch_taken_0x36e7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7A4u;
        // 0x36e7a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e7a4) {
            ctx->pc = 0x36E864u;
            goto label_36e864;
        }
    }
    ctx->pc = 0x36E7ACu;
label_36e7ac:
    // 0x36e7ac: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E7ACu;
    {
        const bool branch_taken_0x36e7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x36E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7ACu;
        // 0x36e7b0: 0x8ca3cc1c  lw          $v1, -0x33E4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e7ac) {
            ctx->pc = 0x36E7D0u;
            goto label_36e7d0;
        }
    }
    ctx->pc = 0x36E7B4u;
    // 0x36e7b4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x36e7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x36e7b8: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x36e7b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x36e7bc: 0x34a50068  ori         $a1, $a1, 0x68
    ctx->pc = 0x36e7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)104);
    // 0x36e7c0: 0xc0db9c2  jal         func_36E708
    ctx->pc = 0x36E7C0u;
    SET_GPR_U32(ctx, 31, 0x36E7C8u);
    ctx->pc = 0x36E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E7C0u;
    // 0x36e7c4: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E708u, 0x36E7C0u, 0x36E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E7C8u;
label_36e7c8:
    // 0x36e7c8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x36E7C8u;
    {
        const bool branch_taken_0x36e7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7C8u;
        // 0x36e7cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e7c8) {
            ctx->pc = 0x36E864u;
            goto label_36e864;
        }
    }
    ctx->pc = 0x36E7D0u;
label_36e7d0:
    // 0x36e7d0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x36e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36e7d4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x36E7D4u;
    {
        const bool branch_taken_0x36e7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x36E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7D4u;
        // 0x36e7d8: 0x8ca3cc1c  lw          $v1, -0x33E4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e7d4) {
            ctx->pc = 0x36E820u;
            goto label_36e820;
        }
    }
    ctx->pc = 0x36E7DCu;
    // 0x36e7dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36e7e0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x36e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36e7e4: 0x8c44cc20  lw          $a0, -0x33E0($v0)
    ctx->pc = 0x36e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCC20u));
    // 0x36e7e8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36E7E8u;
    {
        const bool branch_taken_0x36e7e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x36E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7E8u;
        // 0x36e7ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e7e8) {
            ctx->pc = 0x36E804u;
            goto label_36e804;
        }
    }
    ctx->pc = 0x36E7F0u;
    // 0x36e7f0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x36e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x36e7f4: 0xc0db9c2  jal         func_36E708
    ctx->pc = 0x36E7F4u;
    SET_GPR_U32(ctx, 31, 0x36E7FCu);
    ctx->pc = 0x36E7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E7F4u;
    // 0x36e7f8: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E708u, 0x36E7F4u, 0x36E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E7FCu;
label_36e7fc:
    // 0x36e7fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x36E7FCu;
    {
        const bool branch_taken_0x36e7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7FCu;
        // 0x36e800: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e7fc) {
            ctx->pc = 0x36E864u;
            goto label_36e864;
        }
    }
    ctx->pc = 0x36E804u;
label_36e804:
    // 0x36e804: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36E804u;
    {
        const bool branch_taken_0x36e804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x36E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E804u;
        // 0x36e808: 0x8ca3cc1c  lw          $v1, -0x33E4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e804) {
            ctx->pc = 0x36E820u;
            goto label_36e820;
        }
    }
    ctx->pc = 0x36E80Cu;
    // 0x36e80c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x36e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x36e810: 0xc0db9c2  jal         func_36E708
    ctx->pc = 0x36E810u;
    SET_GPR_U32(ctx, 31, 0x36E818u);
    ctx->pc = 0x36E814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E810u;
    // 0x36e814: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E708u, 0x36E810u, 0x36E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E818u;
label_36e818:
    // 0x36e818: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x36E818u;
    {
        const bool branch_taken_0x36e818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E818u;
        // 0x36e81c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e818) {
            ctx->pc = 0x36E864u;
            goto label_36e864;
        }
    }
    ctx->pc = 0x36E820u;
label_36e820:
    // 0x36e820: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x36e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36e824: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36E824u;
    {
        const bool branch_taken_0x36e824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x36E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E824u;
        // 0x36e828: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e824) {
            ctx->pc = 0x36E84Cu;
            goto label_36e84c;
        }
    }
    ctx->pc = 0x36E82Cu;
    // 0x36e82c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e830: 0x8c43cc20  lw          $v1, -0x33E0($v0)
    ctx->pc = 0x36e830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954016)));
    // 0x36e834: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E834u;
    {
        const bool branch_taken_0x36e834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x36E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E834u;
        // 0x36e838: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e834) {
            ctx->pc = 0x36E84Cu;
            goto label_36e84c;
        }
    }
    ctx->pc = 0x36E83Cu;
    // 0x36e83c: 0xc0db9c2  jal         func_36E708
    ctx->pc = 0x36E83Cu;
    SET_GPR_U32(ctx, 31, 0x36E844u);
    ctx->pc = 0x36E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E83Cu;
    // 0x36e840: 0x24050058  addiu       $a1, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E708u, 0x36E83Cu, 0x36E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E844u;
label_36e844:
    // 0x36e844: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36E844u;
    {
        const bool branch_taken_0x36e844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E844u;
        // 0x36e848: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e844) {
            ctx->pc = 0x36E864u;
            goto label_36e864;
        }
    }
    ctx->pc = 0x36E84Cu;
label_36e84c:
    // 0x36e84c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x36e84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x36e850: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x36e850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x36e854: 0x34a500a8  ori         $a1, $a1, 0xA8
    ctx->pc = 0x36e854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)168);
    // 0x36e858: 0xc0db9c2  jal         func_36E708
    ctx->pc = 0x36E858u;
    SET_GPR_U32(ctx, 31, 0x36E860u);
    ctx->pc = 0x36E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E858u;
    // 0x36e85c: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E708u, 0x36E858u, 0x36E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E860u;
label_36e860:
    // 0x36e860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36e864:
    // 0x36e864: 0x3e00008  jr          $ra
    ctx->pc = 0x36E864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E864u;
        // 0x36e868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E86Cu;
    // 0x36e86c: 0x0  nop
    ctx->pc = 0x36e86cu;
    // NOP
    ctx->pc = 0x36e870u;
}
