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

// Function: sub_00279818
// Address: 0x279818 - 0x279bb0
void sub_00279818_0x279818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279818_0x279818");
#endif

    switch (ctx->pc) {
        case 0x279864u: goto label_279864;
        case 0x279890u: goto label_279890;
        case 0x2798d4u: goto label_2798d4;
        case 0x2798f0u: goto label_2798f0;
        case 0x279940u: goto label_279940;
        case 0x27996cu: goto label_27996c;
        case 0x279978u: goto label_279978;
        case 0x2799b0u: goto label_2799b0;
        case 0x2799d8u: goto label_2799d8;
        case 0x2799dcu: goto label_2799dc;
        case 0x279a28u: goto label_279a28;
        case 0x279a54u: goto label_279a54;
        case 0x279a60u: goto label_279a60;
        case 0x279a94u: goto label_279a94;
        case 0x279aa0u: goto label_279aa0;
        case 0x279ad8u: goto label_279ad8;
        case 0x279b00u: goto label_279b00;
        case 0x279b04u: goto label_279b04;
        case 0x279b50u: goto label_279b50;
        case 0x279b80u: goto label_279b80;
        default: break;
    }

    ctx->pc = 0x279818u;

    // 0x279818: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x279818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27981c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x279820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279824: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x279824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x279828: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x279828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27982c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x279830: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x279830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279834: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x279834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x279838: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x279838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27983c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x279840: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x279840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279844: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x279844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x279848: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x279848u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27984c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x279850: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x279850u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279854: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x279854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x279858: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x279858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x27985c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x27985Cu;
    SET_GPR_U32(ctx, 31, 0x279864u);
    ctx->pc = 0x279860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27985Cu;
    // 0x279860: 0x160a82d  daddu       $s5, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x27985Cu, 0x279864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279864u;
label_279864:
    // 0x279864: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279868: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x279868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x27986c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27986cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279870: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x279870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x279874: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279874u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279878: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x279878u;
    {
        const bool branch_taken_0x279878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279878) {
            ctx->pc = 0x27987Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279878u;
            // 0x27987c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279890u;
            goto label_279890;
        }
    }
    ctx->pc = 0x279880u;
    // 0x279880: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279884: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x279884u;
    {
        const bool branch_taken_0x279884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x279888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279884u;
        // 0x279888: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279884) {
            ctx->pc = 0x2798C0u;
            goto label_2798c0;
        }
    }
    ctx->pc = 0x27988Cu;
    // 0x27988c: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x27988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279890:
    // 0x279890: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x279890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x279894: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x279894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279898: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x279898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27989c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2798a0: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x2798a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x2798a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2798a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2798a8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2798a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2798ac: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2798ACu;
    {
        const bool branch_taken_0x2798ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2798ac) {
            ctx->pc = 0x2798B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2798ACu;
            // 0x2798b0: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279890;
        }
    }
    ctx->pc = 0x2798B4u;
    // 0x2798b4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2798b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2798b8: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2798B8u;
    {
        const bool branch_taken_0x2798b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2798b8) {
            ctx->pc = 0x2798BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2798B8u;
            // 0x2798bc: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279890;
        }
    }
    ctx->pc = 0x2798C0u;
label_2798c0:
    // 0x2798c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2798c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2798c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2798c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2798c8: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x2798c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2798cc: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2798CCu;
    SET_GPR_U32(ctx, 31, 0x2798D4u);
    ctx->pc = 0x2798D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2798CCu;
    // 0x2798d0: 0x26720004  addiu       $s2, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2798CCu, 0x2798D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798D4u;
label_2798d4:
    // 0x2798d4: 0x26b70004  addiu       $s7, $s5, 0x4
    ctx->pc = 0x2798d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2798d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2798d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2798dc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2798dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2798e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2798e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2798e4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2798e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2798e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2798E8u;
    {
        const bool branch_taken_0x2798e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2798ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798E8u;
        // 0x2798ec: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2798e8) {
            ctx->pc = 0x2798FCu;
            goto label_2798fc;
        }
    }
    ctx->pc = 0x2798F0u;
