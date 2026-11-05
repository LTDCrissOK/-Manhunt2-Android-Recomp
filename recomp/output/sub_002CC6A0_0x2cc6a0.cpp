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

// Function: sub_002CC6A0
// Address: 0x2cc6a0 - 0x2cc6c8
void sub_002CC6A0_0x2cc6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC6A0_0x2cc6a0");
#endif

    ctx->pc = 0x2cc6a0u;

    // 0x2cc6a0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2cc6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2cc6a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cc6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cc6a8: 0x2463a600  addiu       $v1, $v1, -0x5A00
    ctx->pc = 0x2cc6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944256));
    // 0x2cc6ac: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2cc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2cc6b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2cc6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cc6b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cc6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cc6b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cc6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cc6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6BCu;
        // 0x2cc6c0: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC6C4u;
    // 0x2cc6c4: 0x0  nop
    ctx->pc = 0x2cc6c4u;
    // NOP
    ctx->pc = 0x2cc6c8u;
}
