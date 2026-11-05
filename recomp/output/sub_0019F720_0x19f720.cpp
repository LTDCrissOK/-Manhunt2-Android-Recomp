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

// Function: sub_0019F720
// Address: 0x19f720 - 0x19f800
void sub_0019F720_0x19f720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F720_0x19f720");
#endif

    switch (ctx->pc) {
        case 0x19f720u: goto label_19f720;
        case 0x19f724u: goto label_19f724;
        case 0x19f728u: goto label_19f728;
        case 0x19f72cu: goto label_19f72c;
        case 0x19f730u: goto label_19f730;
        case 0x19f734u: goto label_19f734;
        case 0x19f738u: goto label_19f738;
        case 0x19f73cu: goto label_19f73c;
        case 0x19f740u: goto label_19f740;
        case 0x19f744u: goto label_19f744;
        case 0x19f748u: goto label_19f748;
        case 0x19f74cu: goto label_19f74c;
        case 0x19f750u: goto label_19f750;
        case 0x19f754u: goto label_19f754;
        case 0x19f758u: goto label_19f758;
        case 0x19f75cu: goto label_19f75c;
        case 0x19f760u: goto label_19f760;
        case 0x19f764u: goto label_19f764;
        case 0x19f768u: goto label_19f768;
        case 0x19f76cu: goto label_19f76c;
        case 0x19f770u: goto label_19f770;
        case 0x19f774u: goto label_19f774;
        case 0x19f778u: goto label_19f778;
        case 0x19f77cu: goto label_19f77c;
        case 0x19f780u: goto label_19f780;
        case 0x19f784u: goto label_19f784;
        case 0x19f788u: goto label_19f788;
        case 0x19f78cu: goto label_19f78c;
        case 0x19f790u: goto label_19f790;
        case 0x19f794u: goto label_19f794;
        case 0x19f798u: goto label_19f798;
        case 0x19f79cu: goto label_19f79c;
        case 0x19f7a0u: goto label_19f7a0;
        case 0x19f7a4u: goto label_19f7a4;
        case 0x19f7a8u: goto label_19f7a8;
        case 0x19f7acu: goto label_19f7ac;
        case 0x19f7b0u: goto label_19f7b0;
        case 0x19f7b4u: goto label_19f7b4;
        case 0x19f7b8u: goto label_19f7b8;
        case 0x19f7bcu: goto label_19f7bc;
        case 0x19f7c0u: goto label_19f7c0;
        case 0x19f7c4u: goto label_19f7c4;
        case 0x19f7c8u: goto label_19f7c8;
        case 0x19f7ccu: goto label_19f7cc;
        case 0x19f7d0u: goto label_19f7d0;
        case 0x19f7d4u: goto label_19f7d4;
        case 0x19f7d8u: goto label_19f7d8;
        case 0x19f7dcu: goto label_19f7dc;
        case 0x19f7e0u: goto label_19f7e0;
        case 0x19f7e4u: goto label_19f7e4;
        case 0x19f7e8u: goto label_19f7e8;
        case 0x19f7ecu: goto label_19f7ec;
        case 0x19f7f0u: goto label_19f7f0;
        case 0x19f7f4u: goto label_19f7f4;
        case 0x19f7f8u: goto label_19f7f8;
        case 0x19f7fcu: goto label_19f7fc;
        default: break;
    }

    ctx->pc = 0x19f720u;

label_19f720:
    // 0x19f720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19f724:
    // 0x19f724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f728:
    // 0x19f728: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19f728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19f72c:
    // 0x19f72c: 0xc0691d6  jal         func_1A4758
label_19f730:
    if (ctx->pc == 0x19F730u) {
        ctx->pc = 0x19F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F72Cu;
        // 0x19f730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F734u;
        goto label_19f734;
    }
    ctx->pc = 0x19F72Cu;
    SET_GPR_U32(ctx, 31, 0x19F734u);
    ctx->pc = 0x19F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F72Cu;
    // 0x19f730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x19F72Cu, 0x19F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F734u;
label_19f734:
    // 0x19f734: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19f734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_19f738:
    // 0x19f738: 0x8c43092c  lw          $v1, 0x92C($v0)
    ctx->pc = 0x19f738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2348)));
