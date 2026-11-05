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

// Function: sub_002DC780
// Address: 0x2dc780 - 0x2dc820
void sub_002DC780_0x2dc780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC780_0x2dc780");
#endif

    switch (ctx->pc) {
        case 0x2dc814u: goto label_2dc814;
        default: break;
    }

    ctx->pc = 0x2dc780u;

    // 0x2dc780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dc780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dc784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dc784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dc788: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2dc788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2dc78c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2dc78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2dc790: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DC790u;
    {
        const bool branch_taken_0x2dc790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC790u;
        // 0x2dc794: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc790) {
            ctx->pc = 0x2DC818u;
            goto label_2dc818;
        }
    }
    ctx->pc = 0x2DC798u;
    // 0x2dc798: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2dc798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2dc79c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DC79Cu;
    {
        const bool branch_taken_0x2dc79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC79Cu;
        // 0x2dc7a0: 0x24830030  addiu       $v1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc79c) {
            ctx->pc = 0x2DC818u;
            goto label_2dc818;
        }
    }
    ctx->pc = 0x2DC7A4u;
    // 0x2dc7a4: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x2dc7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc7a8: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x2dc7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc7ac: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2dc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dc7b0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2dc7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc7b4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2dc7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc7b8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2dc7b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2dc7bc: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2dc7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dc7c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2dc7c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dc7c4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2dc7c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2dc7c8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2dc7c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2dc7cc: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2dc7ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2dc7d0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2dc7d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2dc7d4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2dc7d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2dc7d8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2dc7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2dc7dc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2dc7dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc7e0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2dc7e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc7e4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2dc7e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dc7e8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2dc7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dc7ec: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2dc7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc7f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dc7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc7f4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2dc7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc7f8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2dc7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc7fc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2dc7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc800: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2dc800u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dc804: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2dc804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2dc808: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2dc808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2dc80c: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2DC80Cu;
    SET_GPR_U32(ctx, 31, 0x2DC814u);
    ctx->pc = 0x2DC810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC80Cu;
    // 0x2dc810: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2DC80Cu, 0x2DC814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC814u;
label_2dc814:
    // 0x2dc814: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dc814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2dc818:
    // 0x2dc818: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC818u;
        // 0x2dc81c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC820u;
}
