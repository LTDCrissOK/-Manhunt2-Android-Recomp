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

// Function: sub_0033CE88
// Address: 0x33ce88 - 0x33ceb0
void sub_0033CE88_0x33ce88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CE88_0x33ce88");
#endif

    switch (ctx->pc) {
        case 0x33ce98u: goto label_33ce98;
        case 0x33cea0u: goto label_33cea0;
        default: break;
    }

    ctx->pc = 0x33ce88u;

    // 0x33ce88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ce88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ce8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33ce8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33ce90: 0xc0cf37e  jal         func_33CDF8
    ctx->pc = 0x33CE90u;
    SET_GPR_U32(ctx, 31, 0x33CE98u);
    ctx->pc = 0x33CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CDF8u, 0x33CE90u, 0x33CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE98u;
label_33ce98:
    // 0x33ce98: 0xc0cf3ac  jal         func_33CEB0
    ctx->pc = 0x33CE98u;
    SET_GPR_U32(ctx, 31, 0x33CEA0u);
    ctx->pc = 0x33CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CEB0u, 0x33CE98u, 0x33CEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CEA0u;
label_33cea0:
    // 0x33cea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33cea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cea4: 0x3e00008  jr          $ra
    ctx->pc = 0x33CEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEA4u;
        // 0x33cea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CEACu;
    // 0x33ceac: 0x0  nop
    ctx->pc = 0x33ceacu;
    // NOP
    ctx->pc = 0x33ceb0u;
}
