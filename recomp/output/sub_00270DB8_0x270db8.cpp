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

// Function: sub_00270DB8
// Address: 0x270db8 - 0x270e88
void sub_00270DB8_0x270db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270DB8_0x270db8");
#endif

    switch (ctx->pc) {
        case 0x270de0u: goto label_270de0;
        default: break;
    }

    ctx->pc = 0x270db8u;

    // 0x270db8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x270db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x270dbc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x270dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x270dc0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x270dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x270dc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x270dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270dc8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x270dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x270dcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x270dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270dd0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x270dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x270dd4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x270dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x270dd8: 0xc09c3a2  jal         func_270E88
    ctx->pc = 0x270DD8u;
    SET_GPR_U32(ctx, 31, 0x270DE0u);
    ctx->pc = 0x270DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DD8u;
    // 0x270ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E88u, 0x270DD8u, 0x270DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DE0u;
label_270de0:
    // 0x270de0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x270de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x270de4: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x270de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x270de8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x270de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270dec: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x270decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x270df0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x270df0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270df4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x270df4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x270df8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x270df8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x270dfc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x270dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x270e00: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x270e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270e04: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x270e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x270e08: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x270e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270e0c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x270e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270e10: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x270e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270e14: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x270e14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x270e18: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x270e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x270e1c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x270e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x270e20: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x270e20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x270e24: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x270e24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x270e28: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x270e28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270e2c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x270e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x270e30: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x270e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x270e34: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x270e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270e38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x270e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e3c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x270e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270e40: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x270e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270e44: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x270e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270e48: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x270e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x270e4c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x270e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x270e50: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x270e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x270e54: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x270e54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x270e58: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x270e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270e5c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x270e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270e60: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x270e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x270e64: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x270e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x270e68: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x270e68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x270e6c: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x270e6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x270e70: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x270e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x270e74: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x270e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x270e78: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x270e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x270e7c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x270e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x270e80: 0x3e00008  jr          $ra
    ctx->pc = 0x270E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E80u;
        // 0x270e84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270E88u;
}
