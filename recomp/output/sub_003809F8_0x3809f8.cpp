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

// Function: sub_003809F8
// Address: 0x3809f8 - 0x380a30
void sub_003809F8_0x3809f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003809F8_0x3809f8");
#endif

    ctx->pc = 0x3809f8u;

    // 0x3809f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3809f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3809fc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3809fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x380a00: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x380a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x380a04: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x380a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x380a08: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x380a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x380a0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x380a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x380a10: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x380a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x380a14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x380a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x380a18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x380a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x380a1c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x380a1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x380a20: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x380a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x380a24: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x380a24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x380a28: 0x3e00008  jr          $ra
    ctx->pc = 0x380A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A28u;
        // 0x380a2c: 0xac470008  sw          $a3, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380A30u;
}
