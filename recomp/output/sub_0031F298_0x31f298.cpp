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

// Function: sub_0031F298
// Address: 0x31f298 - 0x31f8b0
void sub_0031F298_0x31f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F298_0x31f298");
#endif

    switch (ctx->pc) {
        case 0x31f2fcu: goto label_31f2fc;
        case 0x31f380u: goto label_31f380;
        case 0x31f41cu: goto label_31f41c;
        case 0x31f460u: goto label_31f460;
        case 0x31f480u: goto label_31f480;
        case 0x31f48cu: goto label_31f48c;
        case 0x31f5dcu: goto label_31f5dc;
        case 0x31f7a4u: goto label_31f7a4;
        case 0x31f7c8u: goto label_31f7c8;
        case 0x31f7e4u: goto label_31f7e4;
        default: break;
    }

    ctx->pc = 0x31f298u;

    // 0x31f298: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x31f298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x31f29c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x31f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x31f2a0: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x31f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x31f2a4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x31f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x31f2a8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x31f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x31f2ac: 0x24522840  addiu       $s2, $v0, 0x2840
    ctx->pc = 0x31f2acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x31f2b0: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x31f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x31f2b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31f2b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2b8: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x31f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x31f2bc: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x31f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x31f2c0: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x31f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x31f2c4: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x31f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x31f2c8: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x31f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x31f2cc: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x31f2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x31f2d0: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x31f2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x31f2d4: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x31f2d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x31f2d8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x31f2d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x31f2dc: 0x92421a10  lbu         $v0, 0x1A10($s2)
    ctx->pc = 0x31f2dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5B4250u));
    // 0x31f2e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31F2E0u;
    {
        const bool branch_taken_0x31f2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2E0u;
        // 0x31f2e4: 0x24755870  addiu       $s5, $v1, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2e0) {
            ctx->pc = 0x31F338u;
            goto label_31f338;
        }
    }
    ctx->pc = 0x31F2E8u;
    // 0x31f2e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31f2ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31f2ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f2f0: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x31f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x31f2f4: 0xc0bfbbc  jal         func_2FEEF0
    ctx->pc = 0x31F2F4u;
    SET_GPR_U32(ctx, 31, 0x31F2FCu);
    ctx->pc = 0x31F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F2F4u;
    // 0x31f2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEEF0u, 0x31F2F4u, 0x31F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F2FCu;
label_31f2fc:
    // 0x31f2fc: 0x8e840100  lw          $a0, 0x100($s4)
    ctx->pc = 0x31f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x31f300: 0x264219d0  addiu       $v0, $s2, 0x19D0
    ctx->pc = 0x31f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6608));
    // 0x31f304: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31f304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f308: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x31f308u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f30c: 0x264319e0  addiu       $v1, $s2, 0x19E0
    ctx->pc = 0x31f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6624));
    // 0x31f310: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31f310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f314: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x31f314u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f318: 0x264219f0  addiu       $v0, $s2, 0x19F0
    ctx->pc = 0x31f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6640));
    // 0x31f31c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31f31cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f320: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x31f320u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f324: 0x26431a00  addiu       $v1, $s2, 0x1A00
    ctx->pc = 0x31f324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6656));
    // 0x31f328: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31f328u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f32c: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x31f32cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f330: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x31F330u;
    {
        const bool branch_taken_0x31f330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F330u;
        // 0x31f334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f330) {
            ctx->pc = 0x31F874u;
            goto label_31f874;
        }
    }
    ctx->pc = 0x31F338u;
label_31f338:
    // 0x31f338: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x31f338u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x31f33c: 0x8e22bdc0  lw          $v0, -0x4240($s1)
    ctx->pc = 0x31f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBDC0u));
    // 0x31f340: 0x10400123  beqz        $v0, . + 4 + (0x123 << 2)
    ctx->pc = 0x31F340u;
    {
        const bool branch_taken_0x31f340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F340u;
        // 0x31f344: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f340) {
            ctx->pc = 0x31F7D0u;
            goto label_31f7d0;
        }
    }
    ctx->pc = 0x31F348u;
    // 0x31f348: 0x92a20620  lbu         $v0, 0x620($s5)
    ctx->pc = 0x31f348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1568)));
    // 0x31f34c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F34Cu;
    {
        const bool branch_taken_0x31f34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F34Cu;
        // 0x31f350: 0xc6540018  lwc1        $f20, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f34c) {
            ctx->pc = 0x31F364u;
            goto label_31f364;
        }
    }
    ctx->pc = 0x31F354u;
    // 0x31f354: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31f354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31f358: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x31f358u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f35c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x31f35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x31f360: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x31f360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_31f364:
    // 0x31f364: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31f364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31f368: 0xc64c0018  lwc1        $f12, 0x18($s2)
    ctx->pc = 0x31f368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31f36c: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x31f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x31f370: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x31f370u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31f374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f378: 0xc0bfbbc  jal         func_2FEEF0
    ctx->pc = 0x31F378u;
    SET_GPR_U32(ctx, 31, 0x31F380u);
    ctx->pc = 0x31F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F378u;
    // 0x31f37c: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEEF0u, 0x31F378u, 0x31F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F380u;
