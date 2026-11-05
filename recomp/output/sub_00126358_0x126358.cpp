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

// Function: sub_00126358
// Address: 0x126358 - 0x126378
void sub_00126358_0x126358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126358_0x126358");
#endif

    switch (ctx->pc) {
        case 0x12636cu: goto label_12636c;
        default: break;
    }

    ctx->pc = 0x126358u;

    // 0x126358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12635c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12635Cu;
    {
        const bool branch_taken_0x12635c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12635Cu;
        // 0x126360: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12635c) {
            ctx->pc = 0x12636Cu;
            goto label_12636c;
        }
    }
    ctx->pc = 0x126364u;
    // 0x126364: 0xc04a118  jal         func_128460
    ctx->pc = 0x126364u;
    SET_GPR_U32(ctx, 31, 0x12636Cu);
    ctx->pc = 0x128460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128460u, 0x126364u, 0x12636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12636Cu;
label_12636c:
    // 0x12636c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12636cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126370: 0x3e00008  jr          $ra
    ctx->pc = 0x126370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126370u;
        // 0x126374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126378u;
}
