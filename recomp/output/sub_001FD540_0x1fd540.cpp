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

// Function: sub_001FD540
// Address: 0x1fd540 - 0x1fd568
void sub_001FD540_0x1fd540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD540_0x1fd540");
#endif

    switch (ctx->pc) {
        case 0x1fd55cu: goto label_1fd55c;
        default: break;
    }

    ctx->pc = 0x1fd540u;

    // 0x1fd540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd544: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd54c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1fd54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fd550: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1fd550u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1fd554: 0xc07b150  jal         func_1EC540
    ctx->pc = 0x1FD554u;
    SET_GPR_U32(ctx, 31, 0x1FD55Cu);
    ctx->pc = 0x1FD558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD554u;
    // 0x1fd558: 0x312900ff  andi        $t1, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC540u, 0x1FD554u, 0x1FD55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD55Cu;
label_1fd55c:
    // 0x1fd55c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd560: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD560u;
        // 0x1fd564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD568u;
}
