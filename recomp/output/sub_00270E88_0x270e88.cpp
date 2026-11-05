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

// Function: sub_00270E88
// Address: 0x270e88 - 0x270f50
void sub_00270E88_0x270e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270E88_0x270e88");
#endif

    ctx->pc = 0x270e88u;

    // 0x270e88: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x270e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x270e8c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x270e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x270e90: 0x8ca600b8  lw          $a2, 0xB8($a1)
    ctx->pc = 0x270e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x270e94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x270e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270e98: 0xc4c00214  lwc1        $f0, 0x214($a2)
    ctx->pc = 0x270e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270e9c: 0x8ca60228  lw          $a2, 0x228($a1)
    ctx->pc = 0x270e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 552)));
    // 0x270ea0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x270ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x270ea4: 0x8ca30224  lw          $v1, 0x224($a1)
    ctx->pc = 0x270ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x270ea8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x270ea8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270eac: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x270eacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270eb0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x270eb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x270eb4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x270eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x270eb8: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x270eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270ebc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x270ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x270ec0: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x270ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x270ec4: 0xc7a70038  lwc1        $f7, 0x38($sp)
    ctx->pc = 0x270ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x270ec8: 0x46030102  mul.s       $f4, $f0, $f3
    ctx->pc = 0x270ec8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x270ecc: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x270eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x270ed0: 0x46060042  mul.s       $f1, $f0, $f6
    ctx->pc = 0x270ed0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x270ed4: 0x46070082  mul.s       $f2, $f0, $f7
    ctx->pc = 0x270ed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x270ed8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x270ed8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x270edc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x270edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x270ee0: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x270ee0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x270ee4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x270ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x270ee8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x270ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x270eec: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x270eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x270ef0: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x270ef0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x270ef4: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x270ef4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x270ef8: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x270ef8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x270efc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x270efcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x270f00: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x270f00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270f04: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x270f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x270f08: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x270f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x270f0c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x270f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270f10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x270f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f14: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x270f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270f18: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x270f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270f1c: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x270f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270f20: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x270f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x270f24: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x270f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x270f28: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x270f28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x270f2c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x270f2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x270f30: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x270f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270f34: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x270f34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x270f38: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x270f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x270f3c: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x270f3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x270f40: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x270f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x270f44: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x270f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x270f48: 0x3e00008  jr          $ra
    ctx->pc = 0x270F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F48u;
        // 0x270f4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270F50u;
}