label_2798f0:
    // 0x2798f0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2798f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2798f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2798f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2798f8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x2798f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_2798fc:
    // 0x2798fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2798fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279900: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279900u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279904: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279904u;
    {
        const bool branch_taken_0x279904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279904) {
            ctx->pc = 0x279908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279904u;
            // 0x279908: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2798F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2798f0;
        }
    }
    ctx->pc = 0x27990Cu;
    // 0x27990c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279910: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279910u;
    {
        const bool branch_taken_0x279910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279910) {
            ctx->pc = 0x279914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279910u;
            // 0x279914: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2798F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2798f0;
        }
    }
    ctx->pc = 0x279918u;
    // 0x279918: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x279918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x27991c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279920: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x279920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x279924: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x279924u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279928: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x279928u;
    {
        const bool branch_taken_0x279928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x27992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279928u;
        // 0x27992c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279928) {
            ctx->pc = 0x279960u;
            goto label_279960;
        }
    }
    ctx->pc = 0x279930u;
    // 0x279930: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279930u;
    {
        const bool branch_taken_0x279930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279930u;
        // 0x279934: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279930) {
            ctx->pc = 0x279960u;
            goto label_279960;
        }
    }
    ctx->pc = 0x279938u;
    // 0x279938: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x279938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27993c: 0x0  nop
    ctx->pc = 0x27993cu;
    // NOP
label_279940:
    // 0x279940: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x279944: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x279944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x279948: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x279948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x27994c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27994cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279950: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x279950u;
    {
        const bool branch_taken_0x279950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x279954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279950u;
        // 0x279954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279950) {
            ctx->pc = 0x279964u;
            goto label_279964;
        }
    }
    ctx->pc = 0x279958u;
    // 0x279958: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x279958u;
    {
        const bool branch_taken_0x279958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x27995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279958u;
        // 0x27995c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279958) {
            ctx->pc = 0x279940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279940;
        }
    }
    ctx->pc = 0x279960u;
label_279960:
    // 0x279960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279964:
    // 0x279964: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x279964u;
    SET_GPR_U32(ctx, 31, 0x27996Cu);
    ctx->pc = 0x279968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279964u;
    // 0x279968: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x279964u, 0x27996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27996Cu;
label_27996c:
    // 0x27996c: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x27996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279970: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279970u;
    {
        const bool branch_taken_0x279970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279970u;
        // 0x279974: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279970) {
            ctx->pc = 0x279984u;
            goto label_279984;
        }
    }
    ctx->pc = 0x279978u;
label_279978:
    // 0x279978: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27997c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27997cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279980: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_279984:
    // 0x279984: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x279984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279988: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279988u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27998c: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27998Cu;
    {
        const bool branch_taken_0x27998c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27998c) {
            ctx->pc = 0x279990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27998Cu;
            // 0x279990: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279978;
        }
    }
    ctx->pc = 0x279994u;
    // 0x279994: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279998: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279998u;
    {
        const bool branch_taken_0x279998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279998) {
            ctx->pc = 0x27999Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279998u;
            // 0x27999c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279978;
        }
    }
    ctx->pc = 0x2799A0u;
    // 0x2799a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2799a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2799a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2799a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2799a8: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2799A8u;
    SET_GPR_U32(ctx, 31, 0x2799B0u);
    ctx->pc = 0x2799ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2799A8u;
    // 0x2799ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2799A8u, 0x2799B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2799B0u;
