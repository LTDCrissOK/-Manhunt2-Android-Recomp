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

// Function: sub_002775E8
// Address: 0x2775e8 - 0x277618
void sub_002775E8_0x2775e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002775E8_0x2775e8");
#endif

    ctx->pc = 0x2775e8u;

    // 0x2775e8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2775e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2775ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2775ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2775f0: 0x24422c50  addiu       $v0, $v0, 0x2C50
    ctx->pc = 0x2775f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11344));
    // 0x2775f4: 0xac830120  sw          $v1, 0x120($a0)
    ctx->pc = 0x2775f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 3));
    // 0x2775f8: 0xac820124  sw          $v0, 0x124($a0)
    ctx->pc = 0x2775f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 2));
    // 0x2775fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2775fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277600: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x277600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x277604: 0xac800108  sw          $zero, 0x108($a0)
    ctx->pc = 0x277604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
    // 0x277608: 0xac80010c  sw          $zero, 0x10C($a0)
    ctx->pc = 0x277608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 0));
    // 0x27760c: 0x3e00008  jr          $ra
    ctx->pc = 0x27760Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27760Cu;
        // 0x277610: 0xac800110  sw          $zero, 0x110($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27760Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277614u;
    // 0x277614: 0x0  nop
    ctx->pc = 0x277614u;
    // NOP
    ctx->pc = 0x277618u;
}
