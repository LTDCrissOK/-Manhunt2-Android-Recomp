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

// Function: sub_00105570
// Address: 0x105570 - 0x105a88
void sub_00105570_0x105570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105570_0x105570");
#endif

    switch (ctx->pc) {
        case 0x1055e0u: goto label_1055e0;
        case 0x105630u: goto label_105630;
        case 0x105670u: goto label_105670;
        case 0x1056c0u: goto label_1056c0;
        case 0x1056d8u: goto label_1056d8;
        case 0x105700u: goto label_105700;
        case 0x1057a8u: goto label_1057a8;
        case 0x105840u: goto label_105840;
        case 0x105888u: goto label_105888;
        case 0x1058b4u: goto label_1058b4;
        case 0x105928u: goto label_105928;
        case 0x105a30u: goto label_105a30;
        default: break;
    }

    ctx->pc = 0x105570u;

    // 0x105570: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x105570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x105574: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x105574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x105578: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x105578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x10557c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x10557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x105580: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x105580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x105584: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x105584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x105588: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x105588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x10558c: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x10558cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x105590: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x105590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x105594: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x105594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x105598: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x105598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x10559c: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x10559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x1055a0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1055a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1055a4: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x1055a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x1055a8: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1055a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x1055ac: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1055acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1055b0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1055b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1055b4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1055b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1055b8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1055b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1055bc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1055bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1055c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1055c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1055c4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1055c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1055c8: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1055c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1055cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1055ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1055d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1055d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055d4: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x1055d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    // 0x1055d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1055D8u;
    SET_GPR_U32(ctx, 31, 0x1055E0u);
    ctx->pc = 0x1055DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055D8u;
    // 0x1055dc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1055D8u, 0x1055E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055E0u;
label_1055e0:
    // 0x1055e0: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x1055e0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1055e4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1055e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1055e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1055e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1055ec: 0x24640738  addiu       $a0, $v1, 0x738
    ctx->pc = 0x1055ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1848));
    // 0x1055f0: 0xac670738  sw          $a3, 0x738($v1)
    ctx->pc = 0x1055f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3F0738u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0738u, _value); } while (0);
    // 0x1055f4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1055f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1055f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1055f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F073Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F073Cu, _value); } while (0);
    // 0x1055fc: 0x24a67dd0  addiu       $a2, $a1, 0x7DD0
    ctx->pc = 0x1055fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32208));
    // 0x105600: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x105600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F0740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0740u, _value); } while (0);
    // 0x105604: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x105604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105608: 0xaca27dd0  sw          $v0, 0x7DD0($a1)
    ctx->pc = 0x105608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x487DD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x487DD0u, _value); } while (0);
    // 0x10560c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x10560cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x487DD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x487DD4u, _value); } while (0);
    // 0x105610: 0xa0470021  sb          $a3, 0x21($v0)
    ctx->pc = 0x105610u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 7));
    // 0x105614: 0x8c620738  lw          $v0, 0x738($v1)
    ctx->pc = 0x105614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0738u));
    // 0x105618: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x105618u;
    {
        const bool branch_taken_0x105618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105618u;
        // 0x10561c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105618) {
            ctx->pc = 0x105800u;
            goto label_105800;
        }
    }
    ctx->pc = 0x105620u;
    // 0x105620: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x105620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x105624: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x105624u;
    {
        const bool branch_taken_0x105624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105624u;
        // 0x105628: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105624) {
            ctx->pc = 0x105800u;
            goto label_105800;
        }
    }
    ctx->pc = 0x10562Cu;
    // 0x10562c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x10562cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105630:
    // 0x105630: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x105630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x105634: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x105638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10563c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x10563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x105640: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105644: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x105644u;
    {
        const bool branch_taken_0x105644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105644u;
        // 0x105648: 0x9f080  sll         $fp, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105644) {
            ctx->pc = 0x105778u;
            goto label_105778;
        }
    }
    ctx->pc = 0x10564Cu;
    // 0x10564c: 0x24020320  addiu       $v0, $zero, 0x320
    ctx->pc = 0x10564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x105650: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x105650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x105654: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x105654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x105658: 0x24630738  addiu       $v1, $v1, 0x738
    ctx->pc = 0x105658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1848));
    // 0x10565c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x10565cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x105660: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x105660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x105664: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x105664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x105668: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x105668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10566c: 0x0  nop
    ctx->pc = 0x10566cu;
    // NOP
