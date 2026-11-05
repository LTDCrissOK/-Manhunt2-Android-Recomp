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

// Function: sub_00175FC0
// Address: 0x175fc0 - 0x175fe0
void sub_00175FC0_0x175fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175FC0_0x175fc0");
#endif

    switch (ctx->pc) {
        case 0x175fc4u: goto label_175fc4;
        case 0x175fccu: goto label_175fcc;
        default: break;
    }

    ctx->pc = 0x175fc0u;

    // 0x175fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175fc4:
    // 0x175fc4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x175fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x175fc8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x175fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_175fcc:
    // 0x175fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175fd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x175FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FD8u;
        // 0x175fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175FE0u;
}
