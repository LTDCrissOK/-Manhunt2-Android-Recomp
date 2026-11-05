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

// Function: sub_00250A88
// Address: 0x250a88 - 0x250d18
void sub_00250A88_0x250a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250A88_0x250a88");
#endif

    switch (ctx->pc) {
        case 0x250ab0u: goto label_250ab0;
        case 0x250ab8u: goto label_250ab8;
        case 0x250b1cu: goto label_250b1c;
        case 0x250cccu: goto label_250ccc;
        default: break;
    }

    ctx->pc = 0x250a88u;

    // 0x250a88: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x250a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x250a8c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x250a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x250a90: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x250a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x250a94: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x250a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250a98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x250a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a9c: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x250a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x250aa0: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x250aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x250aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x250aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250aa8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x250AA8u;
    SET_GPR_U32(ctx, 31, 0x250AB0u);
    ctx->pc = 0x250AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250AA8u;
    // 0x250aac: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x250AA8u, 0x250AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250AB0u;
label_250ab0:
    // 0x250ab0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x250AB0u;
    SET_GPR_U32(ctx, 31, 0x250AB8u);
    ctx->pc = 0x250AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250AB0u;
    // 0x250ab4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x250AB0u, 0x250AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250AB8u;
label_250ab8:
    // 0x250ab8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x250ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x250abc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x250abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x250ac0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x250ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x250ac4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x250ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x250ac8: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x250ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x250acc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x250accu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250ad0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x250ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x250ad4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x250ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x250ad8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x250ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x250adc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x250adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x250ae0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x250ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x250ae4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x250ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x250ae8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x250ae8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250aec: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x250aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250af0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x250af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x250af4: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x250af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x250af8: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x250af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x250afc: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x250afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x250b00: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x250b00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250b04: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x250b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250b08: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x250b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x250b0c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x250b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x250b10: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x250b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x250b14: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x250B14u;
    SET_GPR_U32(ctx, 31, 0x250B1Cu);
    ctx->pc = 0x250B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250B14u;
    // 0x250b18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x250B14u, 0x250B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B1Cu;
