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

// Function: sub_0010CE28
// Address: 0x10ce28 - 0x10ce70
void sub_0010CE28_0x10ce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CE28_0x10ce28");
#endif

    switch (ctx->pc) {
        case 0x10ce5cu: goto label_10ce5c;
        default: break;
    }

    ctx->pc = 0x10ce28u;

    // 0x10ce28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ce28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ce2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ce2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ce30: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x10CE30u;
    {
        const bool branch_taken_0x10ce30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE30u;
        // 0x10ce34: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce30) {
            ctx->pc = 0x10CE64u;
            goto label_10ce64;
        }
    }
    ctx->pc = 0x10CE38u;
    // 0x10ce38: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10ce3c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x10ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10ce40: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10ce44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ce48: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x10ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10ce4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CE4Cu;
    {
        const bool branch_taken_0x10ce4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE4Cu;
        // 0x10ce50: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce4c) {
            ctx->pc = 0x10CE64u;
            goto label_10ce64;
        }
    }
    ctx->pc = 0x10CE54u;
    // 0x10ce54: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10CE54u;
    SET_GPR_U32(ctx, 31, 0x10CE5Cu);
    ctx->pc = 0x10CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE54u;
    // 0x10ce58: 0x8c6500f8  lw          $a1, 0xF8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10CE54u, 0x10CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE5Cu;
label_10ce5c:
    // 0x10ce5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10CE5Cu;
    {
        const bool branch_taken_0x10ce5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE5Cu;
        // 0x10ce60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce5c) {
            ctx->pc = 0x10CE68u;
            goto label_10ce68;
        }
    }
    ctx->pc = 0x10CE64u;
label_10ce64:
    // 0x10ce64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ce64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ce68:
    // 0x10ce68: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE68u;
        // 0x10ce6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CE70u;
}
