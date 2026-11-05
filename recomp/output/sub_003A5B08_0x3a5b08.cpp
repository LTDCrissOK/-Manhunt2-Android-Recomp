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

// Function: sub_003A5B08
// Address: 0x3a5b08 - 0x3a5b30
void sub_003A5B08_0x3a5b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5B08_0x3a5b08");
#endif

    switch (ctx->pc) {
        case 0x3a5b18u: goto label_3a5b18;
        default: break;
    }

    ctx->pc = 0x3a5b08u;

    // 0x3a5b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a5b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a5b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a5b10: 0xc0e96cc  jal         func_3A5B30
    ctx->pc = 0x3A5B10u;
    SET_GPR_U32(ctx, 31, 0x3A5B18u);
    ctx->pc = 0x3A5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5B30u, 0x3A5B10u, 0x3A5B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5B18u;
label_3a5b18:
    // 0x3a5b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5b1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a5b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a5b20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a5b20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3a5b24: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B24u;
        // 0x3a5b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5B2Cu;
    // 0x3a5b2c: 0x0  nop
    ctx->pc = 0x3a5b2cu;
    // NOP
    ctx->pc = 0x3a5b30u;
}
