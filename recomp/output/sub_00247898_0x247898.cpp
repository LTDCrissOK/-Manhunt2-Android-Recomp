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

// Function: sub_00247898
// Address: 0x247898 - 0x247b50
void sub_00247898_0x247898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247898_0x247898");
#endif

    switch (ctx->pc) {
        case 0x247898u: goto label_247898;
        case 0x24789cu: goto label_24789c;
        case 0x2478a0u: goto label_2478a0;
        case 0x2478a4u: goto label_2478a4;
        case 0x2478a8u: goto label_2478a8;
        case 0x2478acu: goto label_2478ac;
        case 0x2478b0u: goto label_2478b0;
        case 0x2478b4u: goto label_2478b4;
        case 0x2478b8u: goto label_2478b8;
        case 0x2478bcu: goto label_2478bc;
        case 0x2478c0u: goto label_2478c0;
        case 0x2478c4u: goto label_2478c4;
        case 0x2478c8u: goto label_2478c8;
        case 0x2478ccu: goto label_2478cc;
        case 0x2478d0u: goto label_2478d0;
        case 0x2478d4u: goto label_2478d4;
        case 0x2478d8u: goto label_2478d8;
        case 0x2478dcu: goto label_2478dc;
        case 0x2478e0u: goto label_2478e0;
        case 0x2478e4u: goto label_2478e4;
        case 0x2478e8u: goto label_2478e8;
        case 0x2478ecu: goto label_2478ec;
        case 0x2478f0u: goto label_2478f0;
        case 0x2478f4u: goto label_2478f4;
        case 0x2478f8u: goto label_2478f8;
        case 0x2478fcu: goto label_2478fc;
        case 0x247900u: goto label_247900;
        case 0x247904u: goto label_247904;
        case 0x247908u: goto label_247908;
        case 0x24790cu: goto label_24790c;
        case 0x247910u: goto label_247910;
        case 0x247914u: goto label_247914;
        case 0x247918u: goto label_247918;
        case 0x24791cu: goto label_24791c;
        case 0x247920u: goto label_247920;
        case 0x247924u: goto label_247924;
        case 0x247928u: goto label_247928;
        case 0x24792cu: goto label_24792c;
        case 0x247930u: goto label_247930;
        case 0x247934u: goto label_247934;
        case 0x247938u: goto label_247938;
        case 0x24793cu: goto label_24793c;
        case 0x247940u: goto label_247940;
        case 0x247944u: goto label_247944;
        case 0x247948u: goto label_247948;
        case 0x24794cu: goto label_24794c;
        case 0x247950u: goto label_247950;
        case 0x247954u: goto label_247954;
        case 0x247958u: goto label_247958;
        case 0x24795cu: goto label_24795c;
        case 0x247960u: goto label_247960;
        case 0x247964u: goto label_247964;
        case 0x247968u: goto label_247968;
        case 0x24796cu: goto label_24796c;
        case 0x247970u: goto label_247970;
        case 0x247974u: goto label_247974;
        case 0x247978u: goto label_247978;
        case 0x24797cu: goto label_24797c;
        case 0x247980u: goto label_247980;
        case 0x247984u: goto label_247984;
        case 0x247988u: goto label_247988;
        case 0x24798cu: goto label_24798c;
        case 0x247990u: goto label_247990;
        case 0x247994u: goto label_247994;
        case 0x247998u: goto label_247998;
        case 0x24799cu: goto label_24799c;
        case 0x2479a0u: goto label_2479a0;
        case 0x2479a4u: goto label_2479a4;
        case 0x2479a8u: goto label_2479a8;
        case 0x2479acu: goto label_2479ac;
        case 0x2479b0u: goto label_2479b0;
        case 0x2479b4u: goto label_2479b4;
        case 0x2479b8u: goto label_2479b8;
        case 0x2479bcu: goto label_2479bc;
        case 0x2479c0u: goto label_2479c0;
        case 0x2479c4u: goto label_2479c4;
        case 0x2479c8u: goto label_2479c8;
        case 0x2479ccu: goto label_2479cc;
        case 0x2479d0u: goto label_2479d0;
        case 0x2479d4u: goto label_2479d4;
        case 0x2479d8u: goto label_2479d8;
        case 0x2479dcu: goto label_2479dc;
        case 0x2479e0u: goto label_2479e0;
        case 0x2479e4u: goto label_2479e4;
        case 0x2479e8u: goto label_2479e8;
        case 0x2479ecu: goto label_2479ec;
        case 0x2479f0u: goto label_2479f0;
        case 0x2479f4u: goto label_2479f4;
        case 0x2479f8u: goto label_2479f8;
        case 0x2479fcu: goto label_2479fc;
        case 0x247a00u: goto label_247a00;
        case 0x247a04u: goto label_247a04;
        case 0x247a08u: goto label_247a08;
        case 0x247a0cu: goto label_247a0c;
        case 0x247a10u: goto label_247a10;
        case 0x247a14u: goto label_247a14;
        case 0x247a18u: goto label_247a18;
        case 0x247a1cu: goto label_247a1c;
        case 0x247a20u: goto label_247a20;
        case 0x247a24u: goto label_247a24;
        case 0x247a28u: goto label_247a28;
        case 0x247a2cu: goto label_247a2c;
        case 0x247a30u: goto label_247a30;
        case 0x247a34u: goto label_247a34;
        case 0x247a38u: goto label_247a38;
        case 0x247a3cu: goto label_247a3c;
        case 0x247a40u: goto label_247a40;
        case 0x247a44u: goto label_247a44;
        case 0x247a48u: goto label_247a48;
        case 0x247a4cu: goto label_247a4c;
        case 0x247a50u: goto label_247a50;
        case 0x247a54u: goto label_247a54;
        case 0x247a58u: goto label_247a58;
        case 0x247a5cu: goto label_247a5c;
        case 0x247a60u: goto label_247a60;
        case 0x247a64u: goto label_247a64;
        case 0x247a68u: goto label_247a68;
        case 0x247a6cu: goto label_247a6c;
        case 0x247a70u: goto label_247a70;
        case 0x247a74u: goto label_247a74;
        case 0x247a78u: goto label_247a78;
        case 0x247a7cu: goto label_247a7c;
        case 0x247a80u: goto label_247a80;
        case 0x247a84u: goto label_247a84;
        case 0x247a88u: goto label_247a88;
        case 0x247a8cu: goto label_247a8c;
        case 0x247a90u: goto label_247a90;
        case 0x247a94u: goto label_247a94;
        case 0x247a98u: goto label_247a98;
        case 0x247a9cu: goto label_247a9c;
        case 0x247aa0u: goto label_247aa0;
        case 0x247aa4u: goto label_247aa4;
        case 0x247aa8u: goto label_247aa8;
        case 0x247aacu: goto label_247aac;
        case 0x247ab0u: goto label_247ab0;
        case 0x247ab4u: goto label_247ab4;
        case 0x247ab8u: goto label_247ab8;
        case 0x247abcu: goto label_247abc;
        case 0x247ac0u: goto label_247ac0;
        case 0x247ac4u: goto label_247ac4;
        case 0x247ac8u: goto label_247ac8;
        case 0x247accu: goto label_247acc;
        case 0x247ad0u: goto label_247ad0;
        case 0x247ad4u: goto label_247ad4;
        case 0x247ad8u: goto label_247ad8;
        case 0x247adcu: goto label_247adc;
        case 0x247ae0u: goto label_247ae0;
        case 0x247ae4u: goto label_247ae4;
        case 0x247ae8u: goto label_247ae8;
        case 0x247aecu: goto label_247aec;
        case 0x247af0u: goto label_247af0;
        case 0x247af4u: goto label_247af4;
        case 0x247af8u: goto label_247af8;
        case 0x247afcu: goto label_247afc;
        case 0x247b00u: goto label_247b00;
        case 0x247b04u: goto label_247b04;
        case 0x247b08u: goto label_247b08;
        case 0x247b0cu: goto label_247b0c;
        case 0x247b10u: goto label_247b10;
        case 0x247b14u: goto label_247b14;
        case 0x247b18u: goto label_247b18;
        case 0x247b1cu: goto label_247b1c;
        case 0x247b20u: goto label_247b20;
        case 0x247b24u: goto label_247b24;
        case 0x247b28u: goto label_247b28;
        case 0x247b2cu: goto label_247b2c;
        case 0x247b30u: goto label_247b30;
        case 0x247b34u: goto label_247b34;
        case 0x247b38u: goto label_247b38;
        case 0x247b3cu: goto label_247b3c;
        case 0x247b40u: goto label_247b40;
        case 0x247b44u: goto label_247b44;
        case 0x247b48u: goto label_247b48;
        case 0x247b4cu: goto label_247b4c;
        default: break;
    }

    ctx->pc = 0x247898u;

