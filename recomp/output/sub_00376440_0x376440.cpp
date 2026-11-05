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

// Function: sub_00376440
// Address: 0x376440 - 0x3768e0
void sub_00376440_0x376440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376440_0x376440");
#endif

    switch (ctx->pc) {
        case 0x37648cu: goto label_37648c;
        case 0x376494u: goto label_376494;
        case 0x37649cu: goto label_37649c;
        case 0x3764b8u: goto label_3764b8;
        case 0x3764e0u: goto label_3764e0;
        case 0x3764f0u: goto label_3764f0;
        case 0x376518u: goto label_376518;
        case 0x376574u: goto label_376574;
        case 0x3765c0u: goto label_3765c0;
        case 0x376674u: goto label_376674;
        case 0x376758u: goto label_376758;
        case 0x3768acu: goto label_3768ac;
        default: break;
    }

    ctx->pc = 0x376440u;

    // 0x376440: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x376440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x376444: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x376444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x376448: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x376448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x37644c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x37644cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376450: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x376450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x376454: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x376454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376458: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x376458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x37645c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x37645cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376460: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x376460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x376464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x376464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376468: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x376468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x37646c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37646cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376470: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x376470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x376474: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x376474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376478: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x376478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x37647c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x37647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x376480: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x376480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x376484: 0xc0df578  jal         func_37D5E0
    ctx->pc = 0x376484u;
    SET_GPR_U32(ctx, 31, 0x37648Cu);
    ctx->pc = 0x376488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376484u;
    // 0x376488: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D5E0u, 0x376484u, 0x37648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37648Cu;
label_37648c:
    // 0x37648c: 0xc0dda38  jal         func_3768E0
    ctx->pc = 0x37648Cu;
    SET_GPR_U32(ctx, 31, 0x376494u);
    ctx->pc = 0x3768E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3768E0u, 0x37648Cu, 0x376494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376494u;
label_376494:
    // 0x376494: 0xc0dd8a2  jal         func_376288
    ctx->pc = 0x376494u;
    SET_GPR_U32(ctx, 31, 0x37649Cu);
    ctx->pc = 0x376288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376288u, 0x376494u, 0x37649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37649Cu;
label_37649c:
    // 0x37649c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x37649cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3764a0: 0x8c43cd78  lw          $v1, -0x3288($v0)
    ctx->pc = 0x3764a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD78u));
    // 0x3764a4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3764A4u;
    {
        const bool branch_taken_0x3764a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3764A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764A4u;
        // 0x3764a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3764a4) {
            ctx->pc = 0x3764C0u;
            goto label_3764c0;
        }
    }
    ctx->pc = 0x3764ACu;
    // 0x3764ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3764acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764b0: 0xc0df57a  jal         func_37D5E8
    ctx->pc = 0x3764B0u;
    SET_GPR_U32(ctx, 31, 0x3764B8u);
    ctx->pc = 0x3764B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3764B0u;
    // 0x3764b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D5E8u, 0x3764B0u, 0x3764B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764B8u;
label_3764b8:
    // 0x3764b8: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x3764B8u;
    {
        const bool branch_taken_0x3764b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3764BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764B8u;
        // 0x3764bc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3764b8) {
            ctx->pc = 0x3768B0u;
            goto label_3768b0;
        }
    }
    ctx->pc = 0x3764C0u;
label_3764c0:
    // 0x3764c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3764c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764c4: 0x8c44cd04  lw          $a0, -0x32FC($v0)
    ctx->pc = 0x3764c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954244)));
    // 0x3764c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3764c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764cc: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x3764ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x3764d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3764d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764d4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3764d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x3764d8: 0xc0dffd6  jal         func_37FF58
    ctx->pc = 0x3764D8u;
    SET_GPR_U32(ctx, 31, 0x3764E0u);
    ctx->pc = 0x3764DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3764D8u;
    // 0x3764dc: 0x3c11005c  lui         $s1, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FF58u, 0x3764D8u, 0x3764E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764E0u;
label_3764e0:
    // 0x3764e0: 0x32c30004  andi        $v1, $s6, 0x4
    ctx->pc = 0x3764e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
    // 0x3764e4: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3764E4u;
    {
        const bool branch_taken_0x3764e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3764E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764E4u;
        // 0x3764e8: 0xafa30064  sw          $v1, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3764e4) {
            ctx->pc = 0x37650Cu;
            goto label_37650c;
        }
    }
    ctx->pc = 0x3764ECu;
    // 0x3764ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3764ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3764f0:
    // 0x3764f0: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x3764f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x3764f4: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x3764f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x3764f8: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x3764f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764fc: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x3764fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x376500: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x376500u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x376504: 0x1653fffa  bne         $s2, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x376504u;
    {
        const bool branch_taken_0x376504 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x376508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376504u;
        // 0x376508: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376504) {
            ctx->pc = 0x3764F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3764f0;
        }
    }
    ctx->pc = 0x37650Cu;
