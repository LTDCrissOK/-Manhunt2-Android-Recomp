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

// Function: sub_001417E8
// Address: 0x1417e8 - 0x141808
void sub_001417E8_0x1417e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001417E8_0x1417e8");
#endif

    switch (ctx->pc) {
        case 0x1417fcu: goto label_1417fc;
        default: break;
    }

    ctx->pc = 0x1417e8u;

    // 0x1417e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1417e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1417ec: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1417ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1417f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1417f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1417f4: 0xc04e820  jal         func_13A080
    ctx->pc = 0x1417F4u;
    SET_GPR_U32(ctx, 31, 0x1417FCu);
    ctx->pc = 0x1417F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1417F4u;
    // 0x1417f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A080u, 0x1417F4u, 0x1417FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1417FCu;
label_1417fc:
    // 0x1417fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1417fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141800: 0x3e00008  jr          $ra
    ctx->pc = 0x141800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141800u;
        // 0x141804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141808u;
}