label_19f73c:
    // 0x19f73c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_19f740:
    if (ctx->pc == 0x19F740u) {
        ctx->pc = 0x19F744u;
        goto label_19f744;
    }
    ctx->pc = 0x19F73Cu;
    {
        const bool branch_taken_0x19f73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f73c) {
            ctx->pc = 0x19F758u;
            goto label_19f758;
        }
    }
    ctx->pc = 0x19F744u;
label_19f744:
    // 0x19f744: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f748:
    // 0x19f748: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_19f74c:
    if (ctx->pc == 0x19F74Cu) {
        ctx->pc = 0x19F750u;
        goto label_19f750;
    }
    ctx->pc = 0x19F748u;
    {
        const bool branch_taken_0x19f748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f748) {
            ctx->pc = 0x19F758u;
            goto label_19f758;
        }
    }
    ctx->pc = 0x19F750u;
label_19f750:
    // 0x19f750: 0xc0688fa  jal         func_1A23E8
label_19f754:
    if (ctx->pc == 0x19F754u) {
        ctx->pc = 0x19F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F750u;
        // 0x19f754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F758u;
        goto label_19f758;
    }
    ctx->pc = 0x19F750u;
    SET_GPR_U32(ctx, 31, 0x19F758u);
    ctx->pc = 0x19F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F750u;
    // 0x19f754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A23E8u, 0x19F750u, 0x19F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F758u;
label_19f758:
    // 0x19f758: 0xc061a16  jal         func_186858
label_19f75c:
    if (ctx->pc == 0x19F75Cu) {
        ctx->pc = 0x19F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F758u;
        // 0x19f75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F760u;
        goto label_19f760;
    }
    ctx->pc = 0x19F758u;
    SET_GPR_U32(ctx, 31, 0x19F760u);
    ctx->pc = 0x19F75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F758u;
    // 0x19f75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F758u, 0x19F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F760u;
label_19f760:
    // 0x19f760: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x19f760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_19f764:
    // 0x19f764: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x19f764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_19f768:
    // 0x19f768: 0x2484f010  addiu       $a0, $a0, -0xFF0
    ctx->pc = 0x19f768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963216));
label_19f76c:
    // 0x19f76c: 0xc0f7200  jal         func_3DC800
label_19f770:
    if (ctx->pc == 0x19F770u) {
        ctx->pc = 0x19F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F76Cu;
        // 0x19f770: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F774u;
        goto label_19f774;
    }
    ctx->pc = 0x19F76Cu;
    SET_GPR_U32(ctx, 31, 0x19F774u);
    ctx->pc = 0x19F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F76Cu;
    // 0x19f770: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC800u, 0x19F76Cu, 0x19F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F774u;
label_19f774:
    // 0x19f774: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19f774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19f778:
    // 0x19f778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f77c:
    // 0x19f77c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_19f780:
    if (ctx->pc == 0x19F780u) {
        ctx->pc = 0x19F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F77Cu;
        // 0x19f780: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F784u;
        goto label_19f784;
    }
    ctx->pc = 0x19F77Cu;
    {
        const bool branch_taken_0x19f77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F77Cu;
        // 0x19f780: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f77c) {
            ctx->pc = 0x19F79Cu;
            goto label_19f79c;
        }
    }
    ctx->pc = 0x19F784u;
label_19f784:
    // 0x19f784: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x19f784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_19f788:
    // 0x19f788: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x19f788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f78c:
    // 0x19f78c: 0xc0f7200  jal         func_3DC800
label_19f790:
    if (ctx->pc == 0x19F790u) {
        ctx->pc = 0x19F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F78Cu;
        // 0x19f790: 0x2484f020  addiu       $a0, $a0, -0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F794u;
        goto label_19f794;
    }
    ctx->pc = 0x19F78Cu;
    SET_GPR_U32(ctx, 31, 0x19F794u);
    ctx->pc = 0x19F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F78Cu;
    // 0x19f790: 0x2484f020  addiu       $a0, $a0, -0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC800u, 0x19F78Cu, 0x19F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F794u;
