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

// Function: sub_003EBF60
// Address: 0x3ebf60 - 0x3ebf88
void sub_003EBF60_0x3ebf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBF60_0x3ebf60");
#endif

    switch (ctx->pc) {
        case 0x3ebf7cu: goto label_3ebf7c;
        default: break;
    }

    ctx->pc = 0x3ebf60u;

    // 0x3ebf60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ebf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ebf64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ebf64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebf68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ebf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ebf6c: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3ebf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3ebf70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3ebf70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3ebf74: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3EBF74u;
    SET_GPR_U32(ctx, 31, 0x3EBF7Cu);
    ctx->pc = 0x3EBF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBF74u;
    // 0x3ebf78: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3EBF74u, 0x3EBF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBF7Cu;
label_3ebf7c:
    // 0x3ebf7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ebf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ebf80: 0x3e00008  jr          $ra
    ctx->pc = 0x3EBF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF80u;
        // 0x3ebf84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EBF88u;
}
