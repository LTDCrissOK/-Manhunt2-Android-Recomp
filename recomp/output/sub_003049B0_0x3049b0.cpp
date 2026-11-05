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

// Function: sub_003049B0
// Address: 0x3049b0 - 0x3049e0
void sub_003049B0_0x3049b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003049B0_0x3049b0");
#endif

    switch (ctx->pc) {
        case 0x3049ccu: goto label_3049cc;
        default: break;
    }

    ctx->pc = 0x3049b0u;

    // 0x3049b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3049b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3049b4: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x3049b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x3049b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3049b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3049bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3049bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3049c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3049c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3049c4: 0xc0c1278  jal         func_3049E0
    ctx->pc = 0x3049C4u;
    SET_GPR_U32(ctx, 31, 0x3049CCu);
    ctx->pc = 0x3049C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3049C4u;
    // 0x3049c8: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049E0u, 0x3049C4u, 0x3049CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049CCu;
label_3049cc:
    // 0x3049cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3049ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3049d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3049d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3049d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3049d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3049d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3049D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3049DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049D8u;
        // 0x3049dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3049D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3049E0u;
}
