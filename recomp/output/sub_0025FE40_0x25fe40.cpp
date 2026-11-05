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

// Function: sub_0025FE40
// Address: 0x25fe40 - 0x25fe88
void sub_0025FE40_0x25fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FE40_0x25fe40");
#endif

    switch (ctx->pc) {
        case 0x25fe50u: goto label_25fe50;
        default: break;
    }

    ctx->pc = 0x25fe40u;

    // 0x25fe40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fe44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fe48: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x25FE48u;
    SET_GPR_U32(ctx, 31, 0x25FE50u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x25FE48u, 0x25FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE50u;
label_25fe50:
    // 0x25fe50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25fe50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe54: 0x2862002e  slti        $v0, $v1, 0x2E
    ctx->pc = 0x25fe54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x25fe58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25FE58u;
    {
        const bool branch_taken_0x25fe58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE58u;
        // 0x25fe5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe58) {
            ctx->pc = 0x25FE7Cu;
            goto label_25fe7c;
        }
    }
    ctx->pc = 0x25FE60u;
    // 0x25fe60: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x25fe60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x25fe64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FE64u;
    {
        const bool branch_taken_0x25fe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE64u;
        // 0x25fe68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe64) {
            ctx->pc = 0x25FE7Cu;
            goto label_25fe7c;
        }
    }
    ctx->pc = 0x25FE6Cu;
    // 0x25fe6c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x25fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x25fe70: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25FE70u;
    {
        const bool branch_taken_0x25fe70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE70u;
        // 0x25fe74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe70) {
            ctx->pc = 0x25FE7Cu;
            goto label_25fe7c;
        }
    }
    ctx->pc = 0x25FE78u;
    // 0x25fe78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25fe7c:
    // 0x25fe7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fe7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fe80: 0x3e00008  jr          $ra
    ctx->pc = 0x25FE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE80u;
        // 0x25fe84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FE88u;
}
