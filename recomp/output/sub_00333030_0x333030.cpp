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

// Function: sub_00333030
// Address: 0x333030 - 0x333058
void sub_00333030_0x333030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333030_0x333030");
#endif

    switch (ctx->pc) {
        case 0x33304cu: goto label_33304c;
        default: break;
    }

    ctx->pc = 0x333030u;

    // 0x333030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x333030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x333034: 0x2484003c  addiu       $a0, $a0, 0x3C
    ctx->pc = 0x333034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x333038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x333038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33303c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33303cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333040: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x333040u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x333044: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333044u;
    SET_GPR_U32(ctx, 31, 0x33304Cu);
    ctx->pc = 0x333048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333044u;
    // 0x333048: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333044u, 0x33304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33304Cu;
label_33304c:
    // 0x33304c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33304cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333050: 0x3e00008  jr          $ra
    ctx->pc = 0x333050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333050u;
        // 0x333054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333058u;
}