label_105670:
    // 0x105670: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x105670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x105674: 0x24950001  addiu       $s5, $a0, 0x1
    ctx->pc = 0x105674u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x105678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10567c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x10567cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x105680: 0x24637dd0  addiu       $v1, $v1, 0x7DD0
    ctx->pc = 0x105680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32208));
    // 0x105684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105688: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x105688u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10568c: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x10568cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x105690: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x105690u;
    {
        const bool branch_taken_0x105690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105690u;
        // 0x105694: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105690) {
            ctx->pc = 0x105760u;
            goto label_105760;
        }
    }
    ctx->pc = 0x105698u;
    // 0x105698: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x105698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x10569c: 0x24020320  addiu       $v0, $zero, 0x320
    ctx->pc = 0x10569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x1056a0: 0x24737dd0  addiu       $s3, $v1, 0x7DD0
    ctx->pc = 0x1056a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 32208));
    // 0x1056a4: 0xe2a018  mult        $s4, $a3, $v0
    ctx->pc = 0x1056a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x1056a8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1056a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1056ac: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1056acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1056b0: 0x24630738  addiu       $v1, $v1, 0x738
    ctx->pc = 0x1056b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1848));
    // 0x1056b4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1056b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1056b8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1056b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1056bc: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x1056bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_1056c0:
    // 0x1056c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1056c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056c4: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x1056c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
    // 0x1056c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1056c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056cc: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x1056ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x1056d0: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1056D0u;
    SET_GPR_U32(ctx, 31, 0x1056D8u);
    ctx->pc = 0x1056D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056D0u;
    // 0x1056d4: 0x7faa0070  sq          $t2, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1056D0u, 0x1056D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056D8u;
label_1056d8:
    // 0x1056d8: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x1056d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1056dc: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x1056dcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1056e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1056e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1056e4: 0x7ba80050  lq          $t0, 0x50($sp)
    ctx->pc = 0x1056e4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1056e8: 0x7ba90060  lq          $t1, 0x60($sp)
    ctx->pc = 0x1056e8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1056ec: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1056ECu;
    {
        const bool branch_taken_0x1056ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056ECu;
        // 0x1056f0: 0x7baa0070  lq          $t2, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056ec) {
            ctx->pc = 0x10574Cu;
            goto label_10574c;
        }
    }
    ctx->pc = 0x1056F4u;
    // 0x1056f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1056f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056f8: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1056F8u;
    SET_GPR_U32(ctx, 31, 0x105700u);
    ctx->pc = 0x1056FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056F8u;
    // 0x1056fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1056F8u, 0x105700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105700u;
label_105700:
    // 0x105700: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105704: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x105704u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105708: 0x90a20021  lbu         $v0, 0x21($a1)
    ctx->pc = 0x105708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 33)));
    // 0x10570c: 0x7ba80050  lq          $t0, 0x50($sp)
    ctx->pc = 0x10570cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105710: 0x7ba90060  lq          $t1, 0x60($sp)
    ctx->pc = 0x105710u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105714: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x105714u;
    {
        const bool branch_taken_0x105714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105714u;
        // 0x105718: 0x7baa0070  lq          $t2, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105714) {
            ctx->pc = 0x10574Cu;
            goto label_10574c;
        }
    }
    ctx->pc = 0x10571Cu;
    // 0x10571c: 0xa0b70021  sb          $s7, 0x21($a1)
    ctx->pc = 0x10571cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 23));
    // 0x105720: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x105720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105724: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x105724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x105728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10572c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x10572cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x105730: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x105730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x105734: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x105734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x105738: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x105738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x10573c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x10573cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x105740: 0x24427dd4  addiu       $v0, $v0, 0x7DD4
    ctx->pc = 0x105740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32212));
    // 0x105744: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x105744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105748: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x105748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_10574c:
    // 0x10574c: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x10574cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x105750: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x105750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x105754: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x105754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105758: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x105758u;
    {
        const bool branch_taken_0x105758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105758) {
            ctx->pc = 0x10575Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105758u;
            // 0x10575c: 0x7fa70040  sq          $a3, 0x40($sp) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1056C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1056c0;
        }
    }
    ctx->pc = 0x105760u;
