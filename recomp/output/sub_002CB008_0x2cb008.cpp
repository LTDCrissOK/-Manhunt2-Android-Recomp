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

// Function: sub_002CB008
// Address: 0x2cb008 - 0x2cb088
void sub_002CB008_0x2cb008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB008_0x2cb008");
#endif

    ctx->pc = 0x2cb008u;

    // 0x2cb008: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2cb008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb00c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2cb00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cb010: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2CB010u;
    {
        const bool branch_taken_0x2cb010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb010) {
            ctx->pc = 0x2CB014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB010u;
            // 0x2cb014: 0x8cc20034  lw          $v0, 0x34($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB050u;
            goto label_2cb050;
        }
    }
    ctx->pc = 0x2CB018u;
    // 0x2cb018: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x2cb018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2cb01c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2cb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2cb020: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2cb020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cb024: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x2cb024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2cb028: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x2cb028u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2cb02c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cb02cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb030: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2cb030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cb034: 0x2c820028  sltiu       $v0, $a0, 0x28
    ctx->pc = 0x2cb034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x2cb038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB038u;
    {
        const bool branch_taken_0x2cb038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB038u;
        // 0x2cb03c: 0xacc4002c  sw          $a0, 0x2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb038) {
            ctx->pc = 0x2CB048u;
            goto label_2cb048;
        }
    }
    ctx->pc = 0x2CB040u;
    // 0x2cb040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb044: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2cb044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2cb048:
    // 0x2cb048: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2cb048u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cb04c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x2cb04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_2cb050:
    // 0x2cb050: 0x8cc3003c  lw          $v1, 0x3C($a2)
    ctx->pc = 0x2cb050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x2cb054: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cb054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cb058: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2cb058u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cb05c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CB05Cu;
    {
        const bool branch_taken_0x2cb05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb05c) {
            ctx->pc = 0x2CB060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB05Cu;
            // 0x2cb060: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB064u;
            goto label_2cb064;
        }
    }
    ctx->pc = 0x2CB064u;
label_2cb064:
    // 0x2cb064: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x2cb064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2cb068: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x2cb068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2cb06c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cb06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cb070: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cb070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cb074: 0xacc20038  sw          $v0, 0x38($a2)
    ctx->pc = 0x2cb074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
    // 0x2cb078: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x2cb078u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x2cb07c: 0x2010  mfhi        $a0
    ctx->pc = 0x2cb07cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2cb080: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB080u;
        // 0x2cb084: 0xacc40034  sw          $a0, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB088u;
}
