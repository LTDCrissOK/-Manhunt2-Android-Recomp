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

// Function: sub_00162930
// Address: 0x162930 - 0x162968
void sub_00162930_0x162930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162930_0x162930");
#endif

    switch (ctx->pc) {
        case 0x162950u: goto label_162950;
        default: break;
    }

    ctx->pc = 0x162930u;

    // 0x162930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16293c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16293cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162940: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x162940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x162944: 0xae020358  sw          $v0, 0x358($s0)
    ctx->pc = 0x162944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 856), GPR_U32(ctx, 2));
    // 0x162948: 0xc058cee  jal         func_1633B8
    ctx->pc = 0x162948u;
    SET_GPR_U32(ctx, 31, 0x162950u);
    ctx->pc = 0x16294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162948u;
    // 0x16294c: 0xae020354  sw          $v0, 0x354($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1633B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1633B8u, 0x162948u, 0x162950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162950u;
label_162950:
    // 0x162950: 0xae00034c  sw          $zero, 0x34C($s0)
    ctx->pc = 0x162950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 0));
    // 0x162954: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x162954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x162958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16295c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16295cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162960: 0x3e00008  jr          $ra
    ctx->pc = 0x162960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162960u;
        // 0x162964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162968u;
}
