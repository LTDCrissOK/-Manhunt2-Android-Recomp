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

// Function: sub_00143880
// Address: 0x143880 - 0x1438c8
void sub_00143880_0x143880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143880_0x143880");
#endif

    switch (ctx->pc) {
        case 0x143894u: goto label_143894;
        case 0x1438b0u: goto label_1438b0;
        default: break;
    }

    ctx->pc = 0x143880u;

    // 0x143880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143888: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x143888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14388c: 0xc04e49c  jal         func_139270
    ctx->pc = 0x14388Cu;
    SET_GPR_U32(ctx, 31, 0x143894u);
    ctx->pc = 0x143890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14388Cu;
    // 0x143890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139270u, 0x14388Cu, 0x143894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143894u;
label_143894:
    // 0x143894: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x143894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x143898: 0xae000b14  sw          $zero, 0xB14($s0)
    ctx->pc = 0x143898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2836), GPR_U32(ctx, 0));
    // 0x14389c: 0x24630868  addiu       $v1, $v1, 0x868
    ctx->pc = 0x14389cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2152));
    // 0x1438a0: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x1438a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x1438a4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1438a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1438a8: 0xc050f08  jal         func_143C20
    ctx->pc = 0x1438A8u;
    SET_GPR_U32(ctx, 31, 0x1438B0u);
    ctx->pc = 0x1438ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1438A8u;
    // 0x1438ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1438A8u, 0x1438B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438B0u;
label_1438b0:
    // 0x1438b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1438b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1438b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1438b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1438b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1438b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1438bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1438BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1438C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438BCu;
        // 0x1438c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1438BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1438C4u;
    // 0x1438c4: 0x0  nop
    ctx->pc = 0x1438c4u;
    // NOP
    ctx->pc = 0x1438c8u;
}
