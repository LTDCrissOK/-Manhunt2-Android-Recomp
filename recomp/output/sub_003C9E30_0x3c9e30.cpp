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

// Function: sub_003C9E30
// Address: 0x3c9e30 - 0x3c9ec0
void sub_003C9E30_0x3c9e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9E30_0x3c9e30");
#endif

    switch (ctx->pc) {
        case 0x3c9e40u: goto label_3c9e40;
        case 0x3c9e64u: goto label_3c9e64;
        case 0x3c9e70u: goto label_3c9e70;
        case 0x3c9e94u: goto label_3c9e94;
        default: break;
    }

    ctx->pc = 0x3c9e30u;

    // 0x3c9e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c9e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c9e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c9e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c9e38: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3C9E38u;
    SET_GPR_U32(ctx, 31, 0x3C9E40u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3C9E38u, 0x3C9E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9E40u;
label_3c9e40:
    // 0x3c9e40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3c9e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3c9e44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3c9e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c9e48: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3c9e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3c9e4c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3c9e4cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x3c9e50: 0xf  sync
    ctx->pc = 0x3c9e50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3c9e54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C9E54u;
    {
        const bool branch_taken_0x3c9e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E54u;
        // 0x3c9e58: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9e54) {
            ctx->pc = 0x3C9E68u;
            goto label_3c9e68;
        }
    }
    ctx->pc = 0x3C9E5Cu;
    // 0x3c9e5c: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3C9E5Cu;
    SET_GPR_U32(ctx, 31, 0x3C9E64u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3C9E5Cu, 0x3C9E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9E64u;
label_3c9e64:
    // 0x3c9e64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3c9e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3c9e68:
    // 0x3c9e68: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3c9e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3c9e6c: 0x0  nop
    ctx->pc = 0x3c9e6cu;
    // NOP
label_3c9e70:
    // 0x3c9e70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3c9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f000
    // 0x3c9e74: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3c9e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3c9e78: 0x0  nop
    ctx->pc = 0x3c9e78u;
    // NOP
    // 0x3c9e7c: 0x0  nop
    ctx->pc = 0x3c9e7cu;
    // NOP
    // 0x3c9e80: 0x0  nop
    ctx->pc = 0x3c9e80u;
    // NOP
    // 0x3c9e84: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C9E84u;
    {
        const bool branch_taken_0x3c9e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9e84) {
            ctx->pc = 0x3C9E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9e70;
        }
    }
    ctx->pc = 0x3C9E8Cu;
    // 0x3c9e8c: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3C9E8Cu;
    SET_GPR_U32(ctx, 31, 0x3C9E94u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3C9E8Cu, 0x3C9E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9E94u;
label_3c9e94:
    // 0x3c9e94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3c9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3c9e98: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3c9e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c9e9c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3c9e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3c9ea0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3c9ea0u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x3c9ea4: 0xf  sync
    ctx->pc = 0x3c9ea4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3c9ea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9EA8u;
    {
        const bool branch_taken_0x3c9ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EA8u;
        // 0x3c9eac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9ea8) {
            ctx->pc = 0x3C9EB8u;
            goto label_3c9eb8;
        }
    }
    ctx->pc = 0x3C9EB0u;
    // 0x3c9eb0: 0x80f401a  j           func_3D0068
    ctx->pc = 0x3C9EB0u;
    ctx->pc = 0x3C9EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9EB0u;
    // 0x3c9eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0068u;
    sub_003D0068_0x3d0068(rdram, ctx, runtime); return;
    ctx->pc = 0x3C9EB8u;
label_3c9eb8:
    // 0x3c9eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EB8u;
        // 0x3c9ebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9EC0u;
}
