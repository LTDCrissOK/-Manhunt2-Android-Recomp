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

// Function: sub_001FD668
// Address: 0x1fd668 - 0x1fd688
void sub_001FD668_0x1fd668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD668_0x1fd668");
#endif

    switch (ctx->pc) {
        case 0x1fd67cu: goto label_1fd67c;
        default: break;
    }

    ctx->pc = 0x1fd668u;

    // 0x1fd668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd66c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd674: 0xc07f222  jal         func_1FC888
    ctx->pc = 0x1FD674u;
    SET_GPR_U32(ctx, 31, 0x1FD67Cu);
    ctx->pc = 0x1FD678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD674u;
    // 0x1fd678: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC888u, 0x1FD674u, 0x1FD67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD67Cu;
label_1fd67c:
    // 0x1fd67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd680: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD680u;
        // 0x1fd684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD688u;
}
