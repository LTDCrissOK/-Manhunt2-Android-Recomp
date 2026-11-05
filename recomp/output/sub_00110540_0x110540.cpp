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

// Function: sub_00110540
// Address: 0x110540 - 0x110560
void sub_00110540_0x110540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110540_0x110540");
#endif

    switch (ctx->pc) {
        case 0x110550u: goto label_110550;
        default: break;
    }

    ctx->pc = 0x110540u;

    // 0x110540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110548: 0xc05de00  jal         func_177800
    ctx->pc = 0x110548u;
    SET_GPR_U32(ctx, 31, 0x110550u);
    ctx->pc = 0x11054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110548u;
    // 0x11054c: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177800u, 0x110548u, 0x110550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110550u;
label_110550:
    // 0x110550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110554: 0x3e00008  jr          $ra
    ctx->pc = 0x110554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110554u;
        // 0x110558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11055Cu;
    // 0x11055c: 0x0  nop
    ctx->pc = 0x11055cu;
    // NOP
    ctx->pc = 0x110560u;
}
