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

// Function: sub_0011D068
// Address: 0x11d068 - 0x11d098
void sub_0011D068_0x11d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D068_0x11d068");
#endif

    switch (ctx->pc) {
        case 0x11d08cu: goto label_11d08c;
        default: break;
    }

    ctx->pc = 0x11d068u;

    // 0x11d068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d06c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x11d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x11d070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d074: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11d074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d078: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x11d078u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11d07c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x11d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11d080: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x11d080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11d084: 0xc04218e  jal         func_108638
    ctx->pc = 0x11D084u;
    SET_GPR_U32(ctx, 31, 0x11D08Cu);
    ctx->pc = 0x11D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D084u;
    // 0x11d088: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108638u, 0x11D084u, 0x11D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D08Cu;
label_11d08c:
    // 0x11d08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d090: 0x3e00008  jr          $ra
    ctx->pc = 0x11D090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D090u;
        // 0x11d094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D098u;
}
