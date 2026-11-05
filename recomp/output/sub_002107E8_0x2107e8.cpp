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

// Function: sub_002107E8
// Address: 0x2107e8 - 0x210a20
void sub_002107E8_0x2107e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002107E8_0x2107e8");
#endif

    switch (ctx->pc) {
        case 0x21081cu: goto label_21081c;
        case 0x21083cu: goto label_21083c;
        case 0x21087cu: goto label_21087c;
        case 0x2108a8u: goto label_2108a8;
        case 0x2108c4u: goto label_2108c4;
        case 0x2108e4u: goto label_2108e4;
        case 0x2108f4u: goto label_2108f4;
        case 0x210908u: goto label_210908;
        case 0x210918u: goto label_210918;
        case 0x210950u: goto label_210950;
        case 0x210960u: goto label_210960;
        case 0x210984u: goto label_210984;
        case 0x210994u: goto label_210994;
        case 0x2109ccu: goto label_2109cc;
        default: break;
    }

    ctx->pc = 0x2107e8u;

    // 0x2107e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2107e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2107ec: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2107ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2107f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2107f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2107f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2107f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2107f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2107f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2107fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2107fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210800: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x210800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x210804: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x210804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210808: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x210808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21080c: 0xc62c00d0  lwc1        $f12, 0xD0($s1)
    ctx->pc = 0x21080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210810: 0x8e3000b8  lw          $s0, 0xB8($s1)
    ctx->pc = 0x210810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x210814: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x210814u;
    SET_GPR_U32(ctx, 31, 0x21081Cu);
    ctx->pc = 0x210818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210814u;
    // 0x210818: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x210814u, 0x21081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21081Cu;
label_21081c:
    // 0x21081c: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x21081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x210820: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x210820u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x210824: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x210824u;
    {
        const bool branch_taken_0x210824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x210824) {
            ctx->pc = 0x210828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210824u;
            // 0x210828: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21082Cu;
            goto label_21082c;
        }
    }
    ctx->pc = 0x21082Cu;
label_21082c:
    // 0x21082c: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x21082cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x210830: 0x8012  mflo        $s0
    ctx->pc = 0x210830u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x210834: 0xc0878a4  jal         func_21E290
    ctx->pc = 0x210834u;
    SET_GPR_U32(ctx, 31, 0x21083Cu);
    ctx->pc = 0x210838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210834u;
    // 0x210838: 0x8e25013c  lw          $a1, 0x13C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E290u, 0x210834u, 0x21083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21083Cu;
label_21083c:
    // 0x21083c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21083cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210840: 0x92230134  lbu         $v1, 0x134($s1)
    ctx->pc = 0x210840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x210844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210848: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x210848u;
    {
        const bool branch_taken_0x210848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210848u;
        // 0x21084c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210848) {
            ctx->pc = 0x210A04u;
            goto label_210a04;
        }
    }
    ctx->pc = 0x210850u;
    // 0x210850: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x210850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x210854: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x210854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x210858: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x210858u;
    {
        const bool branch_taken_0x210858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210858u;
        // 0x21085c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210858) {
            ctx->pc = 0x210A04u;
            goto label_210a04;
        }
    }
    ctx->pc = 0x210860u;
    // 0x210860: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x210860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x210864: 0x30420401  andi        $v0, $v0, 0x401
    ctx->pc = 0x210864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1025);
    // 0x210868: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x210868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
    // 0x21086c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21086Cu;
    {
        const bool branch_taken_0x21086c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21086c) {
            ctx->pc = 0x2108C4u;
            goto label_2108c4;
        }
    }
    ctx->pc = 0x210874u;
    // 0x210874: 0xc09a0a6  jal         func_268298
    ctx->pc = 0x210874u;
    SET_GPR_U32(ctx, 31, 0x21087Cu);
    ctx->pc = 0x210878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210874u;
    // 0x210878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268298u, 0x210874u, 0x21087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21087Cu;
label_21087c:
    // 0x21087c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x21087cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x210880: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x210880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x210884: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x210884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x210888: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x210888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x21088c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21088cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210890: 0x24e71468  addiu       $a3, $a3, 0x1468
    ctx->pc = 0x210890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5224));
    // 0x210894: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x210894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x210898: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x210898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21089c: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x21089cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x2108a0: 0xc07f672  jal         func_1FD9C8
    ctx->pc = 0x2108A0u;
    SET_GPR_U32(ctx, 31, 0x2108A8u);
    ctx->pc = 0x2108A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2108A0u;
    // 0x2108a4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9C8u, 0x2108A0u, 0x2108A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108A8u;
