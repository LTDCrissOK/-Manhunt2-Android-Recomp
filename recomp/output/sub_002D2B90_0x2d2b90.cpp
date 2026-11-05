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

// Function: sub_002D2B90
// Address: 0x2d2b90 - 0x2d2bc0
void sub_002D2B90_0x2d2b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2B90_0x2d2b90");
#endif

    switch (ctx->pc) {
        case 0x2d2bb4u: goto label_2d2bb4;
        default: break;
    }

    ctx->pc = 0x2d2b90u;

    // 0x2d2b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d2b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d2b94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2d2b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2b9c: 0x24423d88  addiu       $v0, $v0, 0x3D88
    ctx->pc = 0x2d2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15752));
    // 0x2d2ba0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2d2ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d2ba4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2BA4u;
    {
        const bool branch_taken_0x2d2ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BA4u;
        // 0x2d2ba8: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ba4) {
            ctx->pc = 0x2D2BB4u;
            goto label_2d2bb4;
        }
    }
    ctx->pc = 0x2D2BACu;
    // 0x2d2bac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D2BACu;
    SET_GPR_U32(ctx, 31, 0x2D2BB4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D2BACu, 0x2D2BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BB4u;
label_2d2bb4:
    // 0x2d2bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BB8u;
        // 0x2d2bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2BC0u;
}
