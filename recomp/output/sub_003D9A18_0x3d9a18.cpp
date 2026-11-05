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

// Function: sub_003D9A18
// Address: 0x3d9a18 - 0x3d9a48
void sub_003D9A18_0x3d9a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9A18_0x3d9a18");
#endif

    switch (ctx->pc) {
        case 0x3d9a30u: goto label_3d9a30;
        default: break;
    }

    ctx->pc = 0x3d9a18u;

    // 0x3d9a18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9a1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d9a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d9a20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3d9a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3d9a24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9a28: 0xc0f6680  jal         func_3D9A00
    ctx->pc = 0x3D9A28u;
    SET_GPR_U32(ctx, 31, 0x3D9A30u);
    ctx->pc = 0x3D9A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9A28u;
    // 0x3d9a2c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9A00u, 0x3D9A28u, 0x3D9A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9A30u;
label_3d9a30:
    // 0x3d9a30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d9a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9a34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3d9a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d9a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d9a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A3Cu;
        // 0x3d9a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9A44u;
    // 0x3d9a44: 0x0  nop
    ctx->pc = 0x3d9a44u;
    // NOP
    ctx->pc = 0x3d9a48u;
}
