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

// Function: sub_002CDEB8
// Address: 0x2cdeb8 - 0x2cdf00
void sub_002CDEB8_0x2cdeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDEB8_0x2cdeb8");
#endif

    ctx->pc = 0x2cdeb8u;

    // 0x2cdeb8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2cdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2cdebc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2cdebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cdec0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2cdec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cdec4: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x2cdec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cdec8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2cdec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cdecc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CDECCu;
    {
        const bool branch_taken_0x2cdecc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdecc) {
            ctx->pc = 0x2CDED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDECCu;
            // 0x2cded0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDED4u;
            goto label_2cded4;
        }
    }
    ctx->pc = 0x2CDED4u;
label_2cded4:
    // 0x2cded4: 0xe81023  subu        $v0, $a3, $t0
    ctx->pc = 0x2cded4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2cded8: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x2cded8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cdedc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2cdedcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2cdee0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2cdee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2cdee4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2cdee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2cdee8: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x2cdee8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cdeec: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x2cdeecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x2cdef0: 0x1810  mfhi        $v1
    ctx->pc = 0x2cdef0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2cdef4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEF4u;
        // 0x2cdef8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDEFCu;
    // 0x2cdefc: 0x0  nop
    ctx->pc = 0x2cdefcu;
    // NOP
    ctx->pc = 0x2cdf00u;
}
