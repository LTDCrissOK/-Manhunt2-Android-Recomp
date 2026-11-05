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

// Function: sub_00380A60
// Address: 0x380a60 - 0x380a98
void sub_00380A60_0x380a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380A60_0x380a60");
#endif

    ctx->pc = 0x380a60u;

    // 0x380a60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x380a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x380a64: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x380a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x380a68: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x380a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x380a6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x380a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x380a70: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x380a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x380a74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x380a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x380a78: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x380a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x380a7c: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x380a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x380a80: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x380a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x380a84: 0x3e00008  jr          $ra
    ctx->pc = 0x380A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A84u;
        // 0x380a88: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380A8Cu;
    // 0x380a8c: 0x0  nop
    ctx->pc = 0x380a8cu;
    // NOP
    // 0x380a90: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x380a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x380a94: 0x0  nop
    ctx->pc = 0x380a94u;
    // NOP
    ctx->pc = 0x380a98u;
}
