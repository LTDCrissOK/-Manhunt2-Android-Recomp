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

// Function: sub_0010CE70
// Address: 0x10ce70 - 0x10ce90
void sub_0010CE70_0x10ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CE70_0x10ce70");
#endif

    switch (ctx->pc) {
        case 0x10ce84u: goto label_10ce84;
        default: break;
    }

    ctx->pc = 0x10ce70u;

    // 0x10ce70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ce74: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10ce78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ce7c: 0xc041d16  jal         func_107458
    ctx->pc = 0x10CE7Cu;
    SET_GPR_U32(ctx, 31, 0x10CE84u);
    ctx->pc = 0x10CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE7Cu;
    // 0x10ce80: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107458u, 0x10CE7Cu, 0x10CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE84u;
label_10ce84:
    // 0x10ce84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ce84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ce88: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE88u;
        // 0x10ce8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CE90u;
}
