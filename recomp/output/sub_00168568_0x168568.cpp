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

// Function: sub_00168568
// Address: 0x168568 - 0x168580
void sub_00168568_0x168568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168568_0x168568");
#endif

    ctx->pc = 0x168568u;

    // 0x168568: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x168568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16856c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16856cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x168570: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x168570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x168574: 0x3e00008  jr          $ra
    ctx->pc = 0x168574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168574u;
        // 0x168578: 0xac8002e0  sw          $zero, 0x2E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16857Cu;
    // 0x16857c: 0x0  nop
    ctx->pc = 0x16857cu;
    // NOP
    ctx->pc = 0x168580u;
}
