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

// Function: sub_001FFBD0
// Address: 0x1ffbd0 - 0x1ffc88
void sub_001FFBD0_0x1ffbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFBD0_0x1ffbd0");
#endif

    switch (ctx->pc) {
        case 0x1ffbe8u: goto label_1ffbe8;
        case 0x1ffbf0u: goto label_1ffbf0;
        default: break;
    }

    ctx->pc = 0x1ffbd0u;

    // 0x1ffbd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ffbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ffbd4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ffbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1ffbd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ffbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffbdc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1ffbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1ffbe0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1FFBE0u;
    SET_GPR_U32(ctx, 31, 0x1FFBE8u);
    ctx->pc = 0x1FFBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFBE0u;
    // 0x1ffbe4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1FFBE0u, 0x1FFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFBE8u;
label_1ffbe8:
    // 0x1ffbe8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1FFBE8u;
    SET_GPR_U32(ctx, 31, 0x1FFBF0u);
    ctx->pc = 0x1FFBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFBE8u;
    // 0x1ffbec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1FFBE8u, 0x1FFBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFBF0u;
label_1ffbf0:
    // 0x1ffbf0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ffbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ffbf4: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x1ffbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1ffbf8: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x1ffbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1ffbfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ffbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ffc00: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1ffc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1ffc04: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ffc04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ffc08: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ffc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffc0c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1ffc0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ffc10: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1ffc10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffc14: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1ffc14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ffc18: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1ffc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffc1c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1ffc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ffc20: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1ffc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ffc24: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1ffc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffc28: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1ffc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffc2c: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x1ffc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ffc30: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1ffc30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ffc34: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1ffc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ffc38: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1ffc38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1ffc3c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x1ffc3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1ffc40: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ffc40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ffc44: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ffc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ffc48: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1ffc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffc4c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1ffc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ffc50: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1ffc50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1ffc54: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1ffc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ffc58: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1ffc58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1ffc5c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1ffc5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ffc60: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1ffc60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1ffc64: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ffc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ffc68: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ffc68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ffc6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ffc6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ffc70: 0x0  nop
    ctx->pc = 0x1ffc70u;
    // NOP
    // 0x1ffc74: 0x0  nop
    ctx->pc = 0x1ffc74u;
    // NOP
    // 0x1ffc78: 0x46000004  c1          0x4
    ctx->pc = 0x1ffc78u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ffc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC7Cu;
        // 0x1ffc80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFC84u;
    // 0x1ffc84: 0x0  nop
    ctx->pc = 0x1ffc84u;
    // NOP
    ctx->pc = 0x1ffc88u;
}
