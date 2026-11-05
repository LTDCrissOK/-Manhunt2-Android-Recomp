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

// Function: sub_00176788
// Address: 0x176788 - 0x176858
void sub_00176788_0x176788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176788_0x176788");
#endif

    switch (ctx->pc) {
        case 0x176788u: goto label_176788;
        case 0x17678cu: goto label_17678c;
        case 0x176790u: goto label_176790;
        case 0x176794u: goto label_176794;
        case 0x176798u: goto label_176798;
        case 0x17679cu: goto label_17679c;
        case 0x1767a0u: goto label_1767a0;
        case 0x1767a4u: goto label_1767a4;
        case 0x1767a8u: goto label_1767a8;
        case 0x1767acu: goto label_1767ac;
        case 0x1767b0u: goto label_1767b0;
        case 0x1767b4u: goto label_1767b4;
        case 0x1767b8u: goto label_1767b8;
        case 0x1767bcu: goto label_1767bc;
        case 0x1767c0u: goto label_1767c0;
        case 0x1767c4u: goto label_1767c4;
        case 0x1767c8u: goto label_1767c8;
        case 0x1767ccu: goto label_1767cc;
        case 0x1767d0u: goto label_1767d0;
        case 0x1767d4u: goto label_1767d4;
        case 0x1767d8u: goto label_1767d8;
        case 0x1767dcu: goto label_1767dc;
        case 0x1767e0u: goto label_1767e0;
        case 0x1767e4u: goto label_1767e4;
        case 0x1767e8u: goto label_1767e8;
        case 0x1767ecu: goto label_1767ec;
        case 0x1767f0u: goto label_1767f0;
        case 0x1767f4u: goto label_1767f4;
        case 0x1767f8u: goto label_1767f8;
        case 0x1767fcu: goto label_1767fc;
        case 0x176800u: goto label_176800;
        case 0x176804u: goto label_176804;
        case 0x176808u: goto label_176808;
        case 0x17680cu: goto label_17680c;
        case 0x176810u: goto label_176810;
        case 0x176814u: goto label_176814;
        case 0x176818u: goto label_176818;
        case 0x17681cu: goto label_17681c;
        case 0x176820u: goto label_176820;
        case 0x176824u: goto label_176824;
        case 0x176828u: goto label_176828;
        case 0x17682cu: goto label_17682c;
        case 0x176830u: goto label_176830;
        case 0x176834u: goto label_176834;
        case 0x176838u: goto label_176838;
        case 0x17683cu: goto label_17683c;
        case 0x176840u: goto label_176840;
        case 0x176844u: goto label_176844;
        case 0x176848u: goto label_176848;
        case 0x17684cu: goto label_17684c;
        case 0x176850u: goto label_176850;
        case 0x176854u: goto label_176854;
        default: break;
    }

    ctx->pc = 0x176788u;

label_176788:
    // 0x176788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17678c:
    // 0x17678c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176790:
    // 0x176790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176794:
    // 0x176794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176798:
    // 0x176798: 0xc04f9a4  jal         func_13E690
label_17679c:
    if (ctx->pc == 0x17679Cu) {
        ctx->pc = 0x17679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176798u;
        // 0x17679c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1767A0u;
        goto label_1767a0;
    }
    ctx->pc = 0x176798u;
    SET_GPR_U32(ctx, 31, 0x1767A0u);
    ctx->pc = 0x17679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176798u;
    // 0x17679c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x176798u, 0x1767A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767A0u;
label_1767a0:
    // 0x1767a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1767a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1767a4:
    // 0x1767a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1767a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1767a8:
    // 0x1767a8: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x1767a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_1767ac:
    // 0x1767ac: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1767acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1767b0:
    // 0x1767b0: 0xc04f8fc  jal         func_13E3F0
label_1767b4:
    if (ctx->pc == 0x1767B4u) {
        ctx->pc = 0x1767B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767B0u;
        // 0x1767b4: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1767B8u;
        goto label_1767b8;
    }
    ctx->pc = 0x1767B0u;
    SET_GPR_U32(ctx, 31, 0x1767B8u);
    ctx->pc = 0x1767B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767B0u;
    // 0x1767b4: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x1767B0u, 0x1767B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767B8u;
label_1767b8:
    // 0x1767b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1767b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1767bc:
    // 0x1767bc: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x1767bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1767c0:
    // 0x1767c0: 0xc045fea  jal         func_117FA8
label_1767c4:
    if (ctx->pc == 0x1767C4u) {
        ctx->pc = 0x1767C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767C0u;
        // 0x1767c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1767C8u;
        goto label_1767c8;
    }
    ctx->pc = 0x1767C0u;
    SET_GPR_U32(ctx, 31, 0x1767C8u);
    ctx->pc = 0x1767C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767C0u;
    // 0x1767c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x1767C0u, 0x1767C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767C8u;
