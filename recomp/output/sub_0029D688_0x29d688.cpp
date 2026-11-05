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

// Function: sub_0029D688
// Address: 0x29d688 - 0x29d6a8
void sub_0029D688_0x29d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D688_0x29d688");
#endif

    switch (ctx->pc) {
        case 0x29d698u: goto label_29d698;
        default: break;
    }

    ctx->pc = 0x29d688u;

    // 0x29d688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29d688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29d68c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29d690: 0xc0a790c  jal         func_29E430
    ctx->pc = 0x29D690u;
    SET_GPR_U32(ctx, 31, 0x29D698u);
    ctx->pc = 0x29E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E430u, 0x29D690u, 0x29D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D698u;
label_29d698:
    // 0x29d698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d69c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D69Cu;
        // 0x29d6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D6A4u;
    // 0x29d6a4: 0x0  nop
    ctx->pc = 0x29d6a4u;
    // NOP
    ctx->pc = 0x29d6a8u;
}
