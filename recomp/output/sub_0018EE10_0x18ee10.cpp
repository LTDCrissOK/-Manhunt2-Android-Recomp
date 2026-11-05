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

// Function: sub_0018EE10
// Address: 0x18ee10 - 0x18ee70
void sub_0018EE10_0x18ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EE10_0x18ee10");
#endif

    switch (ctx->pc) {
        case 0x18ee10u: goto label_18ee10;
        case 0x18ee14u: goto label_18ee14;
        case 0x18ee18u: goto label_18ee18;
        case 0x18ee1cu: goto label_18ee1c;
        case 0x18ee20u: goto label_18ee20;
        case 0x18ee24u: goto label_18ee24;
        case 0x18ee28u: goto label_18ee28;
        case 0x18ee2cu: goto label_18ee2c;
        case 0x18ee30u: goto label_18ee30;
        case 0x18ee34u: goto label_18ee34;
        case 0x18ee38u: goto label_18ee38;
        case 0x18ee3cu: goto label_18ee3c;
        case 0x18ee40u: goto label_18ee40;
        case 0x18ee44u: goto label_18ee44;
        case 0x18ee48u: goto label_18ee48;
        case 0x18ee4cu: goto label_18ee4c;
        case 0x18ee50u: goto label_18ee50;
        case 0x18ee54u: goto label_18ee54;
        case 0x18ee58u: goto label_18ee58;
        case 0x18ee5cu: goto label_18ee5c;
        case 0x18ee60u: goto label_18ee60;
        case 0x18ee64u: goto label_18ee64;
        case 0x18ee68u: goto label_18ee68;
        case 0x18ee6cu: goto label_18ee6c;
        default: break;
    }

    ctx->pc = 0x18ee10u;

label_18ee10:
    // 0x18ee10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18ee14:
    // 0x18ee14: 0x3c01402c  lui         $at, 0x402C
    ctx->pc = 0x18ee14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16428 << 16));
label_18ee18:
    // 0x18ee18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18ee18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_18ee1c:
    // 0x18ee1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18ee1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18ee20:
    // 0x18ee20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18ee20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18ee24:
    // 0x18ee24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18ee28:
    // 0x18ee28: 0xc063afa  jal         func_18EBE8
label_18ee2c:
    if (ctx->pc == 0x18EE2Cu) {
        ctx->pc = 0x18EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE28u;
        // 0x18ee2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE30u;
        goto label_18ee30;
    }
    ctx->pc = 0x18EE28u;
    SET_GPR_U32(ctx, 31, 0x18EE30u);
    ctx->pc = 0x18EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE28u;
    // 0x18ee2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EBE8u, 0x18EE28u, 0x18EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EE30u;
label_18ee30:
    // 0x18ee30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18ee34:
    if (ctx->pc == 0x18EE34u) {
        ctx->pc = 0x18EE38u;
        goto label_18ee38;
    }
    ctx->pc = 0x18EE30u;
    {
        const bool branch_taken_0x18ee30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee30) {
            ctx->pc = 0x18EE50u;
            goto label_18ee50;
        }
    }
    ctx->pc = 0x18EE38u;
label_18ee38:
    // 0x18ee38: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18ee3c:
    // 0x18ee3c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18ee40:
    // 0x18ee40: 0x40f809  jalr        $v0
label_18ee44:
    if (ctx->pc == 0x18EE44u) {
        ctx->pc = 0x18EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE40u;
        // 0x18ee44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE48u;
        goto label_18ee48;
    }
    ctx->pc = 0x18EE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EE48u);
        ctx->pc = 0x18EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE40u;
        // 0x18ee44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EE40u, 0x18EE48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EE48u;
label_18ee48:
    // 0x18ee48: 0x10000005  b           . + 4 + (0x5 << 2)
label_18ee4c:
    if (ctx->pc == 0x18EE4Cu) {
        ctx->pc = 0x18EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE48u;
        // 0x18ee4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE50u;
        goto label_18ee50;
    }
    ctx->pc = 0x18EE48u;
    {
        const bool branch_taken_0x18ee48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE48u;
        // 0x18ee4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee48) {
            ctx->pc = 0x18EE60u;
            goto label_18ee60;
        }
    }
    ctx->pc = 0x18EE50u;
label_18ee50:
    // 0x18ee50: 0xc061a16  jal         func_186858
label_18ee54:
    if (ctx->pc == 0x18EE54u) {
        ctx->pc = 0x18EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE50u;
        // 0x18ee54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE58u;
        goto label_18ee58;
    }
    ctx->pc = 0x18EE50u;
    SET_GPR_U32(ctx, 31, 0x18EE58u);
    ctx->pc = 0x18EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE50u;
    // 0x18ee54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18EE50u, 0x18EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EE58u;
label_18ee58:
    // 0x18ee58: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x18ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_18ee5c:
    // 0x18ee5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ee5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18ee60:
    // 0x18ee60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18ee60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18ee64:
    // 0x18ee64: 0x3e00008  jr          $ra
label_18ee68:
    if (ctx->pc == 0x18EE68u) {
        ctx->pc = 0x18EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE64u;
        // 0x18ee68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EE6Cu;
        goto label_18ee6c;
    }
    ctx->pc = 0x18EE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE64u;
        // 0x18ee68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EE6Cu;
label_18ee6c:
    // 0x18ee6c: 0x0  nop
    ctx->pc = 0x18ee6cu;
    // NOP
    ctx->pc = 0x18ee70u;
}
