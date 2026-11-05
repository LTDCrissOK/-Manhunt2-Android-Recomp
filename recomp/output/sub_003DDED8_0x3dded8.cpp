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

// Function: sub_003DDED8
// Address: 0x3dded8 - 0x3ddf68
void sub_003DDED8_0x3dded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDED8_0x3dded8");
#endif

    switch (ctx->pc) {
        case 0x3ddf5cu: goto label_3ddf5c;
        default: break;
    }

    ctx->pc = 0x3dded8u;

    // 0x3dded8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dded8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ddedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ddedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ddee0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ddee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ddee4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ddee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ddee8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ddee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ddeec: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDEECu;
    {
        const bool branch_taken_0x3ddeec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDEECu;
        // 0x3ddef0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddeec) {
            ctx->pc = 0x3DDEFCu;
            goto label_3ddefc;
        }
    }
    ctx->pc = 0x3DDEF4u;
    // 0x3ddef4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ddef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ddef8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ddef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ddefc:
    // 0x3ddefc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ddefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ddf00: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDF00u;
    {
        const bool branch_taken_0x3ddf00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ddf00) {
            ctx->pc = 0x3DDF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDF00u;
            // 0x3ddf04: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDF14u;
            goto label_3ddf14;
        }
    }
    ctx->pc = 0x3DDF08u;
    // 0x3ddf08: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ddf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ddf0c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ddf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ddf10: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ddf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ddf14:
    // 0x3ddf14: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDF14u;
    {
        const bool branch_taken_0x3ddf14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ddf14) {
            ctx->pc = 0x3DDF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDF14u;
            // 0x3ddf18: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDF28u;
            goto label_3ddf28;
        }
    }
    ctx->pc = 0x3DDF1Cu;
    // 0x3ddf1c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ddf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ddf20: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ddf20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ddf24: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ddf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ddf28:
    // 0x3ddf28: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDF28u;
    {
        const bool branch_taken_0x3ddf28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddf28) {
            ctx->pc = 0x3DDF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDF28u;
            // 0x3ddf2c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDF3Cu;
            goto label_3ddf3c;
        }
    }
    ctx->pc = 0x3DDF30u;
    // 0x3ddf30: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ddf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ddf34: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ddf34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ddf38: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ddf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ddf3c:
    // 0x3ddf3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDF3Cu;
    {
        const bool branch_taken_0x3ddf3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddf3c) {
            ctx->pc = 0x3DDF4Cu;
            goto label_3ddf4c;
        }
    }
    ctx->pc = 0x3DDF44u;
    // 0x3ddf44: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ddf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ddf48: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ddf48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ddf4c:
    // 0x3ddf4c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDF4Cu;
    {
        const bool branch_taken_0x3ddf4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF4Cu;
        // 0x3ddf50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddf4c) {
            ctx->pc = 0x3DDF60u;
            goto label_3ddf60;
        }
    }
    ctx->pc = 0x3DDF54u;
    // 0x3ddf54: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DDF54u;
    SET_GPR_U32(ctx, 31, 0x3DDF5Cu);
    ctx->pc = 0x3DDF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDF54u;
    // 0x3ddf58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DDF54u, 0x3DDF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDF5Cu;
label_3ddf5c:
    // 0x3ddf5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ddf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ddf60:
    // 0x3ddf60: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF60u;
        // 0x3ddf64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDF68u;
}
