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

// Function: sub_001ABDA8
// Address: 0x1abda8 - 0x1abdc8
void sub_001ABDA8_0x1abda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABDA8_0x1abda8");
#endif

    switch (ctx->pc) {
        case 0x1abdb8u: goto label_1abdb8;
        default: break;
    }

    ctx->pc = 0x1abda8u;

    // 0x1abda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abdac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abdb0: 0xc06af40  jal         func_1ABD00
    ctx->pc = 0x1ABDB0u;
    SET_GPR_U32(ctx, 31, 0x1ABDB8u);
    ctx->pc = 0x1ABD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD00u, 0x1ABDB0u, 0x1ABDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABDB8u;
label_1abdb8:
    // 0x1abdb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDBCu;
        // 0x1abdc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABDC4u;
    // 0x1abdc4: 0x0  nop
    ctx->pc = 0x1abdc4u;
    // NOP
    ctx->pc = 0x1abdc8u;
}
