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

// Function: sub_001C7868
// Address: 0x1c7868 - 0x1c79a0
void sub_001C7868_0x1c7868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7868_0x1c7868");
#endif

    switch (ctx->pc) {
        case 0x1c78f8u: goto label_1c78f8;
        case 0x1c7920u: goto label_1c7920;
        case 0x1c7940u: goto label_1c7940;
        case 0x1c796cu: goto label_1c796c;
        default: break;
    }

    ctx->pc = 0x1c7868u;

    // 0x1c7868: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c7868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c786c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c786cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c7870: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c7870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c7874: 0x24910034  addiu       $s1, $a0, 0x34
    ctx->pc = 0x1c7874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x1c7878: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c7878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c787c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c7880: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c7880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c7884: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c7884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1c7888: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c7888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c788c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1c788cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c7890: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c7890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c7894: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7894u;
    {
        const bool branch_taken_0x1c7894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7894u;
        // 0x1c7898: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7894) {
            ctx->pc = 0x1C78B4u;
            goto label_1c78b4;
        }
    }
    ctx->pc = 0x1C789Cu;
    // 0x1c789c: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C789Cu;
    {
        const bool branch_taken_0x1c789c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c789c) {
            ctx->pc = 0x1C78A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C789Cu;
            // 0x1c78a0: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C78A4u;
            goto label_1c78a4;
        }
    }
    ctx->pc = 0x1C78A4u;
label_1c78a4:
    // 0x1c78a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c78a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c78ac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1C78ACu;
    {
        const bool branch_taken_0x1c78ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78ACu;
        // 0x1c78b0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78ac) {
            ctx->pc = 0x1C797Cu;
            goto label_1c797c;
        }
    }
    ctx->pc = 0x1C78B4u;
label_1c78b4:
    // 0x1c78b4: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1c78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1c78b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78bc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1c78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1c78c0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1c78c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1c78c4: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x1c78c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1c78c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c78cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c78d0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c78d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c78d4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1c78d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1c78d8: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x1c78d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x1c78dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c78dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c78e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c78e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C78E4u;
    {
        const bool branch_taken_0x1c78e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78E4u;
        // 0x1c78e8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78e4) {
            ctx->pc = 0x1C7900u;
            goto label_1c7900;
        }
    }
    ctx->pc = 0x1C78ECu;
    // 0x1c78ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c78ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78f0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1C78F0u;
    SET_GPR_U32(ctx, 31, 0x1C78F8u);
    ctx->pc = 0x1C78F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78F0u;
    // 0x1c78f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1C78F0u, 0x1C78F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78F8u;
label_1c78f8:
    // 0x1c78f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C78F8u;
    {
        const bool branch_taken_0x1c78f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78F8u;
        // 0x1c78fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78f8) {
            ctx->pc = 0x1C7908u;
            goto label_1c7908;
        }
    }
    ctx->pc = 0x1C7900u;
label_1c7900:
    // 0x1c7900: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c7900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7904: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c7904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7908:
    // 0x1c7908: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1c7908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c790c: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C790Cu;
    {
        const bool branch_taken_0x1c790c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C790Cu;
        // 0x1c7910: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c790c) {
            ctx->pc = 0x1C7928u;
            goto label_1c7928;
        }
    }
    ctx->pc = 0x1C7914u;
    // 0x1c7914: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c7914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7918: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1C7918u;
    SET_GPR_U32(ctx, 31, 0x1C7920u);
    ctx->pc = 0x1C791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7918u;
    // 0x1c791c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1C7918u, 0x1C7920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7920u;
label_1c7920:
    // 0x1c7920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7920u;
    {
        const bool branch_taken_0x1c7920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7920u;
        // 0x1c7924: 0x508021  addu        $s0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7920) {
            ctx->pc = 0x1C792Cu;
            goto label_1c792c;
        }
    }
    ctx->pc = 0x1C7928u;
label_1c7928:
    // 0x1c7928: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1c7928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c792c:
    // 0x1c792c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1c792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7930: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c7930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7934: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7934u;
    {
        const bool branch_taken_0x1c7934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7934) {
            ctx->pc = 0x1C7938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7934u;
            // 0x1c7938: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C795Cu;
            goto label_1c795c;
        }
    }
    ctx->pc = 0x1C793Cu;
    // 0x1c793c: 0x0  nop
    ctx->pc = 0x1c793cu;
    // NOP
label_1c7940:
    // 0x1c7940: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1c7940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c7944: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c7944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c7948: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c7948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c794c: 0x0  nop
    ctx->pc = 0x1c794cu;
    // NOP
    // 0x1c7950: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7950u;
    {
        const bool branch_taken_0x1c7950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7950u;
        // 0x1c7954: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7950) {
            ctx->pc = 0x1C7940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7940;
        }
    }
    ctx->pc = 0x1C7958u;
    // 0x1c7958: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c7958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c795c:
    // 0x1c795c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C795Cu;
    {
        const bool branch_taken_0x1c795c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C795Cu;
        // 0x1c7960: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c795c) {
            ctx->pc = 0x1C7970u;
            goto label_1c7970;
        }
    }
    ctx->pc = 0x1C7964u;
    // 0x1c7964: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C7964u;
    SET_GPR_U32(ctx, 31, 0x1C796Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C7964u, 0x1C796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C796Cu;
label_1c796c:
    // 0x1c796c: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x1c796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_1c7970:
    // 0x1c7970: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c7970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c7974: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c7974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1c7978: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1c7978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_1c797c:
    // 0x1c797c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c797cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7980: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c7980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7984: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c7984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7988: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c7988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c798c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c798cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7990: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c7990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c7994: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7994u;
        // 0x1c7998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C799Cu;
    // 0x1c799c: 0x0  nop
    ctx->pc = 0x1c799cu;
    // NOP
    ctx->pc = 0x1c79a0u;
}
