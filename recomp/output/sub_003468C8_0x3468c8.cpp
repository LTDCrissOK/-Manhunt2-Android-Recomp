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

// Function: sub_003468C8
// Address: 0x3468c8 - 0x346af8
void sub_003468C8_0x3468c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003468C8_0x3468c8");
#endif

    switch (ctx->pc) {
        case 0x3468fcu: goto label_3468fc;
        case 0x346908u: goto label_346908;
        case 0x346920u: goto label_346920;
        default: break;
    }

    ctx->pc = 0x3468c8u;

    // 0x3468c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3468c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3468cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3468ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3468d0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3468d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3468d4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3468d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3468d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3468d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3468dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3468dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3468e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3468e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3468e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3468e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3468e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3468e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3468ec: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x3468ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x3468f0: 0x8e300124  lw          $s0, 0x124($s1)
    ctx->pc = 0x3468f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x3468f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3468F4u;
    SET_GPR_U32(ctx, 31, 0x3468FCu);
    ctx->pc = 0x3468F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3468F4u;
    // 0x3468f8: 0x8c720100  lw          $s2, 0x100($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3468F4u, 0x3468FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3468FCu;
label_3468fc:
    // 0x3468fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3468fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346900: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x346900u;
    SET_GPR_U32(ctx, 31, 0x346908u);
    ctx->pc = 0x346904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346900u;
    // 0x346904: 0x26530040  addiu       $s3, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x346900u, 0x346908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346908u;
label_346908:
    // 0x346908: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x346908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x34690c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x34690Cu;
    {
        const bool branch_taken_0x34690c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34690Cu;
        // 0x346910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34690c) {
            ctx->pc = 0x346ADCu;
            goto label_346adc;
        }
    }
    ctx->pc = 0x346914u;
    // 0x346914: 0x26460050  addiu       $a2, $s2, 0x50
    ctx->pc = 0x346914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x346918: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x346918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34691c: 0x0  nop
    ctx->pc = 0x34691cu;
    // NOP
label_346920:
    // 0x346920: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x346920u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x346924: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x346924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346928: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x346928u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34692c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34692cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346930: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x346930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x346934: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x346934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x346938: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x346938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34693c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346940: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x346940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346944: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x346944u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x346948: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x346948u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34694c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34694cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x346950: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x346950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x346954: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x346954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346958: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x346958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34695c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346960: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x346960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x346964: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x346964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346968: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x346968u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34696c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34696cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x346970: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x346970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346974: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x346974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346978: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x346978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34697c: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x34697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x346980: 0xc4440038  lwc1        $f4, 0x38($v0)
    ctx->pc = 0x346980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x346984: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x346984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346988: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x346988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34698c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x34698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346990: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x346990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x346994: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x346994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346998: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x346998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34699c: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x34699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3469a0: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x3469a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x3469a4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3469a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3469a8: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x3469a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3469ac: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3469acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3469b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3469b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3469b4: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x3469b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x3469b8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3469b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3469bc: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x3469bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x3469c0: 0xe6040014  swc1        $f4, 0x14($s0)
    ctx->pc = 0x3469c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x3469c4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3469c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3469c8: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x3469c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x3469cc: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3469ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3469d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3469d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3469d4: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x3469d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3469d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3469d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3469dc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3469dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3469e0: 0xc4640038  lwc1        $f4, 0x38($v1)
    ctx->pc = 0x3469e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3469e4: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x3469e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3469e8: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x3469e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3469ec: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x3469ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x3469f0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3469f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3469f4: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x3469f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3469f8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3469f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x3469fc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3469fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346a00: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x346a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346a04: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x346a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x346a08: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x346a08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x346a0c: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x346a0cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x346a10: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x346a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x346a14: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x346a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x346a18: 0xe6040014  swc1        $f4, 0x14($s0)
    ctx->pc = 0x346a18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x346a1c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x346a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x346a20: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x346a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x346a24: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x346a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x346a28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x346a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x346a2c: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x346a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x346a30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x346a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346a34: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x346a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346a38: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x346a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346a3c: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x346a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346a40: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x346a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346a44: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x346a44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x346a48: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x346a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x346a4c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x346a4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x346a50: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x346a50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x346a54: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x346a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346a58: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x346a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x346a5c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x346a5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x346a60: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x346a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x346a64: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x346a64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x346a68: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x346a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x346a6c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x346a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x346a70: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x346a70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x346a74: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x346a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x346a78: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x346a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x346a7c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x346a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346a80: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x346a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x346a84: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x346a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346a88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x346a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x346a8c: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x346a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x346a90: 0xc4440038  lwc1        $f4, 0x38($v0)
    ctx->pc = 0x346a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x346a94: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x346a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346a98: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x346a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346a9c: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x346a9cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x346aa0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x346aa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x346aa4: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x346aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x346aa8: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x346aa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x346aac: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x346aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346ab0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x346ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346ab4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x346ab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x346ab8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x346ab8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x346abc: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x346abcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x346ac0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x346ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x346ac4: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x346ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x346ac8: 0xe6040014  swc1        $f4, 0x14($s0)
    ctx->pc = 0x346ac8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x346acc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x346accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x346ad0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x346ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x346ad4: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x346AD4u;
    {
        const bool branch_taken_0x346ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AD4u;
        // 0x346ad8: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ad4) {
            ctx->pc = 0x346920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346920;
        }
    }
    ctx->pc = 0x346ADCu;
label_346adc:
    // 0x346adc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x346adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346ae0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x346ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x346ae4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x346ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346ae8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x346ae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x346aec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x346aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x346af0: 0x3e00008  jr          $ra
    ctx->pc = 0x346AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AF0u;
        // 0x346af4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346AF8u;
}