label_2799b0:
    // 0x2799b0: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x2799b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2799b4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2799b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2799b8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2799b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2799bc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2799bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2799c0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2799C0u;
    {
        const bool branch_taken_0x2799c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2799c0) {
            ctx->pc = 0x2799C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2799C0u;
            // 0x2799c4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2799D8u;
            goto label_2799d8;
        }
    }
    ctx->pc = 0x2799C8u;
    // 0x2799c8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2799c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2799cc: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2799CCu;
    {
        const bool branch_taken_0x2799cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2799cc) {
            ctx->pc = 0x2799D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2799CCu;
            // 0x2799d0: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279A04u;
            goto label_279a04;
        }
    }
    ctx->pc = 0x2799D4u;
    // 0x2799d4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2799d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2799d8:
    // 0x2799d8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2799d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2799dc:
    // 0x2799dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2799dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2799e0: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x2799e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x2799e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2799e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2799e8: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2799e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2799ec: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2799ECu;
    {
        const bool branch_taken_0x2799ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2799ec) {
            ctx->pc = 0x2799F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2799ECu;
            // 0x2799f0: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2799DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2799dc;
        }
    }
    ctx->pc = 0x2799F4u;
    // 0x2799f4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2799f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2799f8: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2799F8u;
    {
        const bool branch_taken_0x2799f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2799f8) {
            ctx->pc = 0x2799FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2799F8u;
            // 0x2799fc: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2799D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2799d8;
        }
    }
    ctx->pc = 0x279A00u;
    // 0x279a00: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x279a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279a04:
    // 0x279a04: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279a08: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x279a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x279a0c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x279a0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279a10: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x279A10u;
    {
        const bool branch_taken_0x279a10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x279A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A10u;
        // 0x279a14: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a10) {
            ctx->pc = 0x279A48u;
            goto label_279a48;
        }
    }
    ctx->pc = 0x279A18u;
    // 0x279a18: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279A18u;
    {
        const bool branch_taken_0x279a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A18u;
        // 0x279a1c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a18) {
            ctx->pc = 0x279A48u;
            goto label_279a48;
        }
    }
    ctx->pc = 0x279A20u;
    // 0x279a20: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x279a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279a24: 0x0  nop
    ctx->pc = 0x279a24u;
    // NOP
label_279a28:
    // 0x279a28: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x279a2c: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x279a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x279a30: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x279a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279a34: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x279a34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279a38: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x279A38u;
    {
        const bool branch_taken_0x279a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x279A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A38u;
        // 0x279a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a38) {
            ctx->pc = 0x279A4Cu;
            goto label_279a4c;
        }
    }
    ctx->pc = 0x279A40u;
    // 0x279a40: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x279A40u;
    {
        const bool branch_taken_0x279a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x279A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A40u;
        // 0x279a44: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a40) {
            ctx->pc = 0x279A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279a28;
        }
    }
    ctx->pc = 0x279A48u;
label_279a48:
    // 0x279a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279a4c:
    // 0x279a4c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x279A4Cu;
    SET_GPR_U32(ctx, 31, 0x279A54u);
    ctx->pc = 0x279A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279A4Cu;
    // 0x279a50: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x279A4Cu, 0x279A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A54u;
label_279a54:
    // 0x279a54: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279a58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279A58u;
    {
        const bool branch_taken_0x279a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A58u;
        // 0x279a5c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a58) {
            ctx->pc = 0x279A6Cu;
            goto label_279a6c;
        }
    }
    ctx->pc = 0x279A60u;
label_279a60:
    // 0x279a60: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279a64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279a68: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_279a6c:
    // 0x279a6c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x279a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279a70: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279a70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279a74: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279A74u;
    {
        const bool branch_taken_0x279a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279a74) {
            ctx->pc = 0x279A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279A74u;
            // 0x279a78: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279a60;
        }
    }
    ctx->pc = 0x279A7Cu;
    // 0x279a7c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279a80: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279A80u;
    {
        const bool branch_taken_0x279a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279a80) {
            ctx->pc = 0x279A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279A80u;
            // 0x279a84: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279a60;
        }
    }
    ctx->pc = 0x279A88u;
    // 0x279a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a8c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x279A8Cu;
    SET_GPR_U32(ctx, 31, 0x279A94u);
    ctx->pc = 0x279A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279A8Cu;
    // 0x279a90: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x279A8Cu, 0x279A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A94u;
label_279a94:
    // 0x279a94: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279a98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279A98u;
    {
        const bool branch_taken_0x279a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A98u;
        // 0x279a9c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a98) {
            ctx->pc = 0x279AACu;
            goto label_279aac;
        }
    }
    ctx->pc = 0x279AA0u;
