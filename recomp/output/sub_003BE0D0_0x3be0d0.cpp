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

// Function: sub_003BE0D0
// Address: 0x3be0d0 - 0x3be128
void sub_003BE0D0_0x3be0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE0D0_0x3be0d0");
#endif

    switch (ctx->pc) {
        case 0x3be0f0u: goto label_3be0f0;
        default: break;
    }

    ctx->pc = 0x3be0d0u;

    // 0x3be0d0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3be0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3be0d4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3be0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3be0d8: 0x24a20b80  addiu       $v0, $a1, 0xB80
    ctx->pc = 0x3be0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2944));
    // 0x3be0dc: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x3be0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3be0e0: 0xac620f80  sw          $v0, 0xF80($v1)
    ctx->pc = 0x3be0e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x660F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x660F80u, _value); } while (0);
    // 0x3be0e4: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x3be0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x3be0e8: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x3be0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x3be0ec: 0x0  nop
    ctx->pc = 0x3be0ecu;
    // NOP
label_3be0f0:
    // 0x3be0f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3be0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3be0f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3be0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3be0f8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3be0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3be0fc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3be0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3be100: 0x0  nop
    ctx->pc = 0x3be100u;
    // NOP
    // 0x3be104: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BE104u;
    {
        const bool branch_taken_0x3be104 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x3be104) {
            ctx->pc = 0x3BE0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be0f0;
        }
    }
    ctx->pc = 0x3BE10Cu;
    // 0x3be10c: 0x24a30b80  addiu       $v1, $a1, 0xB80
    ctx->pc = 0x3be10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2944));
    // 0x3be110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3be110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be114: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE114u;
        // 0x3be118: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE11Cu;
    // 0x3be11c: 0x0  nop
    ctx->pc = 0x3be11cu;
    // NOP
    // 0x3be120: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3be120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3be124: 0x0  nop
    ctx->pc = 0x3be124u;
    // NOP
    ctx->pc = 0x3be128u;
}
