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

// Function: sub_001B33E0
// Address: 0x1b33e0 - 0x1b34f0
void sub_001B33E0_0x1b33e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B33E0_0x1b33e0");
#endif

    switch (ctx->pc) {
        case 0x1b3410u: goto label_1b3410;
        case 0x1b342cu: goto label_1b342c;
        case 0x1b3454u: goto label_1b3454;
        case 0x1b3460u: goto label_1b3460;
        case 0x1b3470u: goto label_1b3470;
        case 0x1b347cu: goto label_1b347c;
        case 0x1b34dcu: goto label_1b34dc;
        default: break;
    }

    ctx->pc = 0x1b33e0u;

    // 0x1b33e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b33e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b33e4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b33e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b33e8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1b33e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1b33ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b33ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b33f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b33f4: 0x92020049  lbu         $v0, 0x49($s0)
    ctx->pc = 0x1b33f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x1b33f8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1B33F8u;
    {
        const bool branch_taken_0x1b33f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33F8u;
        // 0x1b33fc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33f8) {
            ctx->pc = 0x1B34DCu;
            goto label_1b34dc;
        }
    }
    ctx->pc = 0x1B3400u;
    // 0x1b3400: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x1b3400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3404: 0x24a58968  addiu       $a1, $a1, -0x7698
    ctx->pc = 0x1b3404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936936));
    // 0x1b3408: 0xc06cbd0  jal         func_1B2F40
    ctx->pc = 0x1B3408u;
    SET_GPR_U32(ctx, 31, 0x1B3410u);
    ctx->pc = 0x1B340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3408u;
    // 0x1b340c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2F40u, 0x1B3408u, 0x1B3410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3410u;
label_1b3410:
    // 0x1b3410: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1b3410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1b3414: 0xc60c0044  lwc1        $f12, 0x44($s0)
    ctx->pc = 0x1b3414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3418: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b341c: 0x24a58978  addiu       $a1, $a1, -0x7688
    ctx->pc = 0x1b341cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936952));
    // 0x1b3420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3424: 0xc06cbd0  jal         func_1B2F40
    ctx->pc = 0x1B3424u;
    SET_GPR_U32(ctx, 31, 0x1B342Cu);
    ctx->pc = 0x1B3428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3424u;
    // 0x1b3428: 0x26060004  addiu       $a2, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2F40u, 0x1B3424u, 0x1B342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B342Cu;
label_1b342c:
    // 0x1b342c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b342cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3430: 0x92020048  lbu         $v0, 0x48($s0)
    ctx->pc = 0x1b3430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b3434: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3434u;
    {
        const bool branch_taken_0x1b3434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3434) {
            ctx->pc = 0x1B344Cu;
            goto label_1b344c;
        }
    }
    ctx->pc = 0x1B343Cu;
    // 0x1b343c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B343Cu;
    {
        const bool branch_taken_0x1b343c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b343c) {
            ctx->pc = 0x1B344Cu;
            goto label_1b344c;
        }
    }
    ctx->pc = 0x1B3444u;
    // 0x1b3444: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B3444u;
    {
        const bool branch_taken_0x1b3444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3444) {
            ctx->pc = 0x1B3448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3444u;
            // 0x1b3448: 0xa2000049  sb          $zero, 0x49($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B344Cu;
            goto label_1b344c;
        }
    }
    ctx->pc = 0x1B344Cu;
label_1b344c:
    // 0x1b344c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1B344Cu;
    SET_GPR_U32(ctx, 31, 0x1B3454u);
    ctx->pc = 0x1B3450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B344Cu;
    // 0x1b3450: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1B344Cu, 0x1B3454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3454u;
label_1b3454:
    // 0x1b3454: 0x8e11004c  lw          $s1, 0x4C($s0)
    ctx->pc = 0x1b3454u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1b3458: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1B3458u;
    SET_GPR_U32(ctx, 31, 0x1B3460u);
    ctx->pc = 0x1B345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3458u;
    // 0x1b345c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1B3458u, 0x1B3460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3460u;
label_1b3460:
    // 0x1b3460: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3460u;
    {
        const bool branch_taken_0x1b3460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3460u;
        // 0x1b3464: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3460) {
            ctx->pc = 0x1B3474u;
            goto label_1b3474;
        }
    }
    ctx->pc = 0x1B3468u;
    // 0x1b3468: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1B3468u;
    SET_GPR_U32(ctx, 31, 0x1B3470u);
    ctx->pc = 0x1B346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3468u;
    // 0x1b346c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1B3468u, 0x1B3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3470u;
label_1b3470:
    // 0x1b3470: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x1b3470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1b3474:
    // 0x1b3474: 0xc0b184c  jal         func_2C6130
    ctx->pc = 0x1B3474u;
    SET_GPR_U32(ctx, 31, 0x1B347Cu);
    ctx->pc = 0x1B3478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3474u;
    // 0x1b3478: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6130u, 0x1B3474u, 0x1B347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B347Cu;
label_1b347c:
    // 0x1b347c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1b347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1b3480: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1b3480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1b3484: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b3484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1b3488: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1b3488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b348c: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1b348cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3490: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b3490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3494: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1b3494u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3498: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1b3498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1b349c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1b349cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1b34a0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1b34a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1b34a4: 0xfa050050  sqc2        $vf5, 0x50($s0)
    ctx->pc = 0x1b34a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1b34a8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1b34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1b34ac: 0x24635b30  addiu       $v1, $v1, 0x5B30
    ctx->pc = 0x1b34acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23344));
    // 0x1b34b0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1b34b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B30u));
    // 0x1b34b4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1b34b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b34b8: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1b34b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b34bc: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b34bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b34c0: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1b34c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b34c4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1b34c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1b34c8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1b34c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1b34cc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1b34ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1b34d0: 0xfa050060  sqc2        $vf5, 0x60($s0)
    ctx->pc = 0x1b34d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1b34d4: 0xc06cbf8  jal         func_1B2FE0
    ctx->pc = 0x1B34D4u;
    SET_GPR_U32(ctx, 31, 0x1B34DCu);
    ctx->pc = 0x1B34D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B34D4u;
    // 0x1b34d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2FE0u, 0x1B34D4u, 0x1B34DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B34DCu;
label_1b34dc:
    // 0x1b34dc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b34dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b34e0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1b34e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b34e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b34e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b34e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B34E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34E8u;
        // 0x1b34ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B34E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B34F0u;
}
