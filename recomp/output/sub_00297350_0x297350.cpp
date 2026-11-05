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

// Function: sub_00297350
// Address: 0x297350 - 0x297490
void sub_00297350_0x297350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297350_0x297350");
#endif

    switch (ctx->pc) {
        case 0x297384u: goto label_297384;
        case 0x29739cu: goto label_29739c;
        case 0x2973a8u: goto label_2973a8;
        case 0x297478u: goto label_297478;
        default: break;
    }

    ctx->pc = 0x297350u;

    // 0x297350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297354: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x297354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x297358: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x297358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29735c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29735cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297360: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x297360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x297364: 0x9202006d  lbu         $v0, 0x6D($s0)
    ctx->pc = 0x297364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
    // 0x297368: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x297368u;
    {
        const bool branch_taken_0x297368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297368) {
            ctx->pc = 0x29736Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297368u;
            // 0x29736c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29747Cu;
            goto label_29747c;
        }
    }
    ctx->pc = 0x297370u;
    // 0x297370: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x297370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x297374: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297378: 0x24a5baf8  addiu       $a1, $a1, -0x4508
    ctx->pc = 0x297378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949624));
    // 0x29737c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29737Cu;
    SET_GPR_U32(ctx, 31, 0x297384u);
    ctx->pc = 0x297380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29737Cu;
    // 0x297380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29737Cu, 0x297384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297384u;
label_297384:
    // 0x297384: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x297384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x297388: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29738c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29738Cu;
    {
        const bool branch_taken_0x29738c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29738c) {
            ctx->pc = 0x297390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29738Cu;
            // 0x297390: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2973B0u;
            goto label_2973b0;
        }
    }
    ctx->pc = 0x297394u;
    // 0x297394: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297394u;
    SET_GPR_U32(ctx, 31, 0x29739Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297394u, 0x29739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29739Cu;
label_29739c:
    // 0x29739c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29739cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973a0: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x2973A0u;
    SET_GPR_U32(ctx, 31, 0x2973A8u);
    ctx->pc = 0x2973A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2973A0u;
    // 0x2973a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x2973A0u, 0x2973A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2973A8u;
label_2973a8:
    // 0x2973a8: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2973a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2973ac: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2973acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2973b0:
    // 0x2973b0: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2973B0u;
    {
        const bool branch_taken_0x2973b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2973b0) {
            ctx->pc = 0x2973B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2973B0u;
            // 0x2973b4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29747Cu;
            goto label_29747c;
        }
    }
    ctx->pc = 0x2973B8u;
    // 0x2973b8: 0x92020089  lbu         $v0, 0x89($s0)
    ctx->pc = 0x2973b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 137)));
    // 0x2973bc: 0x9204005c  lbu         $a0, 0x5C($s0)
    ctx->pc = 0x2973bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2973c0: 0x9205005d  lbu         $a1, 0x5D($s0)
    ctx->pc = 0x2973c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
    // 0x2973c4: 0x9206005e  lbu         $a2, 0x5E($s0)
    ctx->pc = 0x2973c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x2973c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2973C8u;
    {
        const bool branch_taken_0x2973c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2973CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973C8u;
        // 0x2973cc: 0x9207005f  lbu         $a3, 0x5F($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 95)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973c8) {
            ctx->pc = 0x2973E8u;
            goto label_2973e8;
        }
    }
    ctx->pc = 0x2973D0u;
    // 0x2973d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2973d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2973d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2973d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2973d8: 0x8c46a920  lw          $a2, -0x56E0($v0)
    ctx->pc = 0x2973d8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FA920u));
    // 0x2973dc: 0x8c67a924  lw          $a3, -0x56DC($v1)
    ctx->pc = 0x2973dcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FA924u));
    // 0x2973e0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2973e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973e4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2973e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2973e8:
    // 0x2973e8: 0x92020088  lbu         $v0, 0x88($s0)
    ctx->pc = 0x2973e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2973ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2973ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2973f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2973F0u;
    {
        const bool branch_taken_0x2973f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2973F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973F0u;
        // 0x2973f4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973f0) {
            ctx->pc = 0x297434u;
            goto label_297434;
        }
    }
    ctx->pc = 0x2973F8u;
    // 0x2973f8: 0xc6030080  lwc1        $f3, 0x80($s0)
    ctx->pc = 0x2973f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2973fc: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x2973fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297400: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x297400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297404: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x297404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x297408: 0xc6040084  lwc1        $f4, 0x84($s0)
    ctx->pc = 0x297408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29740c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x29740cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x297410: 0xc602004c  lwc1        $f2, 0x4C($s0)
    ctx->pc = 0x297410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297414: 0xc6030050  lwc1        $f3, 0x50($s0)
    ctx->pc = 0x297414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x297418: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x297418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x29741c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x29741cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x297420: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x297420u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x297424: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x297424u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x297428: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x297428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29742c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29742Cu;
    {
        const bool branch_taken_0x29742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29742Cu;
        // 0x297430: 0xe7a30004  swc1        $f3, 0x4($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29742c) {
            ctx->pc = 0x29745Cu;
            goto label_29745c;
        }
    }
    ctx->pc = 0x297434u;
label_297434:
    // 0x297434: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x297434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297438: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x297438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29743c: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x29743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297440: 0xc602002c  lwc1        $f2, 0x2C($s0)
    ctx->pc = 0x297440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297444: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x297444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x297448: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x297448u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29744c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x29744cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x297450: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x297450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x297454: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x297454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x297458: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x297458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_29745c:
    // 0x29745c: 0x8e080048  lw          $t0, 0x48($s0)
    ctx->pc = 0x29745cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x297460: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x297460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297464: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x297464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x297468: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x297468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29746c: 0xc60e0054  lwc1        $f14, 0x54($s0)
    ctx->pc = 0x29746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x297470: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x297470u;
    SET_GPR_U32(ctx, 31, 0x297478u);
    ctx->pc = 0x297474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297470u;
    // 0x297474: 0xc60f0058  lwc1        $f15, 0x58($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x297470u, 0x297478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297478u;
label_297478:
    // 0x297478: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x297478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29747c:
    // 0x29747c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29747cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297480: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x297480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297484: 0x3e00008  jr          $ra
    ctx->pc = 0x297484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297484u;
        // 0x297488: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29748Cu;
    // 0x29748c: 0x0  nop
    ctx->pc = 0x29748cu;
    // NOP
    ctx->pc = 0x297490u;
}
