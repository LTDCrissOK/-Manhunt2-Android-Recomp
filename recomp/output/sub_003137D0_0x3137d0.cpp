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

// Function: sub_003137D0
// Address: 0x3137d0 - 0x313940
void sub_003137D0_0x3137d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003137D0_0x3137d0");
#endif

    switch (ctx->pc) {
        case 0x313800u: goto label_313800;
        case 0x313824u: goto label_313824;
        case 0x31382cu: goto label_31382c;
        case 0x313854u: goto label_313854;
        case 0x313878u: goto label_313878;
        case 0x313880u: goto label_313880;
        case 0x3138a8u: goto label_3138a8;
        case 0x3138ccu: goto label_3138cc;
        case 0x3138d4u: goto label_3138d4;
        case 0x3138fcu: goto label_3138fc;
        case 0x313920u: goto label_313920;
        case 0x313928u: goto label_313928;
        default: break;
    }

    ctx->pc = 0x3137d0u;

    // 0x3137d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3137d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3137d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3137d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3137d8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3137d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3137dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3137dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3137e0: 0x8e05bcf8  lw          $a1, -0x4308($s0)
    ctx->pc = 0x3137e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBCF8u));
    // 0x3137e4: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3137E4u;
    {
        const bool branch_taken_0x3137e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3137e4) {
            ctx->pc = 0x3137E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3137E4u;
            // 0x3137e8: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313834u;
            goto label_313834;
        }
    }
    ctx->pc = 0x3137ECu;
    // 0x3137ec: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3137ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3137f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3137F0u;
    {
        const bool branch_taken_0x3137f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3137f0) {
            ctx->pc = 0x3137F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3137F0u;
            // 0x3137f4: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313808u;
            goto label_313808;
        }
    }
    ctx->pc = 0x3137F8u;
    // 0x3137f8: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x3137F8u;
    SET_GPR_U32(ctx, 31, 0x313800u);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x3137F8u, 0x313800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313800u;
label_313800:
    // 0x313800: 0x8e05bcf8  lw          $a1, -0x4308($s0)
    ctx->pc = 0x313800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x313804: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x313804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_313808:
    // 0x313808: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x313808u;
    {
        const bool branch_taken_0x313808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313808u;
        // 0x31380c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313808) {
            ctx->pc = 0x313824u;
            goto label_313824;
        }
    }
    ctx->pc = 0x313810u;
    // 0x313810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313814: 0xac62bce4  sw          $v0, -0x431C($v1)
    ctx->pc = 0x313814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950116), GPR_U32(ctx, 2));
    // 0x313818: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x313818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x31381c: 0xc0c4858  jal         func_312160
    ctx->pc = 0x31381Cu;
    SET_GPR_U32(ctx, 31, 0x313824u);
    ctx->pc = 0x313820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31381Cu;
    // 0x313820: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x31381Cu, 0x313824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313824u;
label_313824:
    // 0x313824: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x313824u;
    SET_GPR_U32(ctx, 31, 0x31382Cu);
    ctx->pc = 0x313828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313824u;
    // 0x313828: 0x8e04bcf8  lw          $a0, -0x4308($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x313824u, 0x31382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31382Cu;
label_31382c:
    // 0x31382c: 0xae00bcf8  sw          $zero, -0x4308($s0)
    ctx->pc = 0x31382cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950136), GPR_U32(ctx, 0));
    // 0x313830: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x313830u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_313834:
    // 0x313834: 0x8e05bcf0  lw          $a1, -0x4310($s0)
    ctx->pc = 0x313834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950128)));
    // 0x313838: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x313838u;
    {
        const bool branch_taken_0x313838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x313838) {
            ctx->pc = 0x31383Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313838u;
            // 0x31383c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313888u;
            goto label_313888;
        }
    }
    ctx->pc = 0x313840u;
    // 0x313840: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x313840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x313844: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x313844u;
    {
        const bool branch_taken_0x313844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x313844) {
            ctx->pc = 0x313848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313844u;
            // 0x313848: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31385Cu;
            goto label_31385c;
        }
    }
    ctx->pc = 0x31384Cu;
    // 0x31384c: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x31384Cu;
    SET_GPR_U32(ctx, 31, 0x313854u);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x31384Cu, 0x313854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313854u;
label_313854:
    // 0x313854: 0x8e05bcf0  lw          $a1, -0x4310($s0)
    ctx->pc = 0x313854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950128)));
    // 0x313858: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x313858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_31385c:
    // 0x31385c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31385Cu;
    {
        const bool branch_taken_0x31385c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x313860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31385Cu;
        // 0x313860: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31385c) {
            ctx->pc = 0x313878u;
            goto label_313878;
        }
    }
    ctx->pc = 0x313864u;
    // 0x313864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313868: 0xac62bce4  sw          $v0, -0x431C($v1)
    ctx->pc = 0x313868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950116), GPR_U32(ctx, 2));
    // 0x31386c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x31386cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x313870: 0xc0c4858  jal         func_312160
    ctx->pc = 0x313870u;
    SET_GPR_U32(ctx, 31, 0x313878u);
    ctx->pc = 0x313874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313870u;
    // 0x313874: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x313870u, 0x313878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313878u;
label_313878:
    // 0x313878: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x313878u;
    SET_GPR_U32(ctx, 31, 0x313880u);
    ctx->pc = 0x31387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313878u;
    // 0x31387c: 0x8e04bcf0  lw          $a0, -0x4310($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x313878u, 0x313880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313880u;
