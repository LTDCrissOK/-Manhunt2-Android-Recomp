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

// Function: sub_002CDF00
// Address: 0x2cdf00 - 0x2cdf48
void sub_002CDF00_0x2cdf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDF00_0x2cdf00");
#endif

    ctx->pc = 0x2cdf00u;

    // 0x2cdf00: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2cdf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2cdf04: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2cdf04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf08: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x2cdf08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2cdf0c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2cdf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2cdf10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CDF10u;
    {
        const bool branch_taken_0x2cdf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf10) {
            ctx->pc = 0x2CDF40u;
            goto label_2cdf40;
        }
    }
    ctx->pc = 0x2CDF18u;
    // 0x2cdf18: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cdf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cdf1c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2cdf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2cdf20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2cdf20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cdf24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cdf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cdf28: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CDF28u;
    {
        const bool branch_taken_0x2cdf28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf28) {
            ctx->pc = 0x2CDF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDF28u;
            // 0x2cdf2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDF30u;
            goto label_2cdf30;
        }
    }
    ctx->pc = 0x2CDF30u;
label_2cdf30:
    // 0x2cdf30: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x2cdf30u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cdf34: 0x1010  mfhi        $v0
    ctx->pc = 0x2cdf34u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cdf38: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2cdf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2cdf3c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2cdf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2cdf40:
    // 0x2cdf40: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF40u;
        // 0x2cdf44: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDF48u;
}