label_2108a8:
    // 0x2108a8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2108a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2108ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2108acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2108b0: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2108b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x2108b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2108b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2108b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108bc: 0xc046642  jal         func_119908
    ctx->pc = 0x2108BCu;
    SET_GPR_U32(ctx, 31, 0x2108C4u);
    ctx->pc = 0x2108C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2108BCu;
    // 0x2108c0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x2108BCu, 0x2108C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108C4u;
label_2108c4:
    // 0x2108c4: 0x1640004d  bnez        $s2, . + 4 + (0x4D << 2)
    ctx->pc = 0x2108C4u;
    {
        const bool branch_taken_0x2108c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2108C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108C4u;
        // 0x2108c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108c4) {
            ctx->pc = 0x2109FCu;
            goto label_2109fc;
        }
    }
    ctx->pc = 0x2108CCu;
    // 0x2108cc: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2108ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2108d0: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2108d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2108d4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2108D4u;
    {
        const bool branch_taken_0x2108d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2108D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108D4u;
        // 0x2108d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108d4) {
            ctx->pc = 0x210964u;
            goto label_210964;
        }
    }
    ctx->pc = 0x2108DCu;
    // 0x2108dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2108DCu;
    SET_GPR_U32(ctx, 31, 0x2108E4u);
    ctx->pc = 0x2108E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2108DCu;
    // 0x2108e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2108DCu, 0x2108E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108E4u;
label_2108e4:
    // 0x2108e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2108e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2108e8: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2108e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2108ec: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x2108ECu;
    SET_GPR_U32(ctx, 31, 0x2108F4u);
    ctx->pc = 0x2108F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2108ECu;
    // 0x2108f0: 0x24a51410  addiu       $a1, $a1, 0x1410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x2108ECu, 0x2108F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108F4u;
label_2108f4:
    // 0x2108f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2108f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108f8: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2108F8u;
    {
        const bool branch_taken_0x2108f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2108f8) {
            ctx->pc = 0x2108FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2108F8u;
            // 0x2108fc: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210920u;
            goto label_210920;
        }
    }
    ctx->pc = 0x210900u;
    // 0x210900: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x210900u;
    SET_GPR_U32(ctx, 31, 0x210908u);
    ctx->pc = 0x210904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210900u;
    // 0x210904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x210900u, 0x210908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210908u;
label_210908:
    // 0x210908: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x210908u;
    {
        const bool branch_taken_0x210908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210908u;
        // 0x21090c: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210908) {
            ctx->pc = 0x210928u;
            goto label_210928;
        }
    }
    ctx->pc = 0x210910u;
    // 0x210910: 0xc0c4900  jal         func_312400
    ctx->pc = 0x210910u;
    SET_GPR_U32(ctx, 31, 0x210918u);
    ctx->pc = 0x210914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210910u;
    // 0x210914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x210910u, 0x210918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210918u;
label_210918:
    // 0x210918: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x210918u;
    {
        const bool branch_taken_0x210918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210918u;
        // 0x21091c: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210918) {
            ctx->pc = 0x210928u;
            goto label_210928;
        }
    }
    ctx->pc = 0x210920u;
label_210920:
    // 0x210920: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x210920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210924: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x210924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_210928:
    // 0x210928: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x210928u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21092c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x21092cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210930: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x210930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x210934: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x210934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x210938: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x210938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    // 0x21093c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21093cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210940: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x210940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x210944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x210944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210948: 0xc0b0a7a  jal         func_2C29E8
    ctx->pc = 0x210948u;
    SET_GPR_U32(ctx, 31, 0x210950u);
    ctx->pc = 0x21094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210948u;
    // 0x21094c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29E8u, 0x210948u, 0x210950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210950u;
label_210950:
    // 0x210950: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x210950u;
    {
        const bool branch_taken_0x210950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210950) {
            ctx->pc = 0x210954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210950u;
            // 0x210954: 0x8e2400b8  lw          $a0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210964u;
            goto label_210964;
        }
    }
    ctx->pc = 0x210958u;
    // 0x210958: 0xc0b0ef2  jal         func_2C3BC8
    ctx->pc = 0x210958u;
    SET_GPR_U32(ctx, 31, 0x210960u);
    ctx->pc = 0x21095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210958u;
    // 0x21095c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x210958u, 0x210960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210960u;
