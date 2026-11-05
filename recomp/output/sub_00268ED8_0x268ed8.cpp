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

// Function: sub_00268ED8
// Address: 0x268ed8 - 0x268ef8
void sub_00268ED8_0x268ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268ED8_0x268ed8");
#endif

    switch (ctx->pc) {
        case 0x268ee8u: goto label_268ee8;
        default: break;
    }

    ctx->pc = 0x268ed8u;

    // 0x268ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x268ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x268edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268ee0: 0xc0837d8  jal         func_20DF60
    ctx->pc = 0x268EE0u;
    SET_GPR_U32(ctx, 31, 0x268EE8u);
    ctx->pc = 0x20DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF60u, 0x268EE0u, 0x268EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EE8u;
label_268ee8:
    // 0x268ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268eec: 0x3e00008  jr          $ra
    ctx->pc = 0x268EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EECu;
        // 0x268ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268EF4u;
    // 0x268ef4: 0x0  nop
    ctx->pc = 0x268ef4u;
    // NOP
    ctx->pc = 0x268ef8u;
}
