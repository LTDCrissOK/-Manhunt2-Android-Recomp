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

// Function: sub_0014DE38
// Address: 0x14de38 - 0x14de60
void sub_0014DE38_0x14de38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DE38_0x14de38");
#endif

    switch (ctx->pc) {
        case 0x14de4cu: goto label_14de4c;
        default: break;
    }

    ctx->pc = 0x14de38u;

    // 0x14de38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14de38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14de3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14de3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14de40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14de40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14de44: 0xc04d6d2  jal         func_135B48
    ctx->pc = 0x14DE44u;
    SET_GPR_U32(ctx, 31, 0x14DE4Cu);
    ctx->pc = 0x14DE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE44u;
    // 0x14de48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135B48u, 0x14DE44u, 0x14DE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE4Cu;
label_14de4c:
    // 0x14de4c: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x14de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x14de50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14de50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14de54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14de54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14de58: 0x3e00008  jr          $ra
    ctx->pc = 0x14DE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE58u;
        // 0x14de5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DE60u;
}
