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

// Function: sub_0010D3B8
// Address: 0x10d3b8 - 0x10d3f8
void sub_0010D3B8_0x10d3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D3B8_0x10d3b8");
#endif

    switch (ctx->pc) {
        case 0x10d3e8u: goto label_10d3e8;
        default: break;
    }

    ctx->pc = 0x10d3b8u;

    // 0x10d3b8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x10d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x10d3bc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x10d3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3c0: 0x8c620748  lw          $v0, 0x748($v1)
    ctx->pc = 0x10d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0748u));
    // 0x10d3c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d3c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d3c8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x10d3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x10d3cc: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x10d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
    // 0x10d3d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10d3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d3d8: 0x24a5a800  addiu       $a1, $a1, -0x5800
    ctx->pc = 0x10d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944768));
    // 0x10d3dc: 0x24c6a808  addiu       $a2, $a2, -0x57F8
    ctx->pc = 0x10d3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944776));
    // 0x10d3e0: 0xc0435d4  jal         func_10D750
    ctx->pc = 0x10D3E0u;
    SET_GPR_U32(ctx, 31, 0x10D3E8u);
    ctx->pc = 0x10D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D3E0u;
    // 0x10d3e4: 0xac620748  sw          $v0, 0x748($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1864), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D750u, 0x10D3E0u, 0x10D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D3E8u;
label_10d3e8:
    // 0x10d3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d3ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3F0u;
        // 0x10d3f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D3F8u;
}
