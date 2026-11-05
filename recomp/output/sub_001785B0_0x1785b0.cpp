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

// Function: sub_001785B0
// Address: 0x1785b0 - 0x1785e8
void sub_001785B0_0x1785b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001785B0_0x1785b0");
#endif

    ctx->pc = 0x1785b0u;

    // 0x1785b0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1785b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1785b4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1785b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1785b8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1785b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1785bc: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1785bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1785c0: 0xac43015c  sw          $v1, 0x15C($v0)
    ctx->pc = 0x1785c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 3));
    // 0x1785c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1785c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1785c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785cc: 0xacc00160  sw          $zero, 0x160($a2)
    ctx->pc = 0x1785ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 352), GPR_U32(ctx, 0));
    // 0x1785d0: 0xac800168  sw          $zero, 0x168($a0)
    ctx->pc = 0x1785d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 0));
    // 0x1785d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1785D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1785D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785D4u;
        // 0x1785d8: 0xa0800164  sb          $zero, 0x164($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 356), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1785D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1785DCu;
    // 0x1785dc: 0x0  nop
    ctx->pc = 0x1785dcu;
    // NOP
    // 0x1785e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1785e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1785e4: 0x0  nop
    ctx->pc = 0x1785e4u;
    // NOP
    ctx->pc = 0x1785e8u;
}
