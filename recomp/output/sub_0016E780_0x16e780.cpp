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

// Function: sub_0016E780
// Address: 0x16e780 - 0x16e7b0
void sub_0016E780_0x16e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E780_0x16e780");
#endif

    switch (ctx->pc) {
        case 0x16e794u: goto label_16e794;
        case 0x16e79cu: goto label_16e79c;
        default: break;
    }

    ctx->pc = 0x16e780u;

    // 0x16e780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e788: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e78c: 0xc04f820  jal         func_13E080
    ctx->pc = 0x16E78Cu;
    SET_GPR_U32(ctx, 31, 0x16E794u);
    ctx->pc = 0x16E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E78Cu;
    // 0x16e790: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x16E78Cu, 0x16E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E794u;
label_16e794:
    // 0x16e794: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16E794u;
    SET_GPR_U32(ctx, 31, 0x16E79Cu);
    ctx->pc = 0x16E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E794u;
    // 0x16e798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16E794u, 0x16E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E79Cu;
label_16e79c:
    // 0x16e79c: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x16e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x16e7a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e7a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x16E7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7A8u;
        // 0x16e7ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E7B0u;
}
