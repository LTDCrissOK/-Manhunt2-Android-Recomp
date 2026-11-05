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

// Function: sub_002AC4F0
// Address: 0x2ac4f0 - 0x2ac538
void sub_002AC4F0_0x2ac4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC4F0_0x2ac4f0");
#endif

    ctx->pc = 0x2ac4f0u;

    // 0x2ac4f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ac4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ac4f4: 0x8c429160  lw          $v0, -0x6EA0($v0)
    ctx->pc = 0x2ac4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9160u));
    // 0x2ac4f8: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x2ac4f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2ac4fc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2AC4FCu;
    {
        const bool branch_taken_0x2ac4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC4FCu;
        // 0x2ac500: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac4fc) {
            ctx->pc = 0x2AC52Cu;
            goto label_2ac52c;
        }
    }
    ctx->pc = 0x2AC504u;
    // 0x2ac504: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ac504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ac508: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ac508u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ac50c: 0x2463dc90  addiu       $v1, $v1, -0x2370
    ctx->pc = 0x2ac50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958224));
    // 0x2ac510: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ac510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ac514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac518: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2ac518u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac51c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ac51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ac520: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ac520u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ac524: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC52Cu;
label_2ac52c:
    // 0x2ac52c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC52Cu;
        // 0x2ac530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC534u;
    // 0x2ac534: 0x0  nop
    ctx->pc = 0x2ac534u;
    // NOP
    ctx->pc = 0x2ac538u;
}
