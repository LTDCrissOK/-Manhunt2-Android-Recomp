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

// Function: sub_001A6778
// Address: 0x1a6778 - 0x1a6868
void sub_001A6778_0x1a6778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6778_0x1a6778");
#endif

    switch (ctx->pc) {
        case 0x1a679cu: goto label_1a679c;
        case 0x1a67a8u: goto label_1a67a8;
        case 0x1a67d8u: goto label_1a67d8;
        case 0x1a67ecu: goto label_1a67ec;
        case 0x1a6804u: goto label_1a6804;
        case 0x1a6814u: goto label_1a6814;
        case 0x1a6830u: goto label_1a6830;
        case 0x1a684cu: goto label_1a684c;
        default: break;
    }

    ctx->pc = 0x1a6778u;

    // 0x1a6778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a677c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6784: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6788: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a678c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a6790: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6794: 0xc06a19a  jal         func_1A8668
    ctx->pc = 0x1A6794u;
    SET_GPR_U32(ctx, 31, 0x1A679Cu);
    ctx->pc = 0x1A6798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6794u;
    // 0x1a6798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8668u, 0x1A6794u, 0x1A679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A679Cu;
label_1a679c:
    // 0x1a679c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a679cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a67a0: 0xc06a026  jal         func_1A8098
    ctx->pc = 0x1A67A0u;
    SET_GPR_U32(ctx, 31, 0x1A67A8u);
    ctx->pc = 0x1A67A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A67A0u;
    // 0x1a67a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8098u, 0x1A67A0u, 0x1A67A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A67A8u;
label_1a67a8:
    // 0x1a67a8: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A67A8u;
    {
        const bool branch_taken_0x1a67a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67A8u;
        // 0x1a67ac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67a8) {
            ctx->pc = 0x1A680Cu;
            goto label_1a680c;
        }
    }
    ctx->pc = 0x1A67B0u;
    // 0x1a67b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a67b4: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A67B4u;
    {
        const bool branch_taken_0x1a67b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67B4u;
        // 0x1a67b8: 0x2a420008  slti        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67b4) {
            ctx->pc = 0x1A67F4u;
            goto label_1a67f4;
        }
    }
    ctx->pc = 0x1A67BCu;
    // 0x1a67bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A67BCu;
    {
        const bool branch_taken_0x1a67bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A67C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67BCu;
        // 0x1a67c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67bc) {
            ctx->pc = 0x1A67E0u;
            goto label_1a67e0;
        }
    }
    ctx->pc = 0x1A67C4u;
    // 0x1a67c4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a67c8: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A67C8u;
    {
        const bool branch_taken_0x1a67c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67C8u;
        // 0x1a67cc: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67c8) {
            ctx->pc = 0x1A67E0u;
            goto label_1a67e0;
        }
    }
    ctx->pc = 0x1A67D0u;
    // 0x1a67d0: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A67D0u;
    SET_GPR_U32(ctx, 31, 0x1A67D8u);
    ctx->pc = 0x1A67D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A67D0u;
    // 0x1a67d4: 0x240604de  addiu       $a2, $zero, 0x4DE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1246));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A67D0u, 0x1A67D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A67D8u;
label_1a67d8:
    // 0x1a67d8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A67D8u;
    {
        const bool branch_taken_0x1a67d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67D8u;
        // 0x1a67dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67d8) {
            ctx->pc = 0x1A6850u;
            goto label_1a6850;
        }
    }
    ctx->pc = 0x1A67E0u;
label_1a67e0:
    // 0x1a67e0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1a67e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1a67e4: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A67E4u;
    SET_GPR_U32(ctx, 31, 0x1A67ECu);
    ctx->pc = 0x1A67E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A67E4u;
    // 0x1a67e8: 0x240604dd  addiu       $a2, $zero, 0x4DD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A67E4u, 0x1A67ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A67ECu;
label_1a67ec:
    // 0x1a67ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A67ECu;
    {
        const bool branch_taken_0x1a67ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67ECu;
        // 0x1a67f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67ec) {
            ctx->pc = 0x1A6850u;
            goto label_1a6850;
        }
    }
    ctx->pc = 0x1A67F4u;
label_1a67f4:
    // 0x1a67f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a67f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a67f8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1a67f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1a67fc: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A67FCu;
    SET_GPR_U32(ctx, 31, 0x1A6804u);
    ctx->pc = 0x1A6800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A67FCu;
    // 0x1a6800: 0x240604dc  addiu       $a2, $zero, 0x4DC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A67FCu, 0x1A6804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6804u;
label_1a6804:
    // 0x1a6804: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A6804u;
    {
        const bool branch_taken_0x1a6804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6804u;
        // 0x1a6808: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6804) {
            ctx->pc = 0x1A6850u;
            goto label_1a6850;
        }
    }
    ctx->pc = 0x1A680Cu;
label_1a680c:
    // 0x1a680c: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1A680Cu;
    SET_GPR_U32(ctx, 31, 0x1A6814u);
    ctx->pc = 0x1A6810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A680Cu;
    // 0x1a6810: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1A680Cu, 0x1A6814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6814u;
label_1a6814:
    // 0x1a6814: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1a6814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1a6818: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6818u;
    {
        const bool branch_taken_0x1a6818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6818u;
        // 0x1a681c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6818) {
            ctx->pc = 0x1A6838u;
            goto label_1a6838;
        }
    }
    ctx->pc = 0x1A6820u;
    // 0x1a6820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6824: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1a6824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1a6828: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6828u;
    SET_GPR_U32(ctx, 31, 0x1A6830u);
    ctx->pc = 0x1A682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6828u;
    // 0x1a682c: 0x240604db  addiu       $a2, $zero, 0x4DB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1243));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6828u, 0x1A6830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6830u;
label_1a6830:
    // 0x1a6830: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6830u;
    {
        const bool branch_taken_0x1a6830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6830u;
        // 0x1a6834: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6830) {
            ctx->pc = 0x1A6850u;
            goto label_1a6850;
        }
    }
    ctx->pc = 0x1A6838u;
label_1a6838:
    // 0x1a6838: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6838u;
    {
        const bool branch_taken_0x1a6838 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6838u;
        // 0x1a683c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6838) {
            ctx->pc = 0x1A684Cu;
            goto label_1a684c;
        }
    }
    ctx->pc = 0x1A6840u;
    // 0x1a6840: 0x264604cd  addiu       $a2, $s2, 0x4CD
    ctx->pc = 0x1a6840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1229));
    // 0x1a6844: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6844u;
    SET_GPR_U32(ctx, 31, 0x1A684Cu);
    ctx->pc = 0x1A6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6844u;
    // 0x1a6848: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6844u, 0x1A684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A684Cu;
label_1a684c:
    // 0x1a684c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a684cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6850:
    // 0x1a6850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6858: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a6858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a685c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a685cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6860: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6860u;
        // 0x1a6864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6868u;
}
