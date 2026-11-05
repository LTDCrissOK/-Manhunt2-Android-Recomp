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

// Function: sub_0017D858
// Address: 0x17d858 - 0x17d880
void sub_0017D858_0x17d858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D858_0x17d858");
#endif

    switch (ctx->pc) {
        case 0x17d870u: goto label_17d870;
        default: break;
    }

    ctx->pc = 0x17d858u;

    // 0x17d858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d85c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17d85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d864: 0xac4000ec  sw          $zero, 0xEC($v0)
    ctx->pc = 0x17d864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 0));
    // 0x17d868: 0xc05f60e  jal         func_17D838
    ctx->pc = 0x17D868u;
    SET_GPR_U32(ctx, 31, 0x17D870u);
    ctx->pc = 0x17D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D868u;
    // 0x17d86c: 0xac4000f0  sw          $zero, 0xF0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D838u, 0x17D868u, 0x17D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D870u;
label_17d870:
    // 0x17d870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d874: 0x3e00008  jr          $ra
    ctx->pc = 0x17D874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D874u;
        // 0x17d878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D87Cu;
    // 0x17d87c: 0x0  nop
    ctx->pc = 0x17d87cu;
    // NOP
    ctx->pc = 0x17d880u;
}
