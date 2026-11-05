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

// Function: sub_0017D880
// Address: 0x17d880 - 0x17d8a8
void sub_0017D880_0x17d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D880_0x17d880");
#endif

    switch (ctx->pc) {
        case 0x17d89cu: goto label_17d89c;
        default: break;
    }

    ctx->pc = 0x17d880u;

    // 0x17d880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d884: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17d884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d88c: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x17d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x17d890: 0xac4000f8  sw          $zero, 0xF8($v0)
    ctx->pc = 0x17d890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
    // 0x17d894: 0xc05f616  jal         func_17D858
    ctx->pc = 0x17D894u;
    SET_GPR_U32(ctx, 31, 0x17D89Cu);
    ctx->pc = 0x17D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D894u;
    // 0x17d898: 0xac4000fc  sw          $zero, 0xFC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D858u, 0x17D894u, 0x17D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D89Cu;
label_17d89c:
    // 0x17d89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8A0u;
        // 0x17d8a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D8A8u;
}
