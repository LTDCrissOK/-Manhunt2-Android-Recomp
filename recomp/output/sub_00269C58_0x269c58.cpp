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

// Function: sub_00269C58
// Address: 0x269c58 - 0x269cd8
void sub_00269C58_0x269c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269C58_0x269c58");
#endif

    ctx->pc = 0x269c58u;

    // 0x269c58: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x269c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x269c5c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269c60: 0x24850230  addiu       $a1, $a0, 0x230
    ctx->pc = 0x269c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
    // 0x269c64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x269c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269c68: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x269c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x269c6c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x269c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x269c70: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x269c70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269c74: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x269c74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x269c78: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x269c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x269c7c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x269c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269c80: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x269c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269c84: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x269c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269c88: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x269c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x269c8c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x269c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x269c90: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x269c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x269c94: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x269c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x269c98: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x269c98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x269c9c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x269c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269ca0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x269ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269ca4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x269ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269ca8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x269ca8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x269cac: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x269cacu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x269cb0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x269cb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x269cb4: 0x46010044  c1          0x10044
    ctx->pc = 0x269cb4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x269cb8: 0xc4800280  lwc1        $f0, 0x280($a0)
    ctx->pc = 0x269cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269cbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x269cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269cc0: 0x0  nop
    ctx->pc = 0x269cc0u;
    // NOP
    // 0x269cc4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x269CC4u;
    {
        const bool branch_taken_0x269cc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x269CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CC4u;
        // 0x269cc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cc4) {
            ctx->pc = 0x269CD0u;
            goto label_269cd0;
        }
    }
    ctx->pc = 0x269CCCu;
    // 0x269ccc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269cd0:
    // 0x269cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x269CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CD0u;
        // 0x269cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269CD8u;
}
