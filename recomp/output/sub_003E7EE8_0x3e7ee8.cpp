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

// Function: sub_003E7EE8
// Address: 0x3e7ee8 - 0x3e7f08
void sub_003E7EE8_0x3e7ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7EE8_0x3e7ee8");
#endif

    switch (ctx->pc) {
        case 0x3e7ef8u: goto label_3e7ef8;
        default: break;
    }

    ctx->pc = 0x3e7ee8u;

    // 0x3e7ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e7ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e7eec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e7eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e7ef0: 0xc0b0068  jal         func_2C01A0
    ctx->pc = 0x3E7EF0u;
    SET_GPR_U32(ctx, 31, 0x3E7EF8u);
    ctx->pc = 0x3E7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7EF0u;
    // 0x3e7ef4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C01A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C01A0u, 0x3E7EF0u, 0x3E7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7EF8u;
label_3e7ef8:
    // 0x3e7ef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e7ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7efc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EFCu;
        // 0x3e7f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7F04u;
    // 0x3e7f04: 0x0  nop
    ctx->pc = 0x3e7f04u;
    // NOP
    ctx->pc = 0x3e7f08u;
}
