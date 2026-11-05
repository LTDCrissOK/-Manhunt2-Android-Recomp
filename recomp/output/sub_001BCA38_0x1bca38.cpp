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

// Function: sub_001BCA38
// Address: 0x1bca38 - 0x1bca60
void sub_001BCA38_0x1bca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCA38_0x1bca38");
#endif

    switch (ctx->pc) {
        case 0x1bca4cu: goto label_1bca4c;
        default: break;
    }

    ctx->pc = 0x1bca38u;

    // 0x1bca38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bca3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bca3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bca40: 0xc48c034c  lwc1        $f12, 0x34C($a0)
    ctx->pc = 0x1bca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bca44: 0xc06fcb6  jal         func_1BF2D8
    ctx->pc = 0x1BCA44u;
    SET_GPR_U32(ctx, 31, 0x1BCA4Cu);
    ctx->pc = 0x1BCA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA44u;
    // 0x1bca48: 0x24840210  addiu       $a0, $a0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF2D8u, 0x1BCA44u, 0x1BCA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA4Cu;
label_1bca4c:
    // 0x1bca4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bca50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1bca50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bca54: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA54u;
        // 0x1bca58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCA5Cu;
    // 0x1bca5c: 0x0  nop
    ctx->pc = 0x1bca5cu;
    // NOP
    ctx->pc = 0x1bca60u;
}
