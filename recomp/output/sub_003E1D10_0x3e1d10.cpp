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

// Function: sub_003E1D10
// Address: 0x3e1d10 - 0x3e1d98
void sub_003E1D10_0x3e1d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1D10_0x3e1d10");
#endif

    switch (ctx->pc) {
        case 0x3e1d40u: goto label_3e1d40;
        case 0x3e1d6cu: goto label_3e1d6c;
        case 0x3e1d80u: goto label_3e1d80;
        default: break;
    }

    ctx->pc = 0x3e1d10u;

    // 0x3e1d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e1d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e1d14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e1d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e1d18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e1d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e1d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e1d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1d20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e1d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e1d24: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e1d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e1d28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e1d2c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3e1d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e1d30: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E1D30u;
    {
        const bool branch_taken_0x3e1d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D30u;
        // 0x3e1d34: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d30) {
            ctx->pc = 0x3E1D58u;
            goto label_3e1d58;
        }
    }
    ctx->pc = 0x3E1D38u;
    // 0x3e1d38: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3e1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3e1d3c: 0x0  nop
    ctx->pc = 0x3e1d3cu;
    // NOP
label_3e1d40:
    // 0x3e1d40: 0x0  nop
    ctx->pc = 0x3e1d40u;
    // NOP
    // 0x3e1d44: 0x0  nop
    ctx->pc = 0x3e1d44u;
    // NOP
    // 0x3e1d48: 0x0  nop
    ctx->pc = 0x3e1d48u;
    // NOP
    // 0x3e1d4c: 0x0  nop
    ctx->pc = 0x3e1d4cu;
    // NOP
    // 0x3e1d50: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E1D50u;
    {
        const bool branch_taken_0x3e1d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D50u;
        // 0x3e1d54: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d50) {
            ctx->pc = 0x3E1D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1d40;
        }
    }
    ctx->pc = 0x3E1D58u;
label_3e1d58:
    // 0x3e1d58: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3e1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e1d5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1D5Cu;
    {
        const bool branch_taken_0x3e1d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D5Cu;
        // 0x3e1d60: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d5c) {
            ctx->pc = 0x3E1D70u;
            goto label_3e1d70;
        }
    }
    ctx->pc = 0x3E1D64u;
    // 0x3e1d64: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E1D64u;
    SET_GPR_U32(ctx, 31, 0x3E1D6Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E1D64u, 0x3E1D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1D6Cu;
label_3e1d6c:
    // 0x3e1d6c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x3e1d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_3e1d70:
    // 0x3e1d70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1D70u;
    {
        const bool branch_taken_0x3e1d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1d70) {
            ctx->pc = 0x3E1D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1D70u;
            // 0x3e1d74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1D84u;
            goto label_3e1d84;
        }
    }
    ctx->pc = 0x3E1D78u;
    // 0x3e1d78: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E1D78u;
    SET_GPR_U32(ctx, 31, 0x3E1D80u);
    ctx->pc = 0x3E1D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1D78u;
    // 0x3e1d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E1D78u, 0x3E1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1D80u;
label_3e1d80:
    // 0x3e1d80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e1d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1d84:
    // 0x3e1d84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e1d84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e1d88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e1d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D8Cu;
        // 0x3e1d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1D94u;
    // 0x3e1d94: 0x0  nop
    ctx->pc = 0x3e1d94u;
    // NOP
    ctx->pc = 0x3e1d98u;
}
