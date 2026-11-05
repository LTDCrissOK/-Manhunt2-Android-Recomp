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

// Function: sub_0016E7E8
// Address: 0x16e7e8 - 0x16e820
void sub_0016E7E8_0x16e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E7E8_0x16e7e8");
#endif

    switch (ctx->pc) {
        case 0x16e7fcu: goto label_16e7fc;
        case 0x16e804u: goto label_16e804;
        case 0x16e80cu: goto label_16e80c;
        default: break;
    }

    ctx->pc = 0x16e7e8u;

    // 0x16e7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e7f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e7f4: 0xc04f820  jal         func_13E080
    ctx->pc = 0x16E7F4u;
    SET_GPR_U32(ctx, 31, 0x16E7FCu);
    ctx->pc = 0x16E7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7F4u;
    // 0x16e7f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x16E7F4u, 0x16E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7FCu;
label_16e7fc:
    // 0x16e7fc: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16E7FCu;
    SET_GPR_U32(ctx, 31, 0x16E804u);
    ctx->pc = 0x16E800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7FCu;
    // 0x16e800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16E7FCu, 0x16E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E804u;
label_16e804:
    // 0x16e804: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x16E804u;
    SET_GPR_U32(ctx, 31, 0x16E80Cu);
    ctx->pc = 0x16E808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E804u;
    // 0x16e808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E820u, 0x16E804u, 0x16E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E80Cu;
label_16e80c:
    // 0x16e80c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e810: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e814: 0x3e00008  jr          $ra
    ctx->pc = 0x16E814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E814u;
        // 0x16e818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E81Cu;
    // 0x16e81c: 0x0  nop
    ctx->pc = 0x16e81cu;
    // NOP
    ctx->pc = 0x16e820u;
}
