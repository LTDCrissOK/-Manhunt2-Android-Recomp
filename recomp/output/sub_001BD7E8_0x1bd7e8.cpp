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

// Function: sub_001BD7E8
// Address: 0x1bd7e8 - 0x1bda20
void sub_001BD7E8_0x1bd7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD7E8_0x1bd7e8");
#endif

    switch (ctx->pc) {
        case 0x1bd7e8u: goto label_1bd7e8;
        case 0x1bd7ecu: goto label_1bd7ec;
        case 0x1bd7f0u: goto label_1bd7f0;
        case 0x1bd7f4u: goto label_1bd7f4;
        case 0x1bd7f8u: goto label_1bd7f8;
        case 0x1bd7fcu: goto label_1bd7fc;
        case 0x1bd800u: goto label_1bd800;
        case 0x1bd804u: goto label_1bd804;
        case 0x1bd808u: goto label_1bd808;
        case 0x1bd80cu: goto label_1bd80c;
        case 0x1bd810u: goto label_1bd810;
        case 0x1bd814u: goto label_1bd814;
        case 0x1bd818u: goto label_1bd818;
        case 0x1bd81cu: goto label_1bd81c;
        case 0x1bd820u: goto label_1bd820;
        case 0x1bd824u: goto label_1bd824;
        case 0x1bd828u: goto label_1bd828;
        case 0x1bd82cu: goto label_1bd82c;
        case 0x1bd830u: goto label_1bd830;
        case 0x1bd834u: goto label_1bd834;
        case 0x1bd838u: goto label_1bd838;
        case 0x1bd83cu: goto label_1bd83c;
        case 0x1bd840u: goto label_1bd840;
        case 0x1bd844u: goto label_1bd844;
        case 0x1bd848u: goto label_1bd848;
        case 0x1bd84cu: goto label_1bd84c;
        case 0x1bd850u: goto label_1bd850;
        case 0x1bd854u: goto label_1bd854;
        case 0x1bd858u: goto label_1bd858;
        case 0x1bd85cu: goto label_1bd85c;
        case 0x1bd860u: goto label_1bd860;
        case 0x1bd864u: goto label_1bd864;
        case 0x1bd868u: goto label_1bd868;
        case 0x1bd86cu: goto label_1bd86c;
        case 0x1bd870u: goto label_1bd870;
        case 0x1bd874u: goto label_1bd874;
        case 0x1bd878u: goto label_1bd878;
        case 0x1bd87cu: goto label_1bd87c;
        case 0x1bd880u: goto label_1bd880;
        case 0x1bd884u: goto label_1bd884;
        case 0x1bd888u: goto label_1bd888;
        case 0x1bd88cu: goto label_1bd88c;
        case 0x1bd890u: goto label_1bd890;
        case 0x1bd894u: goto label_1bd894;
        case 0x1bd898u: goto label_1bd898;
        case 0x1bd89cu: goto label_1bd89c;
        case 0x1bd8a0u: goto label_1bd8a0;
        case 0x1bd8a4u: goto label_1bd8a4;
        case 0x1bd8a8u: goto label_1bd8a8;
        case 0x1bd8acu: goto label_1bd8ac;
        case 0x1bd8b0u: goto label_1bd8b0;
        case 0x1bd8b4u: goto label_1bd8b4;
        case 0x1bd8b8u: goto label_1bd8b8;
        case 0x1bd8bcu: goto label_1bd8bc;
        case 0x1bd8c0u: goto label_1bd8c0;
        case 0x1bd8c4u: goto label_1bd8c4;
        case 0x1bd8c8u: goto label_1bd8c8;
        case 0x1bd8ccu: goto label_1bd8cc;
        case 0x1bd8d0u: goto label_1bd8d0;
        case 0x1bd8d4u: goto label_1bd8d4;
        case 0x1bd8d8u: goto label_1bd8d8;
        case 0x1bd8dcu: goto label_1bd8dc;
        case 0x1bd8e0u: goto label_1bd8e0;
        case 0x1bd8e4u: goto label_1bd8e4;
        case 0x1bd8e8u: goto label_1bd8e8;
        case 0x1bd8ecu: goto label_1bd8ec;
        case 0x1bd8f0u: goto label_1bd8f0;
        case 0x1bd8f4u: goto label_1bd8f4;
        case 0x1bd8f8u: goto label_1bd8f8;
        case 0x1bd8fcu: goto label_1bd8fc;
        case 0x1bd900u: goto label_1bd900;
        case 0x1bd904u: goto label_1bd904;
        case 0x1bd908u: goto label_1bd908;
        case 0x1bd90cu: goto label_1bd90c;
        case 0x1bd910u: goto label_1bd910;
        case 0x1bd914u: goto label_1bd914;
        case 0x1bd918u: goto label_1bd918;
        case 0x1bd91cu: goto label_1bd91c;
        case 0x1bd920u: goto label_1bd920;
        case 0x1bd924u: goto label_1bd924;
        case 0x1bd928u: goto label_1bd928;
        case 0x1bd92cu: goto label_1bd92c;
        case 0x1bd930u: goto label_1bd930;
        case 0x1bd934u: goto label_1bd934;
        case 0x1bd938u: goto label_1bd938;
        case 0x1bd93cu: goto label_1bd93c;
        case 0x1bd940u: goto label_1bd940;
        case 0x1bd944u: goto label_1bd944;
        case 0x1bd948u: goto label_1bd948;
        case 0x1bd94cu: goto label_1bd94c;
        case 0x1bd950u: goto label_1bd950;
        case 0x1bd954u: goto label_1bd954;
        case 0x1bd958u: goto label_1bd958;
        case 0x1bd95cu: goto label_1bd95c;
        case 0x1bd960u: goto label_1bd960;
        case 0x1bd964u: goto label_1bd964;
        case 0x1bd968u: goto label_1bd968;
        case 0x1bd96cu: goto label_1bd96c;
        case 0x1bd970u: goto label_1bd970;
        case 0x1bd974u: goto label_1bd974;
        case 0x1bd978u: goto label_1bd978;
        case 0x1bd97cu: goto label_1bd97c;
        case 0x1bd980u: goto label_1bd980;
        case 0x1bd984u: goto label_1bd984;
        case 0x1bd988u: goto label_1bd988;
        case 0x1bd98cu: goto label_1bd98c;
        case 0x1bd990u: goto label_1bd990;
        case 0x1bd994u: goto label_1bd994;
        case 0x1bd998u: goto label_1bd998;
        case 0x1bd99cu: goto label_1bd99c;
        case 0x1bd9a0u: goto label_1bd9a0;
        case 0x1bd9a4u: goto label_1bd9a4;
        case 0x1bd9a8u: goto label_1bd9a8;
        case 0x1bd9acu: goto label_1bd9ac;
        case 0x1bd9b0u: goto label_1bd9b0;
        case 0x1bd9b4u: goto label_1bd9b4;
        case 0x1bd9b8u: goto label_1bd9b8;
        case 0x1bd9bcu: goto label_1bd9bc;
        case 0x1bd9c0u: goto label_1bd9c0;
        case 0x1bd9c4u: goto label_1bd9c4;
        case 0x1bd9c8u: goto label_1bd9c8;
        case 0x1bd9ccu: goto label_1bd9cc;
        case 0x1bd9d0u: goto label_1bd9d0;
        case 0x1bd9d4u: goto label_1bd9d4;
        case 0x1bd9d8u: goto label_1bd9d8;
        case 0x1bd9dcu: goto label_1bd9dc;
        case 0x1bd9e0u: goto label_1bd9e0;
        case 0x1bd9e4u: goto label_1bd9e4;
        case 0x1bd9e8u: goto label_1bd9e8;
        case 0x1bd9ecu: goto label_1bd9ec;
        case 0x1bd9f0u: goto label_1bd9f0;
        case 0x1bd9f4u: goto label_1bd9f4;
        case 0x1bd9f8u: goto label_1bd9f8;
        case 0x1bd9fcu: goto label_1bd9fc;
        case 0x1bda00u: goto label_1bda00;
        case 0x1bda04u: goto label_1bda04;
        case 0x1bda08u: goto label_1bda08;
        case 0x1bda0cu: goto label_1bda0c;
        case 0x1bda10u: goto label_1bda10;
        case 0x1bda14u: goto label_1bda14;
        case 0x1bda18u: goto label_1bda18;
        case 0x1bda1cu: goto label_1bda1c;
        default: break;
    }

    ctx->pc = 0x1bd7e8u;

