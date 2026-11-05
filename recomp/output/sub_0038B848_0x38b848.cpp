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

// Function: sub_0038B848
// Address: 0x38b848 - 0x38bb78
void sub_0038B848_0x38b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B848_0x38b848");
#endif

    switch (ctx->pc) {
        case 0x38b87cu: goto label_38b87c;
        case 0x38b88cu: goto label_38b88c;
        case 0x38b898u: goto label_38b898;
        case 0x38b8ccu: goto label_38b8cc;
        case 0x38b918u: goto label_38b918;
        case 0x38b93cu: goto label_38b93c;
        case 0x38b9b0u: goto label_38b9b0;
        case 0x38b9e0u: goto label_38b9e0;
        case 0x38ba14u: goto label_38ba14;
        case 0x38ba3cu: goto label_38ba3c;
        case 0x38ba68u: goto label_38ba68;
        case 0x38baa0u: goto label_38baa0;
        case 0x38baa4u: goto label_38baa4;
        case 0x38baccu: goto label_38bacc;
        case 0x38baf8u: goto label_38baf8;
        case 0x38bb04u: goto label_38bb04;
        case 0x38bb24u: goto label_38bb24;
        default: break;
    }

    ctx->pc = 0x38b848u;

    // 0x38b848: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x38b848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x38b84c: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x38b84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x38b850: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x38b850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38b854: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x38b854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x38b858: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x38b858u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38b85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b860: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x38b860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x38b864: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x38b864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x38b868: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x38b868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x38b86c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x38b86cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b870: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x38b870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x38b874: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x38b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x38b878: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x38b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_38b87c:
    // 0x38b87c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x38b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x38b880: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x38b880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x38b884: 0xc0e37b2  jal         func_38DEC8
    ctx->pc = 0x38B884u;
    SET_GPR_U32(ctx, 31, 0x38B88Cu);
    ctx->pc = 0x38B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B884u;
    // 0x38b888: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DEC8u, 0x38B884u, 0x38B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B88Cu;
label_38b88c:
    // 0x38b88c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x38B88Cu;
    {
        const bool branch_taken_0x38b88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B88Cu;
        // 0x38b890: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b88c) {
            ctx->pc = 0x38BB50u;
            goto label_38bb50;
        }
    }
    ctx->pc = 0x38B894u;
    // 0x38b894: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x38b894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_38b898:
    // 0x38b898: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x38b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38b89c: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x38b89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x38b8a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B8A0u;
    {
        const bool branch_taken_0x38b8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b8a0) {
            ctx->pc = 0x38B8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B8A0u;
            // 0x38b8a4: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B8B0u;
            goto label_38b8b0;
        }
    }
    ctx->pc = 0x38B8A8u;
    // 0x38b8a8: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x38B8A8u;
    {
        const bool branch_taken_0x38b8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8A8u;
        // 0x38b8ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b8a8) {
            ctx->pc = 0x38BB4Cu;
            goto label_38bb4c;
        }
    }
    ctx->pc = 0x38B8B0u;
label_38b8b0:
    // 0x38b8b0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x38b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38b8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38b8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b8b8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x38b8b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38b8bc: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x38b8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38b8c0: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x38b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x38b8c4: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38B8C4u;
    SET_GPR_U32(ctx, 31, 0x38B8CCu);
    ctx->pc = 0x38B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B8C4u;
    // 0x38b8c8: 0xac4006dc  sw          $zero, 0x6DC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38B8C4u, 0x38B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B8CCu;
label_38b8cc:
    // 0x38b8cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38b8d0: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x38b8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x38b8d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x38b8d8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x38B8D8u;
    {
        const bool branch_taken_0x38b8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8D8u;
        // 0x38b8dc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b8d8) {
            ctx->pc = 0x38B964u;
            goto label_38b964;
        }
    }
    ctx->pc = 0x38B8E0u;
    // 0x38b8e0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x38b8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x38b8e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002010
    // 0x38b8e8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x38b8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x38b8ec: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x38B8ECu;
    {
        const bool branch_taken_0x38b8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8ECu;
        // 0x38b8f0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b8ec) {
            ctx->pc = 0x38B968u;
            goto label_38b968;
        }
    }
    ctx->pc = 0x38B8F4u;
    // 0x38b8f4: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x38b8f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x38b8f8: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x38b8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x38b8fc: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x38b8fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x38b900: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x38b900u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x38b904: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x38b904u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x38b908: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x38b908u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x38b90c: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x38b90cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x38b910: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x38b910u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x38b914: 0x0  nop
    ctx->pc = 0x38b914u;
    // NOP
