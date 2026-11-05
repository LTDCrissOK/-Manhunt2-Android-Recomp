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

// Function: sub_003DBBC0
// Address: 0x3dbbc0 - 0x3dbc50
void sub_003DBBC0_0x3dbbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBBC0_0x3dbbc0");
#endif

    switch (ctx->pc) {
        case 0x3dbc44u: goto label_3dbc44;
        default: break;
    }

    ctx->pc = 0x3dbbc0u;

    // 0x3dbbc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dbbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dbbc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dbbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dbbc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dbbcc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3dbbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dbbd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3dbbd4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBBD4u;
    {
        const bool branch_taken_0x3dbbd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBD4u;
        // 0x3dbbd8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbbd4) {
            ctx->pc = 0x3DBBE4u;
            goto label_3dbbe4;
        }
    }
    ctx->pc = 0x3DBBDCu;
    // 0x3dbbdc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dbbe0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dbbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3dbbe4:
    // 0x3dbbe4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3dbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dbbe8: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBBE8u;
    {
        const bool branch_taken_0x3dbbe8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dbbe8) {
            ctx->pc = 0x3DBBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBBE8u;
            // 0x3dbbec: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBBFCu;
            goto label_3dbbfc;
        }
    }
    ctx->pc = 0x3DBBF0u;
    // 0x3dbbf0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dbbf4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3dbbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3dbbf8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3dbbfc:
    // 0x3dbbfc: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBBFCu;
    {
        const bool branch_taken_0x3dbbfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dbbfc) {
            ctx->pc = 0x3DBC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBBFCu;
            // 0x3dbc00: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBC10u;
            goto label_3dbc10;
        }
    }
    ctx->pc = 0x3DBC04u;
    // 0x3dbc04: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dbc08: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dbc08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dbc0c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3dbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3dbc10:
    // 0x3dbc10: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBC10u;
    {
        const bool branch_taken_0x3dbc10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbc10) {
            ctx->pc = 0x3DBC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBC10u;
            // 0x3dbc14: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBC24u;
            goto label_3dbc24;
        }
    }
    ctx->pc = 0x3DBC18u;
    // 0x3dbc18: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dbc1c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3dbc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3dbc20: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3dbc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3dbc24:
    // 0x3dbc24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBC24u;
    {
        const bool branch_taken_0x3dbc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbc24) {
            ctx->pc = 0x3DBC34u;
            goto label_3dbc34;
        }
    }
    ctx->pc = 0x3DBC2Cu;
    // 0x3dbc2c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dbc30: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3dbc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3dbc34:
    // 0x3dbc34: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBC34u;
    {
        const bool branch_taken_0x3dbc34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC34u;
        // 0x3dbc38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbc34) {
            ctx->pc = 0x3DBC48u;
            goto label_3dbc48;
        }
    }
    ctx->pc = 0x3DBC3Cu;
    // 0x3dbc3c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DBC3Cu;
    SET_GPR_U32(ctx, 31, 0x3DBC44u);
    ctx->pc = 0x3DBC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBC3Cu;
    // 0x3dbc40: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DBC3Cu, 0x3DBC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBC44u;
label_3dbc44:
    // 0x3dbc44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dbc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dbc48:
    // 0x3dbc48: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC48u;
        // 0x3dbc4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBC50u;
}
