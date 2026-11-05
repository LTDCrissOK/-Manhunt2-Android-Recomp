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

// Function: sub_003A9EF8
// Address: 0x3a9ef8 - 0x3a9f60
void sub_003A9EF8_0x3a9ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9EF8_0x3a9ef8");
#endif

    switch (ctx->pc) {
        case 0x3a9f30u: goto label_3a9f30;
        default: break;
    }

    ctx->pc = 0x3a9ef8u;

    // 0x3a9ef8: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a9ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3a9efc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a9efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9f00: 0x2463d450  addiu       $v1, $v1, -0x2BB0
    ctx->pc = 0x3a9f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956112));
    // 0x3a9f04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x41D450u));
    // 0x3a9f08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a9f0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a9f0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x41D450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41D450u, _value); } while (0);
    // 0x3a9f10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x41D450u));
    // 0x3a9f14: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A9F14u;
    {
        const bool branch_taken_0x3a9f14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3A9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F14u;
        // 0x3a9f18: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9f14) {
            ctx->pc = 0x3A9F24u;
            goto label_3a9f24;
        }
    }
    ctx->pc = 0x3A9F1Cu;
    // 0x3a9f1c: 0x2442d448  addiu       $v0, $v0, -0x2BB8
    ctx->pc = 0x3a9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956104));
    // 0x3a9f20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3a9f24:
    // 0x3a9f24: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9F2Cu;
    // 0x3a9f2c: 0x0  nop
    ctx->pc = 0x3a9f2cu;
    // NOP
label_3a9f30:
    // 0x3a9f30: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a9f34: 0x2442d450  addiu       $v0, $v0, -0x2BB0
    ctx->pc = 0x3a9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956112));
    // 0x3a9f38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41D450u));
    // 0x3a9f3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a9f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3a9f40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a9f40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x41D450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41D450u, _value); } while (0);
    // 0x3a9f44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a9f44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x41D450u));
    // 0x3a9f48: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A9F48u;
    {
        const bool branch_taken_0x3a9f48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F48u;
        // 0x3a9f4c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9f48) {
            ctx->pc = 0x3A9F58u;
            goto label_3a9f58;
        }
    }
    ctx->pc = 0x3A9F50u;
    // 0x3a9f50: 0x2442d448  addiu       $v0, $v0, -0x2BB8
    ctx->pc = 0x3a9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956104));
    // 0x3a9f54: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a9f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3a9f58:
    // 0x3a9f58: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9F60u;
}
