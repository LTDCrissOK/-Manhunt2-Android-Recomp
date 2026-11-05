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

// Function: sub_001BF7D8
// Address: 0x1bf7d8 - 0x1bf890
void sub_001BF7D8_0x1bf7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF7D8_0x1bf7d8");
#endif

    switch (ctx->pc) {
        case 0x1bf7ecu: goto label_1bf7ec;
        default: break;
    }

    ctx->pc = 0x1bf7d8u;

    // 0x1bf7d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bf7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bf7dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bf7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1bf7e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1bf7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1bf7e4: 0xc06f28e  jal         func_1BCA38
    ctx->pc = 0x1BF7E4u;
    SET_GPR_U32(ctx, 31, 0x1BF7ECu);
    ctx->pc = 0x1BF7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF7E4u;
    // 0x1bf7e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA38u, 0x1BF7E4u, 0x1BF7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF7ECu;
label_1bf7ec:
    // 0x1bf7ec: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BF7ECu;
    {
        const bool branch_taken_0x1bf7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7ECu;
        // 0x1bf7f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7ec) {
            ctx->pc = 0x1BF880u;
            goto label_1bf880;
        }
    }
    ctx->pc = 0x1BF7F4u;
    // 0x1bf7f4: 0x8e0304bc  lw          $v1, 0x4BC($s0)
    ctx->pc = 0x1bf7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1212)));
    // 0x1bf7f8: 0x8c640ffc  lw          $a0, 0xFFC($v1)
    ctx->pc = 0x1bf7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4092)));
    // 0x1bf7fc: 0x24840210  addiu       $a0, $a0, 0x210
    ctx->pc = 0x1bf7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x1bf800: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1bf800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1bf804: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BF804u;
    {
        const bool branch_taken_0x1bf804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF804u;
        // 0x1bf808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf804) {
            ctx->pc = 0x1BF880u;
            goto label_1bf880;
        }
    }
    ctx->pc = 0x1BF80Cu;
    // 0x1bf80c: 0x26030130  addiu       $v1, $s0, 0x130
    ctx->pc = 0x1bf80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1bf810: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1bf810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bf814: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1bf814u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf818: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bf818u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf81c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1bf81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf820: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1bf820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf824: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1bf824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf828: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1bf828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf82c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1bf82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1bf830: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bf830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bf834: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1bf834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1bf838: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1bf838u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bf83c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1bf83cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1bf840: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1bf840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf844: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1bf844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bf848: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1bf848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1bf84c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1bf84cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1bf850: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1bf850u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1bf854: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1bf854u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1bf858: 0x46010044  c1          0x10044
    ctx->pc = 0x1bf858u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1bf85c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1bf85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1bf860: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bf860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bf864: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf868: 0x0  nop
    ctx->pc = 0x1bf868u;
    // NOP
    // 0x1bf86c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bf86cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf870: 0x0  nop
    ctx->pc = 0x1bf870u;
    // NOP
    // 0x1bf874: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF874u;
    {
        const bool branch_taken_0x1bf874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF874u;
        // 0x1bf878: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf874) {
            ctx->pc = 0x1BF884u;
            goto label_1bf884;
        }
    }
    ctx->pc = 0x1BF87Cu;
    // 0x1bf87c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf880:
    // 0x1bf880: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bf880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf884:
    // 0x1bf884: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1bf884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bf888: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF888u;
        // 0x1bf88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF890u;
}
