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

// Function: sub_00114008
// Address: 0x114008 - 0x114030
void sub_00114008_0x114008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114008_0x114008");
#endif

    switch (ctx->pc) {
        case 0x114024u: goto label_114024;
        default: break;
    }

    ctx->pc = 0x114008u;

    // 0x114008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11400c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114010: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x114010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x114014: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114014u;
    {
        const bool branch_taken_0x114014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114014u;
        // 0x114018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114014) {
            ctx->pc = 0x114024u;
            goto label_114024;
        }
    }
    ctx->pc = 0x11401Cu;
    // 0x11401c: 0xc044442  jal         func_111108
    ctx->pc = 0x11401Cu;
    SET_GPR_U32(ctx, 31, 0x114024u);
    ctx->pc = 0x111108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111108u, 0x11401Cu, 0x114024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114024u;
label_114024:
    // 0x114024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114028: 0x3e00008  jr          $ra
    ctx->pc = 0x114028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114028u;
        // 0x11402c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114030u;
}
