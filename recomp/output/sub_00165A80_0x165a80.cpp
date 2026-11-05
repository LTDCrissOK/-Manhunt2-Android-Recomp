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

// Function: sub_00165A80
// Address: 0x165a80 - 0x165b38
void sub_00165A80_0x165a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165A80_0x165a80");
#endif

    switch (ctx->pc) {
        case 0x165ab0u: goto label_165ab0;
        case 0x165af0u: goto label_165af0;
        case 0x165afcu: goto label_165afc;
        default: break;
    }

    ctx->pc = 0x165a80u;

    // 0x165a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165a84: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x165a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165a94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x165a98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x165aa0: 0x26060228  addiu       $a2, $s0, 0x228
    ctx->pc = 0x165aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x165aa4: 0x2604022c  addiu       $a0, $s0, 0x22C
    ctx->pc = 0x165aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x165aa8: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x165aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x165aac: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x165aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_165ab0:
    // 0x165ab0: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x165ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x165ab4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x165ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165ab8: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x165AB8u;
    {
        const bool branch_taken_0x165ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AB8u;
        // 0x165abc: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ab8) {
            ctx->pc = 0x165B08u;
            goto label_165b08;
        }
    }
    ctx->pc = 0x165AC0u;
    // 0x165ac0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x165ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165ac4: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x165AC4u;
    {
        const bool branch_taken_0x165ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x165AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AC4u;
        // 0x165ac8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ac4) {
            ctx->pc = 0x165AE8u;
            goto label_165ae8;
        }
    }
    ctx->pc = 0x165ACCu;
    // 0x165acc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x165ACCu;
    {
        const bool branch_taken_0x165acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165ACCu;
        // 0x165ad0: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165acc) {
            ctx->pc = 0x165B0Cu;
            goto label_165b0c;
        }
    }
    ctx->pc = 0x165AD4u;
    // 0x165ad4: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x165ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x165ad8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x165AD8u;
    {
        const bool branch_taken_0x165ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AD8u;
        // 0x165adc: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ad8) {
            ctx->pc = 0x165B08u;
            goto label_165b08;
        }
    }
    ctx->pc = 0x165AE0u;
    // 0x165ae0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x165AE0u;
    {
        const bool branch_taken_0x165ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AE0u;
        // 0x165ae4: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ae0) {
            ctx->pc = 0x165B0Cu;
            goto label_165b0c;
        }
    }
    ctx->pc = 0x165AE8u;
label_165ae8:
    // 0x165ae8: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x165AE8u;
    SET_GPR_U32(ctx, 31, 0x165AF0u);
    ctx->pc = 0x165AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165AE8u;
    // 0x165aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x165AE8u, 0x165AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AF0u;
label_165af0:
    // 0x165af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165af4: 0xc04f372  jal         func_13CDC8
    ctx->pc = 0x165AF4u;
    SET_GPR_U32(ctx, 31, 0x165AFCu);
    ctx->pc = 0x165AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165AF4u;
    // 0x165af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDC8u, 0x165AF4u, 0x165AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AFCu;
label_165afc:
    // 0x165afc: 0xae120304  sw          $s2, 0x304($s0)
    ctx->pc = 0x165afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 18));
    // 0x165b00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165B00u;
    {
        const bool branch_taken_0x165b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B00u;
        // 0x165b04: 0xae0003a8  sw          $zero, 0x3A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b00) {
            ctx->pc = 0x165B1Cu;
            goto label_165b1c;
        }
    }
    ctx->pc = 0x165B08u;
label_165b08:
    // 0x165b08: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x165b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_165b0c:
    // 0x165b0c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x165b0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165b10: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x165b10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165b14: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x165B14u;
    {
        const bool branch_taken_0x165b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x165B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B14u;
        // 0x165b18: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b14) {
            ctx->pc = 0x165AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165ab0;
        }
    }
    ctx->pc = 0x165B1Cu;
label_165b1c:
    // 0x165b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165b24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165b24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165b28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x165b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x165B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B2Cu;
        // 0x165b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165B34u;
    // 0x165b34: 0x0  nop
    ctx->pc = 0x165b34u;
    // NOP
    ctx->pc = 0x165b38u;
}
