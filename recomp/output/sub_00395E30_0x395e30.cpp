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

// Function: sub_00395E30
// Address: 0x395e30 - 0x395e58
void sub_00395E30_0x395e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395E30_0x395e30");
#endif

    ctx->pc = 0x395e30u;

    // 0x395e30: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x395e30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x395e34: 0x248507ff  addiu       $a1, $a0, 0x7FF
    ctx->pc = 0x395e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    // 0x395e38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x395e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395e3c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x395e3cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x395e40: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x395e40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x395e44: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x395e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x395e48: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x395e48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x395e4c: 0x4202a  slt         $a0, $zero, $a0
    ctx->pc = 0x395e4cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x395e50: 0x3e00008  jr          $ra
    ctx->pc = 0x395E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E50u;
        // 0x395e54: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395E58u;
}
