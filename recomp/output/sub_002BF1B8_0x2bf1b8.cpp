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

// Function: sub_002BF1B8
// Address: 0x2bf1b8 - 0x2bf220
void sub_002BF1B8_0x2bf1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF1B8_0x2bf1b8");
#endif

    switch (ctx->pc) {
        case 0x2bf1dcu: goto label_2bf1dc;
        case 0x2bf1f0u: goto label_2bf1f0;
        default: break;
    }

    ctx->pc = 0x2bf1b8u;

    // 0x2bf1b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bf1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bf1bc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bf1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bf1c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bf1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bf1c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bf1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf1c8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2bf1c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bf1cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bf1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf1d0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bf1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2bf1d4: 0xc0b0370  jal         func_2C0DC0
    ctx->pc = 0x2BF1D4u;
    SET_GPR_U32(ctx, 31, 0x2BF1DCu);
    ctx->pc = 0x2BF1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF1D4u;
    // 0x2bf1d8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DC0u, 0x2BF1D4u, 0x2BF1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF1DCu;
label_2bf1dc:
    // 0x2bf1dc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2bf1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2bf1e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2bf1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bf1e4: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2bf1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf1e8: 0xc0e41ea  jal         func_3907A8
    ctx->pc = 0x2BF1E8u;
    SET_GPR_U32(ctx, 31, 0x2BF1F0u);
    ctx->pc = 0x2BF1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF1E8u;
    // 0x2bf1ec: 0x460da342  mul.s       $f13, $f20, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3907A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3907A8u, 0x2BF1E8u, 0x2BF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF1F0u;
label_2bf1f0:
    // 0x2bf1f0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2bf1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2bf1f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2bf1f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bf1f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bf1f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf1fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2bf1fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2bf200: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2bf200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf204: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x2bf204u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf208: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bf208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf20c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bf20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bf210: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2bf210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bf214: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF214u;
        // 0x2bf218: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF21Cu;
    // 0x2bf21c: 0x0  nop
    ctx->pc = 0x2bf21cu;
    // NOP
    ctx->pc = 0x2bf220u;
}