label_210960:
    // 0x210960: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x210960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_210964:
    // 0x210964: 0x848200dc  lh          $v0, 0xDC($a0)
    ctx->pc = 0x210964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x210968: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x210968u;
    {
        const bool branch_taken_0x210968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210968u;
        // 0x21096c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210968) {
            ctx->pc = 0x210974u;
            goto label_210974;
        }
    }
    ctx->pc = 0x210970u;
    // 0x210970: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x210970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_210974:
    // 0x210974: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x210974u;
    {
        const bool branch_taken_0x210974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210974u;
        // 0x210978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210974) {
            ctx->pc = 0x2109FCu;
            goto label_2109fc;
        }
    }
    ctx->pc = 0x21097Cu;
    // 0x21097c: 0xc0cd984  jal         func_336610
    ctx->pc = 0x21097Cu;
    SET_GPR_U32(ctx, 31, 0x210984u);
    ctx->pc = 0x210980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21097Cu;
    // 0x210980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x21097Cu, 0x210984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210984u;
label_210984:
    // 0x210984: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x210984u;
    {
        const bool branch_taken_0x210984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210984u;
        // 0x210988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210984) {
            ctx->pc = 0x2109FCu;
            goto label_2109fc;
        }
    }
    ctx->pc = 0x21098Cu;
    // 0x21098c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x21098Cu;
    SET_GPR_U32(ctx, 31, 0x210994u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x21098Cu, 0x210994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210994u;
label_210994:
    // 0x210994: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x210994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x210998: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x210998u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x21099c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21099Cu;
    {
        const bool branch_taken_0x21099c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21099c) {
            ctx->pc = 0x2109A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21099Cu;
            // 0x2109a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2109A4u;
            goto label_2109a4;
        }
    }
    ctx->pc = 0x2109A4u;
label_2109a4:
    // 0x2109a4: 0x2010  mfhi        $a0
    ctx->pc = 0x2109a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2109a8: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2109A8u;
    {
        const bool branch_taken_0x2109a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2109ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109A8u;
        // 0x2109ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109a8) {
            ctx->pc = 0x2109FCu;
            goto label_2109fc;
        }
    }
    ctx->pc = 0x2109B0u;
    // 0x2109b0: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x2109b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2109b4: 0x84a200dc  lh          $v0, 0xDC($a1)
    ctx->pc = 0x2109b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x2109b8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2109B8u;
    {
        const bool branch_taken_0x2109b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2109b8) {
            ctx->pc = 0x2109BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2109B8u;
            // 0x2109bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2109C4u;
            goto label_2109c4;
        }
    }
    ctx->pc = 0x2109C0u;
    // 0x2109c0: 0x8ca500d8  lw          $a1, 0xD8($a1)
    ctx->pc = 0x2109c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
label_2109c4:
    // 0x2109c4: 0xc083abc  jal         func_20EAF0
    ctx->pc = 0x2109C4u;
    SET_GPR_U32(ctx, 31, 0x2109CCu);
    ctx->pc = 0x2109C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2109C4u;
    // 0x2109c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EAF0u, 0x2109C4u, 0x2109CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109CCu;
label_2109cc:
    // 0x2109cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2109ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109d0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2109D0u;
    {
        const bool branch_taken_0x2109d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2109D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109D0u;
        // 0x2109d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109d0) {
            ctx->pc = 0x2109FCu;
            goto label_2109fc;
        }
    }
    ctx->pc = 0x2109D8u;
    // 0x2109d8: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2109d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x2109dc: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x2109dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
    // 0x2109e0: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x2109e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
    // 0x2109e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2109E4u;
    {
        const bool branch_taken_0x2109e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2109E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109E4u;
        // 0x2109e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109e4) {
            ctx->pc = 0x2109FCu;
            goto label_2109fc;
        }
    }
    ctx->pc = 0x2109ECu;
    // 0x2109ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2109ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2109f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2109f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2109f4: 0x0  nop
    ctx->pc = 0x2109f4u;
    // NOP
    // 0x2109f8: 0xe4600240  swc1        $f0, 0x240($v1)
    ctx->pc = 0x2109f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
label_2109fc:
    // 0x2109fc: 0xa2220134  sb          $v0, 0x134($s1)
    ctx->pc = 0x2109fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 308), (uint8_t)GPR_U32(ctx, 2));
    // 0x210a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x210a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210a04:
    // 0x210a04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x210a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210a08: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x210a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210a0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x210a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210a10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x210a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210a14: 0x3e00008  jr          $ra
    ctx->pc = 0x210A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A14u;
        // 0x210a18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210A1Cu;
    // 0x210a1c: 0x0  nop
    ctx->pc = 0x210a1cu;
    // NOP
    ctx->pc = 0x210a20u;
}
