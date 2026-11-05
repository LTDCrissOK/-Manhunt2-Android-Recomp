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

// Function: sub_001BCDF8
// Address: 0x1bcdf8 - 0x1bce88
void sub_001BCDF8_0x1bcdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCDF8_0x1bcdf8");
#endif

    ctx->pc = 0x1bcdf8u;

    // 0x1bcdf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bcdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bcdfc: 0x248201e0  addiu       $v0, $a0, 0x1E0
    ctx->pc = 0x1bcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x1bce00: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1bce00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bce04: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1bce04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bce08: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bce08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bce0c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1bce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bce10: 0xc4800240  lwc1        $f0, 0x240($a0)
    ctx->pc = 0x1bce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bce14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bce14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce18: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1bce18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bce1c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1bce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bce20: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1bce20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bce24: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1bce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bce28: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1bce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bce2c: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1bce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bce30: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1bce30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bce34: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1bce34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1bce38: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1bce38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bce3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCE3Cu;
    {
        const bool branch_taken_0x1bce3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BCE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE3Cu;
        // 0x1bce40: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce3c) {
            ctx->pc = 0x1BCE48u;
            goto label_1bce48;
        }
    }
    ctx->pc = 0x1BCE44u;
    // 0x1bce44: 0x24820220  addiu       $v0, $a0, 0x220
    ctx->pc = 0x1bce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
label_1bce48:
    // 0x1bce48: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1bce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bce4c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1bce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bce50: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1bce50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1bce54: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1bce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bce58: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1bce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bce5c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1bce5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1bce60: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1bce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bce64: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1bce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bce68: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1bce68u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1bce6c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1bce6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bce70: 0x0  nop
    ctx->pc = 0x1bce70u;
    // NOP
    // 0x1bce74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCE74u;
    {
        const bool branch_taken_0x1bce74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE74u;
        // 0x1bce78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce74) {
            ctx->pc = 0x1BCE80u;
            goto label_1bce80;
        }
    }
    ctx->pc = 0x1BCE7Cu;
    // 0x1bce7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bce7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bce80:
    // 0x1bce80: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE80u;
        // 0x1bce84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCE88u;
}
