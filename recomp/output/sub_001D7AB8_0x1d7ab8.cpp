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

// Function: sub_001D7AB8
// Address: 0x1d7ab8 - 0x1d7ae8
void sub_001D7AB8_0x1d7ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7AB8_0x1d7ab8");
#endif

    switch (ctx->pc) {
        case 0x1d7adcu: goto label_1d7adc;
        default: break;
    }

    ctx->pc = 0x1d7ab8u;

    // 0x1d7ab8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d7abc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1d7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1d7ac0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1d7ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d7ac4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7ac8: 0x24428f20  addiu       $v0, $v0, -0x70E0
    ctx->pc = 0x1d7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
    // 0x1d7acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7ad0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d7ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7ad4: 0xc075e9e  jal         func_1D7A78
    ctx->pc = 0x1D7AD4u;
    SET_GPR_U32(ctx, 31, 0x1D7ADCu);
    ctx->pc = 0x1D7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AD4u;
    // 0x1d7ad8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7A78u, 0x1D7AD4u, 0x1D7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7ADCu;
label_1d7adc:
    // 0x1d7adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AE0u;
        // 0x1d7ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7AE8u;
}
