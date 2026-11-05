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

// Function: sub_00256EE0
// Address: 0x256ee0 - 0x256f58
void sub_00256EE0_0x256ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256EE0_0x256ee0");
#endif

    switch (ctx->pc) {
        case 0x256f08u: goto label_256f08;
        case 0x256f1cu: goto label_256f1c;
        default: break;
    }

    ctx->pc = 0x256ee0u;

    // 0x256ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x256ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x256ee4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x256ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x256ee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256eec: 0x24443d20  addiu       $a0, $v0, 0x3D20
    ctx->pc = 0x256eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x256ef0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x256ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x256ef4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x256ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x256ef8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x256ef8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4B3D2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B3D2Cu, _value); } while (0);
    // 0x256efc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x256EFCu;
    {
        const bool branch_taken_0x256efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EFCu;
        // 0x256f00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256efc) {
            ctx->pc = 0x256F1Cu;
            goto label_256f1c;
        }
    }
    ctx->pc = 0x256F04u;
    // 0x256f04: 0x0  nop
    ctx->pc = 0x256f04u;
    // NOP
label_256f08:
    // 0x256f08: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x256f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x256f0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256F0Cu;
    {
        const bool branch_taken_0x256f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F0Cu;
        // 0x256f10: 0x26043d20  addiu       $a0, $s0, 0x3D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f0c) {
            ctx->pc = 0x256F20u;
            goto label_256f20;
        }
    }
    ctx->pc = 0x256F14u;
    // 0x256f14: 0xc06f3a2  jal         func_1BCE88
    ctx->pc = 0x256F14u;
    SET_GPR_U32(ctx, 31, 0x256F1Cu);
    ctx->pc = 0x256F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256F14u;
    // 0x256f18: 0x8c640fe8  lw          $a0, 0xFE8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCE88u, 0x256F14u, 0x256F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F1Cu;
label_256f1c:
    // 0x256f1c: 0x26043d20  addiu       $a0, $s0, 0x3D20
    ctx->pc = 0x256f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15648));
label_256f20:
    // 0x256f20: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x256f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x256f24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x256F24u;
    {
        const bool branch_taken_0x256f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F24u;
        // 0x256f28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f24) {
            ctx->pc = 0x256F30u;
            goto label_256f30;
        }
    }
    ctx->pc = 0x256F2Cu;
    // 0x256f2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x256f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_256f30:
    // 0x256f30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256F30u;
    {
        const bool branch_taken_0x256f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f30) {
            ctx->pc = 0x256F40u;
            goto label_256f40;
        }
    }
    ctx->pc = 0x256F38u;
    // 0x256f38: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x256f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x256f3c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x256f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_256f40:
    // 0x256f40: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x256F40u;
    {
        const bool branch_taken_0x256f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x256f40) {
            ctx->pc = 0x256F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256F40u;
            // 0x256f44: 0x8c6200c0  lw          $v0, 0xC0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256f08;
        }
    }
    ctx->pc = 0x256F48u;
    // 0x256f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256f4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x256f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256f50: 0x3e00008  jr          $ra
    ctx->pc = 0x256F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F50u;
        // 0x256f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256F58u;
}
