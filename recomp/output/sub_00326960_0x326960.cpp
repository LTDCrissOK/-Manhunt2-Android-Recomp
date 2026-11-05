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

// Function: sub_00326960
// Address: 0x326960 - 0x326990
void sub_00326960_0x326960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326960_0x326960");
#endif

    ctx->pc = 0x326960u;

    // 0x326960: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x326960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326964: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x326964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x326968: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x326968u;
    {
        const bool branch_taken_0x326968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326968u;
        // 0x32696c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326968) {
            ctx->pc = 0x326988u;
            goto label_326988;
        }
    }
    ctx->pc = 0x326970u;
    // 0x326970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x326970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326974: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x326974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x326978: 0xa0a40012  sb          $a0, 0x12($a1)
    ctx->pc = 0x326978u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x32697c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x32697cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x326980: 0xa0a40010  sb          $a0, 0x10($a1)
    ctx->pc = 0x326980u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x326984: 0xa0a00011  sb          $zero, 0x11($a1)
    ctx->pc = 0x326984u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17), (uint8_t)GPR_U32(ctx, 0));
label_326988:
    // 0x326988: 0x3e00008  jr          $ra
    ctx->pc = 0x326988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326990u;
}
