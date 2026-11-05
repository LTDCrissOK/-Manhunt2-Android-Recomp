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

// Function: sub_00337AA0
// Address: 0x337aa0 - 0x337b00
void sub_00337AA0_0x337aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337AA0_0x337aa0");
#endif

    switch (ctx->pc) {
        case 0x337accu: goto label_337acc;
        default: break;
    }

    ctx->pc = 0x337aa0u;

    // 0x337aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337aa4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x337aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337aac: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x337aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x337ab0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x337ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337ab4: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x337ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x337ab8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x337ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x337abc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x337abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x337ac0: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x337ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x337ac4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x337AC4u;
    SET_GPR_U32(ctx, 31, 0x337ACCu);
    ctx->pc = 0x337AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337AC4u;
    // 0x337ac8: 0x24640080  addiu       $a0, $v1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x337AC4u, 0x337ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337ACCu;
label_337acc:
    // 0x337acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x337AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337AD0u;
        // 0x337ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337AD8u;
    // 0x337ad8: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x337ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x337adc: 0x0  nop
    ctx->pc = 0x337adcu;
    // NOP
    // 0x337ae0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x337ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x337ae4: 0x0  nop
    ctx->pc = 0x337ae4u;
    // NOP
    // 0x337ae8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x337ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x337aec: 0x0  nop
    ctx->pc = 0x337aecu;
    // NOP
    // 0x337af0: 0xa0860080  sb          $a2, 0x80($a0)
    ctx->pc = 0x337af0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 128), (uint8_t)GPR_U32(ctx, 6));
    // 0x337af4: 0x0  nop
    ctx->pc = 0x337af4u;
    // NOP
    // 0x337af8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x337af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x337afc: 0x0  nop
    ctx->pc = 0x337afcu;
    // NOP
    ctx->pc = 0x337b00u;
}
