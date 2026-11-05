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

// Function: sub_001EAB48
// Address: 0x1eab48 - 0x1eabf0
void sub_001EAB48_0x1eab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAB48_0x1eab48");
#endif

    ctx->pc = 0x1eab48u;

    // 0x1eab48: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1eab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1eab4c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1eab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1eab50: 0x244c0400  addiu       $t4, $v0, 0x400
    ctx->pc = 0x1eab50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1eab54: 0x246d03a0  addiu       $t5, $v1, 0x3A0
    ctx->pc = 0x1eab54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x1eab58: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x1eab58u;
    { uint32_t bits = FAST_READ32(0x490404u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eab5c: 0xc5a00004  lwc1        $f0, 0x4($t5)
    ctx->pc = 0x1eab5cu;
    { uint32_t bits = FAST_READ32(0x4903A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eab60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1eab60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eab64: 0x0  nop
    ctx->pc = 0x1eab64u;
    // NOP
    // 0x1eab68: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1EAB68u;
    {
        const bool branch_taken_0x1eab68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eab68) {
            ctx->pc = 0x1EABE4u;
            goto label_1eabe4;
        }
    }
    ctx->pc = 0x1EAB70u;
    // 0x1eab70: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x1eab70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1eab74: 0xf86103a0  sqc2        $vf1, 0x3A0($v1)
    ctx->pc = 0x1eab74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 928), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eab78: 0x25820010  addiu       $v0, $t4, 0x10
    ctx->pc = 0x1eab78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x1eab7c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1eab7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eab80: 0xf9a10010  sqc2        $vf1, 0x10($t5)
    ctx->pc = 0x1eab80u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eab84: 0x8d830048  lw          $v1, 0x48($t4)
    ctx->pc = 0x1eab84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1eab88: 0x8d820024  lw          $v0, 0x24($t4)
    ctx->pc = 0x1eab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 36)));
    // 0x1eab8c: 0x8d840028  lw          $a0, 0x28($t4)
    ctx->pc = 0x1eab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x1eab90: 0x8d85002c  lw          $a1, 0x2C($t4)
    ctx->pc = 0x1eab90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 44)));
    // 0x1eab94: 0x8d860030  lw          $a2, 0x30($t4)
    ctx->pc = 0x1eab94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1eab98: 0x8d870034  lw          $a3, 0x34($t4)
    ctx->pc = 0x1eab98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1eab9c: 0x8d880038  lw          $t0, 0x38($t4)
    ctx->pc = 0x1eab9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x1eaba0: 0xc5800020  lwc1        $f0, 0x20($t4)
    ctx->pc = 0x1eaba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaba4: 0x8d89003c  lw          $t1, 0x3C($t4)
    ctx->pc = 0x1eaba4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x1eaba8: 0x8d8a0040  lw          $t2, 0x40($t4)
    ctx->pc = 0x1eaba8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1eabac: 0x8d8b0044  lw          $t3, 0x44($t4)
    ctx->pc = 0x1eabacu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1eabb0: 0x8d8c0050  lw          $t4, 0x50($t4)
    ctx->pc = 0x1eabb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x1eabb4: 0xada30048  sw          $v1, 0x48($t5)
    ctx->pc = 0x1eabb4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 3));
    // 0x1eabb8: 0xada20024  sw          $v0, 0x24($t5)
    ctx->pc = 0x1eabb8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 2));
    // 0x1eabbc: 0xada40028  sw          $a0, 0x28($t5)
    ctx->pc = 0x1eabbcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 4));
    // 0x1eabc0: 0xada5002c  sw          $a1, 0x2C($t5)
    ctx->pc = 0x1eabc0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 5));
    // 0x1eabc4: 0xada60030  sw          $a2, 0x30($t5)
    ctx->pc = 0x1eabc4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 6));
    // 0x1eabc8: 0xada70034  sw          $a3, 0x34($t5)
    ctx->pc = 0x1eabc8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 7));
    // 0x1eabcc: 0xada80038  sw          $t0, 0x38($t5)
    ctx->pc = 0x1eabccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 8));
    // 0x1eabd0: 0xe5a00020  swc1        $f0, 0x20($t5)
    ctx->pc = 0x1eabd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 32), bits); }
    // 0x1eabd4: 0xada9003c  sw          $t1, 0x3C($t5)
    ctx->pc = 0x1eabd4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 9));
    // 0x1eabd8: 0xadaa0040  sw          $t2, 0x40($t5)
    ctx->pc = 0x1eabd8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 64), GPR_U32(ctx, 10));
    // 0x1eabdc: 0xadab0044  sw          $t3, 0x44($t5)
    ctx->pc = 0x1eabdcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 11));
    // 0x1eabe0: 0xadac0050  sw          $t4, 0x50($t5)
    ctx->pc = 0x1eabe0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 80), GPR_U32(ctx, 12));
label_1eabe4:
    // 0x1eabe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EABE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EABE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EABECu;
    // 0x1eabec: 0x0  nop
    ctx->pc = 0x1eabecu;
    // NOP
    ctx->pc = 0x1eabf0u;
}
