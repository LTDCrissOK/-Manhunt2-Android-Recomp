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

// Function: sub_001D0BB8
// Address: 0x1d0bb8 - 0x1d0bf8
void sub_001D0BB8_0x1d0bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0BB8_0x1d0bb8");
#endif

    switch (ctx->pc) {
        case 0x1d0becu: goto label_1d0bec;
        default: break;
    }

    ctx->pc = 0x1d0bb8u;

    // 0x1d0bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0bbc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1d0bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1d0bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0bc4: 0x38e20001  xori        $v0, $a3, 0x1
    ctx->pc = 0x1d0bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x1d0bc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d0bcc: 0x30e70002  andi        $a3, $a3, 0x2
    ctx->pc = 0x1d0bccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x1d0bd0: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1d0bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1d0bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0bd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d0bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d0bdc: 0x122300a  movz        $a2, $t1, $v0
    ctx->pc = 0x1d0bdcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
    // 0x1d0be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0be4: 0xc0c32a0  jal         func_30CA80
    ctx->pc = 0x1D0BE4u;
    SET_GPR_U32(ctx, 31, 0x1D0BECu);
    ctx->pc = 0x1D0BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0BE4u;
    // 0x1d0be8: 0x107280b  movn        $a1, $t0, $a3 (Delay Slot)
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA80u, 0x1D0BE4u, 0x1D0BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BECu;
label_1d0bec:
    // 0x1d0bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BF0u;
        // 0x1d0bf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0BF8u;
}
