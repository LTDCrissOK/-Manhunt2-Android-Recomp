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

// Function: sub_001C8320
// Address: 0x1c8320 - 0x1c86e8
void sub_001C8320_0x1c8320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8320_0x1c8320");
#endif

    switch (ctx->pc) {
        case 0x1c8350u: goto label_1c8350;
        case 0x1c83e8u: goto label_1c83e8;
        case 0x1c855cu: goto label_1c855c;
        case 0x1c8570u: goto label_1c8570;
        default: break;
    }

    ctx->pc = 0x1c8320u;

    // 0x1c8320: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c8320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c8324: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1c8324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1c8328: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1c8328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x1c832c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c832cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8330: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1c8330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1c8334: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1c8334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1c8338: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1c8338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1c833c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1c833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1c8340: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1c8340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1c8344: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1c8344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1c8348: 0xc071ede  jal         func_1C7B78
    ctx->pc = 0x1C8348u;
    SET_GPR_U32(ctx, 31, 0x1C8350u);
    ctx->pc = 0x1C834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8348u;
    // 0x1c834c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7B78u, 0x1C8348u, 0x1C8350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8350u;
label_1c8350:
    // 0x1c8350: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8350u;
    {
        const bool branch_taken_0x1c8350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8350u;
        // 0x1c8354: 0x268200a0  addiu       $v0, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8350) {
            ctx->pc = 0x1C8368u;
            goto label_1c8368;
        }
    }
    ctx->pc = 0x1C8358u;
    // 0x1c8358: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1c8358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c835c: 0xfa810300  sqc2        $vf1, 0x300($s4)
    ctx->pc = 0x1c835cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8360: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x1C8360u;
    {
        const bool branch_taken_0x1c8360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8360u;
        // 0x1c8364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8360) {
            ctx->pc = 0x1C86C0u;
            goto label_1c86c0;
        }
    }
    ctx->pc = 0x1C8368u;
label_1c8368:
    // 0x1c8368: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1c8368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c836c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1c836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8370: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c8370u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8374: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x1c8374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8378: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c8378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c837c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c837cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c8380: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x1c8380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8384: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1c8384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8388: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1c8388u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c838c: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x1c838cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x1c8390: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8398: 0x0  nop
    ctx->pc = 0x1c8398u;
    // NOP
    // 0x1c839c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c839cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c83a0: 0x0  nop
    ctx->pc = 0x1c83a0u;
    // NOP
    // 0x1c83a4: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x1C83A4u;
    {
        const bool branch_taken_0x1c83a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c83a4) {
            ctx->pc = 0x1C83A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83A4u;
            // 0x1c83a8: 0xae8002f4  sw          $zero, 0x2F4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 756), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83E0u;
            goto label_1c83e0;
        }
    }
    ctx->pc = 0x1C83ACu;
    // 0x1c83ac: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x1c83acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x1c83b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C83B0u;
    {
        const bool branch_taken_0x1c83b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83B0u;
        // 0x1c83b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83b0) {
            ctx->pc = 0x1C83CCu;
            goto label_1c83cc;
        }
    }
    ctx->pc = 0x1C83B8u;
    // 0x1c83b8: 0x8e82017c  lw          $v0, 0x17C($s4)
    ctx->pc = 0x1c83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x1c83bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C83BCu;
    {
        const bool branch_taken_0x1c83bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c83bc) {
            ctx->pc = 0x1C83CCu;
            goto label_1c83cc;
        }
    }
    ctx->pc = 0x1C83C4u;
    // 0x1c83c4: 0x8e82023c  lw          $v0, 0x23C($s4)
    ctx->pc = 0x1c83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 572)));
    // 0x1c83c8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1c83c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c83cc:
    // 0x1c83cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C83CCu;
    {
        const bool branch_taken_0x1c83cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83CCu;
        // 0x1c83d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83cc) {
            ctx->pc = 0x1C83DCu;
            goto label_1c83dc;
        }
    }
    ctx->pc = 0x1C83D4u;
    // 0x1c83d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C83D4u;
    {
        const bool branch_taken_0x1c83d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83D4u;
        // 0x1c83d8: 0xae8202f4  sw          $v0, 0x2F4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83d4) {
            ctx->pc = 0x1C83E0u;
            goto label_1c83e0;
        }
    }
    ctx->pc = 0x1C83DCu;
label_1c83dc:
    // 0x1c83dc: 0xae8002f4  sw          $zero, 0x2F4($s4)
    ctx->pc = 0x1c83dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 756), GPR_U32(ctx, 0));
