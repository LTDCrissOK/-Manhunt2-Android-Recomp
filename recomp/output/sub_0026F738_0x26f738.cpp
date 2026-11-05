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

// Function: sub_0026F738
// Address: 0x26f738 - 0x26f888
void sub_0026F738_0x26f738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F738_0x26f738");
#endif

    switch (ctx->pc) {
        case 0x26f7c0u: goto label_26f7c0;
        case 0x26f7d4u: goto label_26f7d4;
        case 0x26f7e4u: goto label_26f7e4;
        case 0x26f7f8u: goto label_26f7f8;
        case 0x26f808u: goto label_26f808;
        case 0x26f818u: goto label_26f818;
        case 0x26f83cu: goto label_26f83c;
        case 0x26f858u: goto label_26f858;
        case 0x26f860u: goto label_26f860;
        default: break;
    }

    ctx->pc = 0x26f738u;

    // 0x26f738: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26f738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26f73c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26f73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26f740: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x26f740u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26f744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26f744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f748: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26f748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26f74c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f750: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x26f750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x26f754: 0x848201dc  lh          $v0, 0x1DC($a0)
    ctx->pc = 0x26f754u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 476)));
    // 0x26f758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F758u;
    {
        const bool branch_taken_0x26f758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F758u;
        // 0x26f75c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f758) {
            ctx->pc = 0x26F768u;
            goto label_26f768;
        }
    }
    ctx->pc = 0x26F760u;
    // 0x26f760: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F760u;
    {
        const bool branch_taken_0x26f760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F760u;
        // 0x26f764: 0x8c8201d8  lw          $v0, 0x1D8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f760) {
            ctx->pc = 0x26F76Cu;
            goto label_26f76c;
        }
    }
    ctx->pc = 0x26F768u;
label_26f768:
    // 0x26f768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26f768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f76c:
    // 0x26f76c: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x26F76Cu;
    {
        const bool branch_taken_0x26f76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f76c) {
            ctx->pc = 0x26F770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F76Cu;
            // 0x26f770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F870u;
            goto label_26f870;
        }
    }
    ctx->pc = 0x26F774u;
    // 0x26f774: 0x8c8201fc  lw          $v0, 0x1FC($a0)
    ctx->pc = 0x26f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
    // 0x26f778: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F778u;
    {
        const bool branch_taken_0x26f778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F778u;
        // 0x26f77c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f778) {
            ctx->pc = 0x26F7A0u;
            goto label_26f7a0;
        }
    }
    ctx->pc = 0x26F780u;
    // 0x26f780: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x26f780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x26f784: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F784u;
    {
        const bool branch_taken_0x26f784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f784) {
            ctx->pc = 0x26F788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F784u;
            // 0x26f788: 0x848201dc  lh          $v0, 0x1DC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F7A4u;
            goto label_26f7a4;
        }
    }
    ctx->pc = 0x26F78Cu;
    // 0x26f78c: 0x848201e4  lh          $v0, 0x1E4($a0)
    ctx->pc = 0x26f78cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x26f790: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F790u;
    {
        const bool branch_taken_0x26f790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f790) {
            ctx->pc = 0x26F794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F790u;
            // 0x26f794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F7B0u;
            goto label_26f7b0;
        }
    }
    ctx->pc = 0x26F798u;
    // 0x26f798: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26F798u;
    {
        const bool branch_taken_0x26f798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F798u;
        // 0x26f79c: 0x8c8401e0  lw          $a0, 0x1E0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f798) {
            ctx->pc = 0x26F7B0u;
            goto label_26f7b0;
        }
    }
    ctx->pc = 0x26F7A0u;
label_26f7a0:
    // 0x26f7a0: 0x848201dc  lh          $v0, 0x1DC($a0)
    ctx->pc = 0x26f7a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 476)));
label_26f7a4:
    // 0x26f7a4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x26F7A4u;
    {
        const bool branch_taken_0x26f7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f7a4) {
            ctx->pc = 0x26F7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F7A4u;
            // 0x26f7a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F7B0u;
            goto label_26f7b0;
        }
    }
    ctx->pc = 0x26F7ACu;
    // 0x26f7ac: 0x8c8401d8  lw          $a0, 0x1D8($a0)
    ctx->pc = 0x26f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 472)));
