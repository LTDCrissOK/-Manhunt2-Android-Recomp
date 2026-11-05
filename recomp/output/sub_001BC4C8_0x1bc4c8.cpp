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

// Function: sub_001BC4C8
// Address: 0x1bc4c8 - 0x1bc4f0
void sub_001BC4C8_0x1bc4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC4C8_0x1bc4c8");
#endif

    switch (ctx->pc) {
        case 0x1bc4dcu: goto label_1bc4dc;
        default: break;
    }

    ctx->pc = 0x1bc4c8u;

    // 0x1bc4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc4cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc4d0: 0xc48c0350  lwc1        $f12, 0x350($a0)
    ctx->pc = 0x1bc4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc4d4: 0xc06fcb6  jal         func_1BF2D8
    ctx->pc = 0x1BC4D4u;
    SET_GPR_U32(ctx, 31, 0x1BC4DCu);
    ctx->pc = 0x1BC4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4D4u;
    // 0x1bc4d8: 0x24840260  addiu       $a0, $a0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF2D8u, 0x1BC4D4u, 0x1BC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4DCu;
label_1bc4dc:
    // 0x1bc4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc4e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1bc4e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1bc4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4E4u;
        // 0x1bc4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC4ECu;
    // 0x1bc4ec: 0x0  nop
    ctx->pc = 0x1bc4ecu;
    // NOP
    ctx->pc = 0x1bc4f0u;
}