label_1c83e0:
    // 0x1c83e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C83E0u;
    SET_GPR_U32(ctx, 31, 0x1C83E8u);
    ctx->pc = 0x1C83E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83E0u;
    // 0x1c83e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C83E0u, 0x1C83E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83E8u;
label_1c83e8:
    // 0x1c83e8: 0x8e8202f4  lw          $v0, 0x2F4($s4)
    ctx->pc = 0x1c83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 756)));
    // 0x1c83ec: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C83ECu;
    {
        const bool branch_taken_0x1c83ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83ECu;
        // 0x1c83f0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83ec) {
            ctx->pc = 0x1C848Cu;
            goto label_1c848c;
        }
    }
    ctx->pc = 0x1C83F4u;
    // 0x1c83f4: 0x268302e0  addiu       $v1, $s4, 0x2E0
    ctx->pc = 0x1c83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
    // 0x1c83f8: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1c83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1c83fc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c83fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8400: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1c8400u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8404: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1c8404u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1c8408: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1c8408u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c840c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8410: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c8410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8414: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x1c8414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8418: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c8418u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c841c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8420: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1c8420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8424: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c8424u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c8428: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1c8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c842c: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x1c842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8430: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1c8430u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8434: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c8434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c8438: 0x0  nop
    ctx->pc = 0x1c8438u;
    // NOP
    // 0x1c843c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1c843cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8440: 0x0  nop
    ctx->pc = 0x1c8440u;
    // NOP
    // 0x1c8444: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1C8444u;
    {
        const bool branch_taken_0x1c8444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8444u;
        // 0x1c8448: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8444) {
            ctx->pc = 0x1C847Cu;
            goto label_1c847c;
        }
    }
    ctx->pc = 0x1C844Cu;
    // 0x1c844c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c8450: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1c8450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8454: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1c8454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8458: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1c8458u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1c845c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c845cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c8460: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1c8460u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c8464: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1c8464u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1c8468: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1c8468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c846c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c846cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c8470: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c8470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c8474: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c8474u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8478: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c8478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c847c:
    // 0x1c847c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c847cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8480: 0xfa810300  sqc2        $vf1, 0x300($s4)
    ctx->pc = 0x1c8480u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8484: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1C8484u;
    {
        const bool branch_taken_0x1c8484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8484u;
        // 0x1c8488: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8484) {
            ctx->pc = 0x1C86C0u;
            goto label_1c86c0;
        }
    }
    ctx->pc = 0x1C848Cu;
label_1c848c:
    // 0x1c848c: 0x269202d0  addiu       $s2, $s4, 0x2D0
    ctx->pc = 0x1c848cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
    // 0x1c8490: 0x26910330  addiu       $s1, $s4, 0x330
    ctx->pc = 0x1c8490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
    // 0x1c8494: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1c8494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c8498: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1c8498u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c849c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c849cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c84a0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c84a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c84a4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1c84a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c84a8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1c84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1c84ac: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1c84acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c84b0: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1c84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1c84b4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c84b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c84b8: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x1c84b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c84bc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1c84bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c84c0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1c84c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c84c4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1c84c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c84c8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1c84c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1c84cc: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1c84ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c84d0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c84d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1c84d4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1c84d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1c84d8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1c84d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c84dc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c84dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c84e0: 0xc6a40000  lwc1        $f4, 0x0($s5)
    ctx->pc = 0x1c84e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c84e4: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x1c84e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c84e8: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x1c84e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c84ec: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1c84ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c84f0: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x1c84f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c84f4: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x1c84f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c84f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c84f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1c84fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c84fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8500: 0x0  nop
    ctx->pc = 0x1c8500u;
    // NOP
    // 0x1c8504: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1c8504u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1c8508: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1c8508u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c850c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1c850cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1c8510: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c8510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8514: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x1c8514u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c8518: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1c8518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c851c: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1c851cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c8520: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1c8520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1c8524: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c8524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8528: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1c8528u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c852c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c852cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8530: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c8530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8534: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x1c8534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c853c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1c853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8540: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1c8540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8544: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x1c8544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8548: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1c8548u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c854c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1c854cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1c8550: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1c8550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1c8554: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C8554u;
    SET_GPR_U32(ctx, 31, 0x1C855Cu);
    ctx->pc = 0x1C8558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8554u;
    // 0x1c8558: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C8554u, 0x1C855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C855Cu;
