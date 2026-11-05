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

// Function: sub_003270E8
// Address: 0x3270e8 - 0x327108
void sub_003270E8_0x3270e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003270E8_0x3270e8");
#endif

    switch (ctx->pc) {
        case 0x3270fcu: goto label_3270fc;
        default: break;
    }

    ctx->pc = 0x3270e8u;

    // 0x3270e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3270e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3270ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3270ECu;
    {
        const bool branch_taken_0x3270ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3270F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270ECu;
        // 0x3270f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3270ec) {
            ctx->pc = 0x3270FCu;
            goto label_3270fc;
        }
    }
    ctx->pc = 0x3270F4u;
    // 0x3270f4: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x3270F4u;
    SET_GPR_U32(ctx, 31, 0x3270FCu);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x3270F4u, 0x3270FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270FCu;
label_3270fc:
    // 0x3270fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3270fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327100: 0x3e00008  jr          $ra
    ctx->pc = 0x327100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327100u;
        // 0x327104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327108u;
}