label_38b918:
    // 0x38b918: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x38b918u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x1000b420
    // 0x38b91c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x38B91Cu;
    {
        const bool branch_taken_0x38b91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b91c) {
            ctx->pc = 0x38B920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B91Cu;
            // 0x38b920: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B940u;
            goto label_38b940;
        }
    }
    ctx->pc = 0x38B924u;
    // 0x38b924: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x38b924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38b928: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38b928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38b92c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B92Cu;
    {
        const bool branch_taken_0x38b92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b92c) {
            ctx->pc = 0x38B930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B92Cu;
            // 0x38b930: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B940u;
            goto label_38b940;
        }
    }
    ctx->pc = 0x38B934u;
    // 0x38b934: 0xc0e182c  jal         func_3860B0
    ctx->pc = 0x38B934u;
    SET_GPR_U32(ctx, 31, 0x38B93Cu);
    ctx->pc = 0x38B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B934u;
    // 0x38b938: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3860B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3860B0u, 0x38B934u, 0x38B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B93Cu;
label_38b93c:
    // 0x38b93c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x38b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_38b940:
    // 0x38b940: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38B940u;
    {
        const bool branch_taken_0x38b940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b940) {
            ctx->pc = 0x38B9A8u;
            goto label_38b9a8;
        }
    }
    ctx->pc = 0x38B948u;
    // 0x38b948: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38b94c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38B94Cu;
    {
        const bool branch_taken_0x38b94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B94Cu;
        // 0x38b950: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b94c) {
            ctx->pc = 0x38B968u;
            goto label_38b968;
        }
    }
    ctx->pc = 0x38B954u;
    // 0x38b954: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38b958: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x38b958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x38b95c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x38B95Cu;
    {
        const bool branch_taken_0x38b95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b95c) {
            ctx->pc = 0x38B918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b918;
        }
    }
    ctx->pc = 0x38B964u;
label_38b964:
    // 0x38b964: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38b964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_38b968:
    // 0x38b968: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38b968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38b96c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x38b96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x38b970: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x38b970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x38b974: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38b974u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002020
    // 0x38b978: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x38b978u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x38b97c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x38b97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x38b980: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38b980u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38b984: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x38B984u;
    {
        const bool branch_taken_0x38b984 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x38B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B984u;
        // 0x38b988: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b984) {
            ctx->pc = 0x38B9B8u;
            goto label_38b9b8;
        }
    }
    ctx->pc = 0x38B98Cu;
    // 0x38b98c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x38b98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x38b990: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B990u;
    {
        const bool branch_taken_0x38b990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B990u;
        // 0x38b994: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b990) {
            ctx->pc = 0x38B9A0u;
            goto label_38b9a0;
        }
    }
    ctx->pc = 0x38B998u;
    // 0x38b998: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38B998u;
    {
        const bool branch_taken_0x38b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B998u;
        // 0x38b99c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b998) {
            ctx->pc = 0x38B9BCu;
            goto label_38b9bc;
        }
    }
    ctx->pc = 0x38B9A0u;
label_38b9a0:
    // 0x38b9a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38B9A0u;
    {
        const bool branch_taken_0x38b9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9A0u;
        // 0x38b9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b9a0) {
            ctx->pc = 0x38B9BCu;
            goto label_38b9bc;
        }
    }
    ctx->pc = 0x38B9A8u;
label_38b9a8:
    // 0x38b9a8: 0xc0e289e  jal         func_38A278
    ctx->pc = 0x38B9A8u;
    SET_GPR_U32(ctx, 31, 0x38B9B0u);
    ctx->pc = 0x38A278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A278u, 0x38B9A8u, 0x38B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B9B0u;
label_38b9b0:
    // 0x38b9b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38B9B0u;
    {
        const bool branch_taken_0x38b9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9B0u;
        // 0x38b9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b9b0) {
            ctx->pc = 0x38B9E4u;
            goto label_38b9e4;
        }
    }
    ctx->pc = 0x38B9B8u;
label_38b9b8:
    // 0x38b9b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_38b9bc:
    // 0x38b9bc: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x38b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x38b9c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38b9c4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x38b9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x38b9c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38b9cc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x38b9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x38b9d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B9D0u;
    {
        const bool branch_taken_0x38b9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9D0u;
        // 0x38b9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b9d0) {
            ctx->pc = 0x38B9E0u;
            goto label_38b9e0;
        }
    }
    ctx->pc = 0x38B9D8u;
    // 0x38b9d8: 0xc0e28c6  jal         func_38A318
    ctx->pc = 0x38B9D8u;
    SET_GPR_U32(ctx, 31, 0x38B9E0u);
    ctx->pc = 0x38B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B9D8u;
    // 0x38b9dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A318u, 0x38B9D8u, 0x38B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B9E0u;