label_313880:
    // 0x313880: 0xae00bcf0  sw          $zero, -0x4310($s0)
    ctx->pc = 0x313880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950128), GPR_U32(ctx, 0));
    // 0x313884: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x313884u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_313888:
    // 0x313888: 0x8e05bcec  lw          $a1, -0x4314($s0)
    ctx->pc = 0x313888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950124)));
    // 0x31388c: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x31388Cu;
    {
        const bool branch_taken_0x31388c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31388c) {
            ctx->pc = 0x313890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31388Cu;
            // 0x313890: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3138DCu;
            goto label_3138dc;
        }
    }
    ctx->pc = 0x313894u;
    // 0x313894: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x313894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x313898: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x313898u;
    {
        const bool branch_taken_0x313898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x313898) {
            ctx->pc = 0x31389Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313898u;
            // 0x31389c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3138B0u;
            goto label_3138b0;
        }
    }
    ctx->pc = 0x3138A0u;
    // 0x3138a0: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x3138A0u;
    SET_GPR_U32(ctx, 31, 0x3138A8u);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x3138A0u, 0x3138A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138A8u;
label_3138a8:
    // 0x3138a8: 0x8e05bcec  lw          $a1, -0x4314($s0)
    ctx->pc = 0x3138a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950124)));
    // 0x3138ac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3138acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3138b0:
    // 0x3138b0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3138B0u;
    {
        const bool branch_taken_0x3138b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3138B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138B0u;
        // 0x3138b4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3138b0) {
            ctx->pc = 0x3138CCu;
            goto label_3138cc;
        }
    }
    ctx->pc = 0x3138B8u;
    // 0x3138b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3138b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3138bc: 0xac62bce4  sw          $v0, -0x431C($v1)
    ctx->pc = 0x3138bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950116), GPR_U32(ctx, 2));
    // 0x3138c0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3138c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3138c4: 0xc0c4858  jal         func_312160
    ctx->pc = 0x3138C4u;
    SET_GPR_U32(ctx, 31, 0x3138CCu);
    ctx->pc = 0x3138C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3138C4u;
    // 0x3138c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x3138C4u, 0x3138CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138CCu;
label_3138cc:
    // 0x3138cc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3138CCu;
    SET_GPR_U32(ctx, 31, 0x3138D4u);
    ctx->pc = 0x3138D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3138CCu;
    // 0x3138d0: 0x8e04bcec  lw          $a0, -0x4314($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3138CCu, 0x3138D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138D4u;
label_3138d4:
    // 0x3138d4: 0xae00bcec  sw          $zero, -0x4314($s0)
    ctx->pc = 0x3138d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950124), GPR_U32(ctx, 0));
    // 0x3138d8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3138d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_3138dc:
    // 0x3138dc: 0x8e05bcf4  lw          $a1, -0x430C($s0)
    ctx->pc = 0x3138dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950132)));
    // 0x3138e0: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3138E0u;
    {
        const bool branch_taken_0x3138e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3138e0) {
            ctx->pc = 0x3138E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3138E0u;
            // 0x3138e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313930u;
            goto label_313930;
        }
    }
    ctx->pc = 0x3138E8u;
    // 0x3138e8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3138e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3138ec: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3138ECu;
    {
        const bool branch_taken_0x3138ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3138ec) {
            ctx->pc = 0x3138F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3138ECu;
            // 0x3138f0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313904u;
            goto label_313904;
        }
    }
    ctx->pc = 0x3138F4u;
    // 0x3138f4: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x3138F4u;
    SET_GPR_U32(ctx, 31, 0x3138FCu);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x3138F4u, 0x3138FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138FCu;
label_3138fc:
    // 0x3138fc: 0x8e05bcf4  lw          $a1, -0x430C($s0)
    ctx->pc = 0x3138fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950132)));
    // 0x313900: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x313900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_313904:
    // 0x313904: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x313904u;
    {
        const bool branch_taken_0x313904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x313908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313904u;
        // 0x313908: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313904) {
            ctx->pc = 0x313920u;
            goto label_313920;
        }
    }
    ctx->pc = 0x31390Cu;
    // 0x31390c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313910: 0xac62bce4  sw          $v0, -0x431C($v1)
    ctx->pc = 0x313910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950116), GPR_U32(ctx, 2));
    // 0x313914: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x313914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x313918: 0xc0c4858  jal         func_312160
    ctx->pc = 0x313918u;
    SET_GPR_U32(ctx, 31, 0x313920u);
    ctx->pc = 0x31391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313918u;
    // 0x31391c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x313918u, 0x313920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313920u;
label_313920:
    // 0x313920: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x313920u;
    SET_GPR_U32(ctx, 31, 0x313928u);
    ctx->pc = 0x313924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313920u;
    // 0x313924: 0x8e04bcf4  lw          $a0, -0x430C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x313920u, 0x313928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313928u;
label_313928:
    // 0x313928: 0xae00bcf4  sw          $zero, -0x430C($s0)
    ctx->pc = 0x313928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950132), GPR_U32(ctx, 0));
    // 0x31392c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31392cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_313930:
    // 0x313930: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x313930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x313934: 0x3e00008  jr          $ra
    ctx->pc = 0x313934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313934u;
        // 0x313938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31393Cu;
    // 0x31393c: 0x0  nop
    ctx->pc = 0x31393cu;
    // NOP
    ctx->pc = 0x313940u;
}
