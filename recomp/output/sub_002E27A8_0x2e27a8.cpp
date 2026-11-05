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

// Function: sub_002E27A8
// Address: 0x2e27a8 - 0x2e2910
void sub_002E27A8_0x2e27a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E27A8_0x2e27a8");
#endif

    switch (ctx->pc) {
        case 0x2e27c8u: goto label_2e27c8;
        case 0x2e27d8u: goto label_2e27d8;
        case 0x2e2808u: goto label_2e2808;
        case 0x2e2828u: goto label_2e2828;
        default: break;
    }

    ctx->pc = 0x2e27a8u;

    // 0x2e27a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e27a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e27ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e27acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e27b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e27b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e27b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e27b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e27b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e27bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e27c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E27C0u;
    SET_GPR_U32(ctx, 31, 0x2E27C8u);
    ctx->pc = 0x2E27C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E27C0u;
    // 0x2e27c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E27C0u, 0x2E27C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E27C8u;
label_2e27c8:
    // 0x2e27c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e27c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27cc: 0x26040990  addiu       $a0, $s0, 0x990
    ctx->pc = 0x2e27ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2448));
    // 0x2e27d0: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x2e27d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e27d4: 0x0  nop
    ctx->pc = 0x2e27d4u;
    // NOP
label_2e27d8:
    // 0x2e27d8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e27d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e27dc: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2e27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e27e0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2e27e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2e27e4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2e27e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2e27e8: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E27E8u;
    {
        const bool branch_taken_0x2e27e8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2E27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27E8u;
        // 0x2e27ec: 0x43300b  movn        $a2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27e8) {
            ctx->pc = 0x2E27D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e27d8;
        }
    }
    ctx->pc = 0x2E27F0u;
    // 0x2e27f0: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2e27f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e27f4: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E27F4u;
    {
        const bool branch_taken_0x2e27f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E27F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27F4u;
        // 0x2e27f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27f4) {
            ctx->pc = 0x2E28FCu;
            goto label_2e28fc;
        }
    }
    ctx->pc = 0x2E27FCu;
    // 0x2e27fc: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x2e27fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2e2800: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2800u;
    {
        const bool branch_taken_0x2e2800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2800) {
            ctx->pc = 0x2E2810u;
            goto label_2e2810;
        }
    }
    ctx->pc = 0x2E2808u;
label_2e2808:
    // 0x2e2808: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2E2808u;
    {
        const bool branch_taken_0x2e2808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2808u;
        // 0x2e280c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2808) {
            ctx->pc = 0x2E28FCu;
            goto label_2e28fc;
        }
    }
    ctx->pc = 0x2E2810u;
label_2e2810:
    // 0x2e2810: 0x18c00039  blez        $a2, . + 4 + (0x39 << 2)
    ctx->pc = 0x2E2810u;
    {
        const bool branch_taken_0x2e2810 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2E2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2810u;
        // 0x2e2814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2810) {
            ctx->pc = 0x2E28F8u;
            goto label_2e28f8;
        }
    }
    ctx->pc = 0x2E2818u;
    // 0x2e2818: 0x26070970  addiu       $a3, $s0, 0x970
    ctx->pc = 0x2e2818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2416));
    // 0x2e281c: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x2e281cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2e2820: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e2820u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2824: 0x8e040970  lw          $a0, 0x970($s0)
    ctx->pc = 0x2e2824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2416)));
label_2e2828:
    // 0x2e2828: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2e2828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e282c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2e282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e2830: 0x28820032  slti        $v0, $a0, 0x32
    ctx->pc = 0x2e2830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2e2834: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2834u;
    {
        const bool branch_taken_0x2e2834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2834u;
        // 0x2e2838: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2834) {
            ctx->pc = 0x2E2850u;
            goto label_2e2850;
        }
    }
    ctx->pc = 0x2E283Cu;
    // 0x2e283c: 0x89001a  div         $zero, $a0, $t1
    ctx->pc = 0x2e283cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e2840: 0x512a0001  beql        $t1, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2840u;
    {
        const bool branch_taken_0x2e2840 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x2e2840) {
            ctx->pc = 0x2E2844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2840u;
            // 0x2e2844: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2848u;
            goto label_2e2848;
        }
    }
    ctx->pc = 0x2E2848u;
