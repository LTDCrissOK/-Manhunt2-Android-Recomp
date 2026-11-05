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

// Function: sub_001C2920
// Address: 0x1c2920 - 0x1c2a88
void sub_001C2920_0x1c2920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2920_0x1c2920");
#endif

    switch (ctx->pc) {
        case 0x1c2960u: goto label_1c2960;
        case 0x1c2a64u: goto label_1c2a64;
        default: break;
    }

    ctx->pc = 0x1c2920u;

    // 0x1c2920: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c2920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c2924: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c2924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c2928: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c2928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c292c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c292cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2930: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c2930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c2934: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c2934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2938: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c2938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c293c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1c293cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2940: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c2940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c2944: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c2944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2948: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c2948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c294c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c294cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2950: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c2950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c2954: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c2954u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c2958: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C2958u;
    SET_GPR_U32(ctx, 31, 0x1C2960u);
    ctx->pc = 0x1C295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2958u;
    // 0x1c295c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C2958u, 0x1C2960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2960u;
label_1c2960:
    // 0x1c2960: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c2960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c2964: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C2964u;
    {
        const bool branch_taken_0x1c2964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2964) {
            ctx->pc = 0x1C2A2Cu;
            goto label_1c2a2c;
        }
    }
    ctx->pc = 0x1C296Cu;
    // 0x1c296c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1c296cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c2970: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c2970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c2974: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2978: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1c2978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1c297c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c297cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2980: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2984: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c2984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c2988: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1c2988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c298c: 0xc461c61c  lwc1        $f1, -0x39E4($v1)
    ctx->pc = 0x1c298cu;
    { uint32_t bits = FAST_READ32(0x45C61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2990: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1c2990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1c2994: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c2994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2998: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c2998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c299c: 0x8ca6036c  lw          $a2, 0x36C($a1)
    ctx->pc = 0x1c299cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x1c29a0: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x1c29a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1c29a4: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C29A4u;
    {
        const bool branch_taken_0x1c29a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29A4u;
        // 0x1c29a8: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29a4) {
            ctx->pc = 0x1C29D0u;
            goto label_1c29d0;
        }
    }
    ctx->pc = 0x1C29ACu;
    // 0x1c29ac: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c29acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c29b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c29b4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1c29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1c29b8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c29b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c29bc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c29bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c29c0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c29c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c29c4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c29c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c29c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C29C8u;
    {
        const bool branch_taken_0x1c29c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29C8u;
        // 0x1c29cc: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29c8) {
            ctx->pc = 0x1C29FCu;
            goto label_1c29fc;
        }
    }
    ctx->pc = 0x1C29D0u;
label_1c29d0:
    // 0x1c29d0: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x1c29d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c29d4: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C29D4u;
    {
        const bool branch_taken_0x1c29d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c29d4) {
            ctx->pc = 0x1C2A34u;
            goto label_1c2a34;
        }
    }
    ctx->pc = 0x1C29DCu;
    // 0x1c29dc: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c29e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c29e4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1c29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1c29e8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c29e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c29ec: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c29ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c29f0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c29f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c29f4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c29f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c29f8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1c29f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c29fc:
    // 0x1c29fc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c2a00: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1c2a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2a04: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1c2a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2a08: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1c2a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c2a0c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1c2a0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c2a10: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c2a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c2a14: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c2a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c2a18: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1c2a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c2a1c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c2a1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2a20: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2a24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2A24u;
    {
        const bool branch_taken_0x1c2a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a24) {
            ctx->pc = 0x1C2A34u;
            goto label_1c2a34;
        }
    }
    ctx->pc = 0x1C2A2Cu;
label_1c2a2c:
    // 0x1c2a2c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c2a2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2a30: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c2a34:
    // 0x1c2a34: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2A34u;
    {
        const bool branch_taken_0x1c2a34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a34) {
            ctx->pc = 0x1C2A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2A34u;
            // 0x1c2a38: 0x8e6204bc  lw          $v0, 0x4BC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2A48u;
            goto label_1c2a48;
        }
    }
    ctx->pc = 0x1C2A3Cu;
    // 0x1c2a3c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1c2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1c2a40: 0x2451f140  addiu       $s1, $v0, -0xEC0
    ctx->pc = 0x1c2a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x1c2a44: 0x8e6204bc  lw          $v0, 0x4BC($s3)
    ctx->pc = 0x1c2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1212)));
label_1c2a48:
    // 0x1c2a48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c2a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a4c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1c2a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c2a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c2a54: 0x8c440ffc  lw          $a0, 0xFFC($v0)
    ctx->pc = 0x1c2a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
    // 0x1c2a58: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c2a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a5c: 0xc07184e  jal         func_1C6138
    ctx->pc = 0x1C2A5Cu;
    SET_GPR_U32(ctx, 31, 0x1C2A64u);
    ctx->pc = 0x1C2A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A5Cu;
    // 0x1c2a60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6138u, 0x1C2A5Cu, 0x1C2A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A64u;
label_1c2a64:
    // 0x1c2a64: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c2a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2a68: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c2a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2a6c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c2a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2a70: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c2a70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c2a74: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c2a74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2a78: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c2a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c2a7c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c2a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c2a80: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A80u;
        // 0x1c2a84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2A88u;
}
