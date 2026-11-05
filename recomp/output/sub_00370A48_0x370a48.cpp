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

// Function: sub_00370A48
// Address: 0x370a48 - 0x370a80
void sub_00370A48_0x370a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370A48_0x370a48");
#endif

    switch (ctx->pc) {
        case 0x370a60u: goto label_370a60;
        case 0x370a68u: goto label_370a68;
        case 0x370a70u: goto label_370a70;
        default: break;
    }

    ctx->pc = 0x370a48u;

    // 0x370a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x370a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x370a58: 0xc0dd726  jal         func_375C98
    ctx->pc = 0x370A58u;
    SET_GPR_U32(ctx, 31, 0x370A60u);
    ctx->pc = 0x370A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A58u;
    // 0x370a5c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C98u, 0x370A58u, 0x370A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A60u;
label_370a60:
    // 0x370a60: 0xc0dd716  jal         func_375C58
    ctx->pc = 0x370A60u;
    SET_GPR_U32(ctx, 31, 0x370A68u);
    ctx->pc = 0x375C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C58u, 0x370A60u, 0x370A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A68u;
label_370a68:
    // 0x370a68: 0xc0dc196  jal         func_370658
    ctx->pc = 0x370A68u;
    SET_GPR_U32(ctx, 31, 0x370A70u);
    ctx->pc = 0x370A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A68u;
    // 0x370a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370658u, 0x370A68u, 0x370A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A70u;
label_370a70:
    // 0x370a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370a74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370a78: 0x3e00008  jr          $ra
    ctx->pc = 0x370A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A78u;
        // 0x370a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370A80u;
}
