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

// Function: sub_003D8DD0
// Address: 0x3d8dd0 - 0x3d8e60
void sub_003D8DD0_0x3d8dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8DD0_0x3d8dd0");
#endif

    switch (ctx->pc) {
        case 0x3d8e54u: goto label_3d8e54;
        default: break;
    }

    ctx->pc = 0x3d8dd0u;

    // 0x3d8dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d8dd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d8ddc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3d8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3d8de0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d8de4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8DE4u;
    {
        const bool branch_taken_0x3d8de4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D8DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8DE4u;
        // 0x3d8de8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8de4) {
            ctx->pc = 0x3D8DF4u;
            goto label_3d8df4;
        }
    }
    ctx->pc = 0x3D8DECu;
    // 0x3d8dec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3d8decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d8df0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3d8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3d8df4:
    // 0x3d8df4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d8df8: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8DF8u;
    {
        const bool branch_taken_0x3d8df8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d8df8) {
            ctx->pc = 0x3D8DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8DF8u;
            // 0x3d8dfc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8E0Cu;
            goto label_3d8e0c;
        }
    }
    ctx->pc = 0x3D8E00u;
    // 0x3d8e00: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3d8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d8e04: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3d8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3d8e08: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3d8e0c:
    // 0x3d8e0c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8E0Cu;
    {
        const bool branch_taken_0x3d8e0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d8e0c) {
            ctx->pc = 0x3D8E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8E0Cu;
            // 0x3d8e10: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8E20u;
            goto label_3d8e20;
        }
    }
    ctx->pc = 0x3D8E14u;
    // 0x3d8e14: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3d8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d8e18: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3d8e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3d8e1c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3d8e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3d8e20:
    // 0x3d8e20: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8E20u;
    {
        const bool branch_taken_0x3d8e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e20) {
            ctx->pc = 0x3D8E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8E20u;
            // 0x3d8e24: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8E34u;
            goto label_3d8e34;
        }
    }
    ctx->pc = 0x3D8E28u;
    // 0x3d8e28: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3d8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d8e2c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3d8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3d8e30: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3d8e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3d8e34:
    // 0x3d8e34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8E34u;
    {
        const bool branch_taken_0x3d8e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8e34) {
            ctx->pc = 0x3D8E44u;
            goto label_3d8e44;
        }
    }
    ctx->pc = 0x3D8E3Cu;
    // 0x3d8e3c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3d8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d8e40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3d8e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3d8e44:
    // 0x3d8e44: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8E44u;
    {
        const bool branch_taken_0x3d8e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E44u;
        // 0x3d8e48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8e44) {
            ctx->pc = 0x3D8E58u;
            goto label_3d8e58;
        }
    }
    ctx->pc = 0x3D8E4Cu;
    // 0x3d8e4c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3D8E4Cu;
    SET_GPR_U32(ctx, 31, 0x3D8E54u);
    ctx->pc = 0x3D8E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8E4Cu;
    // 0x3d8e50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3D8E4Cu, 0x3D8E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E54u;
label_3d8e54:
    // 0x3d8e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8e58:
    // 0x3d8e58: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E58u;
        // 0x3d8e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8E60u;
}
