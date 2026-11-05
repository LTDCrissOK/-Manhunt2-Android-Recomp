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

// Function: sub_00115B70
// Address: 0x115b70 - 0x115b90
void sub_00115B70_0x115b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115B70_0x115b70");
#endif

    ctx->pc = 0x115b70u;

    // 0x115b70: 0x90820040  lbu         $v0, 0x40($a0)
    ctx->pc = 0x115b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x115b74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x115b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x115b78: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x115b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x115b7c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x115b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x115b80: 0x90830040  lbu         $v1, 0x40($a0)
    ctx->pc = 0x115b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x115b84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x115b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x115b88: 0x3e00008  jr          $ra
    ctx->pc = 0x115B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B88u;
        // 0x115b8c: 0xa0830040  sb          $v1, 0x40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115B90u;
}
