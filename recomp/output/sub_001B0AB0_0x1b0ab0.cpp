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

// Function: sub_001B0AB0
// Address: 0x1b0ab0 - 0x1b0b40
void sub_001B0AB0_0x1b0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0AB0_0x1b0ab0");
#endif

    switch (ctx->pc) {
        case 0x1b0ad4u: goto label_1b0ad4;
        default: break;
    }

    ctx->pc = 0x1b0ab0u;

    // 0x1b0ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0ab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b0ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b0abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ac0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1b0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b0ac4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B0AC4u;
    {
        const bool branch_taken_0x1b0ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AC4u;
        // 0x1b0ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ac4) {
            ctx->pc = 0x1B0B54u;
            return;
        }
    }
    ctx->pc = 0x1B0ACCu;
    // 0x1b0acc: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1B0ACCu;
    SET_GPR_U32(ctx, 31, 0x1B0AD4u);
    ctx->pc = 0x1B0AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0ACCu;
    // 0x1b0ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1B0ACCu, 0x1B0AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0AD4u;
label_1b0ad4:
    // 0x1b0ad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ad8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0adc: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B0ADCu;
    {
        const bool branch_taken_0x1b0adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0ADCu;
        // 0x1b0ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0adc) {
            ctx->pc = 0x1B0B54u;
            return;
        }
    }
    ctx->pc = 0x1B0AE4u;
    // 0x1b0ae4: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1b0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1b0ae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0aec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b0af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0af4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1b0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0af8: 0x2463ff9b  addiu       $v1, $v1, -0x65
    ctx->pc = 0x1b0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967195));
    // 0x1b0afc: 0x2c620033  sltiu       $v0, $v1, 0x33
    ctx->pc = 0x1b0afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x1b0b00: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B0B00u;
    {
        const bool branch_taken_0x1b0b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B00u;
        // 0x1b0b04: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b00) {
            ctx->pc = 0x1B0B50u;
            return;
        }
    }
    ctx->pc = 0x1B0B08u;
    // 0x1b0b08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b0b0c: 0x2442b220  addiu       $v0, $v0, -0x4DE0
    ctx->pc = 0x1b0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947360));
    // 0x1b0b10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b0b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0b14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b0b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0b18: 0x800008  jr          $a0
    ctx->pc = 0x1B0B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0B20u: goto label_1b0b20;
            case 0x1B0B28u: goto label_1b0b28;
            case 0x1B0B30u: goto label_1b0b30;
            case 0x1B0B38u: goto label_1b0b38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0B18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B0B20u;
label_1b0b20:
    // 0x1b0b20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B0B20u;
    {
        const bool branch_taken_0x1b0b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B20u;
        // 0x1b0b24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b20) {
            ctx->pc = 0x1B0B54u;
            return;
        }
    }
    ctx->pc = 0x1B0B28u;
label_1b0b28:
    // 0x1b0b28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B0B28u;
    {
        const bool branch_taken_0x1b0b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B28u;
        // 0x1b0b2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b28) {
            ctx->pc = 0x1B0B54u;
            return;
        }
    }
    ctx->pc = 0x1B0B30u;
label_1b0b30:
    // 0x1b0b30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0B30u;
    {
        const bool branch_taken_0x1b0b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B30u;
        // 0x1b0b34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b30) {
            ctx->pc = 0x1B0B54u;
            return;
        }
    }
    ctx->pc = 0x1B0B38u;
label_1b0b38:
    // 0x1b0b38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0B38u;
    {
        const bool branch_taken_0x1b0b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B38u;
        // 0x1b0b3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b38) {
            ctx->pc = 0x1B0B54u;
            return;
        }
    }
    ctx->pc = 0x1B0B40u;
}