label_1bd7e8:
    // 0x1bd7e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bd7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1bd7ec:
    // 0x1bd7ec: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1bd7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1bd7f0:
    // 0x1bd7f0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1bd7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1bd7f4:
    // 0x1bd7f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bd7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd7f8:
    // 0x1bd7f8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1bd7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1bd7fc:
    // 0x1bd7fc: 0x263200f0  addiu       $s2, $s1, 0xF0
    ctx->pc = 0x1bd7fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_1bd800:
    // 0x1bd800: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1bd800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_1bd804:
    // 0x1bd804: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1bd804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1bd808:
    // 0x1bd808: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1bd808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_1bd80c:
    // 0x1bd80c: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x1bd80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_1bd810:
    // 0x1bd810: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1bd810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1bd814:
    // 0x1bd814: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
label_1bd818:
    if (ctx->pc == 0x1BD818u) {
        ctx->pc = 0x1BD818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD814u;
        // 0x1bd818: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD81Cu;
        goto label_1bd81c;
    }
    ctx->pc = 0x1BD814u;
    {
        const bool branch_taken_0x1bd814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD814u;
        // 0x1bd818: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd814) {
            ctx->pc = 0x1BD8E8u;
            goto label_1bd8e8;
        }
    }
    ctx->pc = 0x1BD81Cu;
