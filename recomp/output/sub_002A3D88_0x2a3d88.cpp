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

// Function: sub_002A3D88
// Address: 0x2a3d88 - 0x2a3dc0
void sub_002A3D88_0x2a3d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3D88_0x2a3d88");
#endif

    switch (ctx->pc) {
        case 0x2a3d9cu: goto label_2a3d9c;
        case 0x2a3dacu: goto label_2a3dac;
        default: break;
    }

    ctx->pc = 0x2a3d88u;

    // 0x2a3d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3d90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a3d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a3d94: 0xc0a790c  jal         func_29E430
    ctx->pc = 0x2A3D94u;
    SET_GPR_U32(ctx, 31, 0x2A3D9Cu);
    ctx->pc = 0x2A3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3D94u;
    // 0x2a3d98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E430u, 0x2A3D94u, 0x2A3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D9Cu;
label_2a3d9c:
    // 0x2a3d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3da0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3da4: 0xc0a7c20  jal         func_29F080
    ctx->pc = 0x2A3DA4u;
    SET_GPR_U32(ctx, 31, 0x2A3DACu);
    ctx->pc = 0x2A3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3DA4u;
    // 0x2a3da8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F080u, 0x2A3DA4u, 0x2A3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DACu;
label_2a3dac:
    // 0x2a3dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3db0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a3db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a3db4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DB4u;
        // 0x2a3db8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3DBCu;
    // 0x2a3dbc: 0x0  nop
    ctx->pc = 0x2a3dbcu;
    // NOP
    ctx->pc = 0x2a3dc0u;
}
