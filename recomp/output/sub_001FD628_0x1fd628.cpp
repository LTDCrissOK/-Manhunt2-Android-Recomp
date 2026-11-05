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

// Function: sub_001FD628
// Address: 0x1fd628 - 0x1fd648
void sub_001FD628_0x1fd628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD628_0x1fd628");
#endif

    switch (ctx->pc) {
        case 0x1fd63cu: goto label_1fd63c;
        default: break;
    }

    ctx->pc = 0x1fd628u;

    // 0x1fd628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd62c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd634: 0xc07f1fa  jal         func_1FC7E8
    ctx->pc = 0x1FD634u;
    SET_GPR_U32(ctx, 31, 0x1FD63Cu);
    ctx->pc = 0x1FD638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD634u;
    // 0x1fd638: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC7E8u, 0x1FD634u, 0x1FD63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD63Cu;
label_1fd63c:
    // 0x1fd63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd640: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD640u;
        // 0x1fd644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD648u;
}
