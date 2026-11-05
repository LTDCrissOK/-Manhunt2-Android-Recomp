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

// Function: sub_00146140
// Address: 0x146140 - 0x146160
void sub_00146140_0x146140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146140_0x146140");
#endif

    switch (ctx->pc) {
        case 0x146154u: goto label_146154;
        default: break;
    }

    ctx->pc = 0x146140u;

    // 0x146140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x146144: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x146144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x146148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14614c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14614Cu;
    SET_GPR_U32(ctx, 31, 0x146154u);
    ctx->pc = 0x146150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14614Cu;
    // 0x146150: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14614Cu, 0x146154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146154u;
label_146154:
    // 0x146154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146158: 0x3e00008  jr          $ra
    ctx->pc = 0x146158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146158u;
        // 0x14615c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146160u;
}