label_1bd81c:
    // 0x1bd81c: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1bd81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_1bd820:
    // 0x1bd820: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
label_1bd824:
    if (ctx->pc == 0x1BD824u) {
        ctx->pc = 0x1BD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD820u;
        // 0x1bd824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD828u;
        goto label_1bd828;
    }
    ctx->pc = 0x1BD820u;
    {
        const bool branch_taken_0x1bd820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD820u;
        // 0x1bd824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd820) {
            ctx->pc = 0x1BDA00u;
            goto label_1bda00;
        }
    }
    ctx->pc = 0x1BD828u;
label_1bd828:
    // 0x1bd828: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bd828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bd82c:
    // 0x1bd82c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1bd82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1bd830:
    // 0x1bd830: 0x40f809  jalr        $v0
label_1bd834:
    if (ctx->pc == 0x1BD834u) {
        ctx->pc = 0x1BD838u;
        goto label_1bd838;
    }
    ctx->pc = 0x1BD830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD838u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD830u, 0x1BD838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BD838u;
label_1bd838:
    // 0x1bd838: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1bd838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1bd83c:
    // 0x1bd83c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd840:
    // 0x1bd840: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1bd844:
    if (ctx->pc == 0x1BD844u) {
        ctx->pc = 0x1BD848u;
        goto label_1bd848;
    }
    ctx->pc = 0x1BD840u;
    {
        const bool branch_taken_0x1bd840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd840) {
            ctx->pc = 0x1BD85Cu;
            goto label_1bd85c;
        }
    }
    ctx->pc = 0x1BD848u;
label_1bd848:
    // 0x1bd848: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1bd848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1bd84c:
    // 0x1bd84c: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1bd84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_1bd850:
    // 0x1bd850: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1bd850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1bd854:
    // 0x1bd854: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bd858:
    if (ctx->pc == 0x1BD858u) {
        ctx->pc = 0x1BD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD854u;
        // 0x1bd858: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD85Cu;
        goto label_1bd85c;
    }
    ctx->pc = 0x1BD854u;
    {
        const bool branch_taken_0x1bd854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD854u;
        // 0x1bd858: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd854) {
            ctx->pc = 0x1BD880u;
            goto label_1bd880;
        }
    }
    ctx->pc = 0x1BD85Cu;
