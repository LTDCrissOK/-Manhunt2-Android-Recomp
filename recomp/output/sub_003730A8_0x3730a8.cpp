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

// Function: sub_003730A8
// Address: 0x3730a8 - 0x3730d0
void sub_003730A8_0x3730a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003730A8_0x3730a8");
#endif

    ctx->pc = 0x3730a8u;

    // 0x3730a8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3730a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3730ac: 0x8c64ccc0  lw          $a0, -0x3340($v1)
    ctx->pc = 0x3730acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x3730b0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x3730b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x3730b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3730b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3730b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3730b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3730bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3730bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3730c0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3730c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3730c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3730C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3730C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730C4u;
        // 0x3730c8: 0x304201ff  andi        $v0, $v0, 0x1FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3730C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3730CCu;
    // 0x3730cc: 0x0  nop
    ctx->pc = 0x3730ccu;
    // NOP
    ctx->pc = 0x3730d0u;
}