label_31f380:
    // 0x31f380: 0xc660bdc4  lwc1        $f0, -0x423C($s3)
    ctx->pc = 0x31f380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294950340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f384: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x31f384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f388: 0x0  nop
    ctx->pc = 0x31f388u;
    // NOP
    // 0x31f38c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x31F38Cu;
    {
        const bool branch_taken_0x31f38c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F38Cu;
        // 0x31f390: 0x3c160048  lui         $s6, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f38c) {
            ctx->pc = 0x31F44Cu;
            goto label_31f44c;
        }
    }
    ctx->pc = 0x31F394u;
    // 0x31f394: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x31f394u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x31f398: 0x8e22bdc0  lw          $v0, -0x4240($s1)
    ctx->pc = 0x31f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950336)));
    // 0x31f39c: 0x8e03bdc8  lw          $v1, -0x4238($s0)
    ctx->pc = 0x31f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBDC8u));
    // 0x31f3a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31f3a4: 0xae03bdc8  sw          $v1, -0x4238($s0)
    ctx->pc = 0x31f3a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FBDC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBDC8u, _value); } while (0);
    // 0x31f3a8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x31f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x31f3ac: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x31f3acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31f3b0: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x31F3B0u;
    {
        const bool branch_taken_0x31f3b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f3b0) {
            ctx->pc = 0x31F3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F3B0u;
            // 0x31f3b4: 0x924219c4  lbu         $v0, 0x19C4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F40Cu;
            goto label_31f40c;
        }
    }
    ctx->pc = 0x31F3B8u;
    // 0x31f3b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f3bc: 0x264319d0  addiu       $v1, $s2, 0x19D0
    ctx->pc = 0x31f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6608));
    // 0x31f3c0: 0xa2421a10  sb          $v0, 0x1A10($s2)
    ctx->pc = 0x31f3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6672), (uint8_t)GPR_U32(ctx, 2));
    // 0x31f3c4: 0x8e840100  lw          $a0, 0x100($s4)
    ctx->pc = 0x31f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x31f3c8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31f3c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f3cc: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x31f3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f3d0: 0x264219e0  addiu       $v0, $s2, 0x19E0
    ctx->pc = 0x31f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6624));
    // 0x31f3d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31f3d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f3d8: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x31f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f3dc: 0x264319f0  addiu       $v1, $s2, 0x19F0
    ctx->pc = 0x31f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6640));
    // 0x31f3e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31f3e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f3e4: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x31f3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f3e8: 0x26421a00  addiu       $v0, $s2, 0x1A00
    ctx->pc = 0x31f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6656));
    // 0x31f3ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31f3ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f3f0: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x31f3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f3f4: 0xae20bdc0  sw          $zero, -0x4240($s1)
    ctx->pc = 0x31f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950336), GPR_U32(ctx, 0));
    // 0x31f3f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f3fc: 0xae00bdc8  sw          $zero, -0x4238($s0)
    ctx->pc = 0x31f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950344), GPR_U32(ctx, 0));
    // 0x31f400: 0xae60bdc4  sw          $zero, -0x423C($s3)
    ctx->pc = 0x31f400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294950340), GPR_U32(ctx, 0));
    // 0x31f404: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x31F404u;
    {
        const bool branch_taken_0x31f404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F404u;
        // 0x31f408: 0xaec02c60  sw          $zero, 0x2C60($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 11360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f404) {
            ctx->pc = 0x31F874u;
            goto label_31f874;
        }
    }
    ctx->pc = 0x31F40Cu;
