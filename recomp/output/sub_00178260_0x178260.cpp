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

// Function: sub_00178260
// Address: 0x178260 - 0x178280
void sub_00178260_0x178260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178260_0x178260");
#endif

    ctx->pc = 0x178260u;

    // 0x178260: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x178260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x178264: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x178264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x178268: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x178268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17826c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x17826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x178270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178274: 0xac4300d8  sw          $v1, 0xD8($v0)
    ctx->pc = 0x178274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 3));
    // 0x178278: 0x3e00008  jr          $ra
    ctx->pc = 0x178278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178278u;
        // 0x17827c: 0xac8000dc  sw          $zero, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178280u;
}
