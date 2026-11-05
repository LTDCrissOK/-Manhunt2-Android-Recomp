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

// Function: sub_0017D748
// Address: 0x17d748 - 0x17d770
void sub_0017D748_0x17d748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D748_0x17d748");
#endif

    switch (ctx->pc) {
        case 0x17d760u: goto label_17d760;
        default: break;
    }

    ctx->pc = 0x17d748u;

    // 0x17d748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d74c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17d74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d754: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x17d754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x17d758: 0xc05f5dc  jal         func_17D770
    ctx->pc = 0x17D758u;
    SET_GPR_U32(ctx, 31, 0x17D760u);
    ctx->pc = 0x17D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D758u;
    // 0x17d75c: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D770u, 0x17D758u, 0x17D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D760u;
label_17d760:
    // 0x17d760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d764: 0x3e00008  jr          $ra
    ctx->pc = 0x17D764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D764u;
        // 0x17d768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D76Cu;
    // 0x17d76c: 0x0  nop
    ctx->pc = 0x17d76cu;
    // NOP
    ctx->pc = 0x17d770u;
}
