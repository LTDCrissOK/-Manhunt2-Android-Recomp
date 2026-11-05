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

// Function: sub_00145A50
// Address: 0x145a50 - 0x145a98
void sub_00145A50_0x145a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145A50_0x145a50");
#endif

    switch (ctx->pc) {
        case 0x145a74u: goto label_145a74;
        case 0x145a84u: goto label_145a84;
        default: break;
    }

    ctx->pc = 0x145a50u;

    // 0x145a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145a54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x145a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145a5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a64: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x145a64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x145a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145a6c: 0xc051744  jal         func_145D10
    ctx->pc = 0x145A6Cu;
    SET_GPR_U32(ctx, 31, 0x145A74u);
    ctx->pc = 0x145A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A6Cu;
    // 0x145a70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145D10u, 0x145A6Cu, 0x145A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A74u;
label_145a74:
    // 0x145a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a7c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x145A7Cu;
    SET_GPR_U32(ctx, 31, 0x145A84u);
    ctx->pc = 0x145A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A7Cu;
    // 0x145a80: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x145A7Cu, 0x145A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A84u;
label_145a84:
    // 0x145a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145a88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145a8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145a90: 0x3e00008  jr          $ra
    ctx->pc = 0x145A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A90u;
        // 0x145a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145A98u;
}
