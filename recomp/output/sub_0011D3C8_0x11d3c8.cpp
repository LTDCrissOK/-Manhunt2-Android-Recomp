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

// Function: sub_0011D3C8
// Address: 0x11d3c8 - 0x11d400
void sub_0011D3C8_0x11d3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D3C8_0x11d3c8");
#endif

    switch (ctx->pc) {
        case 0x11d3e0u: goto label_11d3e0;
        default: break;
    }

    ctx->pc = 0x11d3c8u;

    // 0x11d3c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11d3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d3ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d3d0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11d3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11d3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d3d8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D3D8u;
    SET_GPR_U32(ctx, 31, 0x11D3E0u);
    ctx->pc = 0x11D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3D8u;
    // 0x11d3dc: 0x24a5bf08  addiu       $a1, $a1, -0x40F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D3D8u, 0x11D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3E0u;
label_11d3e0:
    // 0x11d3e0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x11d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11d3e4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x11d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x11d3e8: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11d3e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11d3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d3f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11d3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x11D3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3F4u;
        // 0x11d3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D3FCu;
    // 0x11d3fc: 0x0  nop
    ctx->pc = 0x11d3fcu;
    // NOP
    ctx->pc = 0x11d400u;
}