label_1bd85c:
    // 0x1bd85c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1bd860:
    if (ctx->pc == 0x1BD860u) {
        ctx->pc = 0x1BD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD85Cu;
        // 0x1bd860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD864u;
        goto label_1bd864;
    }
    ctx->pc = 0x1BD85Cu;
    {
        const bool branch_taken_0x1bd85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD85Cu;
        // 0x1bd860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd85c) {
            ctx->pc = 0x1BD878u;
            goto label_1bd878;
        }
    }
    ctx->pc = 0x1BD864u;
label_1bd864:
    // 0x1bd864: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bd864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bd868:
    // 0x1bd868: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1bd86c:
    if (ctx->pc == 0x1BD86Cu) {
        ctx->pc = 0x1BD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD868u;
        // 0x1bd86c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD870u;
        goto label_1bd870;
    }
    ctx->pc = 0x1BD868u;
    {
        const bool branch_taken_0x1bd868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD868u;
        // 0x1bd86c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd868) {
            ctx->pc = 0x1BD878u;
            goto label_1bd878;
        }
    }
    ctx->pc = 0x1BD870u;
label_1bd870:
    // 0x1bd870: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1bd874:
    if (ctx->pc == 0x1BD874u) {
        ctx->pc = 0x1BD874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD870u;
        // 0x1bd874: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD878u;
        goto label_1bd878;
    }
    ctx->pc = 0x1BD870u;
    {
        const bool branch_taken_0x1bd870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD870u;
        // 0x1bd874: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd870) {
            ctx->pc = 0x1BD880u;
            goto label_1bd880;
        }
    }
    ctx->pc = 0x1BD878u;
label_1bd878:
    // 0x1bd878: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bd878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd87c:
    // 0x1bd87c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1bd87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bd880:
    // 0x1bd880: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
label_1bd884:
    if (ctx->pc == 0x1BD884u) {
        ctx->pc = 0x1BD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD880u;
        // 0x1bd884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD888u;
        goto label_1bd888;
    }
    ctx->pc = 0x1BD880u;
    {
        const bool branch_taken_0x1bd880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD880u;
        // 0x1bd884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd880) {
            ctx->pc = 0x1BDA00u;
            goto label_1bda00;
        }
    }
    ctx->pc = 0x1BD888u;
label_1bd888:
    // 0x1bd888: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1bd888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1bd88c:
    // 0x1bd88c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1bd88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1bd890:
    // 0x1bd890: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1bd894:
    if (ctx->pc == 0x1BD894u) {
        ctx->pc = 0x1BD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD890u;
        // 0x1bd894: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD898u;
        goto label_1bd898;
    }
    ctx->pc = 0x1BD890u;
    {
        const bool branch_taken_0x1bd890 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD890u;
        // 0x1bd894: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd890) {
            ctx->pc = 0x1BD8ACu;
            goto label_1bd8ac;
        }
    }
    ctx->pc = 0x1BD898u;
label_1bd898:
    // 0x1bd898: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bd898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bd89c:
    // 0x1bd89c: 0x0  nop
    ctx->pc = 0x1bd89cu;
    // NOP
label_1bd8a0:
    // 0x1bd8a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd8a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bd8a4:
    // 0x1bd8a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bd8a8:
    if (ctx->pc == 0x1BD8A8u) {
        ctx->pc = 0x1BD8ACu;
        goto label_1bd8ac;
    }
    ctx->pc = 0x1BD8A4u;
    {
        const bool branch_taken_0x1bd8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8a4) {
            ctx->pc = 0x1BD8C4u;
            goto label_1bd8c4;
        }
    }
    ctx->pc = 0x1BD8ACu;
label_1bd8ac:
    // 0x1bd8ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bd8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bd8b0:
    // 0x1bd8b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bd8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1bd8b4:
    // 0x1bd8b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bd8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bd8b8:
    // 0x1bd8b8: 0x0  nop
    ctx->pc = 0x1bd8b8u;
    // NOP
