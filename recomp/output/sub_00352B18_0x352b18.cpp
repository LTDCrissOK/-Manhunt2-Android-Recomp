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

// Function: sub_00352B18
// Address: 0x352b18 - 0x352c18
void sub_00352B18_0x352b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352B18_0x352b18");
#endif

    ctx->pc = 0x352b18u;

    // 0x352b18: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x352b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352b1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x352b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x352b20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x352b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x352b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x352b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x352b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x352b2c: 0x8c82014c  lw          $v0, 0x14C($a0)
    ctx->pc = 0x352b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x352b30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x352b30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x352b34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x352b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x352b38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x352b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352b3c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x352b3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x352b40: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x352b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352b44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x352b44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x352b48: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x352b48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352b4c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x352b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352b50: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x352b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x352b54: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x352b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352b58: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x352b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352b5c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x352b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x352b60: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x352b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x352b64: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x352b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x352b68: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x352b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x352b6c: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x352b6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x352b70: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x352b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x352b74: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x352b74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x352b78: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x352b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x352b7c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x352b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x352b80: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x352b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x352b84: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x352b84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x352b88: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x352b88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x352b8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352b90: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x352b90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352b94: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x352b94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352b98: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x352b98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352b9c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x352b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352ba0: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x352ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x352ba4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x352ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x352ba8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352bac: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x352bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352bb0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x352bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x352bb4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x352bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x352bb8: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x352bb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x352bbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x352bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352bc0: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x352bc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x352bc4: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x352bc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x352bc8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x352bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x352bcc: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x352bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x352bd0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x352bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x352bd4: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x352bd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x352bd8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x352bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x352bdc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x352bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352be0: 0x24c20030  addiu       $v0, $a2, 0x30
    ctx->pc = 0x352be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x352be4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x352be4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352be8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x352be8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352bec: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x352becu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352bf0: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x352bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352bf4: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x352bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x352bf8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x352bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x352bfc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x352bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x352c00: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x352c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352c04: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x352c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x352c08: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x352c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x352c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x352C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352C0Cu;
        // 0x352c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352C14u;
    // 0x352c14: 0x0  nop
    ctx->pc = 0x352c14u;
    // NOP
    ctx->pc = 0x352c18u;
}
