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

// Function: sub_00308CC8
// Address: 0x308cc8 - 0x308d48
void sub_00308CC8_0x308cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308CC8_0x308cc8");
#endif

    switch (ctx->pc) {
        case 0x308cc8u: goto label_308cc8;
        case 0x308cccu: goto label_308ccc;
        case 0x308cd0u: goto label_308cd0;
        case 0x308cd4u: goto label_308cd4;
        case 0x308cd8u: goto label_308cd8;
        case 0x308cdcu: goto label_308cdc;
        case 0x308ce0u: goto label_308ce0;
        case 0x308ce4u: goto label_308ce4;
        case 0x308ce8u: goto label_308ce8;
        case 0x308cecu: goto label_308cec;
        case 0x308cf0u: goto label_308cf0;
        case 0x308cf4u: goto label_308cf4;
        case 0x308cf8u: goto label_308cf8;
        case 0x308cfcu: goto label_308cfc;
        case 0x308d00u: goto label_308d00;
        case 0x308d04u: goto label_308d04;
        case 0x308d08u: goto label_308d08;
        case 0x308d0cu: goto label_308d0c;
        case 0x308d10u: goto label_308d10;
        case 0x308d14u: goto label_308d14;
        case 0x308d18u: goto label_308d18;
        case 0x308d1cu: goto label_308d1c;
        case 0x308d20u: goto label_308d20;
        case 0x308d24u: goto label_308d24;
        case 0x308d28u: goto label_308d28;
        case 0x308d2cu: goto label_308d2c;
        case 0x308d30u: goto label_308d30;
        case 0x308d34u: goto label_308d34;
        case 0x308d38u: goto label_308d38;
        case 0x308d3cu: goto label_308d3c;
        case 0x308d40u: goto label_308d40;
        case 0x308d44u: goto label_308d44;
        default: break;
    }

    ctx->pc = 0x308cc8u;

label_308cc8:
    // 0x308cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_308ccc:
    // 0x308ccc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x308cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_308cd0:
    // 0x308cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_308cd4:
    // 0x308cd4: 0x244467f0  addiu       $a0, $v0, 0x67F0
    ctx->pc = 0x308cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26608));
label_308cd8:
    // 0x308cd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x308cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_308cdc:
    // 0x308cdc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x308cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_308ce0:
    // 0x308ce0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x308ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_308ce4:
    // 0x308ce4: 0x10000009  b           . + 4 + (0x9 << 2)
label_308ce8:
    if (ctx->pc == 0x308CE8u) {
        ctx->pc = 0x308CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CE4u;
        // 0x308ce8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CECu;
        goto label_308cec;
    }
    ctx->pc = 0x308CE4u;
    {
        const bool branch_taken_0x308ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CE4u;
        // 0x308ce8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ce4) {
            ctx->pc = 0x308D0Cu;
            goto label_308d0c;
        }
    }
    ctx->pc = 0x308CECu;
label_308cec:
    // 0x308cec: 0x0  nop
    ctx->pc = 0x308cecu;
    // NOP
label_308cf0:
    // 0x308cf0: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x308cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_308cf4:
    // 0x308cf4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_308cf8:
    if (ctx->pc == 0x308CF8u) {
        ctx->pc = 0x308CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CF4u;
        // 0x308cf8: 0x260567f0  addiu       $a1, $s0, 0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CFCu;
        goto label_308cfc;
    }
    ctx->pc = 0x308CF4u;
    {
        const bool branch_taken_0x308cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CF4u;
        // 0x308cf8: 0x260567f0  addiu       $a1, $s0, 0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308cf4) {
            ctx->pc = 0x308D10u;
            goto label_308d10;
        }
    }
    ctx->pc = 0x308CFCu;
label_308cfc:
    // 0x308cfc: 0x8c620218  lw          $v0, 0x218($v1)
    ctx->pc = 0x308cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
label_308d00:
    // 0x308d00: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x308d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_308d04:
    // 0x308d04: 0x60f809  jalr        $v1
label_308d08:
    if (ctx->pc == 0x308D08u) {
        ctx->pc = 0x308D0Cu;
        goto label_308d0c;
    }
    ctx->pc = 0x308D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x308D0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D04u, 0x308D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308D0Cu;
label_308d0c:
    // 0x308d0c: 0x260567f0  addiu       $a1, $s0, 0x67F0
    ctx->pc = 0x308d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26608));
label_308d10:
    // 0x308d10: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x308d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_308d14:
    // 0x308d14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_308d18:
    if (ctx->pc == 0x308D18u) {
        ctx->pc = 0x308D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D14u;
        // 0x308d18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D1Cu;
        goto label_308d1c;
    }
    ctx->pc = 0x308D14u;
    {
        const bool branch_taken_0x308d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D14u;
        // 0x308d18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d14) {
            ctx->pc = 0x308D20u;
            goto label_308d20;
        }
    }
    ctx->pc = 0x308D1Cu;
label_308d1c:
    // 0x308d1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x308d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_308d20:
    // 0x308d20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_308d24:
    if (ctx->pc == 0x308D24u) {
        ctx->pc = 0x308D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D20u;
        // 0x308d24: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D28u;
        goto label_308d28;
    }
    ctx->pc = 0x308D20u;
    {
        const bool branch_taken_0x308d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D20u;
        // 0x308d24: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d20) {
            ctx->pc = 0x308D30u;
            goto label_308d30;
        }
    }
    ctx->pc = 0x308D28u;
label_308d28:
    // 0x308d28: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x308d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_308d2c:
    // 0x308d2c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x308d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_308d30:
    // 0x308d30: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
label_308d34:
    if (ctx->pc == 0x308D34u) {
        ctx->pc = 0x308D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D30u;
        // 0x308d34: 0x8c620220  lw          $v0, 0x220($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D38u;
        goto label_308d38;
    }
    ctx->pc = 0x308D30u;
    {
        const bool branch_taken_0x308d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308d30) {
            ctx->pc = 0x308D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308D30u;
            // 0x308d34: 0x8c620220  lw          $v0, 0x220($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308cf0;
        }
    }
    ctx->pc = 0x308D38u;
label_308d38:
    // 0x308d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308d3c:
    // 0x308d3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x308d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308d40:
    // 0x308d40: 0x3e00008  jr          $ra
label_308d44:
    if (ctx->pc == 0x308D44u) {
        ctx->pc = 0x308D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D40u;
        // 0x308d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D48u;
        goto label_fallthrough_0x308d40;
    }
    ctx->pc = 0x308D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D40u;
        // 0x308d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x308d40:
    ctx->pc = 0x308D48u;
}
