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

// Function: sub_002E18C0
// Address: 0x2e18c0 - 0x2e19a8
void sub_002E18C0_0x2e18c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E18C0_0x2e18c0");
#endif

    switch (ctx->pc) {
        case 0x2e1998u: goto label_2e1998;
        default: break;
    }

    ctx->pc = 0x2e18c0u;

    // 0x2e18c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e18c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e18c4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e18c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e18c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e18c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e18cc: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x2e18ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2e18d0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2e18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2e18d4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2E18D4u;
    {
        const bool branch_taken_0x2e18d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E18D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18D4u;
        // 0x2e18d8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18d4) {
            ctx->pc = 0x2E199Cu;
            goto label_2e199c;
        }
    }
    ctx->pc = 0x2E18DCu;
    // 0x2e18dc: 0x25020030  addiu       $v0, $t0, 0x30
    ctx->pc = 0x2e18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x2e18e0: 0xc5020030  lwc1        $f2, 0x30($t0)
    ctx->pc = 0x2e18e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e18e4: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2e18e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e18e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2e18e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e18ec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2e18ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e18f0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2e18f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e18f4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2e18f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e18f8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2e18f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e18fc: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E18FCu;
    {
        const bool branch_taken_0x2e18fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18FCu;
        // 0x2e1900: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18fc) {
            ctx->pc = 0x2E1918u;
            goto label_2e1918;
        }
    }
    ctx->pc = 0x2E1904u;
    // 0x2e1904: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2e1904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2e1908: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2e1908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e190c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e190cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1910: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e1910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e1914: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2e1914u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e1918:
    // 0x2e1918: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e1918u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e191c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2e191cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e1920: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2e1920u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e1924: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2e1924u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e1928: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2e1928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e192c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2e192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e1930: 0x25040090  addiu       $a0, $t0, 0x90
    ctx->pc = 0x2e1930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
    // 0x2e1934: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2e1934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e1938: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2e1938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e193c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2e193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1940: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2e1940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1944: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2e1944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e1948: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2e1948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e194c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e194cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e1950: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2e1950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e1954: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e1954u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1958: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2e1958u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e195c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e195cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e1960: 0xf9010090  sqc2        $vf1, 0x90($t0)
    ctx->pc = 0x2e1960u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e1964: 0x8d0200b0  lw          $v0, 0xB0($t0)
    ctx->pc = 0x2e1964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x2e1968: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e1968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e196c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e196cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e1970: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2e1970u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e1974: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2e1974u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e1978: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2e1978u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2e197c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e197cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e1980: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e1980u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e1984: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e1984u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2e1988: 0xf90500a0  sqc2        $vf5, 0xA0($t0)
    ctx->pc = 0x2e1988u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2e198c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2e198cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1990: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2E1990u;
    SET_GPR_U32(ctx, 31, 0x2E1998u);
    ctx->pc = 0x2E1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1990u;
    // 0x2e1994: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2E1990u, 0x2E1998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1998u;
label_2e1998:
    // 0x2e1998: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e1998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e199c:
    // 0x2e199c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E199Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E199Cu;
        // 0x2e19a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E199Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E19A4u;
    // 0x2e19a4: 0x0  nop
    ctx->pc = 0x2e19a4u;
    // NOP
    ctx->pc = 0x2e19a8u;
}