label_31f40c:
    // 0x31f40c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F40Cu;
    {
        const bool branch_taken_0x31f40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F40Cu;
        // 0x31f410: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f40c) {
            ctx->pc = 0x31F41Cu;
            goto label_31f41c;
        }
    }
    ctx->pc = 0x31F414u;
    // 0x31f414: 0xc0c259a  jal         func_309668
    ctx->pc = 0x31F414u;
    SET_GPR_U32(ctx, 31, 0x31F41Cu);
    ctx->pc = 0x31F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F414u;
    // 0x31f418: 0x24846920  addiu       $a0, $a0, 0x6920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309668u, 0x31F414u, 0x31F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F41Cu;
label_31f41c:
    // 0x31f41c: 0x8e24bdc0  lw          $a0, -0x4240($s1)
    ctx->pc = 0x31f41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950336)));
    // 0x31f420: 0x8e03bdc8  lw          $v1, -0x4238($s0)
    ctx->pc = 0x31f420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950344)));
    // 0x31f424: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x31f424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x31f428: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x31f428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x31f42c: 0xc661bdc4  lwc1        $f1, -0x423C($s3)
    ctx->pc = 0x31f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294950340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f434: 0xaec22c60  sw          $v0, 0x2C60($s6)
    ctx->pc = 0x31f434u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 11360), GPR_U32(ctx, 2));
    // 0x31f438: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x31f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x31f43c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31f440: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x31f440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f444: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31f444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31f448: 0xe661bdc4  swc1        $f1, -0x423C($s3)
    ctx->pc = 0x31f448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294950340), bits); }
label_31f44c:
    // 0x31f44c: 0x92420010  lbu         $v0, 0x10($s2)
    ctx->pc = 0x31f44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x31f450: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F450u;
    {
        const bool branch_taken_0x31f450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F450u;
        // 0x31f454: 0x8ee3bd50  lw          $v1, -0x42B0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f450) {
            ctx->pc = 0x31F464u;
            goto label_31f464;
        }
    }
    ctx->pc = 0x31F458u;
    // 0x31f458: 0xc0c2522  jal         func_309488
    ctx->pc = 0x31F458u;
    SET_GPR_U32(ctx, 31, 0x31F460u);
    ctx->pc = 0x31F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F458u;
    // 0x31f45c: 0x8ec42c60  lw          $a0, 0x2C60($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309488u, 0x31F458u, 0x31F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F460u;
label_31f460:
    // 0x31f460: 0x8ee3bd50  lw          $v1, -0x42B0($s7)
    ctx->pc = 0x31f460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950224)));
label_31f464:
    // 0x31f464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31f464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f468: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x31f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x31f46c: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x31f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x31f470: 0x245e0070  addiu       $fp, $v0, 0x70
    ctx->pc = 0x31f470u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x31f474: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x31f474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x31f478: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31F478u;
    SET_GPR_U32(ctx, 31, 0x31F480u);
    ctx->pc = 0x31F47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F478u;
    // 0x31f47c: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31F478u, 0x31F480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F480u;
label_31f480:
    // 0x31f480: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31f480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31f484: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31F484u;
    SET_GPR_U32(ctx, 31, 0x31F48Cu);
    ctx->pc = 0x31F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F484u;
    // 0x31f488: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31F484u, 0x31F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F48Cu;
