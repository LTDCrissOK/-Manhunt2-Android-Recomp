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

// Function: sub_002CAA38
// Address: 0x2caa38 - 0x2caa60
void sub_002CAA38_0x2caa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAA38_0x2caa38");
#endif

    ctx->pc = 0x2caa38u;

    // 0x2caa38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2caa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2caa3c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CAA3Cu;
    {
        const bool branch_taken_0x2caa3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2caa3c) {
            ctx->pc = 0x2CAA58u;
            goto label_2caa58;
        }
    }
    ctx->pc = 0x2CAA44u;
    // 0x2caa44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAA44u;
    {
        const bool branch_taken_0x2caa44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA44u;
        // 0x2caa48: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa44) {
            ctx->pc = 0x2CAA58u;
            goto label_2caa58;
        }
    }
    ctx->pc = 0x2CAA4Cu;
    // 0x2caa4c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2caa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2caa50: 0x9043b44c  lbu         $v1, -0x4BB4($v0)
    ctx->pc = 0x2caa50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947916)));
    // 0x2caa54: 0xa0838d50  sb          $v1, -0x72B0($a0)
    ctx->pc = 0x2caa54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x578D50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x578D50u, _value); } while (0);
label_2caa58:
    // 0x2caa58: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAA60u;
}
