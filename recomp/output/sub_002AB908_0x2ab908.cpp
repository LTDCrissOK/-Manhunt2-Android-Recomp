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

// Function: sub_002AB908
// Address: 0x2ab908 - 0x2ab938
void sub_002AB908_0x2ab908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB908_0x2ab908");
#endif

    switch (ctx->pc) {
        case 0x2ab91cu: goto label_2ab91c;
        case 0x2ab924u: goto label_2ab924;
        default: break;
    }

    ctx->pc = 0x2ab908u;

    // 0x2ab908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab910: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ab910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ab914: 0xc0aae68  jal         func_2AB9A0
    ctx->pc = 0x2AB914u;
    SET_GPR_U32(ctx, 31, 0x2AB91Cu);
    ctx->pc = 0x2AB918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB914u;
    // 0x2ab918: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB9A0u, 0x2AB914u, 0x2AB91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB91Cu;
label_2ab91c:
    // 0x2ab91c: 0xc0aaef0  jal         func_2ABBC0
    ctx->pc = 0x2AB91Cu;
    SET_GPR_U32(ctx, 31, 0x2AB924u);
    ctx->pc = 0x2AB920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB91Cu;
    // 0x2ab920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBC0u, 0x2AB91Cu, 0x2AB924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB924u;
label_2ab924:
    // 0x2ab924: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2ab924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2ab928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab92c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ab92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab930: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB930u;
        // 0x2ab934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB938u;
}
