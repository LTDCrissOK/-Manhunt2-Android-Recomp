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

// Function: sub_00136C58
// Address: 0x136c58 - 0x136c78
void sub_00136C58_0x136c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136C58_0x136c58");
#endif

    ctx->pc = 0x136c58u;

    // 0x136c58: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x136c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x136c5c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x136c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x136c60: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x136c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x136c64: 0xaca00470  sw          $zero, 0x470($a1)
    ctx->pc = 0x136c64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1136), GPR_U32(ctx, 0));
    // 0x136c68: 0x908204b0  lbu         $v0, 0x4B0($a0)
    ctx->pc = 0x136c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1200)));
    // 0x136c6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x136c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x136c70: 0x3e00008  jr          $ra
    ctx->pc = 0x136C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C70u;
        // 0x136c74: 0xa08204b0  sb          $v0, 0x4B0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1200), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136C78u;
}
