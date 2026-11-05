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

// Function: sub_003D5AF8
// Address: 0x3d5af8 - 0x3d5b20
void sub_003D5AF8_0x3d5af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5AF8_0x3d5af8");
#endif

    switch (ctx->pc) {
        case 0x3d5b08u: goto label_3d5b08;
        default: break;
    }

    ctx->pc = 0x3d5af8u;

    // 0x3d5af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d5af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d5afc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d5afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d5b00: 0xc0f5306  jal         func_3D4C18
    ctx->pc = 0x3D5B00u;
    SET_GPR_U32(ctx, 31, 0x3D5B08u);
    ctx->pc = 0x3D4C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4C18u, 0x3D5B00u, 0x3D5B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5B08u;
label_3d5b08:
    // 0x3d5b08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d5b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5b10: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3d5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3d5b14: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B14u;
        // 0x3d5b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5B1Cu;
    // 0x3d5b1c: 0x0  nop
    ctx->pc = 0x3d5b1cu;
    // NOP
    ctx->pc = 0x3d5b20u;
}
