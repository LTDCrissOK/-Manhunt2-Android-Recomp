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

// Function: sub_001D3E78
// Address: 0x1d3e78 - 0x1d3f58
void sub_001D3E78_0x1d3e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3E78_0x1d3e78");
#endif

    switch (ctx->pc) {
        case 0x1d3ea0u: goto label_1d3ea0;
        case 0x1d3ec8u: goto label_1d3ec8;
        case 0x1d3ee8u: goto label_1d3ee8;
        case 0x1d3f10u: goto label_1d3f10;
        case 0x1d3f30u: goto label_1d3f30;
        case 0x1d3f40u: goto label_1d3f40;
        default: break;
    }

    ctx->pc = 0x1d3e78u;

    // 0x1d3e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3e80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3e84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3e8c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3e90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3E90u;
    {
        const bool branch_taken_0x1d3e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E90u;
        // 0x1d3e94: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e90) {
            ctx->pc = 0x1D3EA0u;
            goto label_1d3ea0;
        }
    }
    ctx->pc = 0x1D3E98u;
    // 0x1d3e98: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D3E98u;
    SET_GPR_U32(ctx, 31, 0x1D3EA0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D3E98u, 0x1D3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EA0u;
label_1d3ea0:
    // 0x1d3ea0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1d3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3ea4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3EA4u;
    {
        const bool branch_taken_0x1d3ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EA4u;
        // 0x1d3ea8: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ea4) {
            ctx->pc = 0x1D3EE8u;
            goto label_1d3ee8;
        }
    }
    ctx->pc = 0x1D3EACu;
    // 0x1d3eac: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x1d3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x1d3eb0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d3eb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d3eb8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3EB8u;
    {
        const bool branch_taken_0x1d3eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EB8u;
        // 0x1d3ebc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3eb8) {
            ctx->pc = 0x1D3EE0u;
            goto label_1d3ee0;
        }
    }
    ctx->pc = 0x1D3EC0u;
    // 0x1d3ec0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1d3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1d3ec4: 0x0  nop
    ctx->pc = 0x1d3ec4u;
    // NOP
label_1d3ec8:
    // 0x1d3ec8: 0x0  nop
    ctx->pc = 0x1d3ec8u;
    // NOP
    // 0x1d3ecc: 0x0  nop
    ctx->pc = 0x1d3eccu;
    // NOP
    // 0x1d3ed0: 0x0  nop
    ctx->pc = 0x1d3ed0u;
    // NOP
    // 0x1d3ed4: 0x0  nop
    ctx->pc = 0x1d3ed4u;
    // NOP
    // 0x1d3ed8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3ED8u;
    {
        const bool branch_taken_0x1d3ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ED8u;
        // 0x1d3edc: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ed8) {
            ctx->pc = 0x1D3EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3ec8;
        }
    }
    ctx->pc = 0x1D3EE0u;
label_1d3ee0:
    // 0x1d3ee0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D3EE0u;
    SET_GPR_U32(ctx, 31, 0x1D3EE8u);
    ctx->pc = 0x1D3EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3EE0u;
    // 0x1d3ee4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D3EE0u, 0x1D3EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EE8u;
label_1d3ee8:
    // 0x1d3ee8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d3eec: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3EECu;
    {
        const bool branch_taken_0x1d3eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3eec) {
            ctx->pc = 0x1D3F30u;
            goto label_1d3f30;
        }
    }
    ctx->pc = 0x1D3EF4u;
    // 0x1d3ef4: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x1d3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x1d3ef8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1d3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1d3efc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d3efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d3f00: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3F00u;
    {
        const bool branch_taken_0x1d3f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F00u;
        // 0x1d3f04: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f00) {
            ctx->pc = 0x1D3F28u;
            goto label_1d3f28;
        }
    }
    ctx->pc = 0x1D3F08u;
    // 0x1d3f08: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1d3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1d3f0c: 0x0  nop
    ctx->pc = 0x1d3f0cu;
    // NOP
label_1d3f10:
    // 0x1d3f10: 0x0  nop
    ctx->pc = 0x1d3f10u;
    // NOP
    // 0x1d3f14: 0x0  nop
    ctx->pc = 0x1d3f14u;
    // NOP
    // 0x1d3f18: 0x0  nop
    ctx->pc = 0x1d3f18u;
    // NOP
    // 0x1d3f1c: 0x0  nop
    ctx->pc = 0x1d3f1cu;
    // NOP
    // 0x1d3f20: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3F20u;
    {
        const bool branch_taken_0x1d3f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F20u;
        // 0x1d3f24: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f20) {
            ctx->pc = 0x1D3F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3f10;
        }
    }
    ctx->pc = 0x1D3F28u;
label_1d3f28:
    // 0x1d3f28: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D3F28u;
    SET_GPR_U32(ctx, 31, 0x1D3F30u);
    ctx->pc = 0x1D3F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F28u;
    // 0x1d3f2c: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D3F28u, 0x1D3F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F30u;
label_1d3f30:
    // 0x1d3f30: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3F30u;
    {
        const bool branch_taken_0x1d3f30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3f30) {
            ctx->pc = 0x1D3F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3F30u;
            // 0x1d3f34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3F44u;
            goto label_1d3f44;
        }
    }
    ctx->pc = 0x1D3F38u;
    // 0x1d3f38: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D3F38u;
    SET_GPR_U32(ctx, 31, 0x1D3F40u);
    ctx->pc = 0x1D3F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F38u;
    // 0x1d3f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D3F38u, 0x1D3F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F40u;
label_1d3f40:
    // 0x1d3f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3f44:
    // 0x1d3f44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3f48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F4Cu;
        // 0x1d3f50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3F54u;
    // 0x1d3f54: 0x0  nop
    ctx->pc = 0x1d3f54u;
    // NOP
    ctx->pc = 0x1d3f58u;
}
