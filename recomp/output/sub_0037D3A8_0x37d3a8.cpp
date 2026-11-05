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

// Function: sub_0037D3A8
// Address: 0x37d3a8 - 0x37d438
void sub_0037D3A8_0x37d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D3A8_0x37d3a8");
#endif

    ctx->pc = 0x37d3a8u;

    // 0x37d3a8: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x37d3a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37d3ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37d3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d3b0: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x37d3b0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x37d3b4: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x37d3b4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x37d3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x37D3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D3B8u;
        // 0x37d3bc: 0xe48f000c  swc1        $f15, 0xC($a0) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D3C0u;
    // 0x37d3c0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x37d3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x37d3c4: 0x0  nop
    ctx->pc = 0x37d3c4u;
    // NOP
    // 0x37d3c8: 0x0  nop
    ctx->pc = 0x37d3c8u;
    // NOP
    // 0x37d3cc: 0x0  nop
    ctx->pc = 0x37d3ccu;
    // NOP
    // 0x37d3d0: 0x0  nop
    ctx->pc = 0x37d3d0u;
    // NOP
    // 0x37d3d4: 0x0  nop
    ctx->pc = 0x37d3d4u;
    // NOP
    // 0x37d3d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37d3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37d3dc: 0x0  nop
    ctx->pc = 0x37d3dcu;
    // NOP
    // 0x37d3e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37d3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37d3e4: 0x0  nop
    ctx->pc = 0x37d3e4u;
    // NOP
    // 0x37d3e8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x37d3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x37d3ec: 0x0  nop
    ctx->pc = 0x37d3ecu;
    // NOP
    // 0x37d3f0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x37d3f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37d3f4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x37d3f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37d3f8: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x37d3f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37d3fc: 0x0  nop
    ctx->pc = 0x37d3fcu;
    // NOP
    // 0x37d400: 0x0  nop
    ctx->pc = 0x37d400u;
    // NOP
    // 0x37d404: 0x0  nop
    ctx->pc = 0x37d404u;
    // NOP
    // 0x37d408: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37d408u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37d40c: 0x3e00008  jr          $ra
    ctx->pc = 0x37D40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D414u;
    // 0x37d414: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x37d414u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37d418: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x37d418u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37d41c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37d41cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37d420: 0x0  nop
    ctx->pc = 0x37d420u;
    // NOP
    // 0x37d424: 0x0  nop
    ctx->pc = 0x37d424u;
    // NOP
    // 0x37d428: 0x0  nop
    ctx->pc = 0x37d428u;
    // NOP
    // 0x37d42c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37d430: 0x3e00008  jr          $ra
    ctx->pc = 0x37D430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D438u;
}
