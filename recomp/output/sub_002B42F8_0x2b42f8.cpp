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

// Function: sub_002B42F8
// Address: 0x2b42f8 - 0x2b4328
void sub_002B42F8_0x2b42f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B42F8_0x2b42f8");
#endif

    switch (ctx->pc) {
        case 0x2b4314u: goto label_2b4314;
        default: break;
    }

    ctx->pc = 0x2b42f8u;

    // 0x2b42f8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2b42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2b42fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b42fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4300: 0x8c45f0a8  lw          $a1, -0xF58($v0)
    ctx->pc = 0x2b4300u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BF0A8u));
    // 0x2b4304: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2b4304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2b4308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b430c: 0xc0ad0ca  jal         func_2B4328
    ctx->pc = 0x2B430Cu;
    SET_GPR_U32(ctx, 31, 0x2B4314u);
    ctx->pc = 0x2B4310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B430Cu;
    // 0x2b4310: 0x24c6ac30  addiu       $a2, $a2, -0x53D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4328u, 0x2B430Cu, 0x2B4314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4314u;
label_2b4314:
    // 0x2b4314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4318: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b4318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b431c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B431Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B431Cu;
        // 0x2b4320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B431Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4324u;
    // 0x2b4324: 0x0  nop
    ctx->pc = 0x2b4324u;
    // NOP
    ctx->pc = 0x2b4328u;
}