label_247898:
    // 0x247898: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x247898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_24789c:
    // 0x24789c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x24789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
label_2478a0:
    // 0x2478a0: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2478a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_2478a4:
    // 0x2478a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2478a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2478a8:
    // 0x2478a8: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2478a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_2478ac:
    // 0x2478ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2478acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2478b0:
    // 0x2478b0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2478b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2478b4:
    // 0x2478b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2478b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2478b8:
    // 0x2478b8: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2478b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
label_2478bc:
    // 0x2478bc: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x2478bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
label_2478c0:
    // 0x2478c0: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2478c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
label_2478c4:
    // 0x2478c4: 0xc0f6a96  jal         func_3DAA58
label_2478c8:
    if (ctx->pc == 0x2478C8u) {
        ctx->pc = 0x2478C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478C4u;
        // 0x2478c8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2478CCu;
        goto label_2478cc;
    }
    ctx->pc = 0x2478C4u;
    SET_GPR_U32(ctx, 31, 0x2478CCu);
    ctx->pc = 0x2478C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2478C4u;
    // 0x2478c8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2478C4u, 0x2478CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478CCu;
label_2478cc:
    // 0x2478cc: 0xc0f6a96  jal         func_3DAA58
label_2478d0:
    if (ctx->pc == 0x2478D0u) {
        ctx->pc = 0x2478D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478CCu;
        // 0x2478d0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2478D4u;
        goto label_2478d4;
    }
    ctx->pc = 0x2478CCu;
    SET_GPR_U32(ctx, 31, 0x2478D4u);
    ctx->pc = 0x2478D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2478CCu;
    // 0x2478d0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2478CCu, 0x2478D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478D4u;
