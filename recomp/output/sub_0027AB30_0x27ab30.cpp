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

// Function: sub_0027AB30
// Address: 0x27ab30 - 0x27ab60
void sub_0027AB30_0x27ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AB30_0x27ab30");
#endif

    switch (ctx->pc) {
        case 0x27ab4cu: goto label_27ab4c;
        default: break;
    }

    ctx->pc = 0x27ab30u;

    // 0x27ab30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ab34: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x27ab34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x27ab38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ab3c: 0x24a5ede8  addiu       $a1, $a1, -0x1218
    ctx->pc = 0x27ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962664));
    // 0x27ab40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27ab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27ab44: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x27AB44u;
    SET_GPR_U32(ctx, 31, 0x27AB4Cu);
    ctx->pc = 0x27AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AB44u;
    // 0x27ab48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x27AB44u, 0x27AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB4Cu;
label_27ab4c:
    // 0x27ab4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27ab4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27ab50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ab54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ab54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ab58: 0x3e00008  jr          $ra
    ctx->pc = 0x27AB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB58u;
        // 0x27ab5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AB60u;
}