label_1c855c:
    // 0x1c855c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c855cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c8560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8564: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1c8564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c8568: 0xc0791fe  jal         func_1E47F8
    ctx->pc = 0x1C8568u;
    SET_GPR_U32(ctx, 31, 0x1C8570u);
    ctx->pc = 0x1C856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8568u;
    // 0x1c856c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47F8u, 0x1C8568u, 0x1C8570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8570u;
label_1c8570:
    // 0x1c8570: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1c8570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c8574: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c8574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8578: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1c8578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c857c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c857cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8580: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1c8580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8584: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c8584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8588: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c858c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8590: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x1c8590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c8594: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c8594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c8598: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1c8598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c859c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1c859cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c85a0: 0xe7a5005c  swc1        $f5, 0x5C($sp)
    ctx->pc = 0x1c85a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1c85a4: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1c85a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c85a8: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x1c85a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c85ac: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x1c85acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c85b0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c85b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c85b4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c85b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c85b8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c85b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c85bc: 0x46000004  c1          0x4
    ctx->pc = 0x1c85bcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c85c0: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1c85c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x1c85c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c85c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c85c8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c85c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c85cc: 0x0  nop
    ctx->pc = 0x1c85ccu;
    // NOP
    // 0x1c85d0: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1c85d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c85d4: 0x0  nop
    ctx->pc = 0x1c85d4u;
    // NOP
    // 0x1c85d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C85D8u;
    {
        const bool branch_taken_0x1c85d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c85d8) {
            ctx->pc = 0x1C85DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C85D8u;
            // 0x1c85dc: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C85E0u;
            goto label_1c85e0;
        }
    }
    ctx->pc = 0x1C85E0u;
label_1c85e0:
    // 0x1c85e0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1c85e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1c85e4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c85e8: 0x3c014091  lui         $at, 0x4091
    ctx->pc = 0x1c85e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16529 << 16));
    // 0x1c85ec: 0x3421745d  ori         $at, $at, 0x745D
    ctx->pc = 0x1c85ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29789);
    // 0x1c85f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c85f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c85f4: 0x0  nop
    ctx->pc = 0x1c85f4u;
    // NOP
    // 0x1c85f8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1c85f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1c85fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c85fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8600: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x1c8600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8604: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c8604u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8608: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1c8608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c860c: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x1c860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8610: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c8610u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c8614: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1c8614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8618: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x1c8618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c861c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1c861cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8620: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c8620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c8624: 0x0  nop
    ctx->pc = 0x1c8624u;
    // NOP
    // 0x1c8628: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1c8628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c862c: 0x0  nop
    ctx->pc = 0x1c862cu;
    // NOP
    // 0x1c8630: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8630u;
    {
        const bool branch_taken_0x1c8630 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8630u;
        // 0x1c8634: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8630) {
            ctx->pc = 0x1C8648u;
            goto label_1c8648;
        }
    }
    ctx->pc = 0x1C8638u;
    // 0x1c8638: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1c8638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c863c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c863cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8640: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C8640u;
    {
        const bool branch_taken_0x1c8640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8640) {
            ctx->pc = 0x1C8674u;
            goto label_1c8674;
        }
    }
    ctx->pc = 0x1C8648u;
label_1c8648:
    // 0x1c8648: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1c8648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c864c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1c864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8650: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c8650u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c8654: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1c8654u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1c8658: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x1c8658u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1c865c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1c865cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1c8660: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c8660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c8664: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1c8664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1c8668: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1c8668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c866c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c866cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8670: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c8670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c8674:
    // 0x1c8674: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x1c8674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c8678: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c8678u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c867c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c867cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c8680: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c8680u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8684: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c8684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8688: 0x26820300  addiu       $v0, $s4, 0x300
    ctx->pc = 0x1c8688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
    // 0x1c868c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1c868cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c8690: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c8690u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8694: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c8694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8698: 0xfa810300  sqc2        $vf1, 0x300($s4)
    ctx->pc = 0x1c8698u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c869c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c869cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c86a0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c86a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c86a4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c86a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c86a8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c86a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c86ac: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c86acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c86b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c86b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c86b4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c86b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c86b8: 0xfa810300  sqc2        $vf1, 0x300($s4)
    ctx->pc = 0x1c86b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c86bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c86c0:
    // 0x1c86c0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1c86c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c86c4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1c86c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c86c8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1c86c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c86cc: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1c86ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c86d0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1c86d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c86d4: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1c86d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c86d8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1c86d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c86dc: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1c86dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1c86e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C86E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86E0u;
        // 0x1c86e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C86E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C86E8u;
}
