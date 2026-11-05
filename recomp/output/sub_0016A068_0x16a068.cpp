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

// Function: sub_0016A068
// Address: 0x16a068 - 0x16a090
void sub_0016A068_0x16a068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A068_0x16a068");
#endif

    switch (ctx->pc) {
        case 0x16a07cu: goto label_16a07c;
        default: break;
    }

    ctx->pc = 0x16a068u;

    // 0x16a068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a06c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a070: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16a070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16a074: 0xc05aae0  jal         func_16AB80
    ctx->pc = 0x16A074u;
    SET_GPR_U32(ctx, 31, 0x16A07Cu);
    ctx->pc = 0x16A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A074u;
    // 0x16a078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AB80u, 0x16A074u, 0x16A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A07Cu;
label_16a07c:
    // 0x16a07c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x16a07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16a080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a084: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16a084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a088: 0x3e00008  jr          $ra
    ctx->pc = 0x16A088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A088u;
        // 0x16a08c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A090u;
}
