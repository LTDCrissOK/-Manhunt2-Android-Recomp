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

// Function: sub_00248960
// Address: 0x248960 - 0x2489a0
void sub_00248960_0x248960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248960_0x248960");
#endif

    switch (ctx->pc) {
        case 0x24897cu: goto label_24897c;
        case 0x248984u: goto label_248984;
        default: break;
    }

    ctx->pc = 0x248960u;

    // 0x248960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x248964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24896c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24896cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x248970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x248974: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x248974u;
    SET_GPR_U32(ctx, 31, 0x24897Cu);
    ctx->pc = 0x248978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248974u;
    // 0x248978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x248974u, 0x24897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24897Cu;
label_24897c:
    // 0x24897c: 0xc0921f0  jal         func_2487C0
    ctx->pc = 0x24897Cu;
    SET_GPR_U32(ctx, 31, 0x248984u);
    ctx->pc = 0x248980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24897Cu;
    // 0x248980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2487C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2487C0u, 0x24897Cu, 0x248984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248984u;
label_248984:
    // 0x248984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248988: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x248988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24898c: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x24898cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x248990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248994: 0x3e00008  jr          $ra
    ctx->pc = 0x248994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248994u;
        // 0x248998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24899Cu;
    // 0x24899c: 0x0  nop
    ctx->pc = 0x24899cu;
    // NOP
    ctx->pc = 0x2489a0u;
}