label_250b1c:
    // 0x250b1c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x250b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x250b20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250b24: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x250b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x250b28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x250b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x250b2c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x250b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x250b30: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x250b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x250b34: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x250b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x250b38: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x250b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x250b3c: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x250b3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x250b40: 0xc6140004  lwc1        $f20, 0x4($s0)
    ctx->pc = 0x250b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250b44: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x250b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x250b48: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x250b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x250b4c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x250b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250b50: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x250b50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250b54: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x250b54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250b58: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x250b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250b5c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x250b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250b60: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x250b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250b64: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x250b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250b68: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x250b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250b6c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x250b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x250b70: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x250b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x250b74: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x250b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x250b78: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x250b78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x250b7c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x250b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x250b80: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x250b80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x250b84: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x250b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x250b88: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x250b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x250b8c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x250b8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250b90: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x250b90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250b94: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x250b94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250b98: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x250b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250b9c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x250b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250ba0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x250ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x250ba4: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x250ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250ba8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x250ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x250bac: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x250bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250bb0: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x250bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250bb4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x250bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250bb8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x250bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x250bbc: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x250bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x250bc0: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x250bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x250bc4: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x250bc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x250bc8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x250bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x250bcc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x250bccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x250bd0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x250bd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250bd4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x250bd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250bd8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x250bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250bdc: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x250bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250be0: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x250be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250be4: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x250be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x250be8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x250be8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x250bec: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x250becu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x250bf0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x250bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x250bf4: 0x0  nop
    ctx->pc = 0x250bf4u;
    // NOP
    // 0x250bf8: 0x0  nop
    ctx->pc = 0x250bf8u;
    // NOP
    // 0x250bfc: 0x46000044  c1          0x44
    ctx->pc = 0x250bfcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x250c00: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x250c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x250c04: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x250c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x250c08: 0x0  nop
    ctx->pc = 0x250c08u;
    // NOP
    // 0x250c0c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x250c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250c10: 0x0  nop
    ctx->pc = 0x250c10u;
    // NOP
    // 0x250c14: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x250C14u;
    {
        const bool branch_taken_0x250c14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C14u;
        // 0x250c18: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c14) {
            ctx->pc = 0x250C40u;
            goto label_250c40;
        }
    }
    ctx->pc = 0x250C1Cu;
    // 0x250c1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250c20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250c24: 0x0  nop
    ctx->pc = 0x250c24u;
    // NOP
    // 0x250c28: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x250c28u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x250c2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x250c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x250c30: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x250c30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x250c34: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x250c34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250c38: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x250c38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250c3c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x250c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_250c40:
    // 0x250c40: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x250c40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x250c44: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x250c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x250c48: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x250c48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x250c4c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x250c4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250c50: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x250c50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250c54: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x250c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250c58: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x250c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250c5c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x250c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250c60: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x250c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x250c64: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x250c64u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x250c68: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x250c68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x250c6c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x250c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x250c70: 0x0  nop
    ctx->pc = 0x250c70u;
    // NOP
    // 0x250c74: 0x0  nop
    ctx->pc = 0x250c74u;
    // NOP
    // 0x250c78: 0x46000044  c1          0x44
    ctx->pc = 0x250c78u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x250c7c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x250c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x250c80: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x250c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250c84: 0x0  nop
    ctx->pc = 0x250c84u;
    // NOP
    // 0x250c88: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x250C88u;
    {
        const bool branch_taken_0x250c88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C88u;
        // 0x250c8c: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c88) {
            ctx->pc = 0x250CB4u;
            goto label_250cb4;
        }
    }
    ctx->pc = 0x250C90u;
    // 0x250c90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250c94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250c98: 0x0  nop
    ctx->pc = 0x250c98u;
    // NOP
    // 0x250c9c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x250c9cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x250ca0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x250ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x250ca4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x250ca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x250ca8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x250ca8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250cac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x250cacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250cb0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x250cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_250cb4:
    // 0x250cb4: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x250cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x250cb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x250cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250cbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x250cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250cc0: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x250cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x250cc4: 0xc077912  jal         func_1DE448
    ctx->pc = 0x250CC4u;
    SET_GPR_U32(ctx, 31, 0x250CCCu);
    ctx->pc = 0x250CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250CC4u;
    // 0x250cc8: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x250CC4u, 0x250CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250CCCu;
label_250ccc:
    // 0x250ccc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x250CCCu;
    {
        const bool branch_taken_0x250ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CCCu;
        // 0x250cd0: 0xc7a10084  lwc1        $f1, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ccc) {
            ctx->pc = 0x250CF4u;
            goto label_250cf4;
        }
    }
    ctx->pc = 0x250CD4u;
    // 0x250cd4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x250cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x250cd8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x250cd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x250cdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250ce0: 0x0  nop
    ctx->pc = 0x250ce0u;
    // NOP
    // 0x250ce4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x250ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250ce8: 0x0  nop
    ctx->pc = 0x250ce8u;
    // NOP
    // 0x250cec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x250CECu;
    {
        const bool branch_taken_0x250cec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250cec) {
            ctx->pc = 0x250CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250CECu;
            // 0x250cf0: 0xc7b40074  lwc1        $f20, 0x74($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x250CF4u;
            goto label_250cf4;
        }
    }
    ctx->pc = 0x250CF4u;
label_250cf4:
    // 0x250cf4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x250cf4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x250cf8: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x250cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x250cfc: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x250cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x250d00: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x250d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x250d04: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x250d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x250d08: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x250d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x250D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D0Cu;
        // 0x250d10: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250D14u;
    // 0x250d14: 0x0  nop
    ctx->pc = 0x250d14u;
    // NOP
    ctx->pc = 0x250d18u;
}