label_1767c8:
    // 0x1767c8: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x1767c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_1767cc:
    // 0x1767cc: 0xc046104  jal         func_118410
label_1767d0:
    if (ctx->pc == 0x1767D0u) {
        ctx->pc = 0x1767D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767CCu;
        // 0x1767d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1767D4u;
        goto label_1767d4;
    }
    ctx->pc = 0x1767CCu;
    SET_GPR_U32(ctx, 31, 0x1767D4u);
    ctx->pc = 0x1767D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767CCu;
    // 0x1767d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x1767CCu, 0x1767D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767D4u;
label_1767d4:
    // 0x1767d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1767d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1767d8:
    // 0x1767d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1767d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1767dc:
    // 0x1767dc: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1767dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_1767e0:
    // 0x1767e0: 0xc046190  jal         func_118640
label_1767e4:
    if (ctx->pc == 0x1767E4u) {
        ctx->pc = 0x1767E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767E0u;
        // 0x1767e4: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1767E8u;
        goto label_1767e8;
    }
    ctx->pc = 0x1767E0u;
    SET_GPR_U32(ctx, 31, 0x1767E8u);
    ctx->pc = 0x1767E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767E0u;
    // 0x1767e4: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x1767E0u, 0x1767E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767E8u;
label_1767e8:
    // 0x1767e8: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_1767ec:
    // 0x1767ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1767ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1767f0:
    // 0x1767f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1767f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1767f4:
    // 0x1767f4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1767f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1767f8:
    // 0x1767f8: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x1767f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_1767fc:
    // 0x1767fc: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x1767fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_176800:
    // 0x176800: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_176804:
    // 0x176804: 0xc0460c4  jal         func_118310
label_176808:
    if (ctx->pc == 0x176808u) {
        ctx->pc = 0x176808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176804u;
        // 0x176808: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17680Cu;
        goto label_17680c;
    }
    ctx->pc = 0x176804u;
    SET_GPR_U32(ctx, 31, 0x17680Cu);
    ctx->pc = 0x176808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176804u;
    // 0x176808: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x176804u, 0x17680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17680Cu;
label_17680c:
    // 0x17680c: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_176810:
    // 0x176810: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_176814:
    if (ctx->pc == 0x176814u) {
        ctx->pc = 0x176814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176810u;
        // 0x176814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176818u;
        goto label_176818;
    }
    ctx->pc = 0x176810u;
    {
        const bool branch_taken_0x176810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176810u;
        // 0x176814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176810) {
            ctx->pc = 0x176820u;
            goto label_176820;
        }
    }
    ctx->pc = 0x176818u;
label_176818:
    // 0x176818: 0xc046058  jal         func_118160
label_17681c:
    if (ctx->pc == 0x17681Cu) {
        ctx->pc = 0x17681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176818u;
        // 0x17681c: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176820u;
        goto label_176820;
    }
    ctx->pc = 0x176818u;
    SET_GPR_U32(ctx, 31, 0x176820u);
    ctx->pc = 0x17681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176818u;
    // 0x17681c: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x176818u, 0x176820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176820u;
label_176820:
    // 0x176820: 0xc60c00dc  lwc1        $f12, 0xDC($s0)
    ctx->pc = 0x176820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_176824:
    // 0x176824: 0xc046290  jal         func_118A40
label_176828:
    if (ctx->pc == 0x176828u) {
        ctx->pc = 0x176828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176824u;
        // 0x176828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17682Cu;
        goto label_17682c;
    }
    ctx->pc = 0x176824u;
    SET_GPR_U32(ctx, 31, 0x17682Cu);
    ctx->pc = 0x176828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176824u;
    // 0x176828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x176824u, 0x17682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17682Cu;
label_17682c:
    // 0x17682c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x17682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_176830:
    // 0x176830: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176834:
    // 0x176834: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176838:
    // 0x176838: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_17683c:
    // 0x17683c: 0x40f809  jalr        $v0
label_176840:
    if (ctx->pc == 0x176840u) {
        ctx->pc = 0x176840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17683Cu;
        // 0x176840: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176844u;
        goto label_176844;
    }
    ctx->pc = 0x17683Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176844u);
        ctx->pc = 0x176840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17683Cu;
        // 0x176840: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17683Cu, 0x176844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176844u;
label_176844:
    // 0x176844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176848:
    // 0x176848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17684c:
    // 0x17684c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17684cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176850:
    // 0x176850: 0x3e00008  jr          $ra
label_176854:
    if (ctx->pc == 0x176854u) {
        ctx->pc = 0x176854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176850u;
        // 0x176854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176858u;
        goto label_fallthrough_0x176850;
    }
    ctx->pc = 0x176850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176850u;
        // 0x176854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x176850:
    ctx->pc = 0x176858u;
}