label_38b9e0:
    // 0x38b9e0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x38b9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38b9e4:
    // 0x38b9e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x38B9E4u;
    {
        const bool branch_taken_0x38b9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b9e4) {
            ctx->pc = 0x38B9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B9E4u;
            // 0x38b9e8: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BA00u;
            goto label_38ba00;
        }
    }
    ctx->pc = 0x38B9ECu;
    // 0x38b9ec: 0x8e040878  lw          $a0, 0x878($s0)
    ctx->pc = 0x38b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x38b9f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38b9f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38b9f8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x38B9F8u;
    {
        const bool branch_taken_0x38b9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9F8u;
        // 0x38b9fc: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b9f8) {
            ctx->pc = 0x38BB4Cu;
            goto label_38bb4c;
        }
    }
    ctx->pc = 0x38BA00u;
label_38ba00:
    // 0x38ba00: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x38BA00u;
    {
        const bool branch_taken_0x38ba00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA00u;
        // 0x38ba04: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba00) {
            ctx->pc = 0x38BA4Cu;
            goto label_38ba4c;
        }
    }
    ctx->pc = 0x38BA08u;
    // 0x38ba08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ba0c: 0xc0e32f8  jal         func_38CBE0
    ctx->pc = 0x38BA0Cu;
    SET_GPR_U32(ctx, 31, 0x38BA14u);
    ctx->pc = 0x38BA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BA0Cu;
    // 0x38ba10: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CBE0u, 0x38BA0Cu, 0x38BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BA14u;
label_38ba14:
    // 0x38ba14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38BA14u;
    {
        const bool branch_taken_0x38ba14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ba14) {
            ctx->pc = 0x38BA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BA14u;
            // 0x38ba18: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BA2Cu;
            goto label_38ba2c;
        }
    }
    ctx->pc = 0x38BA1Cu;
    // 0x38ba1c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x38ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x38ba20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38BA20u;
    {
        const bool branch_taken_0x38ba20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ba20) {
            ctx->pc = 0x38BA34u;
            goto label_38ba34;
        }
    }
    ctx->pc = 0x38BA28u;
    // 0x38ba28: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x38ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_38ba2c:
    // 0x38ba2c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x38BA2Cu;
    {
        const bool branch_taken_0x38ba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA2Cu;
        // 0x38ba30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba2c) {
            ctx->pc = 0x38BB4Cu;
            goto label_38bb4c;
        }
    }
    ctx->pc = 0x38BA34u;
label_38ba34:
    // 0x38ba34: 0xc0e31a6  jal         func_38C698
    ctx->pc = 0x38BA34u;
    SET_GPR_U32(ctx, 31, 0x38BA3Cu);
    ctx->pc = 0x38BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BA34u;
    // 0x38ba38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C698u, 0x38BA34u, 0x38BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BA3Cu;
label_38ba3c:
    // 0x38ba3c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x38ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x38ba40: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x38BA40u;
    {
        const bool branch_taken_0x38ba40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA40u;
        // 0x38ba44: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba40) {
            ctx->pc = 0x38BAA8u;
            goto label_38baa8;
        }
    }
    ctx->pc = 0x38BA48u;
    // 0x38ba48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x38ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_38ba4c:
    // 0x38ba4c: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x38ba4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x38ba50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38BA50u;
    {
        const bool branch_taken_0x38ba50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA50u;
        // 0x38ba54: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba50) {
            ctx->pc = 0x38BA70u;
            goto label_38ba70;
        }
    }
    ctx->pc = 0x38BA58u;
    // 0x38ba58: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x38ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x38ba5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ba60: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38BA60u;
    SET_GPR_U32(ctx, 31, 0x38BA68u);
    ctx->pc = 0x38BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BA60u;
    // 0x38ba64: 0x24a59510  addiu       $a1, $a1, -0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38BA60u, 0x38BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BA68u;
label_38ba68:
    // 0x38ba68: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x38BA68u;
    {
        const bool branch_taken_0x38ba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA68u;
        // 0x38ba6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba68) {
            ctx->pc = 0x38BB4Cu;
            goto label_38bb4c;
        }
    }
    ctx->pc = 0x38BA70u;
label_38ba70:
    // 0x38ba70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ba74: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x38BA74u;
    {
        const bool branch_taken_0x38ba74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA74u;
        // 0x38ba78: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba74) {
            ctx->pc = 0x38BAB4u;
            goto label_38bab4;
        }
    }
    ctx->pc = 0x38BA7Cu;
    // 0x38ba7c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x38ba7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38ba80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ba84: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x38ba84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x38ba88: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x38ba88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x38ba8c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x38ba8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38ba90: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x38ba90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ba94: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x38ba94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ba98: 0xc0e3050  jal         func_38C140
    ctx->pc = 0x38BA98u;
    SET_GPR_U32(ctx, 31, 0x38BAA0u);
    ctx->pc = 0x38BA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BA98u;
    // 0x38ba9c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C140u, 0x38BA98u, 0x38BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BAA0u;
