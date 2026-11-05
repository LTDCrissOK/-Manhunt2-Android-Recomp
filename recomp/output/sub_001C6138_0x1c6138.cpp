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

// Function: sub_001C6138
// Address: 0x1c6138 - 0x1c6318
void sub_001C6138_0x1c6138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6138_0x1c6138");
#endif

    switch (ctx->pc) {
        case 0x1c61acu: goto label_1c61ac;
        case 0x1c61c4u: goto label_1c61c4;
        case 0x1c61d0u: goto label_1c61d0;
        case 0x1c61f8u: goto label_1c61f8;
        case 0x1c6208u: goto label_1c6208;
        case 0x1c6210u: goto label_1c6210;
        case 0x1c6228u: goto label_1c6228;
        case 0x1c6234u: goto label_1c6234;
        case 0x1c6248u: goto label_1c6248;
        case 0x1c6294u: goto label_1c6294;
        default: break;
    }

    ctx->pc = 0x1c6138u;

    // 0x1c6138: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c6138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c613c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c6140: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c6140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c6144: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c6144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6148: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1c6148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1c614c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c614cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6150: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1c6150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1c6154: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1c6154u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6158: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1c6158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1c615c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c615cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6160: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c6160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c6164: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1c6164u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6168: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c6168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c616c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c616cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c6170: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1c6170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1c6174: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c6174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c6178: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1c6178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1c617c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1c617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1c6180: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1c6180u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c6184: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1c6184u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c6188: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c6188u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c618c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c618cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c6190: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c6190u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c6194: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c6194u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c6198: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c6198u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c619c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c619cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c61a0: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1c61a0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c61a4: 0xc07173a  jal         func_1C5CE8
    ctx->pc = 0x1C61A4u;
    SET_GPR_U32(ctx, 31, 0x1C61ACu);
    ctx->pc = 0x1C61A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61A4u;
    // 0x1c61a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CE8u, 0x1C61A4u, 0x1C61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61ACu;
label_1c61ac:
    // 0x1c61ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C61ACu;
    {
        const bool branch_taken_0x1c61ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61ACu;
        // 0x1c61b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61ac) {
            ctx->pc = 0x1C61C8u;
            goto label_1c61c8;
        }
    }
    ctx->pc = 0x1C61B4u;
    // 0x1c61b4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C61B4u;
    {
        const bool branch_taken_0x1c61b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61B4u;
        // 0x1c61b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61b4) {
            ctx->pc = 0x1C61C8u;
            goto label_1c61c8;
        }
    }
    ctx->pc = 0x1C61BCu;
    // 0x1c61bc: 0xc0715aa  jal         func_1C56A8
    ctx->pc = 0x1C61BCu;
    SET_GPR_U32(ctx, 31, 0x1C61C4u);
    ctx->pc = 0x1C61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61BCu;
    // 0x1c61c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C56A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C56A8u, 0x1C61BCu, 0x1C61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61C4u;
label_1c61c4:
    // 0x1c61c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c61c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c61c8:
    // 0x1c61c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C61C8u;
    SET_GPR_U32(ctx, 31, 0x1C61D0u);
    ctx->pc = 0x1C61CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61C8u;
    // 0x1c61cc: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C61C8u, 0x1C61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61D0u;
label_1c61d0:
    // 0x1c61d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c61d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61d4: 0x8e230318  lw          $v1, 0x318($s1)
    ctx->pc = 0x1c61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x1c61d8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c61d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1c61dc: 0x8c770fe8  lw          $s7, 0xFE8($v1)
    ctx->pc = 0x1c61dcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x1c61e0: 0x8ee200c8  lw          $v0, 0xC8($s7)
    ctx->pc = 0x1c61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 200)));
    // 0x1c61e4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C61E4u;
    {
        const bool branch_taken_0x1c61e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61E4u;
        // 0x1c61e8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61e4) {
            ctx->pc = 0x1C62D8u;
            goto label_1c62d8;
        }
    }
    ctx->pc = 0x1C61ECu;
    // 0x1c61ec: 0x26330060  addiu       $s3, $s1, 0x60
    ctx->pc = 0x1c61ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1c61f0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c61f4: 0x0  nop
    ctx->pc = 0x1c61f4u;
    // NOP
label_1c61f8:
    // 0x1c61f8: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1c61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1c61fc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1C61FCu;
    {
        const bool branch_taken_0x1c61fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61FCu;
        // 0x1c6200: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61fc) {
            ctx->pc = 0x1C62A8u;
            goto label_1c62a8;
        }
    }
    ctx->pc = 0x1C6204u;
    // 0x1c6204: 0x0  nop
    ctx->pc = 0x1c6204u;
    // NOP
label_1c6208:
    // 0x1c6208: 0xc07175a  jal         func_1C5D68
    ctx->pc = 0x1C6208u;
    SET_GPR_U32(ctx, 31, 0x1C6210u);
    ctx->pc = 0x1C620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6208u;
    // 0x1c620c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D68u, 0x1C6208u, 0x1C6210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6210u;