label_1bd8bc:
    // 0x1bd8bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd8bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bd8c0:
    // 0x1bd8c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bd8c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bd8c4:
    // 0x1bd8c4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bd8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1bd8c8:
    // 0x1bd8c8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bd8c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bd8cc:
    // 0x1bd8cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd8d0:
    // 0x1bd8d0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1bd8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1bd8d4:
    // 0x1bd8d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bd8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bd8d8:
    // 0x1bd8d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1bd8dc:
    // 0x1bd8dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bd8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bd8e0:
    // 0x1bd8e0: 0x10000046  b           . + 4 + (0x46 << 2)
label_1bd8e4:
    if (ctx->pc == 0x1BD8E4u) {
        ctx->pc = 0x1BD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8E0u;
        // 0x1bd8e4: 0xe6200364  swc1        $f0, 0x364($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD8E8u;
        goto label_1bd8e8;
    }
    ctx->pc = 0x1BD8E0u;
    {
        const bool branch_taken_0x1bd8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8E0u;
        // 0x1bd8e4: 0xe6200364  swc1        $f0, 0x364($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8e0) {
            ctx->pc = 0x1BD9FCu;
            goto label_1bd9fc;
        }
    }
    ctx->pc = 0x1BD8E8u;
label_1bd8e8:
    // 0x1bd8e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bd8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1bd8ec:
    // 0x1bd8ec: 0x24501380  addiu       $s0, $v0, 0x1380
    ctx->pc = 0x1bd8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
label_1bd8f0:
    // 0x1bd8f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bd8f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd8f4:
    // 0x1bd8f4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1bd8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bd8f8:
    // 0x1bd8f8: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x1bd8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_1bd8fc:
    // 0x1bd8fc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1bd8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1bd900:
    // 0x1bd900: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1bd900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bd904:
    // 0x1bd904: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bd904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1bd908:
    // 0x1bd908: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1bd908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1bd90c:
    // 0x1bd90c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bd90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1bd910:
    // 0x1bd910: 0xc0f6a96  jal         func_3DAA58
label_1bd914:
    if (ctx->pc == 0x1BD914u) {
        ctx->pc = 0x1BD914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD910u;
        // 0x1bd914: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD918u;
        goto label_1bd918;
    }
    ctx->pc = 0x1BD910u;
    SET_GPR_U32(ctx, 31, 0x1BD918u);
    ctx->pc = 0x1BD914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD910u;
    // 0x1bd914: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BD910u, 0x1BD918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD918u;
label_1bd918:
    // 0x1bd918: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1bd918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1bd91c:
    // 0x1bd91c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bd91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bd920:
    // 0x1bd920: 0xc440c68c  lwc1        $f0, -0x3974($v0)
    ctx->pc = 0x1bd920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd924:
    // 0x1bd924: 0x262501e0  addiu       $a1, $s1, 0x1E0
    ctx->pc = 0x1bd924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_1bd928:
    // 0x1bd928: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bd928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bd92c:
    // 0x1bd92c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1bd92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_1bd930:
    // 0x1bd930: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1bd930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1bd934:
    // 0x1bd934: 0xc06fc2a  jal         func_1BF0A8
label_1bd938:
    if (ctx->pc == 0x1BD938u) {
        ctx->pc = 0x1BD938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD934u;
        // 0x1bd938: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD93Cu;
        goto label_1bd93c;
    }
    ctx->pc = 0x1BD934u;
    SET_GPR_U32(ctx, 31, 0x1BD93Cu);
    ctx->pc = 0x1BD938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD934u;
    // 0x1bd938: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0A8u, 0x1BD934u, 0x1BD93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD93Cu;
label_1bd93c:
    // 0x1bd93c: 0xc06fcc8  jal         func_1BF320
