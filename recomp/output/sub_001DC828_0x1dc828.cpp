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

// Function: sub_001DC828
// Address: 0x1dc828 - 0x1dc850
void sub_001DC828_0x1dc828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC828_0x1dc828");
#endif

    switch (ctx->pc) {
        case 0x1dc844u: goto label_1dc844;
        default: break;
    }

    ctx->pc = 0x1dc828u;

    // 0x1dc828: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1dc828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1dc82c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dc82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dc830: 0xc440d828  lwc1        $f0, -0x27D8($v0)
    ctx->pc = 0x1dc830u;
    { uint32_t bits = FAST_READ32(0x45D828u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc834: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dc834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dc83c: 0xc07727e  jal         func_1DC9F8
    ctx->pc = 0x1DC83Cu;
    SET_GPR_U32(ctx, 31, 0x1DC844u);
    ctx->pc = 0x1DC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC83Cu;
    // 0x1dc840: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC9F8u, 0x1DC83Cu, 0x1DC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC844u;
label_1dc844:
    // 0x1dc844: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc848: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC848u;
        // 0x1dc84c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC850u;
}
