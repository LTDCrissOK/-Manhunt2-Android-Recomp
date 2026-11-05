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

// Function: sub_00143A10
// Address: 0x143a10 - 0x143a30
void sub_00143A10_0x143a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143A10_0x143a10");
#endif

    switch (ctx->pc) {
        case 0x143a24u: goto label_143a24;
        default: break;
    }

    ctx->pc = 0x143a10u;

    // 0x143a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143a14: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x143a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x143a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143a1c: 0xc04e820  jal         func_13A080
    ctx->pc = 0x143A1Cu;
    SET_GPR_U32(ctx, 31, 0x143A24u);
    ctx->pc = 0x143A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A1Cu;
    // 0x143a20: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A080u, 0x143A1Cu, 0x143A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A24u;
label_143a24:
    // 0x143a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143a28: 0x3e00008  jr          $ra
    ctx->pc = 0x143A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A28u;
        // 0x143a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143A30u;
}
