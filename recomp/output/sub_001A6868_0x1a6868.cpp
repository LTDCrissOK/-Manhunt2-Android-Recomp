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

// Function: sub_001A6868
// Address: 0x1a6868 - 0x1a6888
void sub_001A6868_0x1a6868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6868_0x1a6868");
#endif

    switch (ctx->pc) {
        case 0x1a687cu: goto label_1a687c;
        default: break;
    }

    ctx->pc = 0x1a6868u;

    // 0x1a6868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a686c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1a686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a6870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6874: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6874u;
    SET_GPR_U32(ctx, 31, 0x1A687Cu);
    ctx->pc = 0x1A6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6874u;
    // 0x1a6878: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6874u, 0x1A687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A687Cu;
label_1a687c:
    // 0x1a687c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a687cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6880: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6880u;
        // 0x1a6884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6888u;
}
