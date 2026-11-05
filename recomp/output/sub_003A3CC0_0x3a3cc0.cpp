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

// Function: sub_003A3CC0
// Address: 0x3a3cc0 - 0x3a3db0
void sub_003A3CC0_0x3a3cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3CC0_0x3a3cc0");
#endif

    switch (ctx->pc) {
        case 0x3a3d00u: goto label_3a3d00;
        case 0x3a3d0cu: goto label_3a3d0c;
        case 0x3a3d1cu: goto label_3a3d1c;
        case 0x3a3d20u: goto label_3a3d20;
        case 0x3a3d58u: goto label_3a3d58;
        default: break;
    }

    ctx->pc = 0x3a3cc0u;

    // 0x3a3cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a3cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a3cc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a3cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a3cc8: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x3a3cc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x3a3ccc: 0x8e621e7c  lw          $v0, 0x1E7C($s3)
    ctx->pc = 0x3a3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E7Cu));
    // 0x3a3cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a3cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a3cd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a3cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a3cd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a3cdc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a3cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a3ce0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A3CE0u;
    {
        const bool branch_taken_0x3a3ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CE0u;
        // 0x3a3ce4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ce0) {
            ctx->pc = 0x3A3D80u;
            goto label_3a3d80;
        }
    }
    ctx->pc = 0x3A3CE8u;
    // 0x3a3ce8: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x3a3ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x3a3cec: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x3a3cecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x3a3cf0: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x3a3cf0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x3a3cf4: 0x26112700  addiu       $s1, $s0, 0x2700
    ctx->pc = 0x3a3cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 9984));
    // 0x3a3cf8: 0x8e451e64  lw          $a1, 0x1E64($s2)
    ctx->pc = 0x3a3cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x411E64u));
    // 0x3a3cfc: 0x0  nop
    ctx->pc = 0x3a3cfcu;
    // NOP
label_3a3d00:
    // 0x3a3d00: 0x26042700  addiu       $a0, $s0, 0x2700
    ctx->pc = 0x3a3d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9984));
    // 0x3a3d04: 0xc0f3404  jal         func_3CD010
    ctx->pc = 0x3A3D04u;
    SET_GPR_U32(ctx, 31, 0x3A3D0Cu);
    ctx->pc = 0x3A3D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3D04u;
    // 0x3a3d08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD010u, 0x3A3D04u, 0x3A3D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3D0Cu;
label_3a3d0c:
    // 0x3a3d0c: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A3D0Cu;
    {
        const bool branch_taken_0x3a3d0c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3a3d0c) {
            ctx->pc = 0x3A3D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3D0Cu;
            // 0x3a3d10: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3D40u;
            goto label_3a3d40;
        }
    }
    ctx->pc = 0x3A3D14u;
    // 0x3a3d14: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A3D14u;
    SET_GPR_U32(ctx, 31, 0x3A3D1Cu);
    ctx->pc = 0x3A3D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3D14u;
    // 0x3a3d18: 0x2684d6e0  addiu       $a0, $s4, -0x2920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A3D14u, 0x3A3D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3D1Cu;
label_3a3d1c:
    // 0x3a3d1c: 0x0  nop
    ctx->pc = 0x3a3d1cu;
    // NOP
label_3a3d20:
    // 0x3a3d20: 0x0  nop
    ctx->pc = 0x3a3d20u;
    // NOP
    // 0x3a3d24: 0x0  nop
    ctx->pc = 0x3a3d24u;
    // NOP
    // 0x3a3d28: 0x0  nop
    ctx->pc = 0x3a3d28u;
    // NOP
    // 0x3a3d2c: 0x0  nop
    ctx->pc = 0x3a3d2cu;
    // NOP
    // 0x3a3d30: 0x0  nop
    ctx->pc = 0x3a3d30u;
    // NOP
    // 0x3a3d34: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A3D34u;
    {
        const bool branch_taken_0x3a3d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3d34) {
            ctx->pc = 0x3A3D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3d20;
        }
    }
    ctx->pc = 0x3A3D3Cu;
    // 0x3a3d3c: 0x0  nop
    ctx->pc = 0x3a3d3cu;
    // NOP
label_3a3d40:
    // 0x3a3d40: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A3D40u;
    {
        const bool branch_taken_0x3a3d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D40u;
        // 0x3a3d44: 0x26631e7c  addiu       $v1, $s3, 0x1E7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7804));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d40) {
            ctx->pc = 0x3A3D84u;
            goto label_3a3d84;
        }
    }
    ctx->pc = 0x3A3D48u;
    // 0x3a3d48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a3d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a3d4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3a3d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3a3d50: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3a3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x3a3d54: 0x0  nop
    ctx->pc = 0x3a3d54u;
    // NOP
label_3a3d58:
    // 0x3a3d58: 0x0  nop
    ctx->pc = 0x3a3d58u;
    // NOP
    // 0x3a3d5c: 0x0  nop
    ctx->pc = 0x3a3d5cu;
    // NOP
    // 0x3a3d60: 0x0  nop
    ctx->pc = 0x3a3d60u;
    // NOP
    // 0x3a3d64: 0x0  nop
    ctx->pc = 0x3a3d64u;
    // NOP
    // 0x3a3d68: 0x0  nop
    ctx->pc = 0x3a3d68u;
    // NOP
    // 0x3a3d6c: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A3D6Cu;
    {
        const bool branch_taken_0x3a3d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a3d6c) {
            ctx->pc = 0x3A3D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3D6Cu;
            // 0x3a3d70: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3d58;
        }
    }
    ctx->pc = 0x3A3D74u;
    // 0x3a3d74: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x3A3D74u;
    {
        const bool branch_taken_0x3a3d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D74u;
        // 0x3a3d78: 0x8e451e64  lw          $a1, 0x1E64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d74) {
            ctx->pc = 0x3A3D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3d00;
        }
    }
    ctx->pc = 0x3A3D7Cu;
    // 0x3a3d7c: 0x0  nop
    ctx->pc = 0x3a3d7cu;
    // NOP
label_3a3d80:
    // 0x3a3d80: 0x26631e7c  addiu       $v1, $s3, 0x1E7C
    ctx->pc = 0x3a3d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7804));
label_3a3d84:
    // 0x3a3d84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a3d84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a3d88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a3d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3d90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a3d90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a3d94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a3d98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a3d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3d9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a3d9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3da0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a3da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a3da4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a3da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3a3da8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DA8u;
        // 0x3a3dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3DB0u;
}