label_2e2848:
    // 0x2e2848: 0x1010  mfhi        $v0
    ctx->pc = 0x2e2848u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e284c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2850:
    // 0x2e2850: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e2850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2e2854: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x2e2854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2e2858: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x2e2858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e285c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E285Cu;
    {
        const bool branch_taken_0x2e285c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E285Cu;
        // 0x2e2860: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e285c) {
            ctx->pc = 0x2E286Cu;
            goto label_2e286c;
        }
    }
    ctx->pc = 0x2E2864u;
    // 0x2e2864: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2864u;
    {
        const bool branch_taken_0x2e2864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2864u;
        // 0x2e2868: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2864) {
            ctx->pc = 0x2E2870u;
            goto label_2e2870;
        }
    }
    ctx->pc = 0x2E286Cu;
label_2e286c:
    // 0x2e286c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e286cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2870:
    // 0x2e2870: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2870u;
    {
        const bool branch_taken_0x2e2870 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2870u;
        // 0x2e2874: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2870) {
            ctx->pc = 0x2E2888u;
            goto label_2e2888;
        }
    }
    ctx->pc = 0x2E2878u;
    // 0x2e2878: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e2878u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e287c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e2880: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E2880u;
    {
        const bool branch_taken_0x2e2880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2880u;
        // 0x2e2884: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2880) {
            ctx->pc = 0x2E28ECu;
            goto label_2e28ec;
        }
    }
    ctx->pc = 0x2E2888u;
label_2e2888:
    // 0x2e2888: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2e2888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e288c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e288cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e2890: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e2890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e2894: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e2894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2898: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e2898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e289c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e289cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e28a0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e28a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e28a4: 0x0  nop
    ctx->pc = 0x2e28a4u;
    // NOP
    // 0x2e28a8: 0x4501ffd7  bc1t        . + 4 + (-0x29 << 2)
    ctx->pc = 0x2E28A8u;
    {
        const bool branch_taken_0x2e28a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28A8u;
        // 0x2e28ac: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28a8) {
            ctx->pc = 0x2E2808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2808;
        }
    }
    ctx->pc = 0x2E28B0u;
    // 0x2e28b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e28b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e28b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e28b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e28b8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e28b8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e28bc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e28bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e28c0: 0x0  nop
    ctx->pc = 0x2e28c0u;
    // NOP
    // 0x2e28c4: 0x4501ffd0  bc1t        . + 4 + (-0x30 << 2)
    ctx->pc = 0x2E28C4u;
    {
        const bool branch_taken_0x2e28c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28C4u;
        // 0x2e28c8: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28c4) {
            ctx->pc = 0x2E2808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2808;
        }
    }
    ctx->pc = 0x2E28CCu;
    // 0x2e28cc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2e28ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e28d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e28d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e28d4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e28d4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e28d8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e28d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e28dc: 0x0  nop
    ctx->pc = 0x2e28dcu;
    // NOP
    // 0x2e28e0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E28E0u;
    {
        const bool branch_taken_0x2e28e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28E0u;
        // 0x2e28e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28e0) {
            ctx->pc = 0x2E28FCu;
            goto label_2e28fc;
        }
    }
    ctx->pc = 0x2E28E8u;
    // 0x2e28e8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2e28e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2e28ec:
    // 0x2e28ec: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2e28ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2e28f0: 0x5440ffcd  bnel        $v0, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2E28F0u;
    {
        const bool branch_taken_0x2e28f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e28f0) {
            ctx->pc = 0x2E28F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E28F0u;
            // 0x2e28f4: 0x8e040970  lw          $a0, 0x970($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2828;
        }
    }
    ctx->pc = 0x2E28F8u;
label_2e28f8:
    // 0x2e28f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e28fc:
    // 0x2e28fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e28fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2900: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e2900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2904: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e2904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2908: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2908u;
        // 0x2e290c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2910u;
}
