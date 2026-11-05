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

// Function: sub_003D7778
// Address: 0x3d7778 - 0x3d7790
void sub_003D7778_0x3d7778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7778_0x3d7778");
#endif

    ctx->pc = 0x3d7778u;

    // 0x3d7778: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3d7778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3d777c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3d777cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7780: 0x24632618  addiu       $v1, $v1, 0x2618
    ctx->pc = 0x3d7780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9752));
    // 0x3d7784: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7784u;
        // 0x3d7788: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D778Cu;
    // 0x3d778c: 0x0  nop
    ctx->pc = 0x3d778cu;
    // NOP
    ctx->pc = 0x3d7790u;
}
