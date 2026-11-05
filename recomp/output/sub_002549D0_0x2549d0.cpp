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

// Function: sub_002549D0
// Address: 0x2549d0 - 0x254a00
void sub_002549D0_0x2549d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002549D0_0x2549d0");
#endif

    switch (ctx->pc) {
        case 0x2549e4u: goto label_2549e4;
        case 0x2549f0u: goto label_2549f0;
        default: break;
    }

    ctx->pc = 0x2549d0u;

    // 0x2549d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2549d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2549d4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2549d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2549d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2549d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2549dc: 0xc095346  jal         func_254D18
    ctx->pc = 0x2549DCu;
    SET_GPR_U32(ctx, 31, 0x2549E4u);
    ctx->pc = 0x2549E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549DCu;
    // 0x2549e0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D18u, 0x2549DCu, 0x2549E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2549E4u;
label_2549e4:
    // 0x2549e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2549e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2549e8: 0xc064ef8  jal         func_193BE0
    ctx->pc = 0x2549E8u;
    SET_GPR_U32(ctx, 31, 0x2549F0u);
    ctx->pc = 0x2549ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549E8u;
    // 0x2549ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193BE0u, 0x2549E8u, 0x2549F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2549F0u;
label_2549f0:
    // 0x2549f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2549f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2549f4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2549f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2549f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2549F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2549FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549F8u;
        // 0x2549fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2549F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254A00u;
}
