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

// Function: sub_00155B30
// Address: 0x155b30 - 0x155b78
void sub_00155B30_0x155b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155B30_0x155b30");
#endif

    switch (ctx->pc) {
        case 0x155b44u: goto label_155b44;
        case 0x155b58u: goto label_155b58;
        case 0x155b64u: goto label_155b64;
        default: break;
    }

    ctx->pc = 0x155b30u;

    // 0x155b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155b38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x155b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x155b3c: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x155B3Cu;
    SET_GPR_U32(ctx, 31, 0x155B44u);
    ctx->pc = 0x155B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B3Cu;
    // 0x155b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x155B3Cu, 0x155B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B44u;
label_155b44:
    // 0x155b44: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x155b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x155b48: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x155b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    // 0x155b4c: 0x24630b88  addiu       $v1, $v1, 0xB88
    ctx->pc = 0x155b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2952));
    // 0x155b50: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x155B50u;
    SET_GPR_U32(ctx, 31, 0x155B58u);
    ctx->pc = 0x155B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B50u;
    // 0x155b54: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x155B50u, 0x155B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B58u;
label_155b58:
    // 0x155b58: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x155b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x155b5c: 0xc0557ca  jal         func_155F28
    ctx->pc = 0x155B5Cu;
    SET_GPR_U32(ctx, 31, 0x155B64u);
    ctx->pc = 0x155B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155B5Cu;
    // 0x155b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F28u, 0x155B5Cu, 0x155B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B64u;
label_155b64:
    // 0x155b64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x155b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x155b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155b6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155b70: 0x3e00008  jr          $ra
    ctx->pc = 0x155B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B70u;
        // 0x155b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155B78u;
}