label_105760:
    // 0x105760: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x105760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x105764: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x105764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105768: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10576c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x10576cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105770: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x105770u;
    {
        const bool branch_taken_0x105770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105770u;
        // 0x105774: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105770) {
            ctx->pc = 0x105670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105670;
        }
    }
    ctx->pc = 0x105778u;
label_105778:
    // 0x105778: 0x3ca1821  addu        $v1, $fp, $t2
    ctx->pc = 0x105778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 10)));
    // 0x10577c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105780: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x105780u;
    {
        const bool branch_taken_0x105780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105780u;
        // 0x105784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105780) {
            ctx->pc = 0x1057C4u;
            goto label_1057c4;
        }
    }
    ctx->pc = 0x105788u;
    // 0x105788: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x105788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x10578c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x10578cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x105790: 0x24427dd0  addiu       $v0, $v0, 0x7DD0
    ctx->pc = 0x105790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32208));
    // 0x105794: 0x24630738  addiu       $v1, $v1, 0x738
    ctx->pc = 0x105794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1848));
    // 0x105798: 0x400013  mtlo        $v0
    ctx->pc = 0x105798u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x10579c: 0x3c33021  addu        $a2, $fp, $v1
    ctx->pc = 0x10579cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1057a0: 0x24020320  addiu       $v0, $zero, 0x320
    ctx->pc = 0x1057a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x1057a4: 0x71222000  madd        $a0, $t1, $v0
    ctx->pc = 0x1057a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1057a8:
    // 0x1057a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1057a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1057ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1057acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1057b0: 0xa0600021  sb          $zero, 0x21($v1)
    ctx->pc = 0x1057b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x1057b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1057b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1057b8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1057b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1057bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1057BCu;
    {
        const bool branch_taken_0x1057bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1057C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057BCu;
        // 0x1057c0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057bc) {
            ctx->pc = 0x1057A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1057a8;
        }
    }
    ctx->pc = 0x1057C4u;
label_1057c4:
    // 0x1057c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1057c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057c8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1057c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1057cc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1057ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057d0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1057d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1057d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1057d8: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1057d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1057dc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1057dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1057e0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1057e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1057e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1057e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1057E8u;
    {
        const bool branch_taken_0x1057e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1057ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057E8u;
        // 0x1057ec: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057e8) {
            ctx->pc = 0x105800u;
            goto label_105800;
        }
    }
    ctx->pc = 0x1057F0u;
    // 0x1057f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1057f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1057f4: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x1057f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1057f8: 0x1440ff8d  bnez        $v0, . + 4 + (-0x73 << 2)
    ctx->pc = 0x1057F8u;
    {
        const bool branch_taken_0x1057f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1057FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057F8u;
        // 0x1057fc: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057f8) {
            ctx->pc = 0x105630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105630;
        }
    }
    ctx->pc = 0x105800u;
label_105800:
    // 0x105800: 0x1500002a  bnez        $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x105800u;
    {
        const bool branch_taken_0x105800 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x105804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105800u;
        // 0x105804: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105800) {
            ctx->pc = 0x1058ACu;
            goto label_1058ac;
        }
    }
    ctx->pc = 0x105808u;
    // 0x105808: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x105808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x10580c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10580cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105810: 0x24620738  addiu       $v0, $v1, 0x738
    ctx->pc = 0x105810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1848));
    // 0x105814: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x105814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x105818: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x105818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10581c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105820: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x105820u;
    {
        const bool branch_taken_0x105820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105820u;
        // 0x105824: 0x9f080  sll         $fp, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105820) {
            ctx->pc = 0x10585Cu;
            goto label_10585c;
        }
    }
    ctx->pc = 0x105828u;
    // 0x105828: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x105828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x10582c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x10582cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x105830: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x105830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x105834: 0x24427dd0  addiu       $v0, $v0, 0x7DD0
    ctx->pc = 0x105834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32208));
    // 0x105838: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x105838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10583c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x10583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_105840:
    // 0x105840: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x105840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105844: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x105844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x105848: 0xa0600021  sb          $zero, 0x21($v1)
    ctx->pc = 0x105848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x10584c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105850: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x105850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105854: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105854u;
    {
        const bool branch_taken_0x105854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105854u;
        // 0x105858: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105854) {
            ctx->pc = 0x105840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105840;
        }
    }
    ctx->pc = 0x10585Cu;
