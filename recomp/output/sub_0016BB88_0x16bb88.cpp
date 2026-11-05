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

// Function: sub_0016BB88
// Address: 0x16bb88 - 0x16bc28
void sub_0016BB88_0x16bb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BB88_0x16bb88");
#endif

    switch (ctx->pc) {
        case 0x16bbb8u: goto label_16bbb8;
        case 0x16bbd0u: goto label_16bbd0;
        case 0x16bbf0u: goto label_16bbf0;
        default: break;
    }

    ctx->pc = 0x16bb88u;

    // 0x16bb88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bb8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16bb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16bb90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16bb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bb94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16bb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16bb9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16bb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16bba0: 0x92420194  lbu         $v0, 0x194($s2)
    ctx->pc = 0x16bba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x16bba4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16BBA4u;
    {
        const bool branch_taken_0x16bba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBA4u;
        // 0x16bba8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bba4) {
            ctx->pc = 0x16BC10u;
            goto label_16bc10;
        }
    }
    ctx->pc = 0x16BBACu;
    // 0x16bbac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16BBACu;
    {
        const bool branch_taken_0x16bbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBACu;
        // 0x16bbb0: 0x26510154  addiu       $s1, $s2, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbac) {
            ctx->pc = 0x16BBE8u;
            goto label_16bbe8;
        }
    }
    ctx->pc = 0x16BBB4u;
    // 0x16bbb4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x16bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_16bbb8:
    // 0x16bbb8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x16bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16bbbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bbc0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BBC0u;
    {
        const bool branch_taken_0x16bbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBC0u;
        // 0x16bbc4: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbc0) {
            ctx->pc = 0x16BBD4u;
            goto label_16bbd4;
        }
    }
    ctx->pc = 0x16BBC8u;
    // 0x16bbc8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x16BBC8u;
    SET_GPR_U32(ctx, 31, 0x16BBD0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x16BBC8u, 0x16BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBD0u;
label_16bbd0:
    // 0x16bbd0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x16bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16bbd4:
    // 0x16bbd4: 0x92420194  lbu         $v0, 0x194($s2)
    ctx->pc = 0x16bbd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x16bbd8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x16bbd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16bbdc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x16bbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16bbe0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16BBE0u;
    {
        const bool branch_taken_0x16bbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBE0u;
        // 0x16bbe4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbe0) {
            ctx->pc = 0x16BBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bbb8;
        }
    }
    ctx->pc = 0x16BBE8u;
label_16bbe8:
    // 0x16bbe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16bbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bbec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16bbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bbf0:
    // 0x16bbf0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16bbf4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16bbf8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16bbfc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16bbfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16bc00: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16bc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16bc04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16BC04u;
    {
        const bool branch_taken_0x16bc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC04u;
        // 0x16bc08: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc04) {
            ctx->pc = 0x16BBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bbf0;
        }
    }
    ctx->pc = 0x16BC0Cu;
    // 0x16bc0c: 0xa2400194  sb          $zero, 0x194($s2)
    ctx->pc = 0x16bc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 404), (uint8_t)GPR_U32(ctx, 0));
label_16bc10:
    // 0x16bc10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bc10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bc14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16bc14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bc18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16bc18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bc1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16bc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bc20: 0x3e00008  jr          $ra
    ctx->pc = 0x16BC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC20u;
        // 0x16bc24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BC28u;
}
