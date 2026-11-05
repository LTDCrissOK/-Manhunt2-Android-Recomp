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

// Function: sub_0015B868
// Address: 0x15b868 - 0x15b980
void sub_0015B868_0x15b868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B868_0x15b868");
#endif

    switch (ctx->pc) {
        case 0x15b8b8u: goto label_15b8b8;
        case 0x15b8dcu: goto label_15b8dc;
        case 0x15b8ecu: goto label_15b8ec;
        case 0x15b8fcu: goto label_15b8fc;
        case 0x15b908u: goto label_15b908;
        case 0x15b918u: goto label_15b918;
        case 0x15b928u: goto label_15b928;
        default: break;
    }

    ctx->pc = 0x15b868u;

    // 0x15b868: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15b868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15b86c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15b86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15b870: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15b870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15b874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15b874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b878: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15b87c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15b880: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15b880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15b884: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15b884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x15b888: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15b888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15b88c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x15b88cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x15b890: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B890u;
    {
        const bool branch_taken_0x15b890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B890u;
        // 0x15b894: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b890) {
            ctx->pc = 0x15B8A0u;
            goto label_15b8a0;
        }
    }
    ctx->pc = 0x15B898u;
    // 0x15b898: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x15B898u;
    {
        const bool branch_taken_0x15b898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B898u;
        // 0x15b89c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b898) {
            ctx->pc = 0x15B95Cu;
            goto label_15b95c;
        }
    }
    ctx->pc = 0x15B8A0u;
label_15b8a0:
    // 0x15b8a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15b8a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8a4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15b8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8a8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x15b8a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b8ac: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x15b8acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15b8b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15b8b4: 0x0  nop
    ctx->pc = 0x15b8b4u;
    // NOP
label_15b8b8:
    // 0x15b8b8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15b8bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b8c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b8c4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15B8C4u;
    {
        const bool branch_taken_0x15b8c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8C4u;
        // 0x15b8c8: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8c4) {
            ctx->pc = 0x15B938u;
            goto label_15b938;
        }
    }
    ctx->pc = 0x15B8CCu;
    // 0x15b8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8d0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x15b8d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b8d4: 0xc056b1e  jal         func_15AC78
    ctx->pc = 0x15B8D4u;
    SET_GPR_U32(ctx, 31, 0x15B8DCu);
    ctx->pc = 0x15B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B8D4u;
    // 0x15b8d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AC78u, 0x15B8D4u, 0x15B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B8DCu;
label_15b8dc:
    // 0x15b8dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15B8DCu;
    {
        const bool branch_taken_0x15b8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8DCu;
        // 0x15b8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8dc) {
            ctx->pc = 0x15B8FCu;
            goto label_15b8fc;
        }
    }
    ctx->pc = 0x15B8E4u;
    // 0x15b8e4: 0xc056afe  jal         func_15ABF8
    ctx->pc = 0x15B8E4u;
    SET_GPR_U32(ctx, 31, 0x15B8ECu);
    ctx->pc = 0x15B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B8E4u;
    // 0x15b8e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ABF8u, 0x15B8E4u, 0x15B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B8ECu;
label_15b8ec:
    // 0x15b8ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x15B8ECu;
    {
        const bool branch_taken_0x15b8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8ECu;
        // 0x15b8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8ec) {
            ctx->pc = 0x15B938u;
            goto label_15b938;
        }
    }
    ctx->pc = 0x15B8F4u;
    // 0x15b8f4: 0xc05810e  jal         func_160438
    ctx->pc = 0x15B8F4u;
    SET_GPR_U32(ctx, 31, 0x15B8FCu);
    ctx->pc = 0x15B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B8F4u;
    // 0x15b8f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160438u, 0x15B8F4u, 0x15B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B8FCu;
label_15b8fc:
    // 0x15b8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b900: 0xc057bfa  jal         func_15EFE8
    ctx->pc = 0x15B900u;
    SET_GPR_U32(ctx, 31, 0x15B908u);
    ctx->pc = 0x15B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B900u;
    // 0x15b904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EFE8u, 0x15B900u, 0x15B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B908u;
label_15b908:
    // 0x15b908: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15B908u;
    {
        const bool branch_taken_0x15b908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B908u;
        // 0x15b90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b908) {
            ctx->pc = 0x15B938u;
            goto label_15b938;
        }
    }
    ctx->pc = 0x15B910u;
    // 0x15b910: 0xc04f112  jal         func_13C448
    ctx->pc = 0x15B910u;
    SET_GPR_U32(ctx, 31, 0x15B918u);
    ctx->pc = 0x15B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B910u;
    // 0x15b914: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x15B910u, 0x15B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B918u;
label_15b918:
    // 0x15b918: 0x10550005  beq         $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B918u;
    {
        const bool branch_taken_0x15b918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x15B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B918u;
        // 0x15b91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b918) {
            ctx->pc = 0x15B930u;
            goto label_15b930;
        }
    }
    ctx->pc = 0x15B920u;
    // 0x15b920: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x15B920u;
    SET_GPR_U32(ctx, 31, 0x15B928u);
    ctx->pc = 0x15B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B920u;
    // 0x15b924: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x15B920u, 0x15B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B928u;
label_15b928:
    // 0x15b928: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B928u;
    {
        const bool branch_taken_0x15b928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x15B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B928u;
        // 0x15b92c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b928) {
            ctx->pc = 0x15B93Cu;
            goto label_15b93c;
        }
    }
    ctx->pc = 0x15B930u;
label_15b930:
    // 0x15b930: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15b930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15b934: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x15b934u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15b938:
    // 0x15b938: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x15b938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15b93c:
    // 0x15b93c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x15b93cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b940: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x15b940u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15b944: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B944u;
    {
        const bool branch_taken_0x15b944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B944u;
        // 0x15b948: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b944) {
            ctx->pc = 0x15B95Cu;
            goto label_15b95c;
        }
    }
    ctx->pc = 0x15B94Cu;
    // 0x15b94c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x15b94cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x15b950: 0x5662ffd9  bnel        $s3, $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x15B950u;
    {
        const bool branch_taken_0x15b950 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b950) {
            ctx->pc = 0x15B954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B950u;
            // 0x15b954: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b8b8;
        }
    }
    ctx->pc = 0x15B958u;
    // 0x15b958: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15b958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b95c:
    // 0x15b95c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15b95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15b960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15b964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b968: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15b968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b96c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15b96cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b970: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x15b970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15b974: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15b974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b978: 0x3e00008  jr          $ra
    ctx->pc = 0x15B978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B978u;
        // 0x15b97c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B980u;
}