label_31f48c:
    // 0x31f48c: 0x8ec22c60  lw          $v0, 0x2C60($s6)
    ctx->pc = 0x31f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11360)));
    // 0x31f490: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x31f490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x31f494: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x31f494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31f498: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31f498u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f49c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x31f49cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31f4a0: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x31f4a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x31f4a4: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x31f4a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x31f4a8: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x31f4a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x31f4ac: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x31f4acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31f4b0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x31f4b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31f4b4: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x31f4b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x31f4b8: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x31f4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x31f4bc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x31f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x31f4c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31f4c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f4c4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x31f4c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31f4c8: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x31f4c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x31f4cc: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x31f4ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x31f4d0: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x31f4d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x31f4d4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x31f4d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31f4d8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x31f4d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31f4dc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x31f4dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x31f4e0: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x31f4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x31f4e4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x31f4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31f4e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x31f4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31f4ec: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x31f4ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31f4f0: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x31f4f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31f4f4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31f4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f4f8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x31f4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f4fc: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x31f4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f500: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x31f500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f504: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x31f504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x31f508: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x31f508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f50c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x31f50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f510: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x31f510u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31f514: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x31f514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31f518: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31f518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31f51c: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x31f51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31f520: 0x8ee2bd50  lw          $v0, -0x42B0($s7)
    ctx->pc = 0x31f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950224)));
    // 0x31f524: 0x8c420334  lw          $v0, 0x334($v0)
    ctx->pc = 0x31f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x31f528: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x31f528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x31f52c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F52Cu;
    {
        const bool branch_taken_0x31f52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F52Cu;
        // 0x31f530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f52c) {
            ctx->pc = 0x31F540u;
            goto label_31f540;
        }
    }
    ctx->pc = 0x31F534u;
    // 0x31f534: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x31f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x31f538: 0x2442fca4  addiu       $v0, $v0, -0x35C
    ctx->pc = 0x31f538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966436));
    // 0x31f53c: 0x2c450004  sltiu       $a1, $v0, 0x4
    ctx->pc = 0x31f53cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_31f540:
    // 0x31f540: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F540u;
    {
        const bool branch_taken_0x31f540 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F540u;
        // 0x31f544: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f540) {
            ctx->pc = 0x31F55Cu;
            goto label_31f55c;
        }
    }
    ctx->pc = 0x31F548u;
    // 0x31f548: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x31f548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x31f54c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x31f54cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31f550: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x31f550u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f554: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31f554u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f558: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x31f558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_31f55c:
    // 0x31f55c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31f55cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f560: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x31f560u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31f564: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31f564u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f568: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x31f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f56c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x31f56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f570: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x31f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f574: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x31f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f578: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x31f578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31f57c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x31f57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31f580: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x31f580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x31f584: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x31f584u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31f588: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x31f588u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x31f58c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x31f58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f590: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x31f590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f594: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x31f594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f598: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x31f598u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x31f59c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x31f59cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x31f5a0: 0x4604255c  madd.s      $f21, $f4, $f4
    ctx->pc = 0x31f5a0u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x31f5a4: 0x46150544  c1          0x150544
    ctx->pc = 0x31f5a4u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x31f5a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31f5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31f5ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31f5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31f5b0: 0x0  nop
    ctx->pc = 0x31f5b0u;
    // NOP
    // 0x31f5b4: 0x4615a003  div.s       $f0, $f20, $f21
    ctx->pc = 0x31f5b4u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[21]); }
    // 0x31f5b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31f5b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31f5bc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x31f5bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31f5c0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x31f5c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x31f5c4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x31f5c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f5c8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x31f5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f5cc: 0x8ec52c60  lw          $a1, 0x2C60($s6)
    ctx->pc = 0x31f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11360)));
    // 0x31f5d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31f5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f5d4: 0xc0c7e2c  jal         func_31F8B0
    ctx->pc = 0x31F5D4u;
    SET_GPR_U32(ctx, 31, 0x31F5DCu);
    ctx->pc = 0x31F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F5D4u;
    // 0x31f5d8: 0x26a60098  addiu       $a2, $s5, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F8B0u, 0x31F5D4u, 0x31F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F5DCu;
label_31f5dc:
    // 0x31f5dc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31f5e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31f5e4: 0x8c63bdcc  lw          $v1, -0x4234($v1)
    ctx->pc = 0x31f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBDCCu));
    // 0x31f5e8: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31F5E8u;
    {
        const bool branch_taken_0x31f5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31f5e8) {
            ctx->pc = 0x31F5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F5E8u;
            // 0x31f5ec: 0xe6b40098  swc1        $f20, 0x98($s5) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F618u;
            goto label_31f618;
        }
    }
    ctx->pc = 0x31F5F0u;
    // 0x31f5f0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x31f5f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31f5f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F5F4u;
    {
        const bool branch_taken_0x31f5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f5f4) {
            ctx->pc = 0x31F604u;
            goto label_31f604;
        }
    }
    ctx->pc = 0x31F5FCu;
    // 0x31f5fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31F5FCu;
    {
        const bool branch_taken_0x31f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5FCu;
        // 0x31f600: 0xe6b40098  swc1        $f20, 0x98($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f5fc) {
            ctx->pc = 0x31F618u;
            goto label_31f618;
        }
    }
    ctx->pc = 0x31F604u;
label_31f604:
    // 0x31f604: 0x58600005  blezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F604u;
    {
        const bool branch_taken_0x31f604 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x31f604) {
            ctx->pc = 0x31F608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F604u;
            // 0x31f608: 0xc6a00098  lwc1        $f0, 0x98($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F61Cu;
            goto label_31f61c;
        }
    }
    ctx->pc = 0x31F60Cu;
    // 0x31f60c: 0x8ec22c60  lw          $v0, 0x2C60($s6)
    ctx->pc = 0x31f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11360)));
    // 0x31f610: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x31f610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f614: 0xe6a00098  swc1        $f0, 0x98($s5)
    ctx->pc = 0x31f614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