label_1c6210:
    // 0x1c6210: 0x5452002a  bnel        $v0, $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C6210u;
    {
        const bool branch_taken_0x1c6210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c6210) {
            ctx->pc = 0x1C6214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6210u;
            // 0x1c6214: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C62BCu;
            goto label_1c62bc;
        }
    }
    ctx->pc = 0x1C6218u;
    // 0x1c6218: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6218u;
    {
        const bool branch_taken_0x1c6218 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6218u;
        // 0x1c621c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6218) {
            ctx->pc = 0x1C623Cu;
            goto label_1c623c;
        }
    }
    ctx->pc = 0x1C6220u;
    // 0x1c6220: 0xc071764  jal         func_1C5D90
    ctx->pc = 0x1C6220u;
    SET_GPR_U32(ctx, 31, 0x1C6228u);
    ctx->pc = 0x1C6224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6220u;
    // 0x1c6224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D90u, 0x1C6220u, 0x1C6228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6228u;
label_1c6228:
    // 0x1c6228: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c622c: 0xc0f62ca  jal         func_3D8B28
    ctx->pc = 0x1C622Cu;
    SET_GPR_U32(ctx, 31, 0x1C6234u);
    ctx->pc = 0x1C6230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C622Cu;
    // 0x1c6230: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x1C622Cu, 0x1C6234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6234u;
label_1c6234:
    // 0x1c6234: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C6234u;
    {
        const bool branch_taken_0x1c6234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6234) {
            ctx->pc = 0x1C6238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6234u;
            // 0x1c6238: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C62A0u;
            goto label_1c62a0;
        }
    }
    ctx->pc = 0x1C623Cu;
label_1c623c:
    // 0x1c623c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c623cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6240: 0xc071764  jal         func_1C5D90
    ctx->pc = 0x1C6240u;
    SET_GPR_U32(ctx, 31, 0x1C6248u);
    ctx->pc = 0x1C6244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6240u;
    // 0x1c6244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D90u, 0x1C6240u, 0x1C6248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6248u;
label_1c6248:
    // 0x1c6248: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c6248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c624c: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x1c624cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1c6250: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c6250u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6254: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c6254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6258: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c6258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c625c: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x1c625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6260: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c6260u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c6264: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c6264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6268: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x1c6268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c626c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c626cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c6270: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1c6270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6274: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x1c6274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6278: 0x4603151c  madd.s      $f20, $f2, $f3
    ctx->pc = 0x1c6278u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c627c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x1c627cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6280: 0x0  nop
    ctx->pc = 0x1c6280u;
    // NOP
    // 0x1c6284: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6284u;
    {
        const bool branch_taken_0x1c6284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6284u;
        // 0x1c6288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6284) {
            ctx->pc = 0x1C629Cu;
            goto label_1c629c;
        }
    }
    ctx->pc = 0x1C628Cu;
    // 0x1c628c: 0xc071764  jal         func_1C5D90
    ctx->pc = 0x1C628Cu;
    SET_GPR_U32(ctx, 31, 0x1C6294u);
    ctx->pc = 0x1C6290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C628Cu;
    // 0x1c6290: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D90u, 0x1C628Cu, 0x1C6294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6294u;
label_1c6294:
    // 0x1c6294: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1c6294u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1c6298: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c6298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c629c:
    // 0x1c629c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1c62a0:
    // 0x1c62a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c62a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c62a4: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1c62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1c62a8:
    // 0x1c62a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c62ac: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c62acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c62b0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c62b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c62b4: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1C62B4u;
    {
        const bool branch_taken_0x1c62b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62B4u;
        // 0x1c62b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c62b4) {
            ctx->pc = 0x1C6208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6208;
        }
    }
    ctx->pc = 0x1C62BCu;
label_1c62bc:
    // 0x1c62bc: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C62BCu;
    {
        const bool branch_taken_0x1c62bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C62C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62BCu;
        // 0x1c62c0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c62bc) {
            ctx->pc = 0x1C62DCu;
            goto label_1c62dc;
        }
    }
    ctx->pc = 0x1C62C4u;
    // 0x1c62c4: 0x8ee200c8  lw          $v0, 0xC8($s7)
    ctx->pc = 0x1c62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 200)));
    // 0x1c62c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c62c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c62cc: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1c62ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1c62d0: 0x5040ffc9  beql        $v0, $zero, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1C62D0u;
    {
        const bool branch_taken_0x1c62d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c62d0) {
            ctx->pc = 0x1C62D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C62D0u;
            // 0x1c62d4: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C61F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c61f8;
        }
    }
    ctx->pc = 0x1C62D8u;
label_1c62d8:
    // 0x1c62d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c62d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c62dc:
    // 0x1c62dc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c62dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c62e0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c62e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c62e4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c62e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c62e8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1c62e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c62ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c62ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c62f0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1c62f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c62f4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1c62f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c62f8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1c62f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c62fc: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1c62fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c6300: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1c6300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6304: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1c6304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c6308: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1c6308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c630c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C630Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C630Cu;
        // 0x1c6310: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C630Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6314u;
    // 0x1c6314: 0x0  nop
    ctx->pc = 0x1c6314u;
    // NOP
    ctx->pc = 0x1c6318u;
}
