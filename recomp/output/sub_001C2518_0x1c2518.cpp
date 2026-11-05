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

// Function: sub_001C2518
// Address: 0x1c2518 - 0x1c2680
void sub_001C2518_0x1c2518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2518_0x1c2518");
#endif

    switch (ctx->pc) {
        case 0x1c2558u: goto label_1c2558;
        case 0x1c265cu: goto label_1c265c;
        default: break;
    }

    ctx->pc = 0x1c2518u;

    // 0x1c2518: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c2518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c251c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c251cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c2520: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c2520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c2524: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c2524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2528: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c2528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c252c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c252cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2530: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c2530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c2534: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1c2534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2538: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c2538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c253c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c253cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2540: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c2540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c2544: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c2544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2548: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c2548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c254c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c254cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c2550: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C2550u;
    SET_GPR_U32(ctx, 31, 0x1C2558u);
    ctx->pc = 0x1C2554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2550u;
    // 0x1c2554: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C2550u, 0x1C2558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2558u;
label_1c2558:
    // 0x1c2558: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c2558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c255c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C255Cu;
    {
        const bool branch_taken_0x1c255c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c255c) {
            ctx->pc = 0x1C2624u;
            goto label_1c2624;
        }
    }
    ctx->pc = 0x1C2564u;
    // 0x1c2564: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1c2564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c2568: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c2568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c256c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2570: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1c2570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1c2574: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c2574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2578: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c257c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c257cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c2580: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1c2580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2584: 0xc461c61c  lwc1        $f1, -0x39E4($v1)
    ctx->pc = 0x1c2584u;
    { uint32_t bits = FAST_READ32(0x45C61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2588: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1c2588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1c258c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c258cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2590: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c2590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c2594: 0x8ca6036c  lw          $a2, 0x36C($a1)
    ctx->pc = 0x1c2594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x1c2598: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x1c2598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1c259c: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C259Cu;
    {
        const bool branch_taken_0x1c259c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C259Cu;
        // 0x1c25a0: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c259c) {
            ctx->pc = 0x1C25C8u;
            goto label_1c25c8;
        }
    }
    ctx->pc = 0x1C25A4u;
    // 0x1c25a4: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c25a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c25a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c25a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c25ac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1c25acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1c25b0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c25b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c25b4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c25b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c25b8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c25b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c25bc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c25bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c25c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C25C0u;
    {
        const bool branch_taken_0x1c25c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25C0u;
        // 0x1c25c4: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25c0) {
            ctx->pc = 0x1C25F4u;
            goto label_1c25f4;
        }
    }
    ctx->pc = 0x1C25C8u;
label_1c25c8:
    // 0x1c25c8: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x1c25c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c25cc: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C25CCu;
    {
        const bool branch_taken_0x1c25cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c25cc) {
            ctx->pc = 0x1C262Cu;
            goto label_1c262c;
        }
    }
    ctx->pc = 0x1C25D4u;
    // 0x1c25d4: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c25d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c25dc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1c25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1c25e0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c25e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c25e4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c25e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c25e8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c25e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c25ec: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c25ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c25f0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1c25f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c25f4:
    // 0x1c25f4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c25f8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1c25f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c25fc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1c25fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2600: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1c2600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c2604: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1c2604u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c2608: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c2608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c260c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c260cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c2610: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1c2610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c2614: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c2614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2618: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c261c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C261Cu;
    {
        const bool branch_taken_0x1c261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c261c) {
            ctx->pc = 0x1C262Cu;
            goto label_1c262c;
        }
    }
    ctx->pc = 0x1C2624u;
label_1c2624:
    // 0x1c2624: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c2624u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2628: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c262c:
    // 0x1c262c: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C262Cu;
    {
        const bool branch_taken_0x1c262c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c262c) {
            ctx->pc = 0x1C2630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C262Cu;
            // 0x1c2630: 0x8e6204bc  lw          $v0, 0x4BC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2640u;
            goto label_1c2640;
        }
    }
    ctx->pc = 0x1C2634u;
    // 0x1c2634: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1c2634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1c2638: 0x2451f140  addiu       $s1, $v0, -0xEC0
    ctx->pc = 0x1c2638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x1c263c: 0x8e6204bc  lw          $v0, 0x4BC($s3)
    ctx->pc = 0x1c263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1212)));
label_1c2640:
    // 0x1c2640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c2640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2644: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1c2644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2648: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c2648u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c264c: 0x8c440ffc  lw          $a0, 0xFFC($v0)
    ctx->pc = 0x1c264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
    // 0x1c2650: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c2650u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2654: 0xc07176e  jal         func_1C5DB8
    ctx->pc = 0x1C2654u;
    SET_GPR_U32(ctx, 31, 0x1C265Cu);
    ctx->pc = 0x1C2658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2654u;
    // 0x1c2658: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5DB8u, 0x1C2654u, 0x1C265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C265Cu;
label_1c265c:
    // 0x1c265c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c265cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2660: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c2660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2664: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c2664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2668: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c2668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c266c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c266cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2670: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c2670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c2674: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c2674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c2678: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2678u;
        // 0x1c267c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2680u;
}
