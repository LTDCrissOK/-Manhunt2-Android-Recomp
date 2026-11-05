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

// Function: sub_0020BC48
// Address: 0x20bc48 - 0x20bc80
void sub_0020BC48_0x20bc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BC48_0x20bc48");
#endif

    switch (ctx->pc) {
        case 0x20bc64u: goto label_20bc64;
        case 0x20bc6cu: goto label_20bc6c;
        default: break;
    }

    ctx->pc = 0x20bc48u;

    // 0x20bc48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bc4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20bc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20bc50: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x20bc50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x20bc54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20bc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20bc58: 0x2610e498  addiu       $s0, $s0, -0x1B68
    ctx->pc = 0x20bc58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960280));
    // 0x20bc5c: 0xc0d75f8  jal         func_35D7E0
    ctx->pc = 0x20BC5Cu;
    SET_GPR_U32(ctx, 31, 0x20BC64u);
    ctx->pc = 0x20BC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC5Cu;
    // 0x20bc60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7E0u, 0x20BC5Cu, 0x20BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC64u;
label_20bc64:
    // 0x20bc64: 0xc0f7672  jal         func_3DD9C8
    ctx->pc = 0x20BC64u;
    SET_GPR_U32(ctx, 31, 0x20BC6Cu);
    ctx->pc = 0x20BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC64u;
    // 0x20bc68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9C8u, 0x20BC64u, 0x20BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC6Cu;
label_20bc6c:
    // 0x20bc6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20bc6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bc70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20bc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20bc74: 0x3e00008  jr          $ra
    ctx->pc = 0x20BC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC74u;
        // 0x20bc78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BC7Cu;
    // 0x20bc7c: 0x0  nop
    ctx->pc = 0x20bc7cu;
    // NOP
    ctx->pc = 0x20bc80u;
}
