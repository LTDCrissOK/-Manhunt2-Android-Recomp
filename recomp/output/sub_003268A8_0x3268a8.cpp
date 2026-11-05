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

// Function: sub_003268A8
// Address: 0x3268a8 - 0x3268c8
void sub_003268A8_0x3268a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003268A8_0x3268a8");
#endif

    ctx->pc = 0x3268a8u;

    // 0x3268a8: 0x2ca20014  sltiu       $v0, $a1, 0x14
    ctx->pc = 0x3268a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x3268ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3268ACu;
    {
        const bool branch_taken_0x3268ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3268B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268ACu;
        // 0x3268b0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268ac) {
            ctx->pc = 0x3268C0u;
            goto label_3268c0;
        }
    }
    ctx->pc = 0x3268B4u;
    // 0x3268b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3268b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3268b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3268b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3268bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3268bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3268c0:
    // 0x3268c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3268C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3268C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3268C8u;
}
