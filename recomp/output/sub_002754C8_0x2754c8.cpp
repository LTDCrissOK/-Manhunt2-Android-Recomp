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

// Function: sub_002754C8
// Address: 0x2754c8 - 0x275598
void sub_002754C8_0x2754c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002754C8_0x2754c8");
#endif

    switch (ctx->pc) {
        case 0x275504u: goto label_275504;
        default: break;
    }

    ctx->pc = 0x2754c8u;

    // 0x2754c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2754c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2754cc: 0x24840230  addiu       $a0, $a0, 0x230
    ctx->pc = 0x2754ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
    // 0x2754d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2754d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2754d4: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x2754d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x2754d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2754d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2754dc: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2754dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2754e0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2754e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2754e4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2754e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2754e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2754e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2754ec: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2754ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2754f0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2754f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2754f4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2754f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2754f8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2754f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2754fc: 0xc0f7f60  jal         func_3DFD80
    ctx->pc = 0x2754FCu;
    SET_GPR_U32(ctx, 31, 0x275504u);
    ctx->pc = 0x275500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2754FCu;
    // 0x275500: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFD80u, 0x2754FCu, 0x275504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275504u;
label_275504:
    // 0x275504: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x275504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x275508: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x275508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27550c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275510: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x275510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275514: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x275514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x275518: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x275518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27551c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27551cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275520: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x275520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x275524: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x275524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275528: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x275528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27552c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x27552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275530: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x275530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x275534: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x275534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x275538: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x275538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x27553c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x27553cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275540: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x275540u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x275544: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x275544u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275548: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x275548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27554c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x27554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275550: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x275550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275554: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x275554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275558: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x275558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27555c: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x27555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x275560: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x275560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x275564: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x275564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x275568: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x275568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27556c: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x27556cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x275570: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x275570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275574: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x275574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275578: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x275578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27557c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x27557cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x275580: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x275580u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x275584: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x275584u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x275588: 0x46000004  c1          0x4
    ctx->pc = 0x275588u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x27558c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27558cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275590: 0x3e00008  jr          $ra
    ctx->pc = 0x275590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275590u;
        // 0x275594: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275598u;
}
