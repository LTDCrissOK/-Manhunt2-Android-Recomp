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

// Function: sub_001DC800
// Address: 0x1dc800 - 0x1dc828
void sub_001DC800_0x1dc800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC800_0x1dc800");
#endif

    switch (ctx->pc) {
        case 0x1dc81cu: goto label_1dc81c;
        default: break;
    }

    ctx->pc = 0x1dc800u;

    // 0x1dc800: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1dc800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1dc804: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dc804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dc808: 0xc440d824  lwc1        $f0, -0x27DC($v0)
    ctx->pc = 0x1dc808u;
    { uint32_t bits = FAST_READ32(0x45D824u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc80c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dc80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dc814: 0xc077214  jal         func_1DC850
    ctx->pc = 0x1DC814u;
    SET_GPR_U32(ctx, 31, 0x1DC81Cu);
    ctx->pc = 0x1DC818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC814u;
    // 0x1dc818: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC850u, 0x1DC814u, 0x1DC81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC81Cu;
label_1dc81c:
    // 0x1dc81c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc820: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC820u;
        // 0x1dc824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC828u;
}
