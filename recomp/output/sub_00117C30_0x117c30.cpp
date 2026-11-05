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

// Function: sub_00117C30
// Address: 0x117c30 - 0x117c48
void sub_00117C30_0x117c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117C30_0x117c30");
#endif

    ctx->pc = 0x117c30u;

    // 0x117c30: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x117c30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x117c34: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x117c34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x117c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x117C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C3Cu;
        // 0x117c40: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117C44u;
    // 0x117c44: 0x0  nop
    ctx->pc = 0x117c44u;
    // NOP
    ctx->pc = 0x117c48u;
}
