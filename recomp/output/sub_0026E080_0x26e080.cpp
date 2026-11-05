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

// Function: sub_0026E080
// Address: 0x26e080 - 0x26e0d8
void sub_0026E080_0x26e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E080_0x26e080");
#endif

    switch (ctx->pc) {
        case 0x26e090u: goto label_26e090;
        default: break;
    }

    ctx->pc = 0x26e080u;

    // 0x26e080: 0x8c830268  lw          $v1, 0x268($a0)
    ctx->pc = 0x26e080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
    // 0x26e084: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26e084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26e088: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26E088u;
    {
        const bool branch_taken_0x26e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E088u;
        // 0x26e08c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e088) {
            ctx->pc = 0x26E0B0u;
            goto label_26e0b0;
        }
    }
    ctx->pc = 0x26E090u;
label_26e090:
    // 0x26e090: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E090u;
    {
        const bool branch_taken_0x26e090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x26e090) {
            ctx->pc = 0x26E0A0u;
            goto label_26e0a0;
        }
    }
    ctx->pc = 0x26E098u;
    // 0x26e098: 0x3e00008  jr          $ra
    ctx->pc = 0x26E098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E098u;
        // 0x26e09c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E0A0u;
label_26e0a0:
    // 0x26e0a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E0A0u;
    {
        const bool branch_taken_0x26e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e0a0) {
            ctx->pc = 0x26E0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E0A0u;
            // 0x26e0a4: 0x8c860268  lw          $a2, 0x268($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E0B4u;
            goto label_26e0b4;
        }
    }
    ctx->pc = 0x26E0A8u;
    // 0x26e0a8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26e0ac: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x26e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_26e0b0:
    // 0x26e0b0: 0x8c860268  lw          $a2, 0x268($a0)
    ctx->pc = 0x26e0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
label_26e0b4:
    // 0x26e0b4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x26e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26e0b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26E0B8u;
    {
        const bool branch_taken_0x26e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0B8u;
        // 0x26e0bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0b8) {
            ctx->pc = 0x26E0C4u;
            goto label_26e0c4;
        }
    }
    ctx->pc = 0x26E0C0u;
    // 0x26e0c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e0c4:
    // 0x26e0c4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x26E0C4u;
    {
        const bool branch_taken_0x26e0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e0c4) {
            ctx->pc = 0x26E090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e090;
        }
    }
    ctx->pc = 0x26E0CCu;
    // 0x26e0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x26E0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0CCu;
        // 0x26e0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E0D4u;
    // 0x26e0d4: 0x0  nop
    ctx->pc = 0x26e0d4u;
    // NOP
    ctx->pc = 0x26e0d8u;
}