label_10585c:
    // 0x10585c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x10585cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x105860: 0x24430738  addiu       $v1, $v0, 0x738
    ctx->pc = 0x105860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1848));
    // 0x105864: 0x3c33021  addu        $a2, $fp, $v1
    ctx->pc = 0x105864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x105868: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x105868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10586c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10586Cu;
    {
        const bool branch_taken_0x10586c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10586Cu;
        // 0x105870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10586c) {
            ctx->pc = 0x1058A4u;
            goto label_1058a4;
        }
    }
    ctx->pc = 0x105874u;
    // 0x105874: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x105874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x105878: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x105878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x10587c: 0x1231818  mult        $v1, $t1, $v1
    ctx->pc = 0x10587cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x105880: 0x24427dd0  addiu       $v0, $v0, 0x7DD0
    ctx->pc = 0x105880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32208));
    // 0x105884: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x105884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_105888:
    // 0x105888: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x105888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10588c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10588cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x105890: 0xa0600021  sb          $zero, 0x21($v1)
    ctx->pc = 0x105890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x105894: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x105894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105898: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x105898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10589c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10589Cu;
    {
        const bool branch_taken_0x10589c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1058A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10589Cu;
        // 0x1058a0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10589c) {
            ctx->pc = 0x105888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105888;
        }
    }
    ctx->pc = 0x1058A4u;
label_1058a4:
    // 0x1058a4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1058A4u;
    {
        const bool branch_taken_0x1058a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058A4u;
        // 0x1058a8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058a4) {
            ctx->pc = 0x105A50u;
            goto label_105a50;
        }
    }
    ctx->pc = 0x1058ACu;
label_1058ac:
    // 0x1058ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1058ACu;
    SET_GPR_U32(ctx, 31, 0x1058B4u);
    ctx->pc = 0x1058B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1058ACu;
    // 0x1058b0: 0x7fa90060  sq          $t1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1058ACu, 0x1058B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058B4u;
label_1058b4:
    // 0x1058b4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1058b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x1058b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1058b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1058bc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1058bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1058c0: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1058c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1058c4: 0x24650738  addiu       $a1, $v1, 0x738
    ctx->pc = 0x1058c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1848));
    // 0x1058c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1058c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1058ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1058d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1058d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1058d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1058d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1058D8u;
    {
        const bool branch_taken_0x1058d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1058DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058D8u;
        // 0x1058dc: 0x7ba90060  lq          $t1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058d8) {
            ctx->pc = 0x1058E8u;
            goto label_1058e8;
        }
    }
    ctx->pc = 0x1058E0u;
    // 0x1058e0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1058e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058e4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1058e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1058e8:
    // 0x1058e8: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1058e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1058ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1058ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058f0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1058f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1058f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1058f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1058f8: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1058F8u;
    {
        const bool branch_taken_0x1058f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058F8u;
        // 0x1058fc: 0x9f080  sll         $fp, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058f8) {
            ctx->pc = 0x105A04u;
            goto label_105a04;
        }
    }
    ctx->pc = 0x105900u;
    // 0x105900: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x105900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x105904: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x105904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x105908: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x105908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10590c: 0x24427dd0  addiu       $v0, $v0, 0x7DD0
    ctx->pc = 0x10590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32208));
    // 0x105910: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x105910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105914: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x105914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x105918: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x105918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x10591c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10591cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x105920: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x105920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x105924: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x105924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_105928:
    // 0x105928: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x105928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10592c: 0xa0400021  sb          $zero, 0x21($v0)
    ctx->pc = 0x10592cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x105930: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x105930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105934: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x105934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105938: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x105938u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10593c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x10593cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105940: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x105940u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105944: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x105944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105948: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x105948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10594c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x10594cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x105950: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x105950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105954: 0x0  nop
    ctx->pc = 0x105954u;
    // NOP
    // 0x105958: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x105958u;
    {
        const bool branch_taken_0x105958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105958u;
        // 0x10595c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105958) {
            ctx->pc = 0x10598Cu;
            goto label_10598c;
        }
    }
    ctx->pc = 0x105960u;
    // 0x105960: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x105960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105964: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x105964u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x105968: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x105968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10596c: 0x0  nop
    ctx->pc = 0x10596cu;
    // NOP
    // 0x105970: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x105970u;
    {
        const bool branch_taken_0x105970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105970u;
        // 0x105974: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105970) {
            ctx->pc = 0x10598Cu;
            goto label_10598c;
        }
    }
    ctx->pc = 0x105978u;
    // 0x105978: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x105978u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x10597c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10597cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105980: 0x0  nop
    ctx->pc = 0x105980u;
    // NOP
    // 0x105984: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x105984u;
    {
        const bool branch_taken_0x105984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x105984) {
            ctx->pc = 0x105988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105984u;
            // 0x105988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10598Cu;
            goto label_10598c;
        }
    }
    ctx->pc = 0x10598Cu;
