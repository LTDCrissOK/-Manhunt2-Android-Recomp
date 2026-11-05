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

// Function: sub_0017F040
// Address: 0x17f040 - 0x17f068
void sub_0017F040_0x17f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F040_0x17f040");
#endif

    switch (ctx->pc) {
        case 0x17f054u: goto label_17f054;
        default: break;
    }

    ctx->pc = 0x17f040u;

    // 0x17f040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f048: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17f048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17f04c: 0xc05fce2  jal         func_17F388
    ctx->pc = 0x17F04Cu;
    SET_GPR_U32(ctx, 31, 0x17F054u);
    ctx->pc = 0x17F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F04Cu;
    // 0x17f050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F388u, 0x17F04Cu, 0x17F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F054u;
label_17f054:
    // 0x17f054: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17f054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17f058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f05c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17f05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f060: 0x3e00008  jr          $ra
    ctx->pc = 0x17F060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F060u;
        // 0x17f064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F068u;
}
