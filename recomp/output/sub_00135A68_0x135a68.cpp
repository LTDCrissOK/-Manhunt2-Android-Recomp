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

// Function: sub_00135A68
// Address: 0x135a68 - 0x135ac0
void sub_00135A68_0x135a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135A68_0x135a68");
#endif

    switch (ctx->pc) {
        case 0x135a88u: goto label_135a88;
        case 0x135ab4u: goto label_135ab4;
        default: break;
    }

    ctx->pc = 0x135a68u;

    // 0x135a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135a6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135a70: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x135a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x135a74: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x135A74u;
    {
        const bool branch_taken_0x135a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A74u;
        // 0x135a78: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a74) {
            ctx->pc = 0x135AB4u;
            goto label_135ab4;
        }
    }
    ctx->pc = 0x135A7Cu;
    // 0x135a7c: 0x8c4502dc  lw          $a1, 0x2DC($v0)
    ctx->pc = 0x135a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 732)));
    // 0x135a80: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x135A80u;
    SET_GPR_U32(ctx, 31, 0x135A88u);
    ctx->pc = 0x135A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A80u;
    // 0x135a84: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x135A80u, 0x135A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A88u;
label_135a88:
    // 0x135a88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x135A88u;
    {
        const bool branch_taken_0x135a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A88u;
        // 0x135a8c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a88) {
            ctx->pc = 0x135AB4u;
            goto label_135ab4;
        }
    }
    ctx->pc = 0x135A90u;
    // 0x135a90: 0x244378e0  addiu       $v1, $v0, 0x78E0
    ctx->pc = 0x135a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30944));
    // 0x135a94: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x135A94u;
    {
        const bool branch_taken_0x135a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x135A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A94u;
        // 0x135a98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a94) {
            ctx->pc = 0x135AB8u;
            goto label_135ab8;
        }
    }
    ctx->pc = 0x135A9Cu;
    // 0x135a9c: 0x8c626394  lw          $v0, 0x6394($v1)
    ctx->pc = 0x135a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25492)));
    // 0x135aa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x135AA0u;
    {
        const bool branch_taken_0x135aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135AA0u;
        // 0x135aa4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135aa0) {
            ctx->pc = 0x135AB8u;
            goto label_135ab8;
        }
    }
    ctx->pc = 0x135AA8u;
    // 0x135aa8: 0xac606394  sw          $zero, 0x6394($v1)
    ctx->pc = 0x135aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25492), GPR_U32(ctx, 0));
    // 0x135aac: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x135AACu;
    SET_GPR_U32(ctx, 31, 0x135AB4u);
    ctx->pc = 0x135AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135AACu;
    // 0x135ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x135AACu, 0x135AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AB4u;
label_135ab4:
    // 0x135ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135ab8:
    // 0x135ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x135AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135AB8u;
        // 0x135abc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135AC0u;
}