label_10598c:
    // 0x10598c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x10598Cu;
    {
        const bool branch_taken_0x10598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10598c) {
            ctx->pc = 0x105990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10598Cu;
            // 0x105990: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1059F4u;
            goto label_1059f4;
        }
    }
    ctx->pc = 0x105994u;
    // 0x105994: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x105994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105998: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x105998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10599c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x10599cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1059a0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1059a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1059a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1059a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1059a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1059a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1059ac: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1059acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1059b0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1059b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1059b4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1059b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1059b8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1059b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1059bc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1059bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1059c0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1059c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1059c4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1059c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1059c8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1059c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1059cc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1059ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1059d0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1059d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1059d4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1059d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1059d8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1059d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1059dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1059dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1059e0: 0x0  nop
    ctx->pc = 0x1059e0u;
    // NOP
    // 0x1059e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1059E4u;
    {
        const bool branch_taken_0x1059e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1059E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059E4u;
        // 0x1059e8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059e4) {
            ctx->pc = 0x1059F4u;
            goto label_1059f4;
        }
    }
    ctx->pc = 0x1059ECu;
    // 0x1059ec: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1059ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1059f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1059f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1059f4:
    // 0x1059f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1059f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1059f8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1059f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1059fc: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1059FCu;
    {
        const bool branch_taken_0x1059fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059FCu;
        // 0x105a00: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059fc) {
            ctx->pc = 0x105928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105928;
        }
    }
    ctx->pc = 0x105A04u;
label_105a04:
    // 0x105a04: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x105a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x105a08: 0x24430738  addiu       $v1, $v0, 0x738
    ctx->pc = 0x105a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1848));
    // 0x105a0c: 0x3c33021  addu        $a2, $fp, $v1
    ctx->pc = 0x105a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x105a10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x105a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105a14: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x105A14u;
    {
        const bool branch_taken_0x105a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A14u;
        // 0x105a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a14) {
            ctx->pc = 0x105A4Cu;
            goto label_105a4c;
        }
    }
    ctx->pc = 0x105A1Cu;
    // 0x105a1c: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x105a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x105a20: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x105a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x105a24: 0x1231818  mult        $v1, $t1, $v1
    ctx->pc = 0x105a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x105a28: 0x24427dd0  addiu       $v0, $v0, 0x7DD0
    ctx->pc = 0x105a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32208));
    // 0x105a2c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x105a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_105a30:
    // 0x105a30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x105a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105a34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x105a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x105a38: 0xa0600021  sb          $zero, 0x21($v1)
    ctx->pc = 0x105a38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x105a3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x105a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105a40: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x105a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105a44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105A44u;
    {
        const bool branch_taken_0x105a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A44u;
        // 0x105a48: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a44) {
            ctx->pc = 0x105A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105a30;
        }
    }
    ctx->pc = 0x105A4Cu;
label_105a4c:
    // 0x105a4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105a50:
    // 0x105a50: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x105a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105a54: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x105a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x105a58: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x105a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105a5c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x105a5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x105a60: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x105a60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x105a64: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x105a64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x105a68: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x105a68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x105a6c: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x105a6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x105a70: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x105a70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x105a74: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x105a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x105a78: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x105a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x105a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x105A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A7Cu;
        // 0x105a80: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105A84u;
    // 0x105a84: 0x0  nop
    ctx->pc = 0x105a84u;
    // NOP
    ctx->pc = 0x105a88u;
}
