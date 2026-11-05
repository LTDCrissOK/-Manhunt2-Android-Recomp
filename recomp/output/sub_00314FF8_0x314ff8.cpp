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

// Function: sub_00314FF8
// Address: 0x314ff8 - 0x315090
void sub_00314FF8_0x314ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314FF8_0x314ff8");
#endif

    switch (ctx->pc) {
        case 0x315018u: goto label_315018;
        case 0x315048u: goto label_315048;
        default: break;
    }

    ctx->pc = 0x314ff8u;

    // 0x314ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314ffc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x314ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x315000: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x315000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x315004: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x315004u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
    // 0x315008: 0x26102190  addiu       $s0, $s0, 0x2190
    ctx->pc = 0x315008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8592));
    // 0x31500c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x315010: 0xc0c514c  jal         func_314530
    ctx->pc = 0x315010u;
    SET_GPR_U32(ctx, 31, 0x315018u);
    ctx->pc = 0x315014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315010u;
    // 0x315014: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314530u, 0x315010u, 0x315018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315018u;
label_315018:
    // 0x315018: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x315018u;
    {
        const bool branch_taken_0x315018 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x315018) {
            ctx->pc = 0x31501Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315018u;
            // 0x31501c: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315020u;
            goto label_315020;
        }
    }
    ctx->pc = 0x315020u;
label_315020:
    // 0x315020: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x315020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x315024: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x315024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x315028: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x315028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31502c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x315030: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x315030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x315034: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x315034u;
    {
        const bool branch_taken_0x315034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x315038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315034u;
        // 0x315038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315034) {
            ctx->pc = 0x315064u;
            goto label_315064;
        }
    }
    ctx->pc = 0x31503Cu;
    // 0x31503c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x31503cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315040: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x315040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x315044: 0x0  nop
    ctx->pc = 0x315044u;
    // NOP
label_315048:
    // 0x315048: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x315048u;
    {
        const bool branch_taken_0x315048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x31504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315048u;
        // 0x31504c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315048) {
            ctx->pc = 0x315064u;
            goto label_315064;
        }
    }
    ctx->pc = 0x315050u;
    // 0x315050: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x315050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x315054: 0x0  nop
    ctx->pc = 0x315054u;
    // NOP
    // 0x315058: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x315058u;
    {
        const bool branch_taken_0x315058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x315058) {
            ctx->pc = 0x31505Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315058u;
            // 0x31505c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315048;
        }
    }
    ctx->pc = 0x315060u;
    // 0x315060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315064:
    // 0x315064: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x315064u;
    {
        const bool branch_taken_0x315064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315064) {
            ctx->pc = 0x315068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315064u;
            // 0x315068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315080u;
            goto label_315080;
        }
    }
    ctx->pc = 0x31506Cu;
    // 0x31506c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x315070: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x315070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x315074: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x315074u;
    {
        const bool branch_taken_0x315074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315074u;
        // 0x315078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315074) {
            ctx->pc = 0x315080u;
            goto label_315080;
        }
    }
    ctx->pc = 0x31507Cu;
    // 0x31507c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_315080:
    // 0x315080: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x315080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315084: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x315084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x315088: 0x3e00008  jr          $ra
    ctx->pc = 0x315088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315088u;
        // 0x31508c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315090u;
}