label_1bd940:
    if (ctx->pc == 0x1BD940u) {
        ctx->pc = 0x1BD940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD93Cu;
        // 0x1bd940: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD944u;
        goto label_1bd944;
    }
    ctx->pc = 0x1BD93Cu;
    SET_GPR_U32(ctx, 31, 0x1BD944u);
    ctx->pc = 0x1BD940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD93Cu;
    // 0x1bd940: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF320u, 0x1BD93Cu, 0x1BD944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD944u;
label_1bd944:
    // 0x1bd944: 0x8e2600e4  lw          $a2, 0xE4($s1)
    ctx->pc = 0x1bd944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_1bd948:
    // 0x1bd948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bd94c:
    // 0x1bd94c: 0xc06f688  jal         func_1BDA20
label_1bd950:
    if (ctx->pc == 0x1BD950u) {
        ctx->pc = 0x1BD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD94Cu;
        // 0x1bd950: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD954u;
        goto label_1bd954;
    }
    ctx->pc = 0x1BD94Cu;
    SET_GPR_U32(ctx, 31, 0x1BD954u);
    ctx->pc = 0x1BD950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD94Cu;
    // 0x1bd950: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA20u, 0x1BD94Cu, 0x1BD954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD954u;
label_1bd954:
    // 0x1bd954: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1bd958:
    if (ctx->pc == 0x1BD958u) {
        ctx->pc = 0x1BD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD954u;
        // 0x1bd958: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD95Cu;
        goto label_1bd95c;
    }
    ctx->pc = 0x1BD954u;
    {
        const bool branch_taken_0x1bd954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD954u;
        // 0x1bd958: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd954) {
            ctx->pc = 0x1BD9DCu;
            goto label_1bd9dc;
        }
    }
    ctx->pc = 0x1BD95Cu;
label_1bd95c:
    // 0x1bd95c: 0x26300310  addiu       $s0, $s1, 0x310
    ctx->pc = 0x1bd95cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_1bd960:
    // 0x1bd960: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bd960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bd964:
    // 0x1bd964: 0x26320130  addiu       $s2, $s1, 0x130
    ctx->pc = 0x1bd964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_1bd968:
    // 0x1bd968: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1bd96c:
    if (ctx->pc == 0x1BD96Cu) {
        ctx->pc = 0x1BD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD968u;
        // 0x1bd96c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD970u;
        goto label_1bd970;
    }
    ctx->pc = 0x1BD968u;
    {
        const bool branch_taken_0x1bd968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD968u;
        // 0x1bd96c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd968) {
            ctx->pc = 0x1BD990u;
            goto label_1bd990;
        }
    }
    ctx->pc = 0x1BD970u;
label_1bd970:
    // 0x1bd970: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1bd970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bd974:
    // 0x1bd974: 0x0  nop
    ctx->pc = 0x1bd974u;
    // NOP
label_1bd978:
    // 0x1bd978: 0xc0f61e8  jal         func_3D87A0
label_1bd97c:
    if (ctx->pc == 0x1BD97Cu) {
        ctx->pc = 0x1BD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD978u;
        // 0x1bd97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD980u;
        goto label_1bd980;
    }
    ctx->pc = 0x1BD978u;
    SET_GPR_U32(ctx, 31, 0x1BD980u);
    ctx->pc = 0x1BD97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD978u;
    // 0x1bd97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1BD978u, 0x1BD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD980u;
label_1bd980:
    // 0x1bd980: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bd980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bd984:
    // 0x1bd984: 0x0  nop
    ctx->pc = 0x1bd984u;
    // NOP
label_1bd988:
    // 0x1bd988: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1bd98c:
    if (ctx->pc == 0x1BD98Cu) {
        ctx->pc = 0x1BD98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD988u;
        // 0x1bd98c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD990u;
        goto label_1bd990;
    }
    ctx->pc = 0x1BD988u;
    {
        const bool branch_taken_0x1bd988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd988) {
            ctx->pc = 0x1BD98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD988u;
            // 0x1bd98c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd978;
        }
    }
    ctx->pc = 0x1BD990u;
label_1bd990:
    // 0x1bd990: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1bd990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1bd994:
    // 0x1bd994: 0x26831380  addiu       $v1, $s4, 0x1380
    ctx->pc = 0x1bd994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4992));
