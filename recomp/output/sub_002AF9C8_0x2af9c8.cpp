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

// Function: sub_002AF9C8
// Address: 0x2af9c8 - 0x2af9e8
void sub_002AF9C8_0x2af9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF9C8_0x2af9c8");
#endif

    switch (ctx->pc) {
        case 0x2af9dcu: goto label_2af9dc;
        default: break;
    }

    ctx->pc = 0x2af9c8u;

    // 0x2af9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af9cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2af9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af9d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af9d4: 0xc0abe50  jal         func_2AF940
    ctx->pc = 0x2AF9D4u;
    SET_GPR_U32(ctx, 31, 0x2AF9DCu);
    ctx->pc = 0x2AF9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF9D4u;
    // 0x2af9d8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF940u, 0x2AF9D4u, 0x2AF9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF9DCu;
label_2af9dc:
    // 0x2af9dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF9E0u;
        // 0x2af9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF9E8u;
}
