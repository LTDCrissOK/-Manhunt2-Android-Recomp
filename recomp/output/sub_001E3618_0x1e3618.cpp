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

// Function: sub_001E3618
// Address: 0x1e3618 - 0x1e3728
void sub_001E3618_0x1e3618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3618_0x1e3618");
#endif

    ctx->pc = 0x1e3618u;

    // 0x1e3618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e361c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1e361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e3620: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e3620u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3624: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e3624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3628: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e3628u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e362c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3630: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e3630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3634: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1e3634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1e3638: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e3638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e363c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3640: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x1e3640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3644: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e3644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e3648: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e3648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e364c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e364cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e3650: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1e3650u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e3654: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e3654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3658: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1e3658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e365c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e365cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3660: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1e3660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3664: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1e3664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3668: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e3668u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e366c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1e366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3670: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1e3670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3674: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1e3674u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3678: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e367c: 0x0  nop
    ctx->pc = 0x1e367cu;
    // NOP
    // 0x1e3680: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e3680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3684: 0x0  nop
    ctx->pc = 0x1e3684u;
    // NOP
    // 0x1e3688: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x1E3688u;
    {
        const bool branch_taken_0x1e3688 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3688u;
        // 0x1e368c: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3688) {
            ctx->pc = 0x1E371Cu;
            goto label_1e371c;
        }
    }
    ctx->pc = 0x1E3690u;
    // 0x1e3690: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1e3690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3694: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1e3694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3698: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e3698u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e369c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1e369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e36a0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1e36a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e36a4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e36a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e36a8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1e36a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e36ac: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1e36acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e36b0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1e36b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e36b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e36b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e36b8: 0x0  nop
    ctx->pc = 0x1e36b8u;
    // NOP
    // 0x1e36bc: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1E36BCu;
    {
        const bool branch_taken_0x1e36bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36BCu;
        // 0x1e36c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36bc) {
            ctx->pc = 0x1E3720u;
            goto label_1e3720;
        }
    }
    ctx->pc = 0x1E36C4u;
    // 0x1e36c4: 0x0  nop
    ctx->pc = 0x1e36c4u;
    // NOP
    // 0x1e36c8: 0x0  nop
    ctx->pc = 0x1e36c8u;
    // NOP
    // 0x1e36cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e36ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e36d0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1e36d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1e36d4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1e36d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e36d8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1e36d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e36dc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1e36dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e36e0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1e36e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e36e4: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x1e36e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e36e8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1e36e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e36ec: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1e36ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e36f0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e36f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e36f4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1e36f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e36f8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1e36f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e36fc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1e36fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e3700: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e3700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e3704: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e3704u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3708: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e3708u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e370c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e370cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3710: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e3710u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3714: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3714u;
    {
        const bool branch_taken_0x1e3714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3714u;
        // 0x1e3718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3714) {
            ctx->pc = 0x1E3720u;
            goto label_1e3720;
        }
    }
    ctx->pc = 0x1E371Cu;
label_1e371c:
    // 0x1e371c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e371cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3720:
    // 0x1e3720: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3720u;
        // 0x1e3724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3728u;
}
