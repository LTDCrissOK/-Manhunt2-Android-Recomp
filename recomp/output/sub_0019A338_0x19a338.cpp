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

// Function: sub_0019A338
// Address: 0x19a338 - 0x19a458
void sub_0019A338_0x19a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A338_0x19a338");
#endif

    switch (ctx->pc) {
        case 0x19a390u: goto label_19a390;
        case 0x19a398u: goto label_19a398;
        case 0x19a3a8u: goto label_19a3a8;
        case 0x19a3b4u: goto label_19a3b4;
        case 0x19a3ccu: goto label_19a3cc;
        case 0x19a3e0u: goto label_19a3e0;
        case 0x19a42cu: goto label_19a42c;
        case 0x19a440u: goto label_19a440;
        default: break;
    }

    ctx->pc = 0x19a338u;

    // 0x19a338: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x19a338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x19a33c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x19a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19a340: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x19a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x19a344: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x19a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x19a348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a34c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x19a34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x19a350: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x19a350u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x19a354: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19a354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19a358: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x19A358u;
    {
        const bool branch_taken_0x19a358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A358u;
        // 0x19a35c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a358) {
            ctx->pc = 0x19A440u;
            goto label_19a440;
        }
    }
    ctx->pc = 0x19A360u;
    // 0x19a360: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x19A360u;
    {
        const bool branch_taken_0x19a360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A360u;
        // 0x19a364: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a360) {
            ctx->pc = 0x19A440u;
            goto label_19a440;
        }
    }
    ctx->pc = 0x19A368u;
    // 0x19a368: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x19A368u;
    {
        const bool branch_taken_0x19a368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A368u;
        // 0x19a36c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a368) {
            ctx->pc = 0x19A440u;
            goto label_19a440;
        }
    }
    ctx->pc = 0x19A370u;
    // 0x19a370: 0x50620034  beql        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x19A370u;
    {
        const bool branch_taken_0x19a370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19a370) {
            ctx->pc = 0x19A374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A370u;
            // 0x19a374: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A444u;
            goto label_19a444;
        }
    }
    ctx->pc = 0x19A378u;
    // 0x19a378: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19a378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19a37c: 0x8c821050  lw          $v0, 0x1050($a0)
    ctx->pc = 0x19a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4176)));
    // 0x19a380: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x19A380u;
    {
        const bool branch_taken_0x19a380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a380) {
            ctx->pc = 0x19A384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A380u;
            // 0x19a384: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A444u;
            goto label_19a444;
        }
    }
    ctx->pc = 0x19A388u;
    // 0x19a388: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x19A388u;
    SET_GPR_U32(ctx, 31, 0x19A390u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x19A388u, 0x19A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A390u;
label_19a390:
    // 0x19a390: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x19A390u;
    SET_GPR_U32(ctx, 31, 0x19A398u);
    ctx->pc = 0x19A394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A390u;
    // 0x19a394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x19A390u, 0x19A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A398u;
label_19a398:
    // 0x19a398: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x19A398u;
    {
        const bool branch_taken_0x19a398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a398) {
            ctx->pc = 0x19A39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A398u;
            // 0x19a39c: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A444u;
            goto label_19a444;
        }
    }
    ctx->pc = 0x19A3A0u;
    // 0x19a3a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19A3A0u;
    SET_GPR_U32(ctx, 31, 0x19A3A8u);
    ctx->pc = 0x19A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3A0u;
    // 0x19a3a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19A3A0u, 0x19A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3A8u;
label_19a3a8:
    // 0x19a3a8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x19a3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19a3ac: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x19A3ACu;
    SET_GPR_U32(ctx, 31, 0x19A3B4u);
    ctx->pc = 0x19A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3ACu;
    // 0x19a3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x19A3ACu, 0x19A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3B4u;
label_19a3b4:
    // 0x19a3b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19a3b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19a3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3bc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19a3c0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19a3c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3c4: 0xc062a8e  jal         func_18AA38
    ctx->pc = 0x19A3C4u;
    SET_GPR_U32(ctx, 31, 0x19A3CCu);
    ctx->pc = 0x19A3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3C4u;
    // 0x19a3c8: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AA38u, 0x19A3C4u, 0x19A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3CCu;
label_19a3cc:
    // 0x19a3cc: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x19A3CCu;
    {
        const bool branch_taken_0x19a3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a3cc) {
            ctx->pc = 0x19A3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A3CCu;
            // 0x19a3d0: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A444u;
            goto label_19a444;
        }
    }
    ctx->pc = 0x19A3D4u;
    // 0x19a3d4: 0xc61400ac  lwc1        $f20, 0xAC($s0)
    ctx->pc = 0x19a3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a3d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19A3D8u;
    SET_GPR_U32(ctx, 31, 0x19A3E0u);
    ctx->pc = 0x19A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3D8u;
    // 0x19a3dc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19A3D8u, 0x19A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3E0u;
label_19a3e0:
    // 0x19a3e0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x19a3e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x19a3e4: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x19a3e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x19a3e8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x19a3e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x19a3ec: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x19a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x19a3f0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x19a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x19a3f4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x19a3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x19a3f8: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x19a3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a3fc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x19a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a400: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x19a400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19a404: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x19a404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19a408: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x19a408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x19a40c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x19a40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x19a410: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x19a410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x19a414: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x19a414u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x19a418: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x19a418u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a41c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x19a41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a424: 0xc078bcc  jal         func_1E2F30
    ctx->pc = 0x19A424u;
    SET_GPR_U32(ctx, 31, 0x19A42Cu);
    ctx->pc = 0x19A428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A424u;
    // 0x19a428: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F30u, 0x19A424u, 0x19A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A42Cu;
label_19a42c:
    // 0x19a42c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A42Cu;
    {
        const bool branch_taken_0x19a42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A42Cu;
        // 0x19a430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a42c) {
            ctx->pc = 0x19A440u;
            goto label_19a440;
        }
    }
    ctx->pc = 0x19A434u;
    // 0x19a434: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19a434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a438: 0xc066916  jal         func_19A458
    ctx->pc = 0x19A438u;
    SET_GPR_U32(ctx, 31, 0x19A440u);
    ctx->pc = 0x19A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A438u;
    // 0x19a43c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A458u, 0x19A438u, 0x19A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A440u;
label_19a440:
    // 0x19a440: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x19a440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_19a444:
    // 0x19a444: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x19a444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x19a448: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x19a448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19a44c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x19a44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a450: 0x3e00008  jr          $ra
    ctx->pc = 0x19A450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A450u;
        // 0x19a454: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A458u;
}
