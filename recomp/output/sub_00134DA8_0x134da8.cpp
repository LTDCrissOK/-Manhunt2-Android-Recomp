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

// Function: sub_00134DA8
// Address: 0x134da8 - 0x134e58
void sub_00134DA8_0x134da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134DA8_0x134da8");
#endif

    switch (ctx->pc) {
        case 0x134df0u: goto label_134df0;
        case 0x134e14u: goto label_134e14;
        case 0x134e20u: goto label_134e20;
        default: break;
    }

    ctx->pc = 0x134da8u;

    // 0x134da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x134da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x134dac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x134dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x134db0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x134db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x134db4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x134db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134dbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x134dbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x134dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x134dc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x134dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x134dc8: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x134DC8u;
    {
        const bool branch_taken_0x134dc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x134DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DC8u;
        // 0x134dcc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134dc8) {
            ctx->pc = 0x134E34u;
            goto label_134e34;
        }
    }
    ctx->pc = 0x134DD0u;
    // 0x134dd0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x134dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x134dd4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x134dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x134dd8: 0x24429c14  addiu       $v0, $v0, -0x63EC
    ctx->pc = 0x134dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x134ddc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x134ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x134de0: 0x24748ed0  addiu       $s4, $v1, -0x7130
    ctx->pc = 0x134de0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938320));
    // 0x134de4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x134de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134de8: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x134de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x134dec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x134decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_134df0:
    // 0x134df0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x134df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x134df4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134df8: 0x1471000a  bne         $v1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x134DF8u;
    {
        const bool branch_taken_0x134df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x134DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DF8u;
        // 0x134dfc: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134df8) {
            ctx->pc = 0x134E24u;
            goto label_134e24;
        }
    }
    ctx->pc = 0x134E00u;
    // 0x134e00: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x134e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x134e04: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x134E04u;
    {
        const bool branch_taken_0x134e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e04) {
            ctx->pc = 0x134E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134E04u;
            // 0x134e08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134E18u;
            goto label_134e18;
        }
    }
    ctx->pc = 0x134E0Cu;
    // 0x134e0c: 0xc043eba  jal         func_10FAE8
    ctx->pc = 0x134E0Cu;
    SET_GPR_U32(ctx, 31, 0x134E14u);
    ctx->pc = 0x10FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FAE8u, 0x134E0Cu, 0x134E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E14u;
label_134e14:
    // 0x134e14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_134e18:
    // 0x134e18: 0xc04d2fa  jal         func_134BE8
    ctx->pc = 0x134E18u;
    SET_GPR_U32(ctx, 31, 0x134E20u);
    ctx->pc = 0x134E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E18u;
    // 0x134e1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134BE8u, 0x134E18u, 0x134E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E20u;
label_134e20:
    // 0x134e20: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x134e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_134e24:
    // 0x134e24: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x134e24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x134e28: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x134e28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x134e2c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x134E2Cu;
    {
        const bool branch_taken_0x134e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E2Cu;
        // 0x134e30: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e2c) {
            ctx->pc = 0x134DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134df0;
        }
    }
    ctx->pc = 0x134E34u;
label_134e34:
    // 0x134e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134e38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x134e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134e3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x134e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134e40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x134e40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x134e44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x134e44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134e48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x134e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x134E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E4Cu;
        // 0x134e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134E54u;
    // 0x134e54: 0x0  nop
    ctx->pc = 0x134e54u;
    // NOP
    ctx->pc = 0x134e58u;
}
