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

// Function: sub_001DB8E0
// Address: 0x1db8e0 - 0x1db918
void sub_001DB8E0_0x1db8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB8E0_0x1db8e0");
#endif

    switch (ctx->pc) {
        case 0x1db908u: goto label_1db908;
        default: break;
    }

    ctx->pc = 0x1db8e0u;

    // 0x1db8e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1db8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1db8e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db8e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db8e8: 0x8c4394c8  lw          $v1, -0x6B38($v0)
    ctx->pc = 0x1db8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F94C8u));
    // 0x1db8ec: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1db8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1db8f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db8f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1db8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1db8f8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB8F8u;
    {
        const bool branch_taken_0x1db8f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8F8u;
        // 0x1db8fc: 0xac4394c8  sw          $v1, -0x6B38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294939848), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8f8) {
            ctx->pc = 0x1DB908u;
            goto label_1db908;
        }
    }
    ctx->pc = 0x1DB900u;
    // 0x1db900: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1DB900u;
    SET_GPR_U32(ctx, 31, 0x1DB908u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1DB900u, 0x1DB908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB908u;
label_1db908:
    // 0x1db908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db90c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB90Cu;
        // 0x1db910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB914u;
    // 0x1db914: 0x0  nop
    ctx->pc = 0x1db914u;
    // NOP
    ctx->pc = 0x1db918u;
}
