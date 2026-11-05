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

// Function: sub_0026EF28
// Address: 0x26ef28 - 0x26ef98
void sub_0026EF28_0x26ef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EF28_0x26ef28");
#endif

    ctx->pc = 0x26ef28u;

    // 0x26ef28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ef28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ef2c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26ef2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26ef30: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x26ef30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26ef34: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26ef34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26ef38: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26ef38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26ef3c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x26ef3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ef40: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x26ef40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ef44: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x26ef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ef48: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x26ef48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26ef4c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26ef4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26ef50: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26ef50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26ef54: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26ef54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26ef58: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x26ef58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26ef5c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x26ef5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ef60: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x26ef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26ef64: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x26ef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26ef68: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26ef68u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x26ef6c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26ef6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x26ef70: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x26ef70u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x26ef74: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x26ef74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26ef78: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x26ef78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ef7c: 0x0  nop
    ctx->pc = 0x26ef7cu;
    // NOP
    // 0x26ef80: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x26EF80u;
    {
        const bool branch_taken_0x26ef80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF80u;
        // 0x26ef84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef80) {
            ctx->pc = 0x26EF8Cu;
            goto label_26ef8c;
        }
    }
    ctx->pc = 0x26EF88u;
    // 0x26ef88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ef88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ef8c:
    // 0x26ef8c: 0x3e00008  jr          $ra
    ctx->pc = 0x26EF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF8Cu;
        // 0x26ef90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EF94u;
    // 0x26ef94: 0x0  nop
    ctx->pc = 0x26ef94u;
    // NOP
    ctx->pc = 0x26ef98u;
}
