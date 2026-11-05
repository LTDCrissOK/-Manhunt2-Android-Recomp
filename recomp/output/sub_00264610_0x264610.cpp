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

// Function: sub_00264610
// Address: 0x264610 - 0x264630
void sub_00264610_0x264610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264610_0x264610");
#endif

    switch (ctx->pc) {
        case 0x264620u: goto label_264620;
        default: break;
    }

    ctx->pc = 0x264610u;

    // 0x264610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264618: 0xc097fce  jal         func_25FF38
    ctx->pc = 0x264618u;
    SET_GPR_U32(ctx, 31, 0x264620u);
    ctx->pc = 0x25FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF38u, 0x264618u, 0x264620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264620u;
label_264620:
    // 0x264620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264624: 0x3e00008  jr          $ra
    ctx->pc = 0x264624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264624u;
        // 0x264628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26462Cu;
    // 0x26462c: 0x0  nop
    ctx->pc = 0x26462cu;
    // NOP
    ctx->pc = 0x264630u;
}
