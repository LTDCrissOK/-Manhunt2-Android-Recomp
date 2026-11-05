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

// Function: sub_002E17C8
// Address: 0x2e17c8 - 0x2e17f0
void sub_002E17C8_0x2e17c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E17C8_0x2e17c8");
#endif

    switch (ctx->pc) {
        case 0x2e17e4u: goto label_2e17e4;
        default: break;
    }

    ctx->pc = 0x2e17c8u;

    // 0x2e17c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e17c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e17cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2e17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2e17d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e17d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e17d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2e17d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17d8: 0x24423e38  addiu       $v0, $v0, 0x3E38
    ctx->pc = 0x2e17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15928));
    // 0x2e17dc: 0xc0b83d8  jal         func_2E0F60
    ctx->pc = 0x2E17DCu;
    SET_GPR_U32(ctx, 31, 0x2E17E4u);
    ctx->pc = 0x2E17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E17DCu;
    // 0x2e17e0: 0xac620070  sw          $v0, 0x70($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0F60u, 0x2E17DCu, 0x2E17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17E4u;
label_2e17e4:
    // 0x2e17e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e17e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e17e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E17E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17E8u;
        // 0x2e17ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E17E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E17F0u;
}
