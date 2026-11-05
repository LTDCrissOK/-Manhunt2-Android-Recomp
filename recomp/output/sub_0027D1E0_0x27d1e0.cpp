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

// Function: sub_0027D1E0
// Address: 0x27d1e0 - 0x27d238
void sub_0027D1E0_0x27d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D1E0_0x27d1e0");
#endif

    switch (ctx->pc) {
        case 0x27d1f0u: goto label_27d1f0;
        case 0x27d1f8u: goto label_27d1f8;
        case 0x27d200u: goto label_27d200;
        case 0x27d208u: goto label_27d208;
        case 0x27d210u: goto label_27d210;
        case 0x27d218u: goto label_27d218;
        case 0x27d220u: goto label_27d220;
        case 0x27d22cu: goto label_27d22c;
        default: break;
    }

    ctx->pc = 0x27d1e0u;

    // 0x27d1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d1e8: 0xc0a0374  jal         func_280DD0
    ctx->pc = 0x27D1E8u;
    SET_GPR_U32(ctx, 31, 0x27D1F0u);
    ctx->pc = 0x280DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280DD0u, 0x27D1E8u, 0x27D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1F0u;
label_27d1f0:
    // 0x27d1f0: 0xc0a0aa4  jal         func_282A90
    ctx->pc = 0x27D1F0u;
    SET_GPR_U32(ctx, 31, 0x27D1F8u);
    ctx->pc = 0x282A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282A90u, 0x27D1F0u, 0x27D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1F8u;
label_27d1f8:
    // 0x27d1f8: 0xc0ce09c  jal         func_338270
    ctx->pc = 0x27D1F8u;
    SET_GPR_U32(ctx, 31, 0x27D200u);
    ctx->pc = 0x338270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338270u, 0x27D1F8u, 0x27D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D200u;
label_27d200:
    // 0x27d200: 0xc0a2e6c  jal         func_28B9B0
    ctx->pc = 0x27D200u;
    SET_GPR_U32(ctx, 31, 0x27D208u);
    ctx->pc = 0x28B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B9B0u, 0x27D200u, 0x27D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D208u;
label_27d208:
    // 0x27d208: 0xc0cf37e  jal         func_33CDF8
    ctx->pc = 0x27D208u;
    SET_GPR_U32(ctx, 31, 0x27D210u);
    ctx->pc = 0x33CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CDF8u, 0x27D208u, 0x27D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D210u;
label_27d210:
    // 0x27d210: 0xc0a2b10  jal         func_28AC40
    ctx->pc = 0x27D210u;
    SET_GPR_U32(ctx, 31, 0x27D218u);
    ctx->pc = 0x28AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC40u, 0x27D210u, 0x27D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D218u;
label_27d218:
    // 0x27d218: 0xc0a18ba  jal         func_2862E8
    ctx->pc = 0x27D218u;
    SET_GPR_U32(ctx, 31, 0x27D220u);
    ctx->pc = 0x2862E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2862E8u, 0x27D218u, 0x27D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D220u;
label_27d220:
    // 0x27d220: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x27d220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x27d224: 0xc0c293e  jal         func_30A4F8
    ctx->pc = 0x27D224u;
    SET_GPR_U32(ctx, 31, 0x27D22Cu);
    ctx->pc = 0x27D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D224u;
    // 0x27d228: 0x8c44a300  lw          $a0, -0x5D00($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4F8u, 0x27D224u, 0x27D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D22Cu;
label_27d22c:
    // 0x27d22c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d230: 0x3e00008  jr          $ra
    ctx->pc = 0x27D230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D230u;
        // 0x27d234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D238u;
}
