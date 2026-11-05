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

// Function: sub_0012D000
// Address: 0x12d000 - 0x12d020
void sub_0012D000_0x12d000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D000_0x12d000");
#endif

    switch (ctx->pc) {
        case 0x12d014u: goto label_12d014;
        default: break;
    }

    ctx->pc = 0x12d000u;

    // 0x12d000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d008: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x12d008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12d00c: 0xc04c740  jal         func_131D00
    ctx->pc = 0x12D00Cu;
    SET_GPR_U32(ctx, 31, 0x12D014u);
    ctx->pc = 0x12D010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D00Cu;
    // 0x12d010: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131D00u, 0x12D00Cu, 0x12D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D014u;
label_12d014:
    // 0x12d014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d018: 0x3e00008  jr          $ra
    ctx->pc = 0x12D018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D018u;
        // 0x12d01c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D020u;
}
