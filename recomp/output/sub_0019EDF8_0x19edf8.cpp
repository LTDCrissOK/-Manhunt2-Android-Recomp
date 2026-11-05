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

// Function: sub_0019EDF8
// Address: 0x19edf8 - 0x19ee60
void sub_0019EDF8_0x19edf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EDF8_0x19edf8");
#endif

    switch (ctx->pc) {
        case 0x19edf8u: goto label_19edf8;
        case 0x19edfcu: goto label_19edfc;
        case 0x19ee00u: goto label_19ee00;
        case 0x19ee04u: goto label_19ee04;
        case 0x19ee08u: goto label_19ee08;
        case 0x19ee0cu: goto label_19ee0c;
        case 0x19ee10u: goto label_19ee10;
        case 0x19ee14u: goto label_19ee14;
        case 0x19ee18u: goto label_19ee18;
        case 0x19ee1cu: goto label_19ee1c;
        case 0x19ee20u: goto label_19ee20;
        case 0x19ee24u: goto label_19ee24;
        case 0x19ee28u: goto label_19ee28;
        case 0x19ee2cu: goto label_19ee2c;
        case 0x19ee30u: goto label_19ee30;
        case 0x19ee34u: goto label_19ee34;
        case 0x19ee38u: goto label_19ee38;
        case 0x19ee3cu: goto label_19ee3c;
        case 0x19ee40u: goto label_19ee40;
        case 0x19ee44u: goto label_19ee44;
        case 0x19ee48u: goto label_19ee48;
        case 0x19ee4cu: goto label_19ee4c;
        case 0x19ee50u: goto label_19ee50;
        case 0x19ee54u: goto label_19ee54;
        case 0x19ee58u: goto label_19ee58;
        case 0x19ee5cu: goto label_19ee5c;
        default: break;
    }

    ctx->pc = 0x19edf8u;

label_19edf8:
    // 0x19edf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19edf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19edfc:
    // 0x19edfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19edfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ee00:
    // 0x19ee00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19ee04:
    // 0x19ee04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ee04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ee08:
    // 0x19ee08: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19ee0c:
    // 0x19ee0c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_19ee10:
    if (ctx->pc == 0x19EE10u) {
        ctx->pc = 0x19EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE0Cu;
        // 0x19ee10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE14u;
        goto label_19ee14;
    }
    ctx->pc = 0x19EE0Cu;
    {
        const bool branch_taken_0x19ee0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ee0c) {
            ctx->pc = 0x19EE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EE0Cu;
            // 0x19ee10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE54u;
            goto label_19ee54;
        }
    }
    ctx->pc = 0x19EE14u;
label_19ee14:
    // 0x19ee14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19ee18:
    // 0x19ee18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19ee1c:
    if (ctx->pc == 0x19EE1Cu) {
        ctx->pc = 0x19EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE18u;
        // 0x19ee1c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE20u;
        goto label_19ee20;
    }
    ctx->pc = 0x19EE18u;
    {
        const bool branch_taken_0x19ee18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE18u;
        // 0x19ee1c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee18) {
            ctx->pc = 0x19EE30u;
            goto label_19ee30;
        }
    }
    ctx->pc = 0x19EE20u;
label_19ee20:
    // 0x19ee20: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19ee24:
    // 0x19ee24: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19ee28:
    // 0x19ee28: 0x40f809  jalr        $v0
label_19ee2c:
    if (ctx->pc == 0x19EE2Cu) {
        ctx->pc = 0x19EE30u;
        goto label_19ee30;
    }
    ctx->pc = 0x19EE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19EE30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE28u, 0x19EE30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EE30u;
label_19ee30:
    // 0x19ee30: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x19ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19ee34:
    // 0x19ee34: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x19ee34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ee38:
    // 0x19ee38: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_19ee3c:
    // 0x19ee3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ee40:
    // 0x19ee40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19ee44:
    // 0x19ee44: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19ee48:
    // 0x19ee48: 0x40f809  jalr        $v0
label_19ee4c:
    if (ctx->pc == 0x19EE4Cu) {
        ctx->pc = 0x19EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE48u;
        // 0x19ee4c: 0x8cc51004  lw          $a1, 0x1004($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE50u;
        goto label_19ee50;
    }
    ctx->pc = 0x19EE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19EE50u);
        ctx->pc = 0x19EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE48u;
        // 0x19ee4c: 0x8cc51004  lw          $a1, 0x1004($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE48u, 0x19EE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EE50u;
label_19ee50:
    // 0x19ee50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ee50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ee54:
    // 0x19ee54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19ee54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19ee58:
    // 0x19ee58: 0x3e00008  jr          $ra
label_19ee5c:
    if (ctx->pc == 0x19EE5Cu) {
        ctx->pc = 0x19EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE58u;
        // 0x19ee5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE60u;
        goto label_fallthrough_0x19ee58;
    }
    ctx->pc = 0x19EE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE58u;
        // 0x19ee5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19ee58:
    ctx->pc = 0x19EE60u;
}
