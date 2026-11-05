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

// Function: sub_0028B710
// Address: 0x28b710 - 0x28b738
void sub_0028B710_0x28b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B710_0x28b710");
#endif

    switch (ctx->pc) {
        case 0x28b728u: goto label_28b728;
        default: break;
    }

    ctx->pc = 0x28b710u;

    // 0x28b710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28b710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28b714: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x28b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28b718: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B718u;
    {
        const bool branch_taken_0x28b718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B718u;
        // 0x28b71c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b718) {
            ctx->pc = 0x28B728u;
            goto label_28b728;
        }
    }
    ctx->pc = 0x28B720u;
    // 0x28b720: 0xc0a2d9e  jal         func_28B678
    ctx->pc = 0x28B720u;
    SET_GPR_U32(ctx, 31, 0x28B728u);
    ctx->pc = 0x28B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B720u;
    // 0x28b724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B678u, 0x28B720u, 0x28B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B728u;
label_28b728:
    // 0x28b728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b72c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B72Cu;
        // 0x28b730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B734u;
    // 0x28b734: 0x0  nop
    ctx->pc = 0x28b734u;
    // NOP
    ctx->pc = 0x28b738u;
}
