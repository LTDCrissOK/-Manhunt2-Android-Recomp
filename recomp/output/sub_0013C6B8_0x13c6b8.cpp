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

// Function: sub_0013C6B8
// Address: 0x13c6b8 - 0x13c6d8
void sub_0013C6B8_0x13c6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C6B8_0x13c6b8");
#endif

    ctx->pc = 0x13c6b8u;

    // 0x13c6b8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13c6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13c6bc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13c6c0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x13c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13c6c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x13c6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13c6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x13C6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6CCu;
        // 0x13c6d0: 0xaca0002c  sw          $zero, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C6D4u;
    // 0x13c6d4: 0x0  nop
    ctx->pc = 0x13c6d4u;
    // NOP
    ctx->pc = 0x13c6d8u;
}
