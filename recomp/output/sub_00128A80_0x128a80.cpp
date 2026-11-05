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

// Function: sub_00128A80
// Address: 0x128a80 - 0x128b38
void sub_00128A80_0x128a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128A80_0x128a80");
#endif

    switch (ctx->pc) {
        case 0x128abcu: goto label_128abc;
        case 0x128ad0u: goto label_128ad0;
        case 0x128ae8u: goto label_128ae8;
        case 0x128afcu: goto label_128afc;
        case 0x128b10u: goto label_128b10;
        case 0x128b20u: goto label_128b20;
        default: break;
    }

    ctx->pc = 0x128a80u;

    // 0x128a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128a84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x128a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x128a88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x128a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x128a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a90: 0x8e02043c  lw          $v0, 0x43C($s0)
    ctx->pc = 0x128a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1084)));
    // 0x128a94: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x128A94u;
    {
        const bool branch_taken_0x128a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a94) {
            ctx->pc = 0x128A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128A94u;
            // 0x128a98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128B24u;
            goto label_128b24;
        }
    }
    ctx->pc = 0x128A9Cu;
    // 0x128a9c: 0x8e020440  lw          $v0, 0x440($s0)
    ctx->pc = 0x128a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x128aa0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x128AA0u;
    {
        const bool branch_taken_0x128aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AA0u;
        // 0x128aa4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128aa0) {
            ctx->pc = 0x128B20u;
            goto label_128b20;
        }
    }
    ctx->pc = 0x128AA8u;
    // 0x128aa8: 0x90435aec  lbu         $v1, 0x5AEC($v0)
    ctx->pc = 0x128aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23276)));
    // 0x128aac: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x128AACu;
    {
        const bool branch_taken_0x128aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128aac) {
            ctx->pc = 0x128AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128AACu;
            // 0x128ab0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128B24u;
            goto label_128b24;
        }
    }
    ctx->pc = 0x128AB4u;
    // 0x128ab4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x128AB4u;
    SET_GPR_U32(ctx, 31, 0x128ABCu);
    ctx->pc = 0x128AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AB4u;
    // 0x128ab8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x128AB4u, 0x128ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128ABCu;
label_128abc:
    // 0x128abc: 0x8e050444  lw          $a1, 0x444($s0)
    ctx->pc = 0x128abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1092)));
    // 0x128ac0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x128AC0u;
    {
        const bool branch_taken_0x128ac0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x128ac0) {
            ctx->pc = 0x128AE0u;
            goto label_128ae0;
        }
    }
    ctx->pc = 0x128AC8u;
    // 0x128ac8: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x128AC8u;
    SET_GPR_U32(ctx, 31, 0x128AD0u);
    ctx->pc = 0x128ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AC8u;
    // 0x128acc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x128AC8u, 0x128AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AD0u;
label_128ad0:
    // 0x128ad0: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x128ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x128ad4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ad8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x128AD8u;
    {
        const bool branch_taken_0x128ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AD8u;
        // 0x128adc: 0xae020444  sw          $v0, 0x444($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1092), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ad8) {
            ctx->pc = 0x128AF4u;
            goto label_128af4;
        }
    }
    ctx->pc = 0x128AE0u;
label_128ae0:
    // 0x128ae0: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x128AE0u;
    SET_GPR_U32(ctx, 31, 0x128AE8u);
    ctx->pc = 0x128AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AE0u;
    // 0x128ae4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x128AE0u, 0x128AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AE8u;
label_128ae8:
    // 0x128ae8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x128AE8u;
    {
        const bool branch_taken_0x128ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128ae8) {
            ctx->pc = 0x128AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128AE8u;
            // 0x128aec: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128B04u;
            goto label_128b04;
        }
    }
    ctx->pc = 0x128AF0u;
    // 0x128af0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_128af4:
    // 0x128af4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x128AF4u;
    SET_GPR_U32(ctx, 31, 0x128AFCu);
    ctx->pc = 0x128AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AF4u;
    // 0x128af8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x128AF4u, 0x128AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AFCu;
label_128afc:
    // 0x128afc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x128AFCu;
    {
        const bool branch_taken_0x128afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AFCu;
        // 0x128b00: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128afc) {
            ctx->pc = 0x128B24u;
            goto label_128b24;
        }
    }
    ctx->pc = 0x128B04u;
label_128b04:
    // 0x128b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128b08: 0xc04308e  jal         func_10C238
    ctx->pc = 0x128B08u;
    SET_GPR_U32(ctx, 31, 0x128B10u);
    ctx->pc = 0x128B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B08u;
    // 0x128b0c: 0xae000444  sw          $zero, 0x444($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1092), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C238u, 0x128B08u, 0x128B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B10u;
label_128b10:
    // 0x128b10: 0xae00043c  sw          $zero, 0x43C($s0)
    ctx->pc = 0x128b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1084), GPR_U32(ctx, 0));
    // 0x128b14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b18: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x128B18u;
    SET_GPR_U32(ctx, 31, 0x128B20u);
    ctx->pc = 0x128B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B18u;
    // 0x128b1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x128B18u, 0x128B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B20u;
label_128b20:
    // 0x128b20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x128b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_128b24:
    // 0x128b24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x128b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x128b28: 0x3e00008  jr          $ra
    ctx->pc = 0x128B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B28u;
        // 0x128b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128B30u;
    // 0x128b30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x128b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x128b34: 0x0  nop
    ctx->pc = 0x128b34u;
    // NOP
    ctx->pc = 0x128b38u;
}
