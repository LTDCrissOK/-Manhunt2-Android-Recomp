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

// Function: sub_00295938
// Address: 0x295938 - 0x295970
void sub_00295938_0x295938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295938_0x295938");
#endif

    switch (ctx->pc) {
        case 0x295948u: goto label_295948;
        default: break;
    }

    ctx->pc = 0x295938u;

    // 0x295938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29593c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295940: 0xc0a5646  jal         func_295918
    ctx->pc = 0x295940u;
    SET_GPR_U32(ctx, 31, 0x295948u);
    ctx->pc = 0x295918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295918u, 0x295940u, 0x295948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295948u;
label_295948:
    // 0x295948: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x295948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29594c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x29594cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x295950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x295950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x295954: 0x2463ac88  addiu       $v1, $v1, -0x5378
    ctx->pc = 0x295954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945928));
    // 0x295958: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x295958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29595c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29595cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295960: 0x8c620190  lw          $v0, 0x190($v1)
    ctx->pc = 0x295960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
    // 0x295964: 0x3e00008  jr          $ra
    ctx->pc = 0x295964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295964u;
        // 0x295968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29596Cu;
    // 0x29596c: 0x0  nop
    ctx->pc = 0x29596cu;
    // NOP
    ctx->pc = 0x295970u;
}
