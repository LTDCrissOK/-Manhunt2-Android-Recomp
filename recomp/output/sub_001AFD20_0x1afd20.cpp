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

// Function: sub_001AFD20
// Address: 0x1afd20 - 0x1afd48
void sub_001AFD20_0x1afd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFD20_0x1afd20");
#endif

    switch (ctx->pc) {
        case 0x1afd38u: goto label_1afd38;
        default: break;
    }

    ctx->pc = 0x1afd20u;

    // 0x1afd20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afd24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1afd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1afd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afd2c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1afd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1afd30: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AFD30u;
    SET_GPR_U32(ctx, 31, 0x1AFD38u);
    ctx->pc = 0x1AFD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD30u;
    // 0x1afd34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AFD30u, 0x1AFD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD38u;
label_1afd38:
    // 0x1afd38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD3Cu;
        // 0x1afd40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFD44u;
    // 0x1afd44: 0x0  nop
    ctx->pc = 0x1afd44u;
    // NOP
    ctx->pc = 0x1afd48u;
}
