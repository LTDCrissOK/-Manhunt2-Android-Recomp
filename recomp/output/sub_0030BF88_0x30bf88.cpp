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

// Function: sub_0030BF88
// Address: 0x30bf88 - 0x30bfb0
void sub_0030BF88_0x30bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BF88_0x30bf88");
#endif

    switch (ctx->pc) {
        case 0x30bfa4u: goto label_30bfa4;
        default: break;
    }

    ctx->pc = 0x30bf88u;

    // 0x30bf88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30bf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30bf8c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30bf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30bf90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30bf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30bf94: 0x24a58ed0  addiu       $a1, $a1, -0x7130
    ctx->pc = 0x30bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938320));
    // 0x30bf98: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x30bf98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30bf9c: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30BF9Cu;
    SET_GPR_U32(ctx, 31, 0x30BFA4u);
    ctx->pc = 0x30BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF9Cu;
    // 0x30bfa0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30BF9Cu, 0x30BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BFA4u;
label_30bfa4:
    // 0x30bfa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30bfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x30BFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFA8u;
        // 0x30bfac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BFB0u;
}
