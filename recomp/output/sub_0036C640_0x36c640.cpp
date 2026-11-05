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

// Function: sub_0036C640
// Address: 0x36c640 - 0x36c660
void sub_0036C640_0x36c640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C640_0x36c640");
#endif

    switch (ctx->pc) {
        case 0x36c654u: goto label_36c654;
        default: break;
    }

    ctx->pc = 0x36c640u;

    // 0x36c640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c644: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x36c644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36c648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c64c: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x36C64Cu;
    SET_GPR_U32(ctx, 31, 0x36C654u);
    ctx->pc = 0x36C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C64Cu;
    // 0x36c650: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x36C64Cu, 0x36C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C654u;
label_36c654:
    // 0x36c654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c658: 0x3e00008  jr          $ra
    ctx->pc = 0x36C658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C658u;
        // 0x36c65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C660u;
}