label_37650c:
    // 0x37650c: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x37650cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376510: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x376510u;
    {
        const bool branch_taken_0x376510 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x376514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376510u;
        // 0x376514: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376510) {
            ctx->pc = 0x376530u;
            goto label_376530;
        }
    }
    ctx->pc = 0x376518u;
label_376518:
    // 0x376518: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x376518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37651c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x37651cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x376520: 0x0  nop
    ctx->pc = 0x376520u;
    // NOP
    // 0x376524: 0x0  nop
    ctx->pc = 0x376524u;
    // NOP
    // 0x376528: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x376528u;
    {
        const bool branch_taken_0x376528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376528u;
        // 0x37652c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376528) {
            ctx->pc = 0x376518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376518;
        }
    }
    ctx->pc = 0x376530u;
label_376530:
    // 0x376530: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x376530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x376534: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x376534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x376538: 0x2627f910  addiu       $a3, $s1, -0x6F0
    ctx->pc = 0x376538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965520));
    // 0x37653c: 0x8e23f910  lw          $v1, -0x6F0($s1)
    ctx->pc = 0x37653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965520)));
    // 0x376540: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x376540u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x376544: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x376544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x376548: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x376548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x37654c: 0x24c40003  addiu       $a0, $a2, 0x3
    ctx->pc = 0x37654cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x376550: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x376550u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x376554: 0xd01018  mult        $v0, $a2, $s0
    ctx->pc = 0x376554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x376558: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x376558u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37655c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x37655cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x376560: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x376560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x376564: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x376564u;
    {
        const bool branch_taken_0x376564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376564u;
        // 0x376568: 0x8e22f910  lw          $v0, -0x6F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376564) {
            ctx->pc = 0x376578u;
            goto label_376578;
        }
    }
    ctx->pc = 0x37656Cu;
    // 0x37656c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x37656Cu;
    SET_GPR_U32(ctx, 31, 0x376574u);
    ctx->pc = 0x376570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37656Cu;
    // 0x376570: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x37656Cu, 0x376574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376574u;
label_376574:
    // 0x376574: 0x8e22f910  lw          $v0, -0x6F0($s1)
    ctx->pc = 0x376574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965520)));
label_376578:
    // 0x376578: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x376578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37657c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x37657cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x376580: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x376580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376584: 0x126000c6  beqz        $s3, . + 4 + (0xC6 << 2)
    ctx->pc = 0x376584u;
    {
        const bool branch_taken_0x376584 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x376588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376584u;
        // 0x376588: 0xae23f910  sw          $v1, -0x6F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376584) {
            ctx->pc = 0x3768A0u;
            goto label_3768a0;
        }
    }
    ctx->pc = 0x37658Cu;
    // 0x37658c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x37658cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x376590: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x376590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x376594: 0x3c027c00  lui         $v0, 0x7C00
    ctx->pc = 0x376594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31744 << 16));
    // 0x376598: 0x34634040  ori         $v1, $v1, 0x4040
    ctx->pc = 0x376598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16448);
    // 0x37659c: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x37659cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x3765a0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3765a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3765a4: 0x3c156c00  lui         $s5, 0x6C00
    ctx->pc = 0x3765a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)27648 << 16));
    // 0x3765a8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3765a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3765ac: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x3765acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x3765b0: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x3765b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x3765b4: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x3765b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
    // 0x3765b8: 0x36b58000  ori         $s5, $s5, 0x8000
    ctx->pc = 0x3765b8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32768);
    // 0x3765bc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x3765bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_3765c0:
    // 0x3765c0: 0x8fb10030  lw          $s1, 0x30($sp)
    ctx->pc = 0x3765c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3765c4: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x3765c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3765c8: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3765c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3765cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3765CCu;
    {
        const bool branch_taken_0x3765cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3765D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3765CCu;
        // 0x3765d0: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3765cc) {
            ctx->pc = 0x3765E0u;
            goto label_3765e0;
        }
    }
    ctx->pc = 0x3765D4u;
    // 0x3765d4: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x3765d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x3765d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3765D8u;
    {
        const bool branch_taken_0x3765d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3765DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3765D8u;
        // 0x3765dc: 0x2728823  subu        $s1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3765d8) {
            ctx->pc = 0x3765E4u;
            goto label_3765e4;
        }
    }
    ctx->pc = 0x3765E0u;
