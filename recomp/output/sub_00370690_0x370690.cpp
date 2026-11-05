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

// Function: sub_00370690
// Address: 0x370690 - 0x3706c0
void sub_00370690_0x370690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370690_0x370690");
#endif

    switch (ctx->pc) {
        case 0x3706b0u: goto label_3706b0;
        default: break;
    }

    ctx->pc = 0x370690u;

    // 0x370690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37069c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37069cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3706a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3706a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3706a8: 0xc0dd684  jal         func_375A10
    ctx->pc = 0x3706A8u;
    SET_GPR_U32(ctx, 31, 0x3706B0u);
    ctx->pc = 0x3706ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3706A8u;
    // 0x3706ac: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x375A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375A10u, 0x3706A8u, 0x3706B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706B0u;
label_3706b0:
    // 0x3706b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3706b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3706b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3706B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3706B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3706B4u;
        // 0x3706b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3706B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3706BCu;
    // 0x3706bc: 0x0  nop
    ctx->pc = 0x3706bcu;
    // NOP
    ctx->pc = 0x3706c0u;
}
