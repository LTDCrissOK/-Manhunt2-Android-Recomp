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

// Function: sub_0013B860
// Address: 0x13b860 - 0x13b988
void sub_0013B860_0x13b860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B860_0x13b860");
#endif

    switch (ctx->pc) {
        case 0x13b888u: goto label_13b888;
        case 0x13b8a4u: goto label_13b8a4;
        case 0x13b8b4u: goto label_13b8b4;
        case 0x13b8c4u: goto label_13b8c4;
        case 0x13b8e8u: goto label_13b8e8;
        case 0x13b900u: goto label_13b900;
        case 0x13b924u: goto label_13b924;
        case 0x13b940u: goto label_13b940;
        case 0x13b954u: goto label_13b954;
        case 0x13b968u: goto label_13b968;
        default: break;
    }

    ctx->pc = 0x13b860u;

    // 0x13b860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b864: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13b864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13b868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b86c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13b86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b870: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13b870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b874: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13b878: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13b87c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13b880: 0xc04e866  jal         func_13A198
    ctx->pc = 0x13B880u;
    SET_GPR_U32(ctx, 31, 0x13B888u);
    ctx->pc = 0x13B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B880u;
    // 0x13b884: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x13B880u, 0x13B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B888u;
label_13b888:
    // 0x13b888: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x13b888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13b88c: 0x10430036  beq         $v0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x13B88Cu;
    {
        const bool branch_taken_0x13b88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B88Cu;
        // 0x13b890: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b88c) {
            ctx->pc = 0x13B968u;
            goto label_13b968;
        }
    }
    ctx->pc = 0x13B894u;
    // 0x13b894: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b894u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b89c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x13B89Cu;
    SET_GPR_U32(ctx, 31, 0x13B8A4u);
    ctx->pc = 0x13B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B89Cu;
    // 0x13b8a0: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x13B89Cu, 0x13B8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8A4u;
label_13b8a4:
    // 0x13b8a4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x13b8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b8a8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b8a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b8ac: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x13B8ACu;
    SET_GPR_U32(ctx, 31, 0x13B8B4u);
    ctx->pc = 0x13B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8ACu;
    // 0x13b8b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x13B8ACu, 0x13B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8B4u;
label_13b8b4:
    // 0x13b8b4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b8b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b8b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8bc: 0xc04e860  jal         func_13A180
    ctx->pc = 0x13B8BCu;
    SET_GPR_U32(ctx, 31, 0x13B8C4u);
    ctx->pc = 0x13B8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8BCu;
    // 0x13b8c0: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x13B8BCu, 0x13B8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8C4u;
label_13b8c4:
    // 0x13b8c4: 0x8e430ab0  lw          $v1, 0xAB0($s2)
    ctx->pc = 0x13b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2736)));
    // 0x13b8c8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13b8cc: 0x24549a08  addiu       $s4, $v0, -0x65F8
    ctx->pc = 0x13b8ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13b8d0: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b8d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b8d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13b8d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8dc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x13b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x13b8e0: 0xc04d930  jal         func_1364C0
    ctx->pc = 0x13B8E0u;
    SET_GPR_U32(ctx, 31, 0x13B8E8u);
    ctx->pc = 0x13B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8E0u;
    // 0x13b8e4: 0x8c700108  lw          $s0, 0x108($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364C0u, 0x13B8E0u, 0x13B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8E8u;
label_13b8e8:
    // 0x13b8e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B8E8u;
    {
        const bool branch_taken_0x13b8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8E8u;
        // 0x13b8ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8e8) {
            ctx->pc = 0x13B8F8u;
            goto label_13b8f8;
        }
    }
    ctx->pc = 0x13B8F0u;
    // 0x13b8f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x13b8f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b8f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b8f8:
    // 0x13b8f8: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x13B8F8u;
    SET_GPR_U32(ctx, 31, 0x13B900u);
    ctx->pc = 0x13B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B8F8u;
    // 0x13b8fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x13B8F8u, 0x13B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B900u;
label_13b900:
    // 0x13b900: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x13b900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b904: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x13b904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13b908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b90c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13b90cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b910: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x13b910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b91c: 0xc04daca  jal         func_136B28
    ctx->pc = 0x13B91Cu;
    SET_GPR_U32(ctx, 31, 0x13B924u);
    ctx->pc = 0x13B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B91Cu;
    // 0x13b920: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x13B91Cu, 0x13B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B924u;
label_13b924:
    // 0x13b924: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b924u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b92c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13b930: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13b930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13b934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13b934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b938: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x13B938u;
    SET_GPR_U32(ctx, 31, 0x13B940u);
    ctx->pc = 0x13B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B938u;
    // 0x13b93c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x13B938u, 0x13B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B940u;
label_13b940:
    // 0x13b940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b948: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13b948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b94c: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x13B94Cu;
    SET_GPR_U32(ctx, 31, 0x13B954u);
    ctx->pc = 0x13B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B94Cu;
    // 0x13b950: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x13B94Cu, 0x13B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B954u;
label_13b954:
    // 0x13b954: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x13b954u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13b958: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x13b958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x13b95c: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x13b95cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x13b960: 0xc043c56  jal         func_10F158
    ctx->pc = 0x13B960u;
    SET_GPR_U32(ctx, 31, 0x13B968u);
    ctx->pc = 0x13B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B960u;
    // 0x13b964: 0x8e04020c  lw          $a0, 0x20C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x13B960u, 0x13B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B968u;
label_13b968:
    // 0x13b968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b96c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b970: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13b970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b974: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13b974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b978: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13b978u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b97c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13b97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13b980: 0x3e00008  jr          $ra
    ctx->pc = 0x13B980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B980u;
        // 0x13b984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B988u;
}
