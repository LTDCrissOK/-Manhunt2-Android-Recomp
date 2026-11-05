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

// Function: sub_0013C088
// Address: 0x13c088 - 0x13c0a8
void sub_0013C088_0x13c088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C088_0x13c088");
#endif

    switch (ctx->pc) {
        case 0x13c098u: goto label_13c098;
        default: break;
    }

    ctx->pc = 0x13c088u;

    // 0x13c088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c08c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c090: 0xc04f898  jal         func_13E260
    ctx->pc = 0x13C090u;
    SET_GPR_U32(ctx, 31, 0x13C098u);
    ctx->pc = 0x13C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C090u;
    // 0x13c094: 0x8c840218  lw          $a0, 0x218($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E260u, 0x13C090u, 0x13C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C098u;
label_13c098:
    // 0x13c098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c09c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C09Cu;
        // 0x13c0a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C0A4u;
    // 0x13c0a4: 0x0  nop
    ctx->pc = 0x13c0a4u;
    // NOP
    ctx->pc = 0x13c0a8u;
}
