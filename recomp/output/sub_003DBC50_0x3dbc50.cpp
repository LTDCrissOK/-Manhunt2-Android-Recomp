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

// Function: sub_003DBC50
// Address: 0x3dbc50 - 0x3dbce0
void sub_003DBC50_0x3dbc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBC50_0x3dbc50");
#endif

    switch (ctx->pc) {
        case 0x3dbc7cu: goto label_3dbc7c;
        case 0x3dbc9cu: goto label_3dbc9c;
        default: break;
    }

    ctx->pc = 0x3dbc50u;

    // 0x3dbc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dbc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dbc54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dbc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dbc58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dbc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dbc5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dbc5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbc60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dbc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dbc64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3dbc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3dbc68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3dbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dbc6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DBC6Cu;
    {
        const bool branch_taken_0x3dbc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC6Cu;
        // 0x3dbc70: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbc6c) {
            ctx->pc = 0x3DBC90u;
            goto label_3dbc90;
        }
    }
    ctx->pc = 0x3DBC74u;
    // 0x3dbc74: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DBC74u;
    SET_GPR_U32(ctx, 31, 0x3DBC7Cu);
    ctx->pc = 0x3DBC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBC74u;
    // 0x3dbc78: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DBC74u, 0x3DBC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBC7Cu;
label_3dbc7c:
    // 0x3dbc7c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3dbc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3dbc80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3dbc80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3dbc84: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3dbc84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3dbc88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DBC88u;
    {
        const bool branch_taken_0x3dbc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC88u;
        // 0x3dbc8c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbc88) {
            ctx->pc = 0x3DBCACu;
            goto label_3dbcac;
        }
    }
    ctx->pc = 0x3DBC90u;
label_3dbc90:
    // 0x3dbc90: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x3dbc90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3dbc94: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DBC94u;
    SET_GPR_U32(ctx, 31, 0x3DBC9Cu);
    ctx->pc = 0x3DBC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBC94u;
    // 0x3dbc98: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DBC94u, 0x3DBC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBC9Cu;
label_3dbc9c:
    // 0x3dbc9c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3dbc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3dbca0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3dbca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3dbca4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x3dbca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x3dbca8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3dbca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3dbcac:
    // 0x3dbcac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3dbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3dbcb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dbcb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbcb4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3dbcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3dbcb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dbcb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dbcbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dbcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dbcc0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3dbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3dbcc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dbcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dbcc8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3dbcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dbccc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3dbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3dbcd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dbcd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dbcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBCD4u;
        // 0x3dbcd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBCDCu;
    // 0x3dbcdc: 0x0  nop
    ctx->pc = 0x3dbcdcu;
    // NOP
    ctx->pc = 0x3dbce0u;
}