label_38baa0:
    // 0x38baa0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_38baa4:
    if (ctx->pc == 0x38BAA4u) {
        ctx->pc = 0x38BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAA0u;
        // 0x38baa4: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BAA8u;
        goto label_38baa8;
    }
    ctx->pc = 0x38BAA0u;
    {
        const bool branch_taken_0x38baa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAA0u;
        // 0x38baa4: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38baa0) {
            ctx->pc = 0x38BAD8u;
            goto label_38bad8;
        }
    }
    ctx->pc = 0x38BAA8u;
label_38baa8:
    // 0x38baa8: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x38baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x38baac: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x38BAACu;
    {
        const bool branch_taken_0x38baac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAACu;
        // 0x38bab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38baac) {
            ctx->pc = 0x38BB4Cu;
            goto label_38bb4c;
        }
    }
    ctx->pc = 0x38BAB4u;
label_38bab4:
    // 0x38bab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38bab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bab8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38bab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38babc: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x38babcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x38bac0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x38bac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bac4: 0xc0e3352  jal         func_38CD48
    ctx->pc = 0x38BAC4u;
    SET_GPR_U32(ctx, 31, 0x38BACCu);
    ctx->pc = 0x38BAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BAC4u;
    // 0x38bac8: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD48u, 0x38BAC4u, 0x38BACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BACCu;
label_38bacc:
    // 0x38bacc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x38BACCu;
    {
        const bool branch_taken_0x38bacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BACCu;
        // 0x38bad0: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bacc) {
            ctx->pc = 0x38BB00u;
            goto label_38bb00;
        }
    }
    ctx->pc = 0x38BAD4u;
    // 0x38bad4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x38bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_38bad8:
    // 0x38bad8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x38bad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38badc: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x38badcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x38bae0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x38bae0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bae4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x38bae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x38bae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38bae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38baec: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x38baecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x38baf0: 0xc0e2b44  jal         func_38AD10
    ctx->pc = 0x38BAF0u;
    SET_GPR_U32(ctx, 31, 0x38BAF8u);
    ctx->pc = 0x38BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BAF0u;
    // 0x38baf4: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AD10u, 0x38BAF0u, 0x38BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BAF8u;
label_38baf8:
    // 0x38baf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38BAF8u;
    {
        const bool branch_taken_0x38baf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAF8u;
        // 0x38bafc: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38baf8) {
            ctx->pc = 0x38BB0Cu;
            goto label_38bb0c;
        }
    }
    ctx->pc = 0x38BB00u;
label_38bb00:
    // 0x38bb00: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x38bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_38bb04:
    // 0x38bb04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x38BB04u;
    {
        const bool branch_taken_0x38bb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB04u;
        // 0x38bb08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb04) {
            ctx->pc = 0x38BB4Cu;
            goto label_38bb4c;
        }
    }
    ctx->pc = 0x38BB0Cu;
label_38bb0c:
    // 0x38bb0c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x38BB0Cu;
    {
        const bool branch_taken_0x38bb0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bb0c) {
            ctx->pc = 0x38BB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BB0Cu;
            // 0x38bb10: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BB2Cu;
            goto label_38bb2c;
        }
    }
    ctx->pc = 0x38BB14u;
    // 0x38bb14: 0x8e050820  lw          $a1, 0x820($s0)
    ctx->pc = 0x38bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x38bb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38bb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bb1c: 0xc0e2cfa  jal         func_38B3E8
    ctx->pc = 0x38BB1Cu;
    SET_GPR_U32(ctx, 31, 0x38BB24u);
    ctx->pc = 0x38BB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BB1Cu;
    // 0x38bb20: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B3E8u, 0x38BB1Cu, 0x38BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BB24u;
label_38bb24:
    // 0x38bb24: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x38bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38bb28: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x38bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_38bb2c:
    // 0x38bb2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38bb30: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x38bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x38bb34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x38bb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x38bb38: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x38bb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x38bb3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38bb40: 0xae020820  sw          $v0, 0x820($s0)
    ctx->pc = 0x38bb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 2));
    // 0x38bb44: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x38BB44u;
    {
        const bool branch_taken_0x38bb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB44u;
        // 0x38bb48: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb44) {
            ctx->pc = 0x38B898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b898;
        }
    }
    ctx->pc = 0x38BB4Cu;
label_38bb4c:
    // 0x38bb4c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x38bb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_38bb50:
    // 0x38bb50: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x38bb50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38bb54: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x38bb54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38bb58: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x38bb58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38bb5c: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x38bb5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38bb60: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x38bb60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38bb64: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x38bb64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38bb68: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x38bb68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38bb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x38BB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB6Cu;
        // 0x38bb70: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BB74u;
    // 0x38bb74: 0x0  nop
    ctx->pc = 0x38bb74u;
    // NOP
    ctx->pc = 0x38bb78u;
}
