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

// Function: sub_00152EE0
// Address: 0x152ee0 - 0x152f00
void sub_00152EE0_0x152ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152EE0_0x152ee0");
#endif

    switch (ctx->pc) {
        case 0x152ef0u: goto label_152ef0;
        default: break;
    }

    ctx->pc = 0x152ee0u;

    // 0x152ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152ee8: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x152EE8u;
    SET_GPR_U32(ctx, 31, 0x152EF0u);
    ctx->pc = 0x152EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EE8u;
    // 0x152eec: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x152EE8u, 0x152EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EF0u;
label_152ef0:
    // 0x152ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x152EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EF4u;
        // 0x152ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152EFCu;
    // 0x152efc: 0x0  nop
    ctx->pc = 0x152efcu;
    // NOP
    ctx->pc = 0x152f00u;
}