label_26f7b0:
    // 0x26f7b0: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x26f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x26f7b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7b8: 0xc075272  jal         func_1D49C8
    ctx->pc = 0x26F7B8u;
    SET_GPR_U32(ctx, 31, 0x26F7C0u);
    ctx->pc = 0x26F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7B8u;
    // 0x26f7bc: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x26F7B8u, 0x26F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7C0u;
label_26f7c0:
    // 0x26f7c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26f7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7c4: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F7C4u;
    {
        const bool branch_taken_0x26f7c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f7c4) {
            ctx->pc = 0x26F7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F7C4u;
            // 0x26f7c8: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F7DCu;
            goto label_26f7dc;
        }
    }
    ctx->pc = 0x26F7CCu;
    // 0x26f7cc: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x26F7CCu;
    SET_GPR_U32(ctx, 31, 0x26F7D4u);
    ctx->pc = 0x26F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7CCu;
    // 0x26f7d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x26F7CCu, 0x26F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7D4u;
label_26f7d4:
    // 0x26f7d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x26F7D4u;
    {
        const bool branch_taken_0x26f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7D4u;
        // 0x26f7d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7d4) {
            ctx->pc = 0x26F870u;
            goto label_26f870;
        }
    }
    ctx->pc = 0x26F7DCu;
label_26f7dc:
    // 0x26f7dc: 0xc074256  jal         func_1D0958
    ctx->pc = 0x26F7DCu;
    SET_GPR_U32(ctx, 31, 0x26F7E4u);
    ctx->pc = 0x26F7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7DCu;
    // 0x26f7e0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0958u, 0x26F7DCu, 0x26F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7E4u;
label_26f7e4:
    // 0x26f7e4: 0x8e040250  lw          $a0, 0x250($s0)
    ctx->pc = 0x26f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x26f7e8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F7E8u;
    {
        const bool branch_taken_0x26f7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f7e8) {
            ctx->pc = 0x26F7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F7E8u;
            // 0x26f7ec: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F7FCu;
            goto label_26f7fc;
        }
    }
    ctx->pc = 0x26F7F0u;
    // 0x26f7f0: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x26F7F0u;
    SET_GPR_U32(ctx, 31, 0x26F7F8u);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x26F7F0u, 0x26F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7F8u;
label_26f7f8:
    // 0x26f7f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x26f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_26f7fc:
    // 0x26f7fc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x26f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26f800: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x26F800u;
    SET_GPR_U32(ctx, 31, 0x26F808u);
    ctx->pc = 0x26F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F800u;
    // 0x26f804: 0x2484f1b0  addiu       $a0, $a0, -0xE50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x26F800u, 0x26F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F808u;
label_26f808:
    // 0x26f808: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x26f808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x26f80c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26f80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f810: 0xc073dee  jal         func_1CF7B8
    ctx->pc = 0x26F810u;
    SET_GPR_U32(ctx, 31, 0x26F818u);
    ctx->pc = 0x26F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F810u;
    // 0x26f814: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF7B8u, 0x26F810u, 0x26F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F818u;
label_26f818:
    // 0x26f818: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26f818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f81c: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x26f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x26f820: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x26f824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f828: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26f82c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26f82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26f830: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f834: 0xc07421a  jal         func_1D0868
    ctx->pc = 0x26F834u;
    SET_GPR_U32(ctx, 31, 0x26F83Cu);
    ctx->pc = 0x26F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F834u;
    // 0x26f838: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0868u, 0x26F834u, 0x26F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F83Cu;
label_26f83c:
    // 0x26f83c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x26f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x26f840: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26f840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26f844: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x26f844u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x26f848: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26f848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26f84c: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x26f84cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x26f850: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x26F850u;
    SET_GPR_U32(ctx, 31, 0x26F858u);
    ctx->pc = 0x26F854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F850u;
    // 0x26f854: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x26F850u, 0x26F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F858u;
label_26f858:
    // 0x26f858: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x26F858u;
    SET_GPR_U32(ctx, 31, 0x26F860u);
    ctx->pc = 0x26F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F858u;
    // 0x26f85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x26F858u, 0x26F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F860u;
label_26f860:
    // 0x26f860: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x26f860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x26f864: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26f864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26f868: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x26f868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x26f86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26f86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26f870:
    // 0x26f870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26f870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26f874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f878: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x26f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26f87c: 0x3e00008  jr          $ra
    ctx->pc = 0x26F87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F87Cu;
        // 0x26f880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F884u;
    // 0x26f884: 0x0  nop
    ctx->pc = 0x26f884u;
    // NOP
    ctx->pc = 0x26f888u;
}
