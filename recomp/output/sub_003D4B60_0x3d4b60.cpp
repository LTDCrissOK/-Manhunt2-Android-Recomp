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

// Function: sub_003D4B60
// Address: 0x3d4b60 - 0x3d4b90
void sub_003D4B60_0x3d4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4B60_0x3d4b60");
#endif

    switch (ctx->pc) {
        case 0x3d4b74u: goto label_3d4b74;
        default: break;
    }

    ctx->pc = 0x3d4b60u;

    // 0x3d4b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d4b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d4b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d4b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d4b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d4b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d4b6c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3D4B6Cu;
    SET_GPR_U32(ctx, 31, 0x3D4B74u);
    ctx->pc = 0x3D4B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4B6Cu;
    // 0x3d4b70: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3D4B6Cu, 0x3D4B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4B74u;
label_3d4b74:
    // 0x3d4b74: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x3d4b74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3d4b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d4b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d4b7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d4b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d4b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4b84: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B84u;
        // 0x3d4b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4B8Cu;
    // 0x3d4b8c: 0x0  nop
    ctx->pc = 0x3d4b8cu;
    // NOP
    ctx->pc = 0x3d4b90u;
}
