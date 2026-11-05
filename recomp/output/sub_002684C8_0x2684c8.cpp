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

// Function: sub_002684C8
// Address: 0x2684c8 - 0x268558
void sub_002684C8_0x2684c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002684C8_0x2684c8");
#endif

    ctx->pc = 0x2684c8u;

    // 0x2684c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2684c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2684cc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2684ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2684d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2684d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2684d4: 0xac409dbc  sw          $zero, -0x6244($v0)
    ctx->pc = 0x2684d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9DBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9DBCu, _value); } while (0);
    // 0x2684d8: 0xac609dc0  sw          $zero, -0x6240($v1)
    ctx->pc = 0x2684d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9DC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9DC0u, _value); } while (0);
    // 0x2684dc: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x2684dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x2684e0: 0x8ca4bd48  lw          $a0, -0x42B8($a1)
    ctx->pc = 0x2684e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2684e4: 0x24c745c0  addiu       $a3, $a2, 0x45C0
    ctx->pc = 0x2684e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 17856));
    // 0x2684e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2684e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2684ec: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x2684ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2684f0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2684f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2684f4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2684f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2684f8: 0xf8c145c0  sqc2        $vf1, 0x45C0($a2)
    ctx->pc = 0x2684f8u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4B45C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4B45C0u, _value); } while (0);
    // 0x2684fc: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x2684fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x268500: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x268500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x268504: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x268504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x268508: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x268508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26850c: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x26850cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x268510: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x268510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x268514: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x268514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x268518: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x268518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26851c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26851cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x268520: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x268520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268524: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x268524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x268528: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x268528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26852c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x26852cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x268530: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x268530u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268534: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x268534u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x268538: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x268538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26853c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26853cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x268540: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x268540u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x268544: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x268544u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268548: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x268548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26854c: 0xf8c145c0  sqc2        $vf1, 0x45C0($a2)
    ctx->pc = 0x26854cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 17856), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x268550: 0x3e00008  jr          $ra
    ctx->pc = 0x268550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268550u;
        // 0x268554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268558u;
}
