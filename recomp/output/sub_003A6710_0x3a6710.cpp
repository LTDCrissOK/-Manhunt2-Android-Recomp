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

// Function: sub_003A6710
// Address: 0x3a6710 - 0x3a6728
void sub_003A6710_0x3a6710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6710_0x3a6710");
#endif

    ctx->pc = 0x3a6710u;

    // 0x3a6710: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3a6710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3a6714: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3a6714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3a6718: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x3a6718u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x3a671c: 0x3883005c  xori        $v1, $a0, 0x5C
    ctx->pc = 0x3a671cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)92);
    // 0x3a6720: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6720u;
        // 0x3a6724: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6728u;
}
