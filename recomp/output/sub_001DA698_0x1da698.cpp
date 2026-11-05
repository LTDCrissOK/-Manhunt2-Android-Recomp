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

// Function: sub_001DA698
// Address: 0x1da698 - 0x1da6d0
void sub_001DA698_0x1da698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA698_0x1da698");
#endif

    switch (ctx->pc) {
        case 0x1da6acu: goto label_1da6ac;
        default: break;
    }

    ctx->pc = 0x1da698u;

    // 0x1da698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da69c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da6a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da6a4: 0xc076442  jal         func_1D9108
    ctx->pc = 0x1DA6A4u;
    SET_GPR_U32(ctx, 31, 0x1DA6ACu);
    ctx->pc = 0x1DA6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA6A4u;
    // 0x1da6a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9108u, 0x1DA6A4u, 0x1DA6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6ACu;
label_1da6ac:
    // 0x1da6ac: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1da6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1da6b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1da6b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6b4: 0x246314c8  addiu       $v1, $v1, 0x14C8
    ctx->pc = 0x1da6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5320));
    // 0x1da6b8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1da6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1da6bc: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1da6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1da6c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da6c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6C8u;
        // 0x1da6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA6D0u;
}
