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

// Function: sub_00236C40
// Address: 0x236c40 - 0x236c78
void sub_00236C40_0x236c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236C40_0x236c40");
#endif

    switch (ctx->pc) {
        case 0x236c50u: goto label_236c50;
        default: break;
    }

    ctx->pc = 0x236c40u;

    // 0x236c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236c48: 0xc0899c8  jal         func_226720
    ctx->pc = 0x236C48u;
    SET_GPR_U32(ctx, 31, 0x236C50u);
    ctx->pc = 0x226720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226720u, 0x236C48u, 0x236C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C50u;
label_236c50:
    // 0x236c50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236C50u;
    {
        const bool branch_taken_0x236c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C50u;
        // 0x236c54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236c50) {
            ctx->pc = 0x236C68u;
            goto label_236c68;
        }
    }
    ctx->pc = 0x236C58u;
    // 0x236c58: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x236c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x236c5c: 0x38427001  xori        $v0, $v0, 0x7001
    ctx->pc = 0x236c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)28673);
    // 0x236c60: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x236c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x236c64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236c68:
    // 0x236c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236c6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x236c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c70: 0x3e00008  jr          $ra
    ctx->pc = 0x236C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C70u;
        // 0x236c74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236C78u;
}
