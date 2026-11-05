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

// Function: sub_00126428
// Address: 0x126428 - 0x126448
void sub_00126428_0x126428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126428_0x126428");
#endif

    switch (ctx->pc) {
        case 0x126438u: goto label_126438;
        default: break;
    }

    ctx->pc = 0x126428u;

    // 0x126428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12642c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126430: 0xc04a1cc  jal         func_128730
    ctx->pc = 0x126430u;
    SET_GPR_U32(ctx, 31, 0x126438u);
    ctx->pc = 0x126434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126430u;
    // 0x126434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128730u, 0x126430u, 0x126438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126438u;
label_126438:
    // 0x126438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12643c: 0x3e00008  jr          $ra
    ctx->pc = 0x12643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12643Cu;
        // 0x126440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12643Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126444u;
    // 0x126444: 0x0  nop
    ctx->pc = 0x126444u;
    // NOP
    ctx->pc = 0x126448u;
}
