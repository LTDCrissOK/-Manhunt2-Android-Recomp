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

// Function: sub_00178088
// Address: 0x178088 - 0x1780a0
void sub_00178088_0x178088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178088_0x178088");
#endif

    ctx->pc = 0x178088u;

    // 0x178088: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x178088u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17808c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x17808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x178090: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x178090u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x178094: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x178094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x178098: 0x3e00008  jr          $ra
    ctx->pc = 0x178098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178098u;
        // 0x17809c: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1780A0u;
}
