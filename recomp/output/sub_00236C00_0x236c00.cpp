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

// Function: sub_00236C00
// Address: 0x236c00 - 0x236c40
void sub_00236C00_0x236c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236C00_0x236c00");
#endif

    switch (ctx->pc) {
        case 0x236c10u: goto label_236c10;
        case 0x236c20u: goto label_236c20;
        default: break;
    }

    ctx->pc = 0x236c00u;

    // 0x236c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236c08: 0xc0899c8  jal         func_226720
    ctx->pc = 0x236C08u;
    SET_GPR_U32(ctx, 31, 0x236C10u);
    ctx->pc = 0x226720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226720u, 0x236C08u, 0x236C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C10u;
label_236c10:
    // 0x236c10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x236C10u;
    {
        const bool branch_taken_0x236c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236c10) {
            ctx->pc = 0x236C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236C10u;
            // 0x236c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236C34u;
            goto label_236c34;
        }
    }
    ctx->pc = 0x236C18u;
    // 0x236c18: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x236C18u;
    SET_GPR_U32(ctx, 31, 0x236C20u);
    ctx->pc = 0x236C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C18u;
    // 0x236c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x236C18u, 0x236C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C20u;
label_236c20:
    // 0x236c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x236c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c24: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x236c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x236c28: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x236C28u;
    {
        const bool branch_taken_0x236c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x236C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C28u;
        // 0x236c2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c28) {
            ctx->pc = 0x236C34u;
            goto label_236c34;
        }
    }
    ctx->pc = 0x236C30u;
    // 0x236c30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236c34:
    // 0x236c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236c38: 0x3e00008  jr          $ra
    ctx->pc = 0x236C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C38u;
        // 0x236c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236C40u;
}
