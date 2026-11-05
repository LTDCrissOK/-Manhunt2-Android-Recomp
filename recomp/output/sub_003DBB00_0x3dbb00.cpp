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

// Function: sub_003DBB00
// Address: 0x3dbb00 - 0x3dbb90
void sub_003DBB00_0x3dbb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBB00_0x3dbb00");
#endif

    switch (ctx->pc) {
        case 0x3dbb84u: goto label_3dbb84;
        default: break;
    }

    ctx->pc = 0x3dbb00u;

    // 0x3dbb00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dbb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dbb04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dbb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dbb08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dbb0c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3dbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dbb10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3dbb14: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBB14u;
    {
        const bool branch_taken_0x3dbb14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB14u;
        // 0x3dbb18: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbb14) {
            ctx->pc = 0x3DBB24u;
            goto label_3dbb24;
        }
    }
    ctx->pc = 0x3DBB1Cu;
    // 0x3dbb1c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dbb20: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dbb20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3dbb24:
    // 0x3dbb24: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3dbb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dbb28: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBB28u;
    {
        const bool branch_taken_0x3dbb28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dbb28) {
            ctx->pc = 0x3DBB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBB28u;
            // 0x3dbb2c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBB3Cu;
            goto label_3dbb3c;
        }
    }
    ctx->pc = 0x3DBB30u;
    // 0x3dbb30: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dbb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dbb34: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3dbb34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3dbb38: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3dbb3c:
    // 0x3dbb3c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBB3Cu;
    {
        const bool branch_taken_0x3dbb3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dbb3c) {
            ctx->pc = 0x3DBB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBB3Cu;
            // 0x3dbb40: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBB50u;
            goto label_3dbb50;
        }
    }
    ctx->pc = 0x3DBB44u;
    // 0x3dbb44: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dbb48: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dbb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dbb4c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3dbb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3dbb50:
    // 0x3dbb50: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBB50u;
    {
        const bool branch_taken_0x3dbb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbb50) {
            ctx->pc = 0x3DBB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBB50u;
            // 0x3dbb54: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBB64u;
            goto label_3dbb64;
        }
    }
    ctx->pc = 0x3DBB58u;
    // 0x3dbb58: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dbb5c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3dbb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3dbb60: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3dbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3dbb64:
    // 0x3dbb64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBB64u;
    {
        const bool branch_taken_0x3dbb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbb64) {
            ctx->pc = 0x3DBB74u;
            goto label_3dbb74;
        }
    }
    ctx->pc = 0x3DBB6Cu;
    // 0x3dbb6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dbb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dbb70: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3dbb70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3dbb74:
    // 0x3dbb74: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBB74u;
    {
        const bool branch_taken_0x3dbb74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB74u;
        // 0x3dbb78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbb74) {
            ctx->pc = 0x3DBB88u;
            goto label_3dbb88;
        }
    }
    ctx->pc = 0x3DBB7Cu;
    // 0x3dbb7c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DBB7Cu;
    SET_GPR_U32(ctx, 31, 0x3DBB84u);
    ctx->pc = 0x3DBB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBB7Cu;
    // 0x3dbb80: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DBB7Cu, 0x3DBB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBB84u;
label_3dbb84:
    // 0x3dbb84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dbb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dbb88:
    // 0x3dbb88: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB88u;
        // 0x3dbb8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBB90u;
}
