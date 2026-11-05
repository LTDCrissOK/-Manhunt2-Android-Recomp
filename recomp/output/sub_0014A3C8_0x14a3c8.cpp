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

// Function: sub_0014A3C8
// Address: 0x14a3c8 - 0x14a3e8
void sub_0014A3C8_0x14a3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A3C8_0x14a3c8");
#endif

    switch (ctx->pc) {
        case 0x14a3dcu: goto label_14a3dc;
        default: break;
    }

    ctx->pc = 0x14a3c8u;

    // 0x14a3c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a3cc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14a3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14a3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a3d4: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14A3D4u;
    SET_GPR_U32(ctx, 31, 0x14A3DCu);
    ctx->pc = 0x14A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A3D4u;
    // 0x14a3d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14A3D4u, 0x14A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A3DCu;
label_14a3dc:
    // 0x14a3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x14A3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3E0u;
        // 0x14a3e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A3E8u;
}