label_31f618:
    // 0x31f618: 0xc6a00098  lwc1        $f0, 0x98($s5)
    ctx->pc = 0x31f618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31f61c:
    // 0x31f61c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x31f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31f620: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x31f620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f624: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31f624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31f628: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x31f628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x31f62c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x31f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f630: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x31f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f634: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x31f634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f638: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x31f638u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x31f63c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x31f63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f640: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x31f640u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31f644: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x31f644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x31f648: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x31f648u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31f64c: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x31f64cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31f650: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x31f650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31f654: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31f654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31f658: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x31f658u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31f65c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x31f65cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31f660: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31f660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f664: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x31f664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f668: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x31f668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f66c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x31f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31f670: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x31f670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f674: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x31f674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f678: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x31f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f67c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x31f67cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x31f680: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x31f680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x31f684: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x31f684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x31f688: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x31f688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x31f68c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31f68cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f690: 0xfbc10000  sqc2        $vf1, 0x0($fp)
    ctx->pc = 0x31f690u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f694: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x31f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f698: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x31f698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x31f69c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x31f69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f6a0: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x31f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x31f6a4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x31f6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f6a8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x31f6a8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x31f6ac: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x31f6acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x31f6b0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x31f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x31f6b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x31f6b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x31f6b8: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x31f6b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x31f6bc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x31f6bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x31f6c0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x31f6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x31f6c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31f6c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x31f6c8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x31f6c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f6cc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x31f6ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31f6d0: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x31f6d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f6d4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x31f6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f6d8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x31f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f6dc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x31f6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f6e0: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x31f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f6e4: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x31f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f6e8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31f6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31f6ec: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x31f6ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31f6f0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x31f6f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31f6f4: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x31f6f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31f6f8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x31f6f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31f6fc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x31f6fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x31f700: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x31f700u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x31f704: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x31f704u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x31f708: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x31f708u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x31f70c: 0x4a0003bf  vwaitq
    ctx->pc = 0x31f70cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x31f710: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x31f710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f714: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x31f714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f718: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31f718u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f71c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x31f71cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31f720: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x31f720u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31f724: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x31f724u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f728: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x31f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f72c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x31f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f730: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x31f730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f734: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x31f734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f738: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x31f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f73c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x31f73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x31f740: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x31f740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x31f744: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x31f744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x31f748: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x31f748u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x31f74c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x31f74cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31f750: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x31f750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x31f754: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x31f754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x31f758: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x31f758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x31f75c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x31f75cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x31f760: 0x4a0003bf  vwaitq
    ctx->pc = 0x31f760u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x31f764: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x31f764u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f768: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x31f768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f76c: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x31f76cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x31f770: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31f770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f774: 0xfa610020  sqc2        $vf1, 0x20($s3)
    ctx->pc = 0x31f774u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f778: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x31f778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31f77c: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x31f77cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f780: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x31f780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x31f784: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x31f784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31f788: 0xfa610010  sqc2        $vf1, 0x10($s3)
    ctx->pc = 0x31f788u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f78c: 0x8ec22c60  lw          $v0, 0x2C60($s6)
    ctx->pc = 0x31f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11360)));
    // 0x31f790: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x31f790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x31f794: 0x24a55b50  addiu       $a1, $a1, 0x5B50
    ctx->pc = 0x31f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
    // 0x31f798: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31f798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f79c: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x31F79Cu;
    SET_GPR_U32(ctx, 31, 0x31F7A4u);
    ctx->pc = 0x31F7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F79Cu;
    // 0x31f7a0: 0xc44c0038  lwc1        $f12, 0x38($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x31F79Cu, 0x31F7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F7A4u;
label_31f7a4:
    // 0x31f7a4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x31f7a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31f7a8: 0xfa4119d0  sqc2        $vf1, 0x19D0($s2)
    ctx->pc = 0x31f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 6608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f7ac: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x31f7acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31f7b0: 0xfa4119e0  sqc2        $vf1, 0x19E0($s2)
    ctx->pc = 0x31f7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 6624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f7b4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x31f7b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31f7b8: 0xfa4119f0  sqc2        $vf1, 0x19F0($s2)
    ctx->pc = 0x31f7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 6640), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f7bc: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x31f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x31f7c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31f7c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f7c4: 0xfa411a00  sqc2        $vf1, 0x1A00($s2)
    ctx->pc = 0x31f7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 6656), _mm_castps_si128(ctx->vu0_vf[1]));
