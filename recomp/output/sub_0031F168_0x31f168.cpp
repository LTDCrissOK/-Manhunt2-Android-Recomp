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

// Function: sub_0031F168
// Address: 0x31f168 - 0x31f298
void sub_0031F168_0x31f168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F168_0x31f168");
#endif

    ctx->pc = 0x31f168u;

    // 0x31f168: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31f168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31f16c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31f16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f170: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x31f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x31f174: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x31f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x31f178: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31f178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31f17c: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x31f17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x595918u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x595918u, _value); } while (0); }
    // 0x31f180: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x31f180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x31f184: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x31f184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x31f188: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x31f188u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x31f18c: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x31f18cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x31f190: 0xaca0bdc0  sw          $zero, -0x4240($a1)
    ctx->pc = 0x31f190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBDC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBDC0u, _value); } while (0);
    // 0x31f194: 0xacc0bdc8  sw          $zero, -0x4238($a2)
    ctx->pc = 0x31f194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBDC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBDC8u, _value); } while (0);
    // 0x31f198: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x31f198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x31f19c: 0xace0bdc4  sw          $zero, -0x423C($a3)
    ctx->pc = 0x31f19cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBDC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBDC4u, _value); } while (0);
    // 0x31f1a0: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x31f1a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x31f1a4: 0xad002c60  sw          $zero, 0x2C60($t0)
    ctx->pc = 0x31f1a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C60u, _value); } while (0);
    // 0x31f1a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f1ac: 0xa0601a10  sb          $zero, 0x1A10($v1)
    ctx->pc = 0x31f1acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B4250u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5B4250u, _value); } while (0);
    // 0x31f1b0: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x31f1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x595908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x595908u, _value); } while (0); }
    // 0x31f1b4: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x31f1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x595904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x595904u, _value); } while (0); }
    // 0x31f1b8: 0xa0600011  sb          $zero, 0x11($v1)
    ctx->pc = 0x31f1b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B2851u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5B2851u, _value); } while (0);
    // 0x31f1bc: 0x8d25bd50  lw          $a1, -0x42B0($t1)
    ctx->pc = 0x31f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x31f1c0: 0x8c860100  lw          $a2, 0x100($a0)
    ctx->pc = 0x31f1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x31f1c4: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x31f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x31f1c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f1cc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x31f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x31f1d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31f1d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f1d4: 0xf8c10070  sqc2        $vf1, 0x70($a2)
    ctx->pc = 0x31f1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f1d8: 0x8d23bd50  lw          $v1, -0x42B0($t1)
    ctx->pc = 0x31f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x31f1dc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x31f1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x31f1e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x31f1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x31f1e4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x31f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x31f1e8: 0x8c850100  lw          $a1, 0x100($a0)
    ctx->pc = 0x31f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x31f1ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f1f0: 0x24a60070  addiu       $a2, $a1, 0x70
    ctx->pc = 0x31f1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x31f1f4: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x31f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x31f1f8: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x31f1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f1fc: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x31f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f200: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x31f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f204: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x31f204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x31f208: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31f208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f20c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x31f20cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x31f210: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x31f210u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x31f214: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x31f214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x31f218: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x31f218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31f21c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x31f21cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x31f220: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x31f220u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31f224: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x31f224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31f228: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x31f228u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31f22c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x31f22cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f230: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31f230u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f234: 0xf8a10070  sqc2        $vf1, 0x70($a1)
    ctx->pc = 0x31f234u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f238: 0x8d22bd50  lw          $v0, -0x42B0($t1)
    ctx->pc = 0x31f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294950224)));
    // 0x31f23c: 0x8c850100  lw          $a1, 0x100($a0)
    ctx->pc = 0x31f23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x31f240: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x31f240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x31f244: 0x24a60070  addiu       $a2, $a1, 0x70
    ctx->pc = 0x31f244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x31f248: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31f248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31f24c: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x31f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x31f250: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x31f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f254: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x31f254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f258: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x31f258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f25c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31f25cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x31f260: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f264: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31f264u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x31f268: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x31f268u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x31f26c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31f26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x31f270: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x31f270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31f274: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x31f274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x31f278: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x31f278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31f27c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x31f27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31f280: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x31f280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31f284: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x31f284u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f288: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31f288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f28c: 0xf8a10070  sqc2        $vf1, 0x70($a1)
    ctx->pc = 0x31f28cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f290: 0x3e00008  jr          $ra
    ctx->pc = 0x31F290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F290u;
        // 0x31f294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F298u;
}
