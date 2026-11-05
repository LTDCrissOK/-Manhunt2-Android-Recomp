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

// Function: sub_001C0AC0
// Address: 0x1c0ac0 - 0x1c0ae0
void sub_001C0AC0_0x1c0ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0AC0_0x1c0ac0");
#endif

    switch (ctx->pc) {
        case 0x1c0ad0u: goto label_1c0ad0;
        default: break;
    }

    ctx->pc = 0x1c0ac0u;

    // 0x1c0ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0ac8: 0xc06f7a0  jal         func_1BDE80
    ctx->pc = 0x1C0AC8u;
    SET_GPR_U32(ctx, 31, 0x1C0AD0u);
    ctx->pc = 0x1BDE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE80u, 0x1C0AC8u, 0x1C0AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AD0u;
label_1c0ad0:
    // 0x1c0ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AD4u;
        // 0x1c0ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0ADCu;
    // 0x1c0adc: 0x0  nop
    ctx->pc = 0x1c0adcu;
    // NOP
    ctx->pc = 0x1c0ae0u;
}