label_31f7c8:
    // 0x31f7c8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31F7C8u;
    {
        const bool branch_taken_0x31f7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7C8u;
        // 0x31f7cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7c8) {
            ctx->pc = 0x31F874u;
            goto label_31f874;
        }
    }
    ctx->pc = 0x31F7D0u;
label_31f7d0:
    // 0x31f7d0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x31f7d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31f7d4: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x31f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x31f7d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31f7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f7dc: 0xc0bfbbc  jal         func_2FEEF0
    ctx->pc = 0x31F7DCu;
    SET_GPR_U32(ctx, 31, 0x31F7E4u);
    ctx->pc = 0x31F7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F7DCu;
    // 0x31f7e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEEF0u, 0x31F7DCu, 0x31F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F7E4u;
label_31f7e4:
    // 0x31f7e4: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x31f7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x31f7e8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x31F7E8u;
    {
        const bool branch_taken_0x31f7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7E8u;
        // 0x31f7ec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7e8) {
            ctx->pc = 0x31F870u;
            goto label_31f870;
        }
    }
    ctx->pc = 0x31F7F0u;
    // 0x31f7f0: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x31f7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f7f4: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x31f7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f7f8: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x31f7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f7fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31f7fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31f800: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x31f800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f804: 0x0  nop
    ctx->pc = 0x31f804u;
    // NOP
    // 0x31f808: 0x4500ffef  bc1f        . + 4 + (-0x11 << 2)
    ctx->pc = 0x31F808u;
    {
        const bool branch_taken_0x31f808 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F808u;
        // 0x31f80c: 0xe6400018  swc1        $f0, 0x18($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f808) {
            ctx->pc = 0x31F7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f7c8;
        }
    }
    ctx->pc = 0x31F810u;
    // 0x31f810: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x31f810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f814: 0x0  nop
    ctx->pc = 0x31f814u;
    // NOP
    // 0x31f818: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x31F818u;
    {
        const bool branch_taken_0x31f818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F818u;
        // 0x31f81c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f818) {
            ctx->pc = 0x31F858u;
            goto label_31f858;
        }
    }
    ctx->pc = 0x31F820u;
    // 0x31f820: 0x264319d0  addiu       $v1, $s2, 0x19D0
    ctx->pc = 0x31f820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6608));
    // 0x31f824: 0xa2421a10  sb          $v0, 0x1A10($s2)
    ctx->pc = 0x31f824u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6672), (uint8_t)GPR_U32(ctx, 2));
    // 0x31f828: 0x8e840100  lw          $a0, 0x100($s4)
    ctx->pc = 0x31f828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x31f82c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31f82cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f830: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x31f830u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f834: 0x264219e0  addiu       $v0, $s2, 0x19E0
    ctx->pc = 0x31f834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6624));
    // 0x31f838: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31f838u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f83c: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x31f83cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f840: 0x264319f0  addiu       $v1, $s2, 0x19F0
    ctx->pc = 0x31f840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6640));
    // 0x31f844: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31f844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f848: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x31f848u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f84c: 0x26421a00  addiu       $v0, $s2, 0x1A00
    ctx->pc = 0x31f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6656));
    // 0x31f850: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31f850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f854: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x31f854u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_31f858:
    // 0x31f858: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31f858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31f85c: 0xe6540014  swc1        $f20, 0x14($s2)
    ctx->pc = 0x31f85cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x31f860: 0xa040bdfc  sb          $zero, -0x4204($v0)
    ctx->pc = 0x31f860u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBDFCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FBDFCu, _value); } while (0);
    // 0x31f864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f868: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31F868u;
    {
        const bool branch_taken_0x31f868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F868u;
        // 0x31f86c: 0xa2400011  sb          $zero, 0x11($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 17), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f868) {
            ctx->pc = 0x31F874u;
            goto label_31f874;
        }
    }
    ctx->pc = 0x31F870u;
label_31f870:
    // 0x31f870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f874:
    // 0x31f874: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x31f874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31f878: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x31f878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x31f87c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x31f87cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31f880: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x31f880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x31f884: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x31f884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31f888: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x31f888u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x31f88c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x31f88cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31f890: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x31f890u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31f894: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x31f894u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31f898: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x31f898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x31f89c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x31f89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31f8a0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x31f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31f8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x31F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8A4u;
        // 0x31f8a8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F8ACu;
    // 0x31f8ac: 0x0  nop
    ctx->pc = 0x31f8acu;
    // NOP
    ctx->pc = 0x31f8b0u;
}
