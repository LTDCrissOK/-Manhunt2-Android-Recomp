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

// Function: sub_001FD688
// Address: 0x1fd688 - 0x1fd6b0
void sub_001FD688_0x1fd688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD688_0x1fd688");
#endif

    switch (ctx->pc) {
        case 0x1fd6a4u: goto label_1fd6a4;
        default: break;
    }

    ctx->pc = 0x1fd688u;

    // 0x1fd688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd68c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd694: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1fd694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fd698: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fd698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd69c: 0xc07f258  jal         func_1FC960
    ctx->pc = 0x1FD69Cu;
    SET_GPR_U32(ctx, 31, 0x1FD6A4u);
    ctx->pc = 0x1FD6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD69Cu;
    // 0x1fd6a0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC960u, 0x1FD69Cu, 0x1FD6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6A4u;
label_1fd6a4:
    // 0x1fd6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6A8u;
        // 0x1fd6ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD6B0u;
}
