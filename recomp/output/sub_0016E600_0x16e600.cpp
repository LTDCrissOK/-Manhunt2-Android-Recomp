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

// Function: sub_0016E600
// Address: 0x16e600 - 0x16e638
void sub_0016E600_0x16e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E600_0x16e600");
#endif

    switch (ctx->pc) {
        case 0x16e614u: goto label_16e614;
        case 0x16e61cu: goto label_16e61c;
        case 0x16e624u: goto label_16e624;
        default: break;
    }

    ctx->pc = 0x16e600u;

    // 0x16e600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e608: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e60c: 0xc04f820  jal         func_13E080
    ctx->pc = 0x16E60Cu;
    SET_GPR_U32(ctx, 31, 0x16E614u);
    ctx->pc = 0x16E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E60Cu;
    // 0x16e610: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x16E60Cu, 0x16E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E614u;
label_16e614:
    // 0x16e614: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16E614u;
    SET_GPR_U32(ctx, 31, 0x16E61Cu);
    ctx->pc = 0x16E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E614u;
    // 0x16e618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16E614u, 0x16E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E61Cu;
label_16e61c:
    // 0x16e61c: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x16E61Cu;
    SET_GPR_U32(ctx, 31, 0x16E624u);
    ctx->pc = 0x16E620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E61Cu;
    // 0x16e620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E820u, 0x16E61Cu, 0x16E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E624u;
label_16e624:
    // 0x16e624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e628: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e62c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E62Cu;
        // 0x16e630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E634u;
    // 0x16e634: 0x0  nop
    ctx->pc = 0x16e634u;
    // NOP
    ctx->pc = 0x16e638u;
}
