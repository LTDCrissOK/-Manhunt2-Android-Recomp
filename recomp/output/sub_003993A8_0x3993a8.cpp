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

// Function: sub_003993A8
// Address: 0x3993a8 - 0x3993f8
void sub_003993A8_0x3993a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003993A8_0x3993a8");
#endif

    ctx->pc = 0x3993a8u;

    // 0x3993a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3993a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3993ac: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3993acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3993b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3993b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3993b4: 0x24639ce0  addiu       $v1, $v1, -0x6320
    ctx->pc = 0x3993b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941920));
    // 0x3993b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x409CE0u));
    // 0x3993bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3993bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3993c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3993C0u;
    {
        const bool branch_taken_0x3993c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993C0u;
        // 0x3993c4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3993c0) {
            ctx->pc = 0x3993E8u;
            goto label_3993e8;
        }
    }
    ctx->pc = 0x3993C8u;
    // 0x3993c8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3993c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3993cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3993ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3993d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3993d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3993d4: 0x24849d00  addiu       $a0, $a0, -0x6300
    ctx->pc = 0x3993d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
    // 0x3993d8: 0x24061040  addiu       $a2, $zero, 0x1040
    ctx->pc = 0x3993d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    // 0x3993dc: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3993DCu;
    ctx->pc = 0x3993E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3993DCu;
    // 0x3993e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3993E4u;
    // 0x3993e4: 0x0  nop
    ctx->pc = 0x3993e4u;
    // NOP
label_3993e8:
    // 0x3993e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3993e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3993ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3993ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993ECu;
        // 0x3993f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3993ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3993F4u;
    // 0x3993f4: 0x0  nop
    ctx->pc = 0x3993f4u;
    // NOP
    ctx->pc = 0x3993f8u;
}
