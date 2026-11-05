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

// Function: sub_0017E7E0
// Address: 0x17e7e0 - 0x17e800
void sub_0017E7E0_0x17e7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E7E0_0x17e7e0");
#endif

    ctx->pc = 0x17e7e0u;

    // 0x17e7e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e7e4: 0xac8800c4  sw          $t0, 0xC4($a0)
    ctx->pc = 0x17e7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 8));
    // 0x17e7e8: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x17e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x17e7ec: 0xac8700bc  sw          $a3, 0xBC($a0)
    ctx->pc = 0x17e7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 7));
    // 0x17e7f0: 0xac8500b4  sw          $a1, 0xB4($a0)
    ctx->pc = 0x17e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 5));
    // 0x17e7f4: 0xac8600b8  sw          $a2, 0xB8($a0)
    ctx->pc = 0x17e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 6));
    // 0x17e7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7F8u;
        // 0x17e7fc: 0xac8900c0  sw          $t1, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E800u;
}
