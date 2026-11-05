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

// Function: sub_003D11E0
// Address: 0x3d11e0 - 0x3d1230
void sub_003D11E0_0x3d11e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D11E0_0x3d11e0");
#endif

    switch (ctx->pc) {
        case 0x3d1200u: goto label_3d1200;
        default: break;
    }

    ctx->pc = 0x3d11e0u;

    // 0x3d11e0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d11e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3d11e4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3d11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3d11e8: 0x24a275c0  addiu       $v0, $a1, 0x75C0
    ctx->pc = 0x3d11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 30144));
    // 0x3d11ec: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x3d11ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3d11f0: 0xac6279c0  sw          $v0, 0x79C0($v1)
    ctx->pc = 0x3d11f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6679C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6679C0u, _value); } while (0);
    // 0x3d11f4: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x3d11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x3d11f8: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x3d11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x3d11fc: 0x0  nop
    ctx->pc = 0x3d11fcu;
    // NOP
label_3d1200:
    // 0x3d1200: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3d1200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3d1204: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d1204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d1208: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3d1208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3d120c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3d120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3d1210: 0x0  nop
    ctx->pc = 0x3d1210u;
    // NOP
    // 0x3d1214: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D1214u;
    {
        const bool branch_taken_0x3d1214 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x3d1214) {
            ctx->pc = 0x3D1200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1200;
        }
    }
    ctx->pc = 0x3D121Cu;
    // 0x3d121c: 0x24a375c0  addiu       $v1, $a1, 0x75C0
    ctx->pc = 0x3d121cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 30144));
    // 0x3d1220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d1220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1224: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1224u;
        // 0x3d1228: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D122Cu;
    // 0x3d122c: 0x0  nop
    ctx->pc = 0x3d122cu;
    // NOP
    ctx->pc = 0x3d1230u;
}
