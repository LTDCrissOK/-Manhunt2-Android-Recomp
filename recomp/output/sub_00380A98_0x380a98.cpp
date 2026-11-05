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

// Function: sub_00380A98
// Address: 0x380a98 - 0x380ac0
void sub_00380A98_0x380a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380A98_0x380a98");
#endif

    ctx->pc = 0x380a98u;

    // 0x380a98: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x380a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x380a9c: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x380a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x380aa0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x380aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x380aa4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x380aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x380aa8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x380aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x380aac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x380aacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x380ab0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x380ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x380ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x380AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380AB4u;
        // 0x380ab8: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380ABCu;
    // 0x380abc: 0x0  nop
    ctx->pc = 0x380abcu;
    // NOP
    ctx->pc = 0x380ac0u;
}
