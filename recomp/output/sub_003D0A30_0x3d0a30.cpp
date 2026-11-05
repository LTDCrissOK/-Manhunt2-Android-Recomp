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

// Function: sub_003D0A30
// Address: 0x3d0a30 - 0x3d0ab8
void sub_003D0A30_0x3d0a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0A30_0x3d0a30");
#endif

    switch (ctx->pc) {
        case 0x3d0a60u: goto label_3d0a60;
        default: break;
    }

    ctx->pc = 0x3d0a30u;

    // 0x3d0a30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d0a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0a34: 0x3c090043  lui         $t1, 0x43
    ctx->pc = 0x3d0a34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)67 << 16));
    // 0x3d0a38: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3d0a38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3d0a3c: 0x2525e640  addiu       $a1, $t1, -0x19C0
    ctx->pc = 0x3d0a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294960704));
    // 0x3d0a40: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3d0a40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3d0a44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d0a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0a48: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x3d0a48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d0a4c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3d0a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3d0a50: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3d0a50u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x42E658u));
    // 0x3d0a54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0A54u;
    {
        const bool branch_taken_0x3d0a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A54u;
        // 0x3d0a58: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0a54) {
            ctx->pc = 0x3D0A64u;
            goto label_3d0a64;
        }
    }
    ctx->pc = 0x3D0A5Cu;
    // 0x3d0a5c: 0x0  nop
    ctx->pc = 0x3d0a5cu;
    // NOP
label_3d0a60:
    // 0x3d0a60: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3d0a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3d0a64:
    // 0x3d0a64: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3D0A64u;
    {
        const bool branch_taken_0x3d0a64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0a64) {
            ctx->pc = 0x3D0A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0A64u;
            // 0x3d0a68: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0A90u;
            goto label_3d0a90;
        }
    }
    ctx->pc = 0x3D0A6Cu;
    // 0x3d0a6c: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x3d0a6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3d0a70: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x3d0a70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3d0a74: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x3d0a74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3d0a78: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3d0a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3d0a7c: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x3d0a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x3d0a80: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x3d0a80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d0a84: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D0A84u;
    {
        const bool branch_taken_0x3d0a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0a84) {
            ctx->pc = 0x3D0A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0A84u;
            // 0x3d0a88: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0a60;
        }
    }
    ctx->pc = 0x3D0A8Cu;
    // 0x3d0a8c: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x3d0a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_3d0a90:
    // 0x3d0a90: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D0A90u;
    {
        const bool branch_taken_0x3d0a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A90u;
        // 0x3d0a94: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0a90) {
            ctx->pc = 0x3D0A9Cu;
            goto label_3d0a9c;
        }
    }
    ctx->pc = 0x3D0A98u;
    // 0x3d0a98: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x3d0a98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_3d0a9c:
    // 0x3d0a9c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0A9Cu;
    {
        const bool branch_taken_0x3d0a9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A9Cu;
        // 0x3d0aa0: 0x2522e640  addiu       $v0, $t1, -0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294960704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0a9c) {
            ctx->pc = 0x3D0AACu;
            goto label_3d0aac;
        }
    }
    ctx->pc = 0x3D0AA4u;
    // 0x3d0aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AA4u;
        // 0x3d0aa8: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0AACu;
label_3d0aac:
    // 0x3d0aac: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AACu;
        // 0x3d0ab0: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0AB4u;
    // 0x3d0ab4: 0x0  nop
    ctx->pc = 0x3d0ab4u;
    // NOP
    ctx->pc = 0x3d0ab8u;
}