label_3765e0:
    // 0x3765e0: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x3765e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_3765e4:
    // 0x3765e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3765e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3765e8: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x3765e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x3765ec: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3765ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3765f0: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x3765f0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x3765f4: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x3765f4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x3765f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3765f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3765fc: 0xfe1e0000  sd          $fp, 0x0($s0)
    ctx->pc = 0x3765fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 30));
    // 0x376600: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x376600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x376604: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x376604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x376608: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x376608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x37660c: 0x36238000  ori         $v1, $s1, 0x8000
    ctx->pc = 0x37660cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32768);
    // 0x376610: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x376610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x376614: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x376614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x376618: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x376618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x37661c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x37661cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x376620: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x376620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x376624: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x376624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x376628: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x376628u;
    {
        const bool branch_taken_0x376628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376628u;
        // 0x37662c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376628) {
            ctx->pc = 0x3766C4u;
            goto label_3766c4;
        }
    }
    ctx->pc = 0x376630u;
    // 0x376630: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x376630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x376634: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x376634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x376638: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x376638u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x37663c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37663cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x376640: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x376640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x376644: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x376644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x376648: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x376648u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x37664c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x37664cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x376650: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x376650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x376654: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x376654u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x376658: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x376658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x37665c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37665cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x376660: 0xfe1e0000  sd          $fp, 0x0($s0)
    ctx->pc = 0x376660u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 30));
    // 0x376664: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x376664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x376668: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x376668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x37666c: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x37666Cu;
    SET_GPR_U32(ctx, 31, 0x376674u);
    ctx->pc = 0x376670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37666Cu;
    // 0x376670: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x37666Cu, 0x376674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376674u;
label_376674:
    // 0x376674: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x376674u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x376678: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x376678u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x37667c: 0x2341825  or          $v1, $s1, $s4
    ctx->pc = 0x37667cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x376680: 0x113400  sll         $a2, $s1, 16
    ctx->pc = 0x376680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x376684: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x376684u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x376688: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x376688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37668c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37668cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x376690: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x376690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x376694: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x376694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x376698: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x376698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37669c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x37669cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3766a0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3766a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3766a4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3766a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3766a8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3766a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3766ac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3766acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3766b0: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x3766b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x3766b4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3766b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3766b8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3766b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3766bc: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x3766bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x3766c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3766c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3766c4:
    // 0x3766c4: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x3766c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
    // 0x3766c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3766C8u;
    {
        const bool branch_taken_0x3766c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3766CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3766C8u;
        // 0x3766cc: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3766c8) {
            ctx->pc = 0x37670Cu;
            goto label_37670c;
        }
    }
    ctx->pc = 0x3766D0u;
    // 0x3766d0: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x3766d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3766d4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3766d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3766d8: 0x2341025  or          $v0, $s1, $s4
    ctx->pc = 0x3766d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x3766dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3766dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3766e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3766e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3766e4: 0xb52825  or          $a1, $a1, $s5
    ctx->pc = 0x3766e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x3766e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3766e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3766ec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3766ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3766f0: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x3766f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x3766f4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3766f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3766f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3766f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3766fc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3766fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x376700: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x376700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x376704: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x376704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x376708: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x376708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_37670c:
    // 0x37670c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x37670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x376710: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x376710u;
    {
        const bool branch_taken_0x376710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376710u;
        // 0x376714: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376710) {
            ctx->pc = 0x3767A8u;
            goto label_3767a8;
        }
    }
    ctx->pc = 0x376718u;
    // 0x376718: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x376718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x37671c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x37671cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x376720: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x376720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x376724: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x376724u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x376728: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x376728u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x37672c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x37672cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x376730: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x376730u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x376734: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x376734u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x376738: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x376738u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x37673c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x37673cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x376740: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x376740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x376744: 0xfe1e0000  sd          $fp, 0x0($s0)
    ctx->pc = 0x376744u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 30));
    // 0x376748: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x376748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x37674c: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x37674cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x376750: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x376750u;
    SET_GPR_U32(ctx, 31, 0x376758u);
    ctx->pc = 0x376754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376750u;
    // 0x376754: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x376750u, 0x376758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376758u;
