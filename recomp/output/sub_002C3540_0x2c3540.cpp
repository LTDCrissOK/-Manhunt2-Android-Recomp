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

// Function: sub_002C3540
// Address: 0x2c3540 - 0x2c35c8
void sub_002C3540_0x2c3540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3540_0x2c3540");
#endif

    switch (ctx->pc) {
        case 0x2c3560u: goto label_2c3560;
        default: break;
    }

    ctx->pc = 0x2c3540u;

    // 0x2c3540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c3544: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c3544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c3548: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c3548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c354c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c354cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3550: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c3550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c3554: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c3554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3558: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2C3558u;
    SET_GPR_U32(ctx, 31, 0x2C3560u);
    ctx->pc = 0x2C355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3558u;
    // 0x2c355c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2C3558u, 0x2C3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3560u;
label_2c3560:
    // 0x2c3560: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2c3560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3564: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2c3564u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c3568: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2c3568u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2c356c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2c356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c3570: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2c3570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3574: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2c3574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c3578: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c3578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c357c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2c357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c3580: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c3580u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c3584: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x2c3584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c3588: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2c3588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c358c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2c358cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2c3590: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c3590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c3594: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c3594u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c3598: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c3598u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c359c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c359cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c35a0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2c35a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c35a4: 0x0  nop
    ctx->pc = 0x2c35a4u;
    // NOP
    // 0x2c35a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C35A8u;
    {
        const bool branch_taken_0x2c35a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35A8u;
        // 0x2c35ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c35a8) {
            ctx->pc = 0x2C35B4u;
            goto label_2c35b4;
        }
    }
    ctx->pc = 0x2C35B0u;
    // 0x2c35b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c35b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c35b4:
    // 0x2c35b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c35b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c35b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c35b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c35bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c35bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c35c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C35C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35C0u;
        // 0x2c35c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C35C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C35C8u;
}
