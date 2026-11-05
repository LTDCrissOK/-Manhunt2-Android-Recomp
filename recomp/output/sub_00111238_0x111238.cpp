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

// Function: sub_00111238
// Address: 0x111238 - 0x111260
void sub_00111238_0x111238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111238_0x111238");
#endif

    switch (ctx->pc) {
        case 0x111254u: goto label_111254;
        default: break;
    }

    ctx->pc = 0x111238u;

    // 0x111238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11123c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11123cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111240: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x111240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x111244: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x111244u;
    {
        const bool branch_taken_0x111244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x111248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111244u;
        // 0x111248: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111244) {
            ctx->pc = 0x111258u;
            goto label_111258;
        }
    }
    ctx->pc = 0x11124Cu;
    // 0x11124c: 0xc05dfbc  jal         func_177EF0
    ctx->pc = 0x11124Cu;
    SET_GPR_U32(ctx, 31, 0x111254u);
    ctx->pc = 0x177EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177EF0u, 0x11124Cu, 0x111254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111254u;
label_111254:
    // 0x111254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111258:
    // 0x111258: 0x3e00008  jr          $ra
    ctx->pc = 0x111258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111258u;
        // 0x11125c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111260u;
}
