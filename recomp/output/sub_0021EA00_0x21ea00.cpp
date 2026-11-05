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

// Function: sub_0021EA00
// Address: 0x21ea00 - 0x21ea30
void sub_0021EA00_0x21ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EA00_0x21ea00");
#endif

    switch (ctx->pc) {
        case 0x21ea10u: goto label_21ea10;
        default: break;
    }

    ctx->pc = 0x21ea00u;

    // 0x21ea00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ea04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ea08: 0xc0878a2  jal         func_21E288
    ctx->pc = 0x21EA08u;
    SET_GPR_U32(ctx, 31, 0x21EA10u);
    ctx->pc = 0x21E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E288u, 0x21EA08u, 0x21EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA10u;
label_21ea10:
    // 0x21ea10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ea10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ea14: 0x3e00008  jr          $ra
    ctx->pc = 0x21EA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA14u;
        // 0x21ea18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EA1Cu;
    // 0x21ea1c: 0x0  nop
    ctx->pc = 0x21ea1cu;
    // NOP
    // 0x21ea20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x21ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21ea24: 0x0  nop
    ctx->pc = 0x21ea24u;
    // NOP
    // 0x21ea28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x21ea28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21ea2c: 0x0  nop
    ctx->pc = 0x21ea2cu;
    // NOP
    ctx->pc = 0x21ea30u;
}