label_1bd998:
    // 0x1bd998: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bd998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1bd99c:
    // 0x1bd99c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd9a0:
    // 0x1bd9a0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1bd9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1bd9a4:
    // 0x1bd9a4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1bd9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1bd9a8:
    // 0x1bd9a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bd9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1bd9ac:
    // 0x1bd9ac: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1bd9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1bd9b0:
    // 0x1bd9b0: 0xc62000f0  lwc1        $f0, 0xF0($s1)
    ctx->pc = 0x1bd9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd9b4:
    // 0x1bd9b4: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x1bd9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
label_1bd9b8:
    // 0x1bd9b8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1bd9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bd9bc:
    // 0x1bd9bc: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1bd9bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1bd9c0:
    // 0x1bd9c0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1bd9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd9c4:
    // 0x1bd9c4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1bd9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1bd9c8:
    // 0x1bd9c8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1bd9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1bd9cc:
    // 0x1bd9cc: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1bd9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_1bd9d0:
    // 0x1bd9d0: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x1bd9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1bd9d4:
    // 0x1bd9d4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bd9d8:
    if (ctx->pc == 0x1BD9D8u) {
        ctx->pc = 0x1BD9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9D4u;
        // 0x1bd9d8: 0xae440014  sw          $a0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD9DCu;
        goto label_1bd9dc;
    }
    ctx->pc = 0x1BD9D4u;
    {
        const bool branch_taken_0x1bd9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9D4u;
        // 0x1bd9d8: 0xae440014  sw          $a0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9d4) {
            ctx->pc = 0x1BDA00u;
            goto label_1bda00;
        }
    }
    ctx->pc = 0x1BD9DCu;
label_1bd9dc:
    // 0x1bd9dc: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1bd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_1bd9e0:
    // 0x1bd9e0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1bd9e4:
    if (ctx->pc == 0x1BD9E4u) {
        ctx->pc = 0x1BD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9E0u;
        // 0x1bd9e4: 0xafb00044  sw          $s0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD9E8u;
        goto label_1bd9e8;
    }
    ctx->pc = 0x1BD9E0u;
    {
        const bool branch_taken_0x1bd9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9e0) {
            ctx->pc = 0x1BD9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD9E0u;
            // 0x1bd9e4: 0xafb00044  sw          $s0, 0x44($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD9FCu;
            goto label_1bd9fc;
        }
    }
    ctx->pc = 0x1BD9E8u;
label_1bd9e8:
    // 0x1bd9e8: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bd9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bd9ec:
    // 0x1bd9ec: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1bd9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1bd9f0:
    // 0x1bd9f0: 0x40f809  jalr        $v0
label_1bd9f4:
    if (ctx->pc == 0x1BD9F4u) {
        ctx->pc = 0x1BD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9F0u;
        // 0x1bd9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD9F8u;
        goto label_1bd9f8;
    }
    ctx->pc = 0x1BD9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD9F8u);
        ctx->pc = 0x1BD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9F0u;
        // 0x1bd9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD9F0u, 0x1BD9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BD9F8u;
label_1bd9f8:
    // 0x1bd9f8: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x1bd9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_1bd9fc:
    // 0x1bd9fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bd9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bda00:
    // 0x1bda00: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1bda00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bda04:
    // 0x1bda04: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1bda04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1bda08:
    // 0x1bda08: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1bda08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1bda0c:
    // 0x1bda0c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1bda0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1bda10:
    // 0x1bda10: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1bda10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bda14:
    // 0x1bda14: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1bda14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1bda18:
    // 0x1bda18: 0x3e00008  jr          $ra
label_1bda1c:
    if (ctx->pc == 0x1BDA1Cu) {
        ctx->pc = 0x1BDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA18u;
        // 0x1bda1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDA20u;
        goto label_fallthrough_0x1bda18;
    }
    ctx->pc = 0x1BDA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA18u;
        // 0x1bda1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bda18:
    ctx->pc = 0x1BDA20u;
}
