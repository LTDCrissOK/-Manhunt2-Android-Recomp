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

// Function: sub_0026A148
// Address: 0x26a148 - 0x26a168
void sub_0026A148_0x26a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A148_0x26a148");
#endif

    switch (ctx->pc) {
        case 0x26a15cu: goto label_26a15c;
        default: break;
    }

    ctx->pc = 0x26a148u;

    // 0x26a148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26a148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26a14c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a154: 0xc09a846  jal         func_26A118
    ctx->pc = 0x26A154u;
    SET_GPR_U32(ctx, 31, 0x26A15Cu);
    ctx->pc = 0x26A158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A154u;
    // 0x26a158: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A118u, 0x26A154u, 0x26A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A15Cu;
label_26a15c:
    // 0x26a15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a160: 0x3e00008  jr          $ra
    ctx->pc = 0x26A160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A160u;
        // 0x26a164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A168u;
}
