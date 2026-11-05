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

// Function: sub_003D9CC8
// Address: 0x3d9cc8 - 0x3d9cf0
void sub_003D9CC8_0x3d9cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9CC8_0x3d9cc8");
#endif

    ctx->pc = 0x3d9cc8u;

    // 0x3d9cc8: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x3d9cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d9ccc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3d9cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3d9cd0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3d9cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d9cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9CD4u;
    {
        const bool branch_taken_0x3d9cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CD4u;
        // 0x3d9cd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9cd4) {
            ctx->pc = 0x3D9CE4u;
            goto label_3d9ce4;
        }
    }
    ctx->pc = 0x3D9CDCu;
    // 0x3d9cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CDCu;
        // 0x3d9ce0: 0xa4850012  sh          $a1, 0x12($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9CE4u;
label_3d9ce4:
    // 0x3d9ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CE4u;
        // 0x3d9ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9CECu;
    // 0x3d9cec: 0x0  nop
    ctx->pc = 0x3d9cecu;
    // NOP
    ctx->pc = 0x3d9cf0u;
}
