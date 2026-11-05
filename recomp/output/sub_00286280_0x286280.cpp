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

// Function: sub_00286280
// Address: 0x286280 - 0x2862a0
void sub_00286280_0x286280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286280_0x286280");
#endif

    ctx->pc = 0x286280u;

    // 0x286280: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x286280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x286284: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x286284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x286288: 0x2482cfa0  addiu       $v0, $a0, -0x3060
    ctx->pc = 0x286288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954912));
    // 0x28628c: 0xac80cfa0  sw          $zero, -0x3060($a0)
    ctx->pc = 0x28628cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66CFA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CFA0u, _value); } while (0);
    // 0x286290: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x286290u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x66CFACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CFACu, _value); } while (0);
    // 0x286294: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x286294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x66CFA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CFA4u, _value); } while (0);
    // 0x286298: 0x3e00008  jr          $ra
    ctx->pc = 0x286298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286298u;
        // 0x28629c: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2862A0u;
}
