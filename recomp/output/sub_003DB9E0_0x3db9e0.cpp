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

// Function: sub_003DB9E0
// Address: 0x3db9e0 - 0x3dba70
void sub_003DB9E0_0x3db9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB9E0_0x3db9e0");
#endif

    switch (ctx->pc) {
        case 0x3dba64u: goto label_3dba64;
        default: break;
    }

    ctx->pc = 0x3db9e0u;

    // 0x3db9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db9e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3db9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3db9ec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3db9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3db9f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3db9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3db9f4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DB9F4u;
    {
        const bool branch_taken_0x3db9f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DB9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9F4u;
        // 0x3db9f8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db9f4) {
            ctx->pc = 0x3DBA04u;
            goto label_3dba04;
        }
    }
    ctx->pc = 0x3DB9FCu;
    // 0x3db9fc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3db9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dba00: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dba00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3dba04:
    // 0x3dba04: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3dba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dba08: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBA08u;
    {
        const bool branch_taken_0x3dba08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dba08) {
            ctx->pc = 0x3DBA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBA08u;
            // 0x3dba0c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBA1Cu;
            goto label_3dba1c;
        }
    }
    ctx->pc = 0x3DBA10u;
    // 0x3dba10: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dba14: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3dba14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3dba18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3dba1c:
    // 0x3dba1c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBA1Cu;
    {
        const bool branch_taken_0x3dba1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dba1c) {
            ctx->pc = 0x3DBA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBA1Cu;
            // 0x3dba20: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBA30u;
            goto label_3dba30;
        }
    }
    ctx->pc = 0x3DBA24u;
    // 0x3dba24: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dba28: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dba28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dba2c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3dba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3dba30:
    // 0x3dba30: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBA30u;
    {
        const bool branch_taken_0x3dba30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dba30) {
            ctx->pc = 0x3DBA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBA30u;
            // 0x3dba34: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBA44u;
            goto label_3dba44;
        }
    }
    ctx->pc = 0x3DBA38u;
    // 0x3dba38: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dba3c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3dba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3dba40: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3dba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3dba44:
    // 0x3dba44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBA44u;
    {
        const bool branch_taken_0x3dba44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dba44) {
            ctx->pc = 0x3DBA54u;
            goto label_3dba54;
        }
    }
    ctx->pc = 0x3DBA4Cu;
    // 0x3dba4c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dba50: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3dba50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3dba54:
    // 0x3dba54: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DBA54u;
    {
        const bool branch_taken_0x3dba54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA54u;
        // 0x3dba58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dba54) {
            ctx->pc = 0x3DBA68u;
            goto label_3dba68;
        }
    }
    ctx->pc = 0x3DBA5Cu;
    // 0x3dba5c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DBA5Cu;
    SET_GPR_U32(ctx, 31, 0x3DBA64u);
    ctx->pc = 0x3DBA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBA5Cu;
    // 0x3dba60: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DBA5Cu, 0x3DBA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBA64u;
label_3dba64:
    // 0x3dba64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dba64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dba68:
    // 0x3dba68: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA68u;
        // 0x3dba6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBA70u;
}
