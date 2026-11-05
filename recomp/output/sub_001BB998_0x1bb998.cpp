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

// Function: sub_001BB998
// Address: 0x1bb998 - 0x1bb9c0
void sub_001BB998_0x1bb998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB998_0x1bb998");
#endif

    switch (ctx->pc) {
        case 0x1bb9b4u: goto label_1bb9b4;
        default: break;
    }

    ctx->pc = 0x1bb998u;

    // 0x1bb998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb99c: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1bb99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x1bb9a0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bb9a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1bb9a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bb9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bb9a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb9ac: 0xc06ee7e  jal         func_1BB9F8
    ctx->pc = 0x1BB9ACu;
    SET_GPR_U32(ctx, 31, 0x1BB9B4u);
    ctx->pc = 0x1BB9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9F8u, 0x1BB9ACu, 0x1BB9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9B4u;
label_1bb9b4:
    // 0x1bb9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9B8u;
        // 0x1bb9bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB9C0u;
}
