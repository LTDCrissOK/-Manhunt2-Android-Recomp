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

// Function: sub_003DFCD0
// Address: 0x3dfcd0 - 0x3dfd68
void sub_003DFCD0_0x3dfcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFCD0_0x3dfcd0");
#endif

    switch (ctx->pc) {
        case 0x3dfd54u: goto label_3dfd54;
        default: break;
    }

    ctx->pc = 0x3dfcd0u;

    // 0x3dfcd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dfcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dfcd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dfcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dfcd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dfcdc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3dfcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dfce0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dfce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3dfce4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFCE4u;
    {
        const bool branch_taken_0x3dfce4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFCE4u;
        // 0x3dfce8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfce4) {
            ctx->pc = 0x3DFCF4u;
            goto label_3dfcf4;
        }
    }
    ctx->pc = 0x3DFCECu;
    // 0x3dfcec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dfcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dfcf0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dfcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3dfcf4:
    // 0x3dfcf4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3dfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dfcf8: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFCF8u;
    {
        const bool branch_taken_0x3dfcf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dfcf8) {
            ctx->pc = 0x3DFCFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFCF8u;
            // 0x3dfcfc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFD0Cu;
            goto label_3dfd0c;
        }
    }
    ctx->pc = 0x3DFD00u;
    // 0x3dfd00: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dfd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dfd04: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3dfd04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3dfd08: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dfd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3dfd0c:
    // 0x3dfd0c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFD0Cu;
    {
        const bool branch_taken_0x3dfd0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dfd0c) {
            ctx->pc = 0x3DFD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFD0Cu;
            // 0x3dfd10: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFD20u;
            goto label_3dfd20;
        }
    }
    ctx->pc = 0x3DFD14u;
    // 0x3dfd14: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dfd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dfd18: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dfd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dfd1c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3dfd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3dfd20:
    // 0x3dfd20: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFD20u;
    {
        const bool branch_taken_0x3dfd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfd20) {
            ctx->pc = 0x3DFD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFD20u;
            // 0x3dfd24: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFD34u;
            goto label_3dfd34;
        }
    }
    ctx->pc = 0x3DFD28u;
    // 0x3dfd28: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dfd2c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3dfd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3dfd30: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3dfd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3dfd34:
    // 0x3dfd34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFD34u;
    {
        const bool branch_taken_0x3dfd34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfd34) {
            ctx->pc = 0x3DFD44u;
            goto label_3dfd44;
        }
    }
    ctx->pc = 0x3DFD3Cu;
    // 0x3dfd3c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dfd40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3dfd40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3dfd44:
    // 0x3dfd44: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFD44u;
    {
        const bool branch_taken_0x3dfd44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD44u;
        // 0x3dfd48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfd44) {
            ctx->pc = 0x3DFD58u;
            goto label_3dfd58;
        }
    }
    ctx->pc = 0x3DFD4Cu;
    // 0x3dfd4c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DFD4Cu;
    SET_GPR_U32(ctx, 31, 0x3DFD54u);
    ctx->pc = 0x3DFD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFD4Cu;
    // 0x3dfd50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DFD4Cu, 0x3DFD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFD54u;
label_3dfd54:
    // 0x3dfd54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dfd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfd58:
    // 0x3dfd58: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD58u;
        // 0x3dfd5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFD60u;
    // 0x3dfd60: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3dfd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3dfd64: 0x0  nop
    ctx->pc = 0x3dfd64u;
    // NOP
    ctx->pc = 0x3dfd68u;
}
