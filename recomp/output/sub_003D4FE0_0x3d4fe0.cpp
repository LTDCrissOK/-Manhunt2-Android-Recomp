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

// Function: sub_003D4FE0
// Address: 0x3d4fe0 - 0x3d50b8
void sub_003D4FE0_0x3d4fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4FE0_0x3d4fe0");
#endif

    switch (ctx->pc) {
        case 0x3d5018u: goto label_3d5018;
        default: break;
    }

    ctx->pc = 0x3d4fe0u;

    // 0x3d4fe0: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x3d4fe0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4fe4: 0x11a00032  beqz        $t5, . + 4 + (0x32 << 2)
    ctx->pc = 0x3D4FE4u;
    {
        const bool branch_taken_0x3d4fe4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FE4u;
        // 0x3d4fe8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4fe4) {
            ctx->pc = 0x3D50B0u;
            goto label_3d50b0;
        }
    }
    ctx->pc = 0x3D4FECu;
    // 0x3d4fec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3d4ff0: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x3d4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3d4ff4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d4ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d4ff8: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3D4FF8u;
    {
        const bool branch_taken_0x3d4ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FF8u;
        // 0x3d4ffc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4ff8) {
            ctx->pc = 0x3D5094u;
            goto label_3d5094;
        }
    }
    ctx->pc = 0x3D5000u;
    // 0x3d5000: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x3d5000u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x3d5004: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x3d5004u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3d5008: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x3d5008u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d500c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x3d500cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x3d5010: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x3d5010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5014: 0x0  nop
    ctx->pc = 0x3d5014u;
    // NOP
label_3d5018:
    // 0x3d5018: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x3d5018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d501c: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x3d501cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d5020: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D5020u;
    {
        const bool branch_taken_0x3d5020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5020) {
            ctx->pc = 0x3D506Cu;
            goto label_3d506c;
        }
    }
    ctx->pc = 0x3D5028u;
    // 0x3d5028: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x3d5028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3d502c: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x3d502cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3d5030: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D5030u;
    {
        const bool branch_taken_0x3d5030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5030) {
            ctx->pc = 0x3D506Cu;
            goto label_3d506c;
        }
    }
    ctx->pc = 0x3D5038u;
    // 0x3d5038: 0x110b000a  beq         $t0, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x3D5038u;
    {
        const bool branch_taken_0x3d5038 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x3D503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5038u;
        // 0x3d503c: 0x10c1018  mult        $v0, $t0, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5038) {
            ctx->pc = 0x3D5064u;
            goto label_3d5064;
        }
    }
    ctx->pc = 0x3D5040u;
    // 0x3d5040: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x3d5040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3d5044: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d5044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3d5048: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3d5048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3d504c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3D504Cu;
    {
        const bool branch_taken_0x3d504c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d504c) {
            ctx->pc = 0x3D5050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D504Cu;
            // 0x3d5050: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5088u;
            goto label_3d5088;
        }
    }
    ctx->pc = 0x3D5054u;
    // 0x3d5054: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d5054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d5058: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x3d5058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d505c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3D505Cu;
    {
        const bool branch_taken_0x3d505c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d505c) {
            ctx->pc = 0x3D5060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D505Cu;
            // 0x3d5060: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5088u;
            goto label_3d5088;
        }
    }
    ctx->pc = 0x3D5064u;
label_3d5064:
    // 0x3d5064: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D5064u;
    {
        const bool branch_taken_0x3d5064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5064u;
        // 0x3d5068: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5064) {
            ctx->pc = 0x3D5084u;
            goto label_3d5084;
        }
    }
    ctx->pc = 0x3D506Cu;
label_3d506c:
    // 0x3d506c: 0x5020006  bltzl       $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D506Cu;
    {
        const bool branch_taken_0x3d506c = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x3d506c) {
            ctx->pc = 0x3D5070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D506Cu;
            // 0x3d5070: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5088u;
            goto label_3d5088;
        }
    }
    ctx->pc = 0x3D5074u;
    // 0x3d5074: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3d5074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d5078: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3d5078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d507c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D507Cu;
    {
        const bool branch_taken_0x3d507c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D507Cu;
        // 0x3d5080: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d507c) {
            ctx->pc = 0x3D5098u;
            goto label_3d5098;
        }
    }
    ctx->pc = 0x3D5084u;
label_3d5084:
    // 0x3d5084: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3d5084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_3d5088:
    // 0x3d5088: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3d5088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d508c: 0x1449ffe2  bne         $v0, $t1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3D508Cu;
    {
        const bool branch_taken_0x3d508c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x3D5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D508Cu;
        // 0x3d5090: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d508c) {
            ctx->pc = 0x3D5018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5018;
        }
    }
    ctx->pc = 0x3D5094u;
label_3d5094:
    // 0x3d5094: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d5094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d5098:
    // 0x3d5098: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D5098u;
    {
        const bool branch_taken_0x3d5098 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5098u;
        // 0x3d509c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5098) {
            ctx->pc = 0x3D50B0u;
            goto label_3d50b0;
        }
    }
    ctx->pc = 0x3D50A0u;
    // 0x3d50a0: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x3d50a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3d50a4: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x3d50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3d50a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D50A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50A8u;
        // 0x3d50ac: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D50A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D50B0u;
label_3d50b0:
    // 0x3d50b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D50B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50B0u;
        // 0x3d50b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D50B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D50B8u;
}
