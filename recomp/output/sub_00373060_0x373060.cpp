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

// Function: sub_00373060
// Address: 0x373060 - 0x373088
void sub_00373060_0x373060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373060_0x373060");
#endif

    ctx->pc = 0x373060u;

    // 0x373060: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x373060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x373064: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x373064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x373068: 0x8ca2ccc0  lw          $v0, -0x3340($a1)
    ctx->pc = 0x373068u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x37306c: 0xac440074  sw          $a0, 0x74($v0)
    ctx->pc = 0x37306cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 4));
    // 0x373070: 0x8ca3ccc0  lw          $v1, -0x3340($a1)
    ctx->pc = 0x373070u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x373074: 0x3e00008  jr          $ra
    ctx->pc = 0x373074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373074u;
        // 0x373078: 0xac660048  sw          $a2, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37307Cu;
    // 0x37307c: 0x0  nop
    ctx->pc = 0x37307cu;
    // NOP
    // 0x373080: 0xacc30048  sw          $v1, 0x48($a2)
    ctx->pc = 0x373080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
    // 0x373084: 0x0  nop
    ctx->pc = 0x373084u;
    // NOP
    ctx->pc = 0x373088u;
}
