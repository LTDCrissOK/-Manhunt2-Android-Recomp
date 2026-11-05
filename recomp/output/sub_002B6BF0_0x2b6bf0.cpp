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

// Function: sub_002B6BF0
// Address: 0x2b6bf0 - 0x2b6c28
void sub_002B6BF0_0x2b6bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6BF0_0x2b6bf0");
#endif

    ctx->pc = 0x2b6bf0u;

    // 0x2b6bf0: 0x8c8358f8  lw          $v1, 0x58F8($a0)
    ctx->pc = 0x2b6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22776)));
    // 0x2b6bf4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b6bf8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6BF8u;
    {
        const bool branch_taken_0x2b6bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BF8u;
        // 0x2b6bfc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6bf8) {
            ctx->pc = 0x2B6C08u;
            goto label_2b6c08;
        }
    }
    ctx->pc = 0x2B6C00u;
    // 0x2b6c00: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6C00u;
    {
        const bool branch_taken_0x2b6c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C00u;
        // 0x2b6c04: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c00) {
            ctx->pc = 0x2B6C18u;
            goto label_2b6c18;
        }
    }
    ctx->pc = 0x2B6C08u;
label_2b6c08:
    // 0x2b6c08: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2b6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2b6c0c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2b6c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2b6c10: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C10u;
        // 0x2b6c14: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6C18u;
label_2b6c18:
    // 0x2b6c18: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b6c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b6c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C1Cu;
        // 0x2b6c20: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6C24u;
    // 0x2b6c24: 0x0  nop
    ctx->pc = 0x2b6c24u;
    // NOP
    ctx->pc = 0x2b6c28u;
}