label_376758:
    // 0x376758: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x376758u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37675c: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x37675cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x376760: 0x2341825  or          $v1, $s1, $s4
    ctx->pc = 0x376760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x376764: 0x113400  sll         $a2, $s1, 16
    ctx->pc = 0x376764u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x376768: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x376768u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x37676c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x37676cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x376770: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x376770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x376774: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x376774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x376778: 0x8ee4000c  lw          $a0, 0xC($s7)
    ctx->pc = 0x376778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x37677c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x376780: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x376780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x376784: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x376784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x376788: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x376788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x37678c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x37678cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x376790: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x376790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x376794: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x376794u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x376798: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x376798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x37679c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x37679cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3767a0: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x3767a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x3767a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3767a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3767a8:
    // 0x3767a8: 0x32c20008  andi        $v0, $s6, 0x8
    ctx->pc = 0x3767a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
    // 0x3767ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3767ACu;
    {
        const bool branch_taken_0x3767ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3767B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767ACu;
        // 0x3767b0: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3767ac) {
            ctx->pc = 0x3767F0u;
            goto label_3767f0;
        }
    }
    ctx->pc = 0x3767B4u;
    // 0x3767b4: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x3767b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3767b8: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x3767b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3767bc: 0x2341025  or          $v0, $s1, $s4
    ctx->pc = 0x3767bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x3767c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3767c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3767c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3767c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3767c8: 0xb52825  or          $a1, $a1, $s5
    ctx->pc = 0x3767c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x3767cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3767ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3767d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3767d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3767d4: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x3767d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x3767d8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3767d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3767dc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3767dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3767e0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3767e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x3767e4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3767e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x3767e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3767e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3767ec: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3767ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3767f0:
    // 0x3767f0: 0x32c20010  andi        $v0, $s6, 0x10
    ctx->pc = 0x3767f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
    // 0x3767f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3767F4u;
    {
        const bool branch_taken_0x3767f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3767F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767F4u;
        // 0x3767f8: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3767f4) {
            ctx->pc = 0x376838u;
            goto label_376838;
        }
    }
    ctx->pc = 0x3767FCu;
    // 0x3767fc: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x3767fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x376800: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x376800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376804: 0x2341025  or          $v0, $s1, $s4
    ctx->pc = 0x376804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x376808: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x376808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37680c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37680cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x376810: 0xb52825  or          $a1, $a1, $s5
    ctx->pc = 0x376810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x376814: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x376814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x376818: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x376818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x37681c: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x37681cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x376820: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x376820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x376824: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x376824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x376828: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x376828u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x37682c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x37682cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x376830: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x376830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x376834: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x376834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_376838:
    // 0x376838: 0x32c20020  andi        $v0, $s6, 0x20
    ctx->pc = 0x376838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32);
    // 0x37683c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x37683Cu;
    {
        const bool branch_taken_0x37683c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37683Cu;
        // 0x376840: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37683c) {
            ctx->pc = 0x376880u;
            goto label_376880;
        }
    }
    ctx->pc = 0x376844u;
    // 0x376844: 0x8ee30014  lw          $v1, 0x14($s7)
    ctx->pc = 0x376844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x376848: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x376848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x37684c: 0x2341025  or          $v0, $s1, $s4
    ctx->pc = 0x37684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x376850: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x376850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x376854: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x376854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x376858: 0xb52825  or          $a1, $a1, $s5
    ctx->pc = 0x376858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x37685c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x37685cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x376860: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x376860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x376864: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x376864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x376868: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x376868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x37686c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x37686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x376870: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x376870u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x376874: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x376874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x376878: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x376878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x37687c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x37687cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_376880:
    // 0x376880: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x376880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x376884: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x376884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x376888: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x376888u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x37688c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x37688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x376890: 0x8fb20050  lw          $s2, 0x50($sp)
    ctx->pc = 0x376890u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x376894: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x376894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x376898: 0x1653ff49  bne         $s2, $s3, . + 4 + (-0xB7 << 2)
    ctx->pc = 0x376898u;
    {
        const bool branch_taken_0x376898 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x37689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376898u;
        // 0x37689c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376898) {
            ctx->pc = 0x3765C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3765c0;
        }
    }
    ctx->pc = 0x3768A0u;
label_3768a0:
    // 0x3768a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3768a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3768a4: 0xc0df57a  jal         func_37D5E8
    ctx->pc = 0x3768A4u;
    SET_GPR_U32(ctx, 31, 0x3768ACu);
    ctx->pc = 0x3768A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3768A4u;
    // 0x3768a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D5E8u, 0x3768A4u, 0x3768ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3768ACu;
label_3768ac:
    // 0x3768ac: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x3768acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3768b0:
    // 0x3768b0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x3768b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3768b4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x3768b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3768b8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x3768b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3768bc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x3768bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3768c0: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x3768c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3768c4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3768c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3768c8: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x3768c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3768cc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x3768ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3768d0: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x3768d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3768d4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3768d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3768d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3768D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3768DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3768D8u;
        // 0x3768dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3768D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3768E0u;
}
