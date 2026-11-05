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

// Function: sub_0011DA80
// Address: 0x11da80 - 0x11daa0
void sub_0011DA80_0x11da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DA80_0x11da80");
#endif

    switch (ctx->pc) {
        case 0x11da94u: goto label_11da94;
        default: break;
    }

    ctx->pc = 0x11da80u;

    // 0x11da80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11da80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11da84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11da84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11da88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11da88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11da8c: 0xc047694  jal         func_11DA50
    ctx->pc = 0x11DA8Cu;
    SET_GPR_U32(ctx, 31, 0x11DA94u);
    ctx->pc = 0x11DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA8Cu;
    // 0x11da90: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DA50u, 0x11DA8Cu, 0x11DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA94u;
label_11da94:
    // 0x11da94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11da94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11da98: 0x3e00008  jr          $ra
    ctx->pc = 0x11DA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA98u;
        // 0x11da9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DAA0u;
}
