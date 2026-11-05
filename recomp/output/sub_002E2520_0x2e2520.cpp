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

// Function: sub_002E2520
// Address: 0x2e2520 - 0x2e2680
void sub_002E2520_0x2e2520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2520_0x2e2520");
#endif

    switch (ctx->pc) {
        case 0x2e2548u: goto label_2e2548;
        case 0x2e2578u: goto label_2e2578;
        default: break;
    }

    ctx->pc = 0x2e2520u;

    // 0x2e2520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2524: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2e2524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2528: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e2528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e252c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e252cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2530: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2e2530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2e2534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e2534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2538: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e2538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e253c: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x2e253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2e2540: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2e2540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2e2544: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x2e2544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2e2548:
    // 0x2e2548: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e2548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e254c: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x2e254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e2550: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2e2550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2e2554: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e2554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e2558: 0x4c1fffb  bgez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E2558u;
    {
        const bool branch_taken_0x2e2558 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2E255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2558u;
        // 0x2e255c: 0x43400b  movn        $t0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2558) {
            ctx->pc = 0x2E2548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2548;
        }
    }
    ctx->pc = 0x2E2560u;
    // 0x2e2560: 0x19000026  blez        $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2E2560u;
    {
        const bool branch_taken_0x2e2560 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2E2564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2560u;
        // 0x2e2564: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2560) {
            ctx->pc = 0x2E25FCu;
            goto label_2e25fc;
        }
    }
    ctx->pc = 0x2E2568u;
    // 0x2e2568: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x2e2568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2e256c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2e256cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2570: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x2e2570u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e2574: 0x0  nop
    ctx->pc = 0x2e2574u;
    // NOP
label_2e2578:
    // 0x2e2578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e2578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e257c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e257cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2580: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2e2580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2584: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e2584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e2588: 0x28620032  slti        $v0, $v1, 0x32
    ctx->pc = 0x2e2588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2e258c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E258Cu;
    {
        const bool branch_taken_0x2e258c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E258Cu;
        // 0x2e2590: 0x6b2018  mult        $a0, $v1, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e258c) {
            ctx->pc = 0x2E25ACu;
            goto label_2e25ac;
        }
    }
    ctx->pc = 0x2E2594u;
    // 0x2e2594: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x2e2594u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e2598: 0x512c0001  beql        $t1, $t4, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2598u;
    {
        const bool branch_taken_0x2e2598 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 12));
        if (branch_taken_0x2e2598) {
            ctx->pc = 0x2E259Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2598u;
            // 0x2e259c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E25A0u;
            goto label_2e25a0;
        }
    }
    ctx->pc = 0x2E25A0u;
label_2e25a0:
    // 0x2e25a0: 0x1010  mfhi        $v0
    ctx->pc = 0x2e25a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e25a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e25a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e25a8: 0x6b2018  mult        $a0, $v1, $t3
    ctx->pc = 0x2e25a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2e25ac:
    // 0x2e25ac: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2e25acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e25b0: 0x90430030  lbu         $v1, 0x30($v0)
    ctx->pc = 0x2e25b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2e25b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E25B4u;
    {
        const bool branch_taken_0x2e25b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25B4u;
        // 0x2e25b8: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25b4) {
            ctx->pc = 0x2E25C4u;
            goto label_2e25c4;
        }
    }
    ctx->pc = 0x2E25BCu;
    // 0x2e25bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E25BCu;
    {
        const bool branch_taken_0x2e25bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E25C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25BCu;
        // 0x2e25c0: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25bc) {
            ctx->pc = 0x2E25C8u;
            goto label_2e25c8;
        }
    }
    ctx->pc = 0x2E25C4u;
label_2e25c4:
    // 0x2e25c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e25c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e25c8:
    // 0x2e25c8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2e25c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e25cc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2e25ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e25d0: 0x0  nop
    ctx->pc = 0x2e25d0u;
    // NOP
    // 0x2e25d4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E25D4u;
    {
        const bool branch_taken_0x2e25d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e25d4) {
            ctx->pc = 0x2E25FCu;
            goto label_2e25fc;
        }
    }
    ctx->pc = 0x2E25DCu;
    // 0x2e25dc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e25dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e25e0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e25e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e25e4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e25e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e25e8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e25e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e25ec: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2e25ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e25f0: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x2e25f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2e25f4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2E25F4u;
    {
        const bool branch_taken_0x2e25f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25F4u;
        // 0x2e25f8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25f4) {
            ctx->pc = 0x2E2578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2578;
        }
    }
    ctx->pc = 0x2E25FCu;
label_2e25fc:
    // 0x2e25fc: 0x1540000a  bnez        $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x2E25FCu;
    {
        const bool branch_taken_0x2e25fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25FCu;
        // 0x2e2600: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25fc) {
            ctx->pc = 0x2E2628u;
            goto label_2e2628;
        }
    }
    ctx->pc = 0x2E2604u;
    // 0x2e2604: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2e2604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2608: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e2608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e260c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2e260cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2610: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2e2610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2614: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2e2614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2e2618: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2e2618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2e261c: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x2e261cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2e2620: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E2620u;
    {
        const bool branch_taken_0x2e2620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2620u;
        // 0x2e2624: 0xe4e3000c  swc1        $f3, 0xC($a3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2620) {
            ctx->pc = 0x2E2674u;
            goto label_2e2674;
        }
    }
    ctx->pc = 0x2E2628u;
label_2e2628:
    // 0x2e2628: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x2e2628u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e262c: 0x0  nop
    ctx->pc = 0x2e262cu;
    // NOP
    // 0x2e2630: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e2630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e2634: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e263c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2e263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2640: 0x0  nop
    ctx->pc = 0x2e2640u;
    // NOP
    // 0x2e2644: 0x0  nop
    ctx->pc = 0x2e2644u;
    // NOP
    // 0x2e2648: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2e2648u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2e264c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2e264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e2650: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2e2650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2654: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2e2654u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e2658: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e2658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e265c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2e265cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e2660: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e2660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e2664: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x2e2664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2e2668: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x2e2668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2e266c: 0xe4e30004  swc1        $f3, 0x4($a3)
    ctx->pc = 0x2e266cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2e2670: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2e2670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_2e2674:
    // 0x2e2674: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2e2674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2678: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2678u;
        // 0x2e267c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2680u;
}