label_19f794:
    // 0x19f794: 0x10000008  b           . + 4 + (0x8 << 2)
label_19f798:
    if (ctx->pc == 0x19F798u) {
        ctx->pc = 0x19F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F794u;
        // 0x19f798: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F79Cu;
        goto label_19f79c;
    }
    ctx->pc = 0x19F794u;
    {
        const bool branch_taken_0x19f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F794u;
        // 0x19f798: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f794) {
            ctx->pc = 0x19F7B8u;
            goto label_19f7b8;
        }
    }
    ctx->pc = 0x19F79Cu;
label_19f79c:
    // 0x19f79c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_19f7a0:
    if (ctx->pc == 0x19F7A0u) {
        ctx->pc = 0x19F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F79Cu;
        // 0x19f7a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7A4u;
        goto label_19f7a4;
    }
    ctx->pc = 0x19F79Cu;
    {
        const bool branch_taken_0x19f79c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f79c) {
            ctx->pc = 0x19F7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F79Cu;
            // 0x19f7a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F7B8u;
            goto label_19f7b8;
        }
    }
    ctx->pc = 0x19F7A4u;
label_19f7a4:
    // 0x19f7a4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x19f7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_19f7a8:
    // 0x19f7a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x19f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f7ac:
    // 0x19f7ac: 0xc0f7200  jal         func_3DC800
label_19f7b0:
    if (ctx->pc == 0x19F7B0u) {
        ctx->pc = 0x19F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7ACu;
        // 0x19f7b0: 0x2484f030  addiu       $a0, $a0, -0xFD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7B4u;
        goto label_19f7b4;
    }
    ctx->pc = 0x19F7ACu;
    SET_GPR_U32(ctx, 31, 0x19F7B4u);
    ctx->pc = 0x19F7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F7ACu;
    // 0x19f7b0: 0x2484f030  addiu       $a0, $a0, -0xFD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC800u, 0x19F7ACu, 0x19F7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F7B4u;
label_19f7b4:
    // 0x19f7b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19f7b8:
    // 0x19f7b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19f7bc:
    if (ctx->pc == 0x19F7BCu) {
        ctx->pc = 0x19F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7B8u;
        // 0x19f7bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7C0u;
        goto label_19f7c0;
    }
    ctx->pc = 0x19F7B8u;
    {
        const bool branch_taken_0x19f7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f7b8) {
            ctx->pc = 0x19F7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F7B8u;
            // 0x19f7bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F7D4u;
            goto label_19f7d4;
        }
    }
    ctx->pc = 0x19F7C0u;
label_19f7c0:
    // 0x19f7c0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19f7c4:
    // 0x19f7c4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19f7c8:
    // 0x19f7c8: 0x40f809  jalr        $v0
label_19f7cc:
    if (ctx->pc == 0x19F7CCu) {
        ctx->pc = 0x19F7D0u;
        goto label_19f7d0;
    }
    ctx->pc = 0x19F7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F7D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F7C8u, 0x19F7D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F7D0u;
label_19f7d0:
    // 0x19f7d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f7d4:
    // 0x19f7d4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x19f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_19f7d8:
    // 0x19f7d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19f7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19f7dc:
    // 0x19f7dc: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x19f7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
label_19f7e0:
    // 0x19f7e0: 0x346301ff  ori         $v1, $v1, 0x1FF
    ctx->pc = 0x19f7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)511);
label_19f7e4:
    // 0x19f7e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f7e8:
    // 0x19f7e8: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x19f7e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
label_19f7ec:
    // 0x19f7ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19f7f0:
    // 0x19f7f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19f7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19f7f4:
    // 0x19f7f4: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x19f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
label_19f7f8:
    // 0x19f7f8: 0x3e00008  jr          $ra
label_19f7fc:
    if (ctx->pc == 0x19F7FCu) {
        ctx->pc = 0x19F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7F8u;
        // 0x19f7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F800u;
        goto label_fallthrough_0x19f7f8;
    }
    ctx->pc = 0x19F7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7F8u;
        // 0x19f7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19f7f8:
    ctx->pc = 0x19F800u;
}
