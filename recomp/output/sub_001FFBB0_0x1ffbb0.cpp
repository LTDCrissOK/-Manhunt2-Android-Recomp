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

// Function: sub_001FFBB0
// Address: 0x1ffbb0 - 0x1ffbd0
void sub_001FFBB0_0x1ffbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFBB0_0x1ffbb0");
#endif

    ctx->pc = 0x1ffbb0u;

    // 0x1ffbb0: 0x24a5fffb  addiu       $a1, $a1, -0x5
    ctx->pc = 0x1ffbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x1ffbb4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ffbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ffbb8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1ffbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ffbbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ffbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffbc0: 0xac46009c  sw          $a2, 0x9C($v0)
    ctx->pc = 0x1ffbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 6));
    // 0x1ffbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBC4u;
        // 0x1ffbc8: 0xac8700a8  sw          $a3, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFBCCu;
    // 0x1ffbcc: 0x0  nop
    ctx->pc = 0x1ffbccu;
    // NOP
    ctx->pc = 0x1ffbd0u;
}
