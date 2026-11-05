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

// Function: sub_0028E408
// Address: 0x28e408 - 0x28e520
void sub_0028E408_0x28e408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E408_0x28e408");
#endif

    switch (ctx->pc) {
        case 0x28e440u: goto label_28e440;
        case 0x28e470u: goto label_28e470;
        case 0x28e4c4u: goto label_28e4c4;
        case 0x28e4f8u: goto label_28e4f8;
        default: break;
    }

    ctx->pc = 0x28e408u;

    // 0x28e408: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28e408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28e40c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x28e40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x28e410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28e410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e414: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28e418: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x28e418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x28e41c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x28e41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e420: 0x26330070  addiu       $s3, $s1, 0x70
    ctx->pc = 0x28e420u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x28e424: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28e424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28e428: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28e428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28e42c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28e42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e430: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x28e430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x28e434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e438: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x28E438u;
    SET_GPR_U32(ctx, 31, 0x28E440u);
    ctx->pc = 0x28E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E438u;
    // 0x28e43c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x28E438u, 0x28E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E440u;
label_28e440:
    // 0x28e440: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x28e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e444: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x28e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e448: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x28e448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e44c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x28e44cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x28e450: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x28e450u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x28e454: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x28e454u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x28e458: 0x46140504  c1          0x140504
    ctx->pc = 0x28e458u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x28e45c: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x28e45cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x28e460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28e464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e468: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x28E468u;
    SET_GPR_U32(ctx, 31, 0x28E470u);
    ctx->pc = 0x28E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E468u;
    // 0x28e46c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x28E468u, 0x28E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E470u;
label_28e470:
    // 0x28e470: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x28e470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e474: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x28e474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e478: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x28e478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e47c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x28e47cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x28e480: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x28e480u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x28e484: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x28e484u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x28e488: 0x46000004  c1          0x4
    ctx->pc = 0x28e488u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x28e48c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28e48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e490: 0x0  nop
    ctx->pc = 0x28e490u;
    // NOP
    // 0x28e494: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x28E494u;
    {
        const bool branch_taken_0x28e494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e494) {
            ctx->pc = 0x28E4ACu;
            goto label_28e4ac;
        }
    }
    ctx->pc = 0x28E49Cu;
    // 0x28e49c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x28e49cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28e4a0: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x28e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28e4a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28E4A4u;
    {
        const bool branch_taken_0x28e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4A4u;
        // 0x28e4a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4a4) {
            ctx->pc = 0x28E4B8u;
            goto label_28e4b8;
        }
    }
    ctx->pc = 0x28E4ACu;
label_28e4ac:
    // 0x28e4ac: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x28e4acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28e4b0: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x28e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28e4b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28e4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28e4b8:
    // 0x28e4b8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x28e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e4bc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x28E4BCu;
    SET_GPR_U32(ctx, 31, 0x28E4C4u);
    ctx->pc = 0x28E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4BCu;
    // 0x28e4c0: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x28E4BCu, 0x28E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4C4u;
label_28e4c4:
    // 0x28e4c4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x28e4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e4c8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x28e4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e4cc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x28e4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e4d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x28e4d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x28e4d4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x28e4d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x28e4d8: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x28e4d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x28e4dc: 0x460c0304  c1          0xC0304
    ctx->pc = 0x28e4dcu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x28e4e0: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x28e4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e4e4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x28e4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x28e4e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28e4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e4ec: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x28e4ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x28e4f0: 0xc0f4902  jal         func_3D2408
    ctx->pc = 0x28E4F0u;
    SET_GPR_U32(ctx, 31, 0x28E4F8u);
    ctx->pc = 0x28E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4F0u;
    // 0x28e4f4: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2408u, 0x28E4F0u, 0x28E4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4F8u;
label_28e4f8:
    // 0x28e4f8: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x28e4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
    // 0x28e4fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28e4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e500: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x28e500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28e504: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28e504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e508: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x28e508u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28e50c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28e50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e510: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x28e510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e514: 0x3e00008  jr          $ra
    ctx->pc = 0x28E514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E514u;
        // 0x28e518: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E51Cu;
    // 0x28e51c: 0x0  nop
    ctx->pc = 0x28e51cu;
    // NOP
    ctx->pc = 0x28e520u;
}
