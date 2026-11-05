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

// Function: sub_001FD948
// Address: 0x1fd948 - 0x1fd968
void sub_001FD948_0x1fd948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD948_0x1fd948");
#endif

    switch (ctx->pc) {
        case 0x1fd95cu: goto label_1fd95c;
        default: break;
    }

    ctx->pc = 0x1fd948u;

    // 0x1fd948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd94c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd954: 0xc07d686  jal         func_1F5A18
    ctx->pc = 0x1FD954u;
    SET_GPR_U32(ctx, 31, 0x1FD95Cu);
    ctx->pc = 0x1FD958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD954u;
    // 0x1fd958: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5A18u, 0x1FD954u, 0x1FD95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD95Cu;
label_1fd95c:
    // 0x1fd95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd960: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD960u;
        // 0x1fd964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD968u;
}
