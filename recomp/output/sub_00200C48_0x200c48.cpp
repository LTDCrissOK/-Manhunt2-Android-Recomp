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

// Function: sub_00200C48
// Address: 0x200c48 - 0x200c68
void sub_00200C48_0x200c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200C48_0x200c48");
#endif

    switch (ctx->pc) {
        case 0x200c58u: goto label_200c58;
        default: break;
    }

    ctx->pc = 0x200c48u;

    // 0x200c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200c50: 0xc081a5e  jal         func_206978
    ctx->pc = 0x200C50u;
    SET_GPR_U32(ctx, 31, 0x200C58u);
    ctx->pc = 0x200C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C50u;
    // 0x200c54: 0x8c840034  lw          $a0, 0x34($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206978u, 0x200C50u, 0x200C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C58u;
label_200c58:
    // 0x200c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x200C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C5Cu;
        // 0x200c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200C64u;
    // 0x200c64: 0x0  nop
    ctx->pc = 0x200c64u;
    // NOP
    ctx->pc = 0x200c68u;
}
