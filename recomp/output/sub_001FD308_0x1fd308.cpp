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

// Function: sub_001FD308
// Address: 0x1fd308 - 0x1fd330
void sub_001FD308_0x1fd308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD308_0x1fd308");
#endif

    switch (ctx->pc) {
        case 0x1fd320u: goto label_1fd320;
        default: break;
    }

    ctx->pc = 0x1fd308u;

    // 0x1fd308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd30c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd314: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1fd314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fd318: 0xc07db28  jal         func_1F6CA0
    ctx->pc = 0x1FD318u;
    SET_GPR_U32(ctx, 31, 0x1FD320u);
    ctx->pc = 0x1FD31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD318u;
    // 0x1fd31c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6CA0u, 0x1FD318u, 0x1FD320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD320u;
label_1fd320:
    // 0x1fd320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd324: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD324u;
        // 0x1fd328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD32Cu;
    // 0x1fd32c: 0x0  nop
    ctx->pc = 0x1fd32cu;
    // NOP
    ctx->pc = 0x1fd330u;
}