label_2478d4:
    // 0x2478d4: 0xc0f6a96  jal         func_3DAA58
label_2478d8:
    if (ctx->pc == 0x2478D8u) {
        ctx->pc = 0x2478D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478D4u;
        // 0x2478d8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2478DCu;
        goto label_2478dc;
    }
    ctx->pc = 0x2478D4u;
    SET_GPR_U32(ctx, 31, 0x2478DCu);
    ctx->pc = 0x2478D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2478D4u;
    // 0x2478d8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2478D4u, 0x2478DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478DCu;
label_2478dc:
    // 0x2478dc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2478dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_2478e0:
    // 0x2478e0: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x2478e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2478e4:
    // 0x2478e4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2478e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2478e8:
    // 0x2478e8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2478e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2478ec:
    // 0x2478ec: 0xe4540174  swc1        $f20, 0x174($v0)
    ctx->pc = 0x2478ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 372), bits); }
label_2478f0:
    // 0x2478f0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2478f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2478f4:
    // 0x2478f4: 0xe4400178  swc1        $f0, 0x178($v0)
    ctx->pc = 0x2478f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
label_2478f8:
    // 0x2478f8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2478f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2478fc:
    // 0x2478fc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2478fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_247900:
    // 0x247900: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x247900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_247904:
    // 0x247904: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x247904u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_247908:
    // 0x247908: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x247908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_24790c:
    // 0x24790c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x24790cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_247910:
    // 0x247910: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x247910u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_247914:
    // 0x247914: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x247914u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_247918:
    // 0x247918: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x247918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24791c:
    // 0x24791c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x24791cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_247920:
    // 0x247920: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x247920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_247924:
    // 0x247924: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x247924u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_247928:
    // 0x247928: 0x4a0003bf  vwaitq
    ctx->pc = 0x247928u;
    // VWAITQ (Q already resolved in this runtime)
label_24792c:
    // 0x24792c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x24792cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_247930:
    // 0x247930: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x247930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_247934:
    // 0x247934: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x247934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_247938:
    // 0x247938: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x247938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24793c:
    // 0x24793c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x24793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_247940:
    // 0x247940: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x247940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247944:
    // 0x247944: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x247944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_247948:
    // 0x247948: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x247948u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_24794c:
    // 0x24794c: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x24794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247950:
    // 0x247950: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x247950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_247954:
    // 0x247954: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x247954u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_247958:
    // 0x247958: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x247958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24795c:
    // 0x24795c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x24795cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_247960:
    // 0x247960: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x247960u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_247964:
    // 0x247964: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x247964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247968:
    // 0x247968: 0x0  nop
    ctx->pc = 0x247968u;
    // NOP
label_24796c:
    // 0x24796c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_247970:
    if (ctx->pc == 0x247970u) {
        ctx->pc = 0x247970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24796Cu;
        // 0x247970: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247974u;
        goto label_247974;
    }
    ctx->pc = 0x24796Cu;
    {
        const bool branch_taken_0x24796c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24796Cu;
        // 0x247970: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24796c) {
            ctx->pc = 0x2479A4u;
            goto label_2479a4;
        }
    }
    ctx->pc = 0x247974u;
