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

// Function: sub_001CD338
// Address: 0x1cd338 - 0x1cd448
void sub_001CD338_0x1cd338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD338_0x1cd338");
#endif

    switch (ctx->pc) {
        case 0x1cd390u: goto label_1cd390;
        case 0x1cd410u: goto label_1cd410;
        default: break;
    }

    ctx->pc = 0x1cd338u;

    // 0x1cd338: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cd338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cd33c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cd33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cd340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd344: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1cd344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1cd348: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd34c: 0x8c6289bc  lw          $v0, -0x7644($v1)
    ctx->pc = 0x1cd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F89BCu));
    // 0x1cd350: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1cd350u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd358: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cd358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cd35c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cd35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cd360: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cd360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cd364: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cd364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cd368: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1CD368u;
    {
        const bool branch_taken_0x1cd368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD368u;
        // 0x1cd36c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd368) {
            ctx->pc = 0x1CD420u;
            goto label_1cd420;
        }
    }
    ctx->pc = 0x1CD370u;
    // 0x1cd370: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1cd370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1cd374: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x1cd374u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x1cd378: 0x24512b18  addiu       $s1, $v0, 0x2B18
    ctx->pc = 0x1cd378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11032));
    // 0x1cd37c: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1cd37cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1cd380: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1cd380u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1cd384: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x1cd384u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x1cd388: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cd388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B18u));
    // 0x1cd38c: 0x0  nop
    ctx->pc = 0x1cd38cu;
    // NOP
label_1cd390:
    // 0x1cd390: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x1cd390u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cd394: 0x8ea289b8  lw          $v0, -0x7648($s5)
    ctx->pc = 0x1cd394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937016)));
    // 0x1cd398: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x1cd398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1cd39c: 0x8e8589b4  lw          $a1, -0x764C($s4)
    ctx->pc = 0x1cd39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937012)));
    // 0x1cd3a0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1cd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1cd3a4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1cd3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd3a8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1cd3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd3ac: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1cd3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1cd3b0: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1cd3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1cd3b4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1cd3b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd3b8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1cd3b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cd3bc: 0xd8c30010  lqc2        $vf3, 0x10($a2)
    ctx->pc = 0x1cd3bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1cd3c0: 0xd8c40020  lqc2        $vf4, 0x20($a2)
    ctx->pc = 0x1cd3c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1cd3c4: 0xd8c50030  lqc2        $vf5, 0x30($a2)
    ctx->pc = 0x1cd3c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1cd3c8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1cd3c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1cd3cc: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1cd3ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1cd3d0: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1cd3d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1cd3d4: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1cd3d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd3d8: 0xf9010010  sqc2        $vf1, 0x10($t0)
    ctx->pc = 0x1cd3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd3dc: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1cd3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd3e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cd3e4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1cd3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1cd3e8: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x1cd3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x1cd3ec: 0x8e4289b0  lw          $v0, -0x7650($s2)
    ctx->pc = 0x1cd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937008)));
    // 0x1cd3f0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1cd3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1cd3f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cd3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd3f8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1cd3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1cd3fc: 0x8e4289b0  lw          $v0, -0x7650($s2)
    ctx->pc = 0x1cd3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937008)));
    // 0x1cd400: 0x8e6589ac  lw          $a1, -0x7654($s3)
    ctx->pc = 0x1cd400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937004)));
    // 0x1cd404: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1cd404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1cd408: 0xc079600  jal         func_1E5800
    ctx->pc = 0x1CD408u;
    SET_GPR_U32(ctx, 31, 0x1CD410u);
    ctx->pc = 0x1CD40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD408u;
    // 0x1cd40c: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5800u, 0x1CD408u, 0x1CD410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD410u;
label_1cd410:
    // 0x1cd410: 0x8ec289bc  lw          $v0, -0x7644($s6)
    ctx->pc = 0x1cd410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937020)));
    // 0x1cd414: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1cd414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cd418: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1CD418u;
    {
        const bool branch_taken_0x1cd418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd418) {
            ctx->pc = 0x1CD41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD418u;
            // 0x1cd41c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd390;
        }
    }
    ctx->pc = 0x1CD420u;
label_1cd420:
    // 0x1cd420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd428: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cd428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd42c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cd42cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cd430: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cd430u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd434: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cd434u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cd438: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1cd438u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd43c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1cd43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cd440: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD440u;
        // 0x1cd444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD448u;
}
