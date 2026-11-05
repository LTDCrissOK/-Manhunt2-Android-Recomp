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

// Function: sub_00370AE0
// Address: 0x370ae0 - 0x370af8
void sub_00370AE0_0x370ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370AE0_0x370ae0");
#endif

    ctx->pc = 0x370ae0u;

    // 0x370ae0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x370ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x370ae4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x370ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x370ae8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x370ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u)); // MMIO: 0x10009000
    // 0x370aec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x370aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x370af0: 0x3e00008  jr          $ra
    ctx->pc = 0x370AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370AF0u;
        // 0x370af4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370AF8u;
}