label_247974:
    // 0x247974: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x247974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247978:
    // 0x247978: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x247978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24797c:
    // 0x24797c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x24797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247980:
    // 0x247980: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247980u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247984:
    // 0x247984: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x247984u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_247988:
    // 0x247988: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x247988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_24798c:
    // 0x24798c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x24798cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_247990:
    // 0x247990: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x247990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_247994:
    // 0x247994: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x247994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_247998:
    // 0x247998: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x247998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_24799c:
    // 0x24799c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x24799cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2479a0:
    // 0x2479a0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2479a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2479a4:
    // 0x2479a4: 0xc0f6a96  jal         func_3DAA58
label_2479a8:
    if (ctx->pc == 0x2479A8u) {
        ctx->pc = 0x2479A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479A4u;
        // 0x2479a8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2479ACu;
        goto label_2479ac;
    }
    ctx->pc = 0x2479A4u;
    SET_GPR_U32(ctx, 31, 0x2479ACu);
    ctx->pc = 0x2479A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479A4u;
    // 0x2479a8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2479A4u, 0x2479ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479ACu;
label_2479ac:
    // 0x2479ac: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2479acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2479b0:
    // 0x2479b0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2479b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2479b4:
    // 0x2479b4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2479b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_2479b8:
    // 0x2479b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2479b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2479bc:
    // 0x2479bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2479bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2479c0:
    // 0x2479c0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2479c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2479c4:
    // 0x2479c4: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x2479c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2479c8:
    // 0x2479c8: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2479c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2479cc:
    // 0x2479cc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2479ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2479d0:
    // 0x2479d0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2479d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2479d4:
    // 0x2479d4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2479d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2479d8:
    // 0x2479d8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2479d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2479dc:
    // 0x2479dc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2479dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2479e0:
    // 0x2479e0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2479e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2479e4:
    // 0x2479e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2479e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2479e8:
    // 0x2479e8: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x2479e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2479ec:
    // 0x2479ec: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2479ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2479f0:
    // 0x2479f0: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2479f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2479f4:
    // 0x2479f4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2479f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2479f8:
    // 0x2479f8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2479f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2479fc:
    // 0x2479fc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2479fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_247a00:
    // 0x247a00: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x247a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_247a04:
    // 0x247a04: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x247a04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_247a08:
    // 0x247a08: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x247a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_247a0c:
    // 0x247a0c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x247a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_247a10:
    // 0x247a10: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x247a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247a14:
    // 0x247a14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x247a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_247a18:
    // 0x247a18: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x247a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_247a1c:
    // 0x247a1c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x247a1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_247a20:
    // 0x247a20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x247a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_247a24:
    // 0x247a24: 0x0  nop
    ctx->pc = 0x247a24u;
    // NOP
label_247a28:
    // 0x247a28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x247a28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_247a2c:
    // 0x247a2c: 0xc0b1488  jal         func_2C5220
label_247a30:
    if (ctx->pc == 0x247A30u) {
        ctx->pc = 0x247A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A2Cu;
        // 0x247a30: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247A34u;
        goto label_247a34;
    }
    ctx->pc = 0x247A2Cu;
    SET_GPR_U32(ctx, 31, 0x247A34u);
    ctx->pc = 0x247A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A2Cu;
    // 0x247a30: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x247A2Cu, 0x247A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A34u;
label_247a34:
    // 0x247a34: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x247a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247a38:
    // 0x247a38: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x247a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247a3c:
    // 0x247a3c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x247a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_247a40:
    // 0x247a40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247a40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247a44:
    // 0x247a44: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x247a44u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_247a48:
    // 0x247a48: 0xe7b4005c  swc1        $f20, 0x5C($sp)
    ctx->pc = 0x247a48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_247a4c:
    // 0x247a4c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x247a4cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_247a50:
    // 0x247a50: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x247a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_247a54:
    // 0x247a54: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x247a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_247a58:
    // 0x247a58: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x247a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_247a5c:
    // 0x247a5c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x247a5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_247a60:
    // 0x247a60: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x247a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_247a64:
    // 0x247a64: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x247a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_247a68:
    // 0x247a68: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x247a68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_247a6c:
    // 0x247a6c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x247a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_247a70:
    // 0x247a70: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x247a70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_247a74:
    // 0x247a74: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x247a74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_247a78:
    // 0x247a78: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x247a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_247a7c:
    // 0x247a7c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x247a7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_247a80:
    // 0x247a80: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x247a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_247a84:
    // 0x247a84: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x247a84u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_247a88:
    // 0x247a88: 0x4a0003bf  vwaitq
    ctx->pc = 0x247a88u;
    // VWAITQ (Q already resolved in this runtime)
