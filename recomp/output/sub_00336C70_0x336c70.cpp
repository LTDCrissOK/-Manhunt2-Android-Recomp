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

// Function: sub_00336C70
// Address: 0x336c70 - 0x336cb0
void sub_00336C70_0x336c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336C70_0x336c70");
#endif

    switch (ctx->pc) {
        case 0x336c80u: goto label_336c80;
        case 0x336ca0u: goto label_336ca0;
        default: break;
    }

    ctx->pc = 0x336c70u;

    // 0x336c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336c78: 0xc0cd984  jal         func_336610
    ctx->pc = 0x336C78u;
    SET_GPR_U32(ctx, 31, 0x336C80u);
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x336C78u, 0x336C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C80u;
label_336c80:
    // 0x336c80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x336C80u;
    {
        const bool branch_taken_0x336c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C80u;
        // 0x336c84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c80) {
            ctx->pc = 0x336CA4u;
            goto label_336ca4;
        }
    }
    ctx->pc = 0x336C88u;
    // 0x336c88: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x336c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x336c8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x336C8Cu;
    {
        const bool branch_taken_0x336c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C8Cu;
        // 0x336c90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c8c) {
            ctx->pc = 0x336CA4u;
            goto label_336ca4;
        }
    }
    ctx->pc = 0x336C94u;
    // 0x336c94: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x336c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336c98: 0xc0cdbba  jal         func_336EE8
    ctx->pc = 0x336C98u;
    SET_GPR_U32(ctx, 31, 0x336CA0u);
    ctx->pc = 0x336C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336C98u;
    // 0x336c9c: 0xac620498  sw          $v0, 0x498($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EE8u, 0x336C98u, 0x336CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336CA0u;
label_336ca0:
    // 0x336ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336ca4:
    // 0x336ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x336CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CA4u;
        // 0x336ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336CACu;
    // 0x336cac: 0x0  nop
    ctx->pc = 0x336cacu;
    // NOP
    ctx->pc = 0x336cb0u;
}
