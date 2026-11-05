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

// Function: sub_001A8828
// Address: 0x1a8828 - 0x1a88f8
void sub_001A8828_0x1a8828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8828_0x1a8828");
#endif

    switch (ctx->pc) {
        case 0x1a8868u: goto label_1a8868;
        case 0x1a8890u: goto label_1a8890;
        case 0x1a88a0u: goto label_1a88a0;
        case 0x1a88c4u: goto label_1a88c4;
        default: break;
    }

    ctx->pc = 0x1a8828u;

    // 0x1a8828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a882c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a882cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8830: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a8834: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a8834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a883c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8840: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8844: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a8844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a8848: 0x8e4201e8  lw          $v0, 0x1E8($s2)
    ctx->pc = 0x1a8848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x1a884c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A884Cu;
    {
        const bool branch_taken_0x1a884c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A884Cu;
        // 0x1a8850: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a884c) {
            ctx->pc = 0x1A886Cu;
            goto label_1a886c;
        }
    }
    ctx->pc = 0x1A8854u;
    // 0x1a8854: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1a8854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a8858: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8858u;
    {
        const bool branch_taken_0x1a8858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1a8858) {
            ctx->pc = 0x1A885Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8858u;
            // 0x1a885c: 0x8e4201e4  lw          $v0, 0x1E4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8870u;
            goto label_1a8870;
        }
    }
    ctx->pc = 0x1A8860u;
    // 0x1a8860: 0xc06a1b0  jal         func_1A86C0
    ctx->pc = 0x1A8860u;
    SET_GPR_U32(ctx, 31, 0x1A8868u);
    ctx->pc = 0x1A8864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8860u;
    // 0x1a8864: 0x264501e8  addiu       $a1, $s2, 0x1E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86C0u, 0x1A8860u, 0x1A8868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8868u;
label_1a8868:
    // 0x1a8868: 0xae4001e8  sw          $zero, 0x1E8($s2)
    ctx->pc = 0x1a8868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 0));
label_1a886c:
    // 0x1a886c: 0x8e4201e4  lw          $v0, 0x1E4($s2)
    ctx->pc = 0x1a886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
label_1a8870:
    // 0x1a8870: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8870u;
    {
        const bool branch_taken_0x1a8870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8870u;
        // 0x1a8874: 0x265101ec  addiu       $s1, $s2, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8870) {
            ctx->pc = 0x1A8898u;
            goto label_1a8898;
        }
    }
    ctx->pc = 0x1A8878u;
    // 0x1a8878: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1a8878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a887c: 0x14540007  bne         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A887Cu;
    {
        const bool branch_taken_0x1a887c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1A8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A887Cu;
        // 0x1a8880: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a887c) {
            ctx->pc = 0x1A889Cu;
            goto label_1a889c;
        }
    }
    ctx->pc = 0x1A8884u;
    // 0x1a8884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8888: 0xc06a1b0  jal         func_1A86C0
    ctx->pc = 0x1A8888u;
    SET_GPR_U32(ctx, 31, 0x1A8890u);
    ctx->pc = 0x1A888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8888u;
    // 0x1a888c: 0x264501e4  addiu       $a1, $s2, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86C0u, 0x1A8888u, 0x1A8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8890u;
label_1a8890:
    // 0x1a8890: 0xae4001e4  sw          $zero, 0x1E4($s2)
    ctx->pc = 0x1a8890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 0));
    // 0x1a8894: 0x265101ec  addiu       $s1, $s2, 0x1EC
    ctx->pc = 0x1a8894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 492));
label_1a8898:
    // 0x1a8898: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1a8898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a889c:
    // 0x1a889c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a889cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a88a0:
    // 0x1a88a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a88a4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A88A4u;
    {
        const bool branch_taken_0x1a88a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a88a4) {
            ctx->pc = 0x1A88A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A88A4u;
            // 0x1a88a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A88CCu;
            goto label_1a88cc;
        }
    }
    ctx->pc = 0x1A88ACu;
    // 0x1a88ac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1a88acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a88b0: 0x54540006  bnel        $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A88B0u;
    {
        const bool branch_taken_0x1a88b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1a88b0) {
            ctx->pc = 0x1A88B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A88B0u;
            // 0x1a88b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A88CCu;
            goto label_1a88cc;
        }
    }
    ctx->pc = 0x1A88B8u;
    // 0x1a88b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a88b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88bc: 0xc06a1b0  jal         func_1A86C0
    ctx->pc = 0x1A88BCu;
    SET_GPR_U32(ctx, 31, 0x1A88C4u);
    ctx->pc = 0x1A88C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A88BCu;
    // 0x1a88c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86C0u, 0x1A88BCu, 0x1A88C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88C4u;
label_1a88c4:
    // 0x1a88c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a88c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a88c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1a88c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1a88cc:
    // 0x1a88cc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1a88ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1a88d0: 0x661fff3  bgez        $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A88D0u;
    {
        const bool branch_taken_0x1a88d0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1A88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88D0u;
        // 0x1a88d4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88d0) {
            ctx->pc = 0x1A88A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a88a0;
        }
    }
    ctx->pc = 0x1A88D8u;
    // 0x1a88d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a88d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a88dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a88dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a88e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a88e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a88e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a88e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a88e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a88e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a88ec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a88ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a88f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A88F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A88F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88F0u;
        // 0x1a88f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A88F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A88F8u;
}
