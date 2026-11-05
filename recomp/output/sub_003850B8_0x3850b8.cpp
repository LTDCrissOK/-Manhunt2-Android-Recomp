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

// Function: sub_003850B8
// Address: 0x3850b8 - 0x385130
void sub_003850B8_0x3850b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003850B8_0x3850b8");
#endif

    switch (ctx->pc) {
        case 0x3850e8u: goto label_3850e8;
        case 0x3850f8u: goto label_3850f8;
        case 0x385100u: goto label_385100;
        case 0x38511cu: goto label_38511c;
        case 0x385128u: goto label_385128;
        default: break;
    }

    ctx->pc = 0x3850b8u;

    // 0x3850b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3850b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3850bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3850bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3850c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3850c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3850c4: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x3850c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x3850c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3850c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3850cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3850ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3850d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3850d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3850d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3850d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3850d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3850d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3850dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3850DCu;
    {
        const bool branch_taken_0x3850dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3850E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850DCu;
        // 0x3850e0: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3850dc) {
            ctx->pc = 0x385110u;
            goto label_385110;
        }
    }
    ctx->pc = 0x3850E4u;
    // 0x3850e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3850e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3850e8:
    // 0x3850e8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3850E8u;
    {
        const bool branch_taken_0x3850e8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x3850e8) {
            ctx->pc = 0x385100u;
            goto label_385100;
        }
    }
    ctx->pc = 0x3850F0u;
    // 0x3850f0: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3850F0u;
    SET_GPR_U32(ctx, 31, 0x3850F8u);
    ctx->pc = 0x3850F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3850F0u;
    // 0x3850f4: 0x26449158  addiu       $a0, $s2, -0x6EA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3850F0u, 0x3850F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3850F8u;
label_3850f8:
    // 0x3850f8: 0xc0e1488  jal         func_385220
    ctx->pc = 0x3850F8u;
    SET_GPR_U32(ctx, 31, 0x385100u);
    ctx->pc = 0x3850FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3850F8u;
    // 0x3850fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385220u, 0x3850F8u, 0x385100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385100u;
label_385100:
    // 0x385100: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x385100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x385104: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x385104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x385108: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x385108u;
    {
        const bool branch_taken_0x385108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385108u;
        // 0x38510c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385108) {
            ctx->pc = 0x3850E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3850e8;
        }
    }
    ctx->pc = 0x385110u;
label_385110:
    // 0x385110: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x385110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x385114: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x385114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x385118: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x385118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38511c:
    // 0x38511c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38511cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385120: 0x3e00008  jr          $ra
    ctx->pc = 0x385120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385120u;
        // 0x385124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385128u;
label_385128:
    // 0x385128: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x385128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38512c: 0x0  nop
    ctx->pc = 0x38512cu;
    // NOP
    ctx->pc = 0x385130u;
}
