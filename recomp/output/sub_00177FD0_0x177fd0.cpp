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

// Function: sub_00177FD0
// Address: 0x177fd0 - 0x178050
void sub_00177FD0_0x177fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177FD0_0x177fd0");
#endif

    switch (ctx->pc) {
        case 0x178008u: goto label_178008;
        case 0x178020u: goto label_178020;
        default: break;
    }

    ctx->pc = 0x177fd0u;

    // 0x177fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177fdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177fe0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x177fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x177fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x177fe8: 0x90820158  lbu         $v0, 0x158($a0)
    ctx->pc = 0x177fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x177fec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x177FECu;
    {
        const bool branch_taken_0x177fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FECu;
        // 0x177ff0: 0x249200dc  addiu       $s2, $a0, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fec) {
            ctx->pc = 0x178034u;
            goto label_178034;
        }
    }
    ctx->pc = 0x177FF4u;
    // 0x177ff4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ff8: 0x249100d8  addiu       $s1, $a0, 0xD8
    ctx->pc = 0x177ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x177ffc: 0x24130021  addiu       $s3, $zero, 0x21
    ctx->pc = 0x177ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x178000: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x178000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x178004: 0x0  nop
    ctx->pc = 0x178004u;
    // NOP
label_178008:
    // 0x178008: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x178008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x17800c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17800cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178010: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x178010u;
    {
        const bool branch_taken_0x178010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x178014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178010u;
        // 0x178014: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178010) {
            ctx->pc = 0x178020u;
            goto label_178020;
        }
    }
    ctx->pc = 0x178018u;
    // 0x178018: 0xc05e5da  jal         func_179768
    ctx->pc = 0x178018u;
    SET_GPR_U32(ctx, 31, 0x178020u);
    ctx->pc = 0x17801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178018u;
    // 0x17801c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179768u, 0x178018u, 0x178020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178020u;
label_178020:
    // 0x178020: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x178020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x178024: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x178024u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178028: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x178028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17802c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x17802Cu;
    {
        const bool branch_taken_0x17802c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17802c) {
            ctx->pc = 0x178030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17802Cu;
            // 0x178030: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178008;
        }
    }
    ctx->pc = 0x178034u;
label_178034:
    // 0x178034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17803c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17803cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178040: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178044: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178048: 0x3e00008  jr          $ra
    ctx->pc = 0x178048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178048u;
        // 0x17804c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178050u;
}
