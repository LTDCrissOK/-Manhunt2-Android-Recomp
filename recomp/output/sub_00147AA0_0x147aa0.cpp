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

// Function: sub_00147AA0
// Address: 0x147aa0 - 0x147b70
void sub_00147AA0_0x147aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147AA0_0x147aa0");
#endif

    switch (ctx->pc) {
        case 0x147ad4u: goto label_147ad4;
        case 0x147ae4u: goto label_147ae4;
        case 0x147b18u: goto label_147b18;
        case 0x147b20u: goto label_147b20;
        case 0x147b38u: goto label_147b38;
        default: break;
    }

    ctx->pc = 0x147aa0u;

    // 0x147aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x147aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x147aa4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x147aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x147aa8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x147aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x147aac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x147aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ab0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x147ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x147ab4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x147ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x147ab8: 0x8e22056c  lw          $v0, 0x56C($s1)
    ctx->pc = 0x147ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
    // 0x147abc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x147ABCu;
    {
        const bool branch_taken_0x147abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147ABCu;
        // 0x147ac0: 0x30b200ff  andi        $s2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147abc) {
            ctx->pc = 0x147B20u;
            goto label_147b20;
        }
    }
    ctx->pc = 0x147AC4u;
    // 0x147ac4: 0x8e240468  lw          $a0, 0x468($s1)
    ctx->pc = 0x147ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1128)));
    // 0x147ac8: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x147ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x147acc: 0xc04f022  jal         func_13C088
    ctx->pc = 0x147ACCu;
    SET_GPR_U32(ctx, 31, 0x147AD4u);
    ctx->pc = 0x147AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147ACCu;
    // 0x147ad0: 0x2610a080  addiu       $s0, $s0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C088u, 0x147ACCu, 0x147AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AD4u;
label_147ad4:
    // 0x147ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ad8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x147ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147adc: 0xc0484da  jal         func_121368
    ctx->pc = 0x147ADCu;
    SET_GPR_U32(ctx, 31, 0x147AE4u);
    ctx->pc = 0x147AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147ADCu;
    // 0x147ae0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121368u, 0x147ADCu, 0x147AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AE4u;
label_147ae4:
    // 0x147ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x147ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ae8: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x147AE8u;
    {
        const bool branch_taken_0x147ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x147AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AE8u;
        // 0x147aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ae8) {
            ctx->pc = 0x147B58u;
            goto label_147b58;
        }
    }
    ctx->pc = 0x147AF0u;
    // 0x147af0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x147af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x147af4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x147af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x147af8: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x147af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x147afc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147b00: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x147b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x147b04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x147b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147b08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x147b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x147b0c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x147b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x147b10: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x147B10u;
    SET_GPR_U32(ctx, 31, 0x147B18u);
    ctx->pc = 0x147B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B10u;
    // 0x147b14: 0x8ca4020c  lw          $a0, 0x20C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x147B10u, 0x147B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B18u;
label_147b18:
    // 0x147b18: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x147B18u;
    {
        const bool branch_taken_0x147b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147b18) {
            ctx->pc = 0x147B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147B18u;
            // 0x147b1c: 0x90450020  lbu         $a1, 0x20($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147B28u;
            goto label_147b28;
        }
    }
    ctx->pc = 0x147B20u;
label_147b20:
    // 0x147b20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x147B20u;
    {
        const bool branch_taken_0x147b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B20u;
        // 0x147b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b20) {
            ctx->pc = 0x147B58u;
            goto label_147b58;
        }
    }
    ctx->pc = 0x147B28u;
label_147b28:
    // 0x147b28: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x147B28u;
    {
        const bool branch_taken_0x147b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B28u;
        // 0x147b2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b28) {
            ctx->pc = 0x147B54u;
            goto label_147b54;
        }
    }
    ctx->pc = 0x147B30u;
    // 0x147b30: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x147b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x147b34: 0x0  nop
    ctx->pc = 0x147b34u;
    // NOP
label_147b38:
    // 0x147b38: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x147b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147b3c: 0x1065fff8  beq         $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x147B3Cu;
    {
        const bool branch_taken_0x147b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x147B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B3Cu;
        // 0x147b40: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b3c) {
            ctx->pc = 0x147B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147b20;
        }
    }
    ctx->pc = 0x147B44u;
    // 0x147b44: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x147b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x147b48: 0x90182b  sltu        $v1, $a0, $s0
    ctx->pc = 0x147b48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x147b4c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147B4Cu;
    {
        const bool branch_taken_0x147b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B4Cu;
        // 0x147b50: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b4c) {
            ctx->pc = 0x147B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147b38;
        }
    }
    ctx->pc = 0x147B54u;
label_147b54:
    // 0x147b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147b58:
    // 0x147b58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x147b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147b5c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x147b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x147b60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x147b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147b64: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x147b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x147b68: 0x3e00008  jr          $ra
    ctx->pc = 0x147B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B68u;
        // 0x147b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147B70u;
}