label_279aa0:
    // 0x279aa0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279aa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279aa8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_279aac:
    // 0x279aac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x279aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279ab0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279ab0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279ab4: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279AB4u;
    {
        const bool branch_taken_0x279ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279ab4) {
            ctx->pc = 0x279AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279AB4u;
            // 0x279ab8: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279aa0;
        }
    }
    ctx->pc = 0x279ABCu;
    // 0x279abc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279ac0: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279AC0u;
    {
        const bool branch_taken_0x279ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279ac0) {
            ctx->pc = 0x279AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279AC0u;
            // 0x279ac4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279aa0;
        }
    }
    ctx->pc = 0x279AC8u;
    // 0x279ac8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x279ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279acc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x279accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ad0: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279AD0u;
    SET_GPR_U32(ctx, 31, 0x279AD8u);
    ctx->pc = 0x279AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279AD0u;
    // 0x279ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279AD0u, 0x279AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AD8u;
label_279ad8:
    // 0x279ad8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x279ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279adc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x279adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279ae0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x279ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279ae4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x279ae4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279ae8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279AE8u;
    {
        const bool branch_taken_0x279ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279ae8) {
            ctx->pc = 0x279AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279AE8u;
            // 0x279aec: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279B00u;
            goto label_279b00;
        }
    }
    ctx->pc = 0x279AF0u;
    // 0x279af0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279af4: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x279AF4u;
    {
        const bool branch_taken_0x279af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x279af4) {
            ctx->pc = 0x279AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279AF4u;
            // 0x279af8: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279B2Cu;
            goto label_279b2c;
        }
    }
    ctx->pc = 0x279AFCu;
    // 0x279afc: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279b00:
    // 0x279b00: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_279b04:
    // 0x279b04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279b08: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x279b0c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x279b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279b10: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279b10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279b14: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x279B14u;
    {
        const bool branch_taken_0x279b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279b14) {
            ctx->pc = 0x279B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279B14u;
            // 0x279b18: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279B04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279b04;
        }
    }
    ctx->pc = 0x279B1Cu;
    // 0x279b1c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279b20: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279B20u;
    {
        const bool branch_taken_0x279b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279b20) {
            ctx->pc = 0x279B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279B20u;
            // 0x279b24: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279b00;
        }
    }
    ctx->pc = 0x279B28u;
    // 0x279b28: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x279b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279b2c:
    // 0x279b2c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279b30: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x279b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x279b34: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x279b34u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279b38: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x279B38u;
    {
        const bool branch_taken_0x279b38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x279B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B38u;
        // 0x279b3c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b38) {
            ctx->pc = 0x279B70u;
            goto label_279b70;
        }
    }
    ctx->pc = 0x279B40u;
    // 0x279b40: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279B40u;
    {
        const bool branch_taken_0x279b40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B40u;
        // 0x279b44: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b40) {
            ctx->pc = 0x279B70u;
            goto label_279b70;
        }
    }
    ctx->pc = 0x279B48u;
    // 0x279b48: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x279b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279b4c: 0x0  nop
    ctx->pc = 0x279b4cu;
    // NOP
label_279b50:
    // 0x279b50: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x279b54: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x279b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x279b58: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x279b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279b5c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x279b5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279b60: 0x50460004  beql        $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x279B60u;
    {
        const bool branch_taken_0x279b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x279b60) {
            ctx->pc = 0x279B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279B60u;
            // 0x279b64: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279B74u;
            goto label_279b74;
        }
    }
    ctx->pc = 0x279B68u;
    // 0x279b68: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x279B68u;
    {
        const bool branch_taken_0x279b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x279B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B68u;
        // 0x279b6c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b68) {
            ctx->pc = 0x279B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279b50;
        }
    }
    ctx->pc = 0x279B70u;
label_279b70:
    // 0x279b70: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x279b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_279b74:
    // 0x279b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b78: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279B78u;
    SET_GPR_U32(ctx, 31, 0x279B80u);
    ctx->pc = 0x279B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279B78u;
    // 0x279b7c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279B78u, 0x279B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B80u;
label_279b80:
    // 0x279b80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x279b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279b84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x279b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279b88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x279b88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279b8c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x279b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279b90: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x279b90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x279b94: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x279b94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x279b98: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x279b98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x279b9c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x279b9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x279ba0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x279ba0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x279ba4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x279ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x279ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x279BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BA8u;
        // 0x279bac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279BB0u;
}
