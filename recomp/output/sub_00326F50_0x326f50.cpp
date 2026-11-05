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

// Function: sub_00326F50
// Address: 0x326f50 - 0x326f70
void sub_00326F50_0x326f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326F50_0x326f50");
#endif

    ctx->pc = 0x326f50u;

    // 0x326f50: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x326f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x326f54: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x326f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x326f58: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x326f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x326f5c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x326f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x326f60: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x326f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x326f64: 0x3e00008  jr          $ra
    ctx->pc = 0x326F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F64u;
        // 0x326f68: 0xaca42c78  sw          $a0, 0x2C78($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 11384), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326F6Cu;
    // 0x326f6c: 0x0  nop
    ctx->pc = 0x326f6cu;
    // NOP
    ctx->pc = 0x326f70u;
}
