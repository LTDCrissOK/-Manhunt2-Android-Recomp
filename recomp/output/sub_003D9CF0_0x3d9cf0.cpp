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

// Function: sub_003D9CF0
// Address: 0x3d9cf0 - 0x3d9d10
void sub_003D9CF0_0x3d9cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9CF0_0x3d9cf0");
#endif

    ctx->pc = 0x3d9cf0u;

    // 0x3d9cf0: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x3d9cf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3d9cf4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x3d9cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3d9cf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3d9cfc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3d9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3d9d00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3d9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3d9d04: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D04u;
        // 0x3d9d08: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9D0Cu;
    // 0x3d9d0c: 0x0  nop
    ctx->pc = 0x3d9d0cu;
    // NOP
    ctx->pc = 0x3d9d10u;
}
