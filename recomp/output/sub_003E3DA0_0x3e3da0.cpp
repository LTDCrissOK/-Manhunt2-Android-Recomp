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

// Function: sub_003E3DA0
// Address: 0x3e3da0 - 0x3e3dd8
void sub_003E3DA0_0x3e3da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3DA0_0x3e3da0");
#endif

    switch (ctx->pc) {
        case 0x3e3dc4u: goto label_3e3dc4;
        default: break;
    }

    ctx->pc = 0x3e3da0u;

    // 0x3e3da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e3da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e3da4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e3da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e3da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e3dac: 0x24423868  addiu       $v0, $v0, 0x3868
    ctx->pc = 0x3e3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14440));
    // 0x3e3db0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3e3db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e3db4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E3DB4u;
    {
        const bool branch_taken_0x3e3db4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DB4u;
        // 0x3e3db8: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3db4) {
            ctx->pc = 0x3E3DC4u;
            goto label_3e3dc4;
        }
    }
    ctx->pc = 0x3E3DBCu;
    // 0x3e3dbc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E3DBCu;
    SET_GPR_U32(ctx, 31, 0x3E3DC4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E3DBCu, 0x3E3DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3DC4u;
label_3e3dc4:
    // 0x3e3dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e3dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e3dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DC8u;
        // 0x3e3dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3DD0u;
    // 0x3e3dd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e3dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e3dd4: 0x0  nop
    ctx->pc = 0x3e3dd4u;
    // NOP
    ctx->pc = 0x3e3dd8u;
}
