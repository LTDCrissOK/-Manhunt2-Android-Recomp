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

// Function: sub_0012F200
// Address: 0x12f200 - 0x12f220
void sub_0012F200_0x12f200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F200_0x12f200");
#endif

    switch (ctx->pc) {
        case 0x12f210u: goto label_12f210;
        default: break;
    }

    ctx->pc = 0x12f200u;

    // 0x12f200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f208: 0xc04bc88  jal         func_12F220
    ctx->pc = 0x12F208u;
    SET_GPR_U32(ctx, 31, 0x12F210u);
    ctx->pc = 0x12F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F208u;
    // 0x12f20c: 0x24850008  addiu       $a1, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F220u, 0x12F208u, 0x12F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F210u;
label_12f210:
    // 0x12f210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f214: 0x3e00008  jr          $ra
    ctx->pc = 0x12F214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F214u;
        // 0x12f218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F21Cu;
    // 0x12f21c: 0x0  nop
    ctx->pc = 0x12f21cu;
    // NOP
    ctx->pc = 0x12f220u;
}