label_247a8c:
    // 0x247a8c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x247a8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_247a90:
    // 0x247a90: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x247a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_247a94:
    // 0x247a94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_247a98:
    // 0x247a98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247a9c:
    // 0x247a9c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x247a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_247aa0:
    // 0x247aa0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x247aa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_247aa4:
    // 0x247aa4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x247aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_247aa8:
    // 0x247aa8: 0xe7b4005c  swc1        $f20, 0x5C($sp)
    ctx->pc = 0x247aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_247aac:
    // 0x247aac: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x247aacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_247ab0:
    // 0x247ab0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x247ab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_247ab4:
    // 0x247ab4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x247ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_247ab8:
    // 0x247ab8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x247ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_247abc:
    // 0x247abc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x247abcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_247ac0:
    // 0x247ac0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x247ac0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_247ac4:
    // 0x247ac4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x247ac4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_247ac8:
    // 0x247ac8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x247ac8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_247acc:
    // 0x247acc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x247accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_247ad0:
    // 0x247ad0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x247ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_247ad4:
    // 0x247ad4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x247ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_247ad8:
    // 0x247ad8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x247ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_247adc:
    // 0x247adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x247adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_247ae0:
    // 0x247ae0: 0xc44c96ac  lwc1        $f12, -0x6954($v0)
    ctx->pc = 0x247ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_247ae4:
    // 0x247ae4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x247ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_247ae8:
    // 0x247ae8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247aec:
    // 0x247aec: 0xc08e23a  jal         func_2388E8
label_247af0:
    if (ctx->pc == 0x247AF0u) {
        ctx->pc = 0x247AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247AECu;
        // 0x247af0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247AF4u;
        goto label_247af4;
    }
    ctx->pc = 0x247AECu;
    SET_GPR_U32(ctx, 31, 0x247AF4u);
    ctx->pc = 0x247AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247AECu;
    // 0x247af0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x247AECu, 0x247AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247AF4u;
label_247af4:
    // 0x247af4: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x247af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_247af8:
    // 0x247af8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x247af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_247afc:
    // 0x247afc: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x247afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_247b00:
    // 0x247b00: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x247b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_247b04:
    // 0x247b04: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x247b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_247b08:
    // 0x247b08: 0x40f809  jalr        $v0
label_247b0c:
    if (ctx->pc == 0x247B0Cu) {
        ctx->pc = 0x247B10u;
        goto label_247b10;
    }
    ctx->pc = 0x247B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247B10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247B08u, 0x247B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247B10u;
label_247b10:
    // 0x247b10: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_247b14:
    if (ctx->pc == 0x247B14u) {
        ctx->pc = 0x247B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B10u;
        // 0x247b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247B18u;
        goto label_247b18;
    }
    ctx->pc = 0x247B10u;
    {
        const bool branch_taken_0x247b10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x247B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B10u;
        // 0x247b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247b10) {
            ctx->pc = 0x247B20u;
            goto label_247b20;
        }
    }
    ctx->pc = 0x247B18u;
label_247b18:
    // 0x247b18: 0xc08e3b2  jal         func_238EC8
label_247b1c:
    if (ctx->pc == 0x247B1Cu) {
        ctx->pc = 0x247B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B18u;
        // 0x247b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247B20u;
        goto label_247b20;
    }
    ctx->pc = 0x247B18u;
    SET_GPR_U32(ctx, 31, 0x247B20u);
    ctx->pc = 0x247B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247B18u;
    // 0x247b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x247B18u, 0x247B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B20u;
label_247b20:
    // 0x247b20: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x247b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_247b24:
    // 0x247b24: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x247b24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_247b28:
    // 0x247b28: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x247b28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_247b2c:
    // 0x247b2c: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x247b2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_247b30:
    // 0x247b30: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x247b30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_247b34:
    // 0x247b34: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x247b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_247b38:
    // 0x247b38: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x247b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_247b3c:
    // 0x247b3c: 0x3e00008  jr          $ra
label_247b40:
    if (ctx->pc == 0x247B40u) {
        ctx->pc = 0x247B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B3Cu;
        // 0x247b40: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247B44u;
        goto label_247b44;
    }
    ctx->pc = 0x247B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B3Cu;
        // 0x247b40: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247B44u;
label_247b44:
    // 0x247b44: 0x0  nop
    ctx->pc = 0x247b44u;
    // NOP
label_247b48:
    // 0x247b48: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x247b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_247b4c:
    // 0x247b4c: 0x0  nop
    ctx->pc = 0x247b4cu;
    // NOP
    ctx->pc = 0x247b50u;
}
