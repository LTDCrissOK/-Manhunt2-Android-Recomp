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

// Function: sub_00224B30
// Address: 0x224b30 - 0x224ba8
void sub_00224B30_0x224b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224B30_0x224b30");
#endif

    switch (ctx->pc) {
        case 0x224b58u: goto label_224b58;
        case 0x224b60u: goto label_224b60;
        case 0x224b68u: goto label_224b68;
        default: break;
    }

    ctx->pc = 0x224b30u;

    // 0x224b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224b34: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x224b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x224b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224b3c: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x224b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x224b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x224b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x224b48: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x224b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x224b4c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x224b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x224b50: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x224B50u;
    SET_GPR_U32(ctx, 31, 0x224B58u);
    ctx->pc = 0x224B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B50u;
    // 0x224b54: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x224B50u, 0x224B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B58u;
label_224b58:
    // 0x224b58: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x224B58u;
    SET_GPR_U32(ctx, 31, 0x224B60u);
    ctx->pc = 0x224B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B58u;
    // 0x224b5c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x224B58u, 0x224B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B60u;
label_224b60:
    // 0x224b60: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x224B60u;
    SET_GPR_U32(ctx, 31, 0x224B68u);
    ctx->pc = 0x224B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B60u;
    // 0x224b64: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x224B60u, 0x224B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B68u;
label_224b68:
    // 0x224b68: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x224b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x224b6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b70: 0x24631758  addiu       $v1, $v1, 0x1758
    ctx->pc = 0x224b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5976));
    // 0x224b74: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x224b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x224b78: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x224b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x224b7c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x224b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x224b80: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x224b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x224b84: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x224b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x224b88: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x224b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x224b8c: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x224b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x224b90: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x224b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x224b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224b98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x224b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x224B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B9Cu;
        // 0x224ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224BA4u;
    // 0x224ba4: 0x0  nop
    ctx->pc = 0x224ba4u;
    // NOP
    ctx->pc = 0x224ba8u;
}
