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

// Function: sub_003DDBE0
// Address: 0x3ddbe0 - 0x3ddcd8
void sub_003DDBE0_0x3ddbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDBE0_0x3ddbe0");
#endif

    ctx->pc = 0x3ddbe0u;

    // 0x3ddbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBE0u;
        // 0x3ddbe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDBE8u;
    // 0x3ddbe8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddbe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddbec: 0x0  nop
    ctx->pc = 0x3ddbecu;
    // NOP
    // 0x3ddbf0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddbf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddbf4: 0x0  nop
    ctx->pc = 0x3ddbf4u;
    // NOP
    // 0x3ddbf8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x3ddbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3ddbfc: 0x30420401  andi        $v0, $v0, 0x401
    ctx->pc = 0x3ddbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1025);
    // 0x3ddc00: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x3ddc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
    // 0x3ddc04: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC04u;
        // 0x3ddc08: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDC0Cu;
    // 0x3ddc0c: 0x0  nop
    ctx->pc = 0x3ddc0cu;
    // NOP
    // 0x3ddc10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc14: 0x0  nop
    ctx->pc = 0x3ddc14u;
    // NOP
    // 0x3ddc18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc1c: 0x0  nop
    ctx->pc = 0x3ddc1cu;
    // NOP
    // 0x3ddc20: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc24: 0x0  nop
    ctx->pc = 0x3ddc24u;
    // NOP
    // 0x3ddc28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc2c: 0x0  nop
    ctx->pc = 0x3ddc2cu;
    // NOP
    // 0x3ddc30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc34: 0x0  nop
    ctx->pc = 0x3ddc34u;
    // NOP
    // 0x3ddc38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc3c: 0x0  nop
    ctx->pc = 0x3ddc3cu;
    // NOP
    // 0x3ddc40: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc44: 0x0  nop
    ctx->pc = 0x3ddc44u;
    // NOP
    // 0x3ddc48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc4c: 0x0  nop
    ctx->pc = 0x3ddc4cu;
    // NOP
    // 0x3ddc50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc54: 0x0  nop
    ctx->pc = 0x3ddc54u;
    // NOP
    // 0x3ddc58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc5c: 0x0  nop
    ctx->pc = 0x3ddc5cu;
    // NOP
    // 0x3ddc60: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc64: 0x0  nop
    ctx->pc = 0x3ddc64u;
    // NOP
    // 0x3ddc68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc6c: 0x0  nop
    ctx->pc = 0x3ddc6cu;
    // NOP
    // 0x3ddc70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc74: 0x0  nop
    ctx->pc = 0x3ddc74u;
    // NOP
    // 0x3ddc78: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc7c: 0x0  nop
    ctx->pc = 0x3ddc7cu;
    // NOP
    // 0x3ddc80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddc80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddc84: 0x0  nop
    ctx->pc = 0x3ddc84u;
    // NOP
    // 0x3ddc88: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x3ddc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3ddc8c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3ddc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x3ddc90: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3ddc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3ddc94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ddc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ddc98: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3ddc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3ddc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC9Cu;
        // 0x3ddca0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDCA4u;
    // 0x3ddca4: 0x0  nop
    ctx->pc = 0x3ddca4u;
    // NOP
    // 0x3ddca8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddcac: 0x0  nop
    ctx->pc = 0x3ddcacu;
    // NOP
    // 0x3ddcb0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddcb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddcb4: 0x0  nop
    ctx->pc = 0x3ddcb4u;
    // NOP
    // 0x3ddcb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddcb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddcbc: 0x0  nop
    ctx->pc = 0x3ddcbcu;
    // NOP
    // 0x3ddcc0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddcc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddcc4: 0x0  nop
    ctx->pc = 0x3ddcc4u;
    // NOP
    // 0x3ddcc8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddcc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddccc: 0x0  nop
    ctx->pc = 0x3ddcccu;
    // NOP
    // 0x3ddcd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddcd4: 0x0  nop
    ctx->pc = 0x3ddcd4u;
    // NOP
    ctx->pc = 0x3ddcd8u;
}
