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

// Function: sub_003A59B4
// Address: 0x3a59b4 - 0x3a59d8
void sub_003A59B4_0x3a59b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A59B4_0x3a59b4");
#endif

    switch (ctx->pc) {
        case 0x3a59b8u: goto label_3a59b8;
        case 0x3a59c8u: goto label_3a59c8;
        default: break;
    }

    ctx->pc = 0x3a59b4u;

    // 0x3a59b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a59b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a59b8:
    // 0x3a59b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a59b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a59bc: 0x80eb286  j           func_3ACA18
    ctx->pc = 0x3A59BCu;
    ctx->pc = 0x3A59C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A59BCu;
    // 0x3a59c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA18u;
    sub_003ACA18_0x3aca18(rdram, ctx, runtime); return;
    ctx->pc = 0x3A59C4u;
    // 0x3a59c4: 0x0  nop
    ctx->pc = 0x3a59c4u;
    // NOP
label_3a59c8:
    // 0x3a59c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a59c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a59cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A59CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A59CCu;
        // 0x3a59d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A59CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A59D4u;
    // 0x3a59d4: 0x0  nop
    ctx->pc = 0x3a59d4u;
    // NOP
    ctx->pc = 0x3a59d8u;
}
