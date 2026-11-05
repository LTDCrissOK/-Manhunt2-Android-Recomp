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

// Function: sub_00370398
// Address: 0x370398 - 0x3703d8
void sub_00370398_0x370398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370398_0x370398");
#endif

    ctx->pc = 0x370398u;

    // 0x370398: 0x413c0  sll         $v0, $a0, 15
    ctx->pc = 0x370398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x37039c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x37039cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3703a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3703a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3703a4: 0x41a83  sra         $v1, $a0, 10
    ctx->pc = 0x3703a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 10));
    // 0x3703a8: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x3703a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x3703ac: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3703acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3703b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3703b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3703b4: 0x41983  sra         $v1, $a0, 6
    ctx->pc = 0x3703b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 6));
    // 0x3703b8: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x3703b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x3703bc: 0x412c0  sll         $v0, $a0, 11
    ctx->pc = 0x3703bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x3703c0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3703c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3703c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3703c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3703c8: 0x41403  sra         $v0, $a0, 16
    ctx->pc = 0x3703c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3703cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3703CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3703D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3703CCu;
        // 0x3703d0: 0x821026  xor         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3703CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3703D4u;
    // 0x3703d4: 0x0  nop
    ctx->pc = 0x3703d4u;
    // NOP
    ctx->pc = 0x3703d8u;
}
