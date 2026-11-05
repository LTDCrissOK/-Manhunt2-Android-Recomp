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

// Function: sub_003DBA70
// Address: 0x3dba70 - 0x3dbb00
void sub_003DBA70_0x3dba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBA70_0x3dba70");
#endif

    switch (ctx->pc) {
        case 0x3dbaf4u: goto label_3dbaf4;
        default: break;
    }

    ctx->pc = 0x3dba70u;

    // 0x3dba70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dba74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dba78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dba7c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3dba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dba80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3dba84: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBA84u;
    {
        const bool branch_taken_0x3dba84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA84u;
        // 0x3dba88: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dba84) {
            ctx->pc = 0x3DBA94u;
            goto label_3dba94;
        }
    }
    ctx->pc = 0x3DBA8Cu;
    // 0x3dba8c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dba90: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dba90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3dba94:
    // 0x3dba94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3dba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dba98: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBA98u;
    {
        const bool branch_taken_0x3dba98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dba98) {
            ctx->pc = 0x3DBA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBA98u;
            // 0x3dba9c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBAACu;
            goto label_3dbaac;
        }
    }
    ctx->pc = 0x3DBAA0u;
    // 0x3dbaa0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dbaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dbaa4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3dbaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3dbaa8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3dbaac:
    // 0x3dbaac: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBAACu;
    {
        const bool branch_taken_0x3dbaac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dbaac) {
            ctx->pc = 0x3DBAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBAACu;
            // 0x3dbab0: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBAC0u;
            goto label_3dbac0;
        }
    }
    ctx->pc = 0x3DBAB4u;
    // 0x3dbab4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dbab8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dbab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dbabc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3dbabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3dbac0:
    // 0x3dbac0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBAC0u;
    {
        const bool branch_taken_0x3dbac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbac0) {
            ctx->pc = 0x3DBAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBAC0u;
            // 0x3dbac4: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBAD4u;
            goto label_3dbad4;
        }
    }
    ctx->pc = 0x3DBAC8u;
    // 0x3dbac8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dbacc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3dbaccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3dbad0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3dbad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3dbad4:
    // 0x3dbad4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBAD4u;
    {
        const bool branch_taken_0x3dbad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbad4) {
            ctx->pc = 0x3DBAE4u;
            goto label_3dbae4;
        }
    }
    ctx->pc = 0x3DBADCu;
    // 0x3dbadc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dbadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dbae0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3dbae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3dbae4:
    // 0x3dbae4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBAE4u;
    {
        const bool branch_taken_0x3dbae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBAE4u;
        // 0x3dbae8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbae4) {
            ctx->pc = 0x3DBAF8u;
            goto label_3dbaf8;
        }
    }
    ctx->pc = 0x3DBAECu;
    // 0x3dbaec: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DBAECu;
    SET_GPR_U32(ctx, 31, 0x3DBAF4u);
    ctx->pc = 0x3DBAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBAECu;
    // 0x3dbaf0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DBAECu, 0x3DBAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBAF4u;
label_3dbaf4:
    // 0x3dbaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dbaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dbaf8:
    // 0x3dbaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBAF8u;
        // 0x3dbafc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBB00u;
}
