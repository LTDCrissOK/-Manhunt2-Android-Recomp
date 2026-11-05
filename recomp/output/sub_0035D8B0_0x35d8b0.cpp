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

// Function: sub_0035D8B0
// Address: 0x35d8b0 - 0x35d8e0
void sub_0035D8B0_0x35d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D8B0_0x35d8b0");
#endif

    switch (ctx->pc) {
        case 0x35d8d4u: goto label_35d8d4;
        default: break;
    }

    ctx->pc = 0x35d8b0u;

    // 0x35d8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d8b4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x35d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x35d8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d8bc: 0x24424590  addiu       $v0, $v0, 0x4590
    ctx->pc = 0x35d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17808));
    // 0x35d8c0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x35d8c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x35d8c4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D8C4u;
    {
        const bool branch_taken_0x35d8c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D8C4u;
        // 0x35d8c8: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d8c4) {
            ctx->pc = 0x35D8D4u;
            goto label_35d8d4;
        }
    }
    ctx->pc = 0x35D8CCu;
    // 0x35d8cc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x35D8CCu;
    SET_GPR_U32(ctx, 31, 0x35D8D4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x35D8CCu, 0x35D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D8D4u;
label_35d8d4:
    // 0x35d8d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x35D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D8D8u;
        // 0x35d8dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D8E0u;
}
