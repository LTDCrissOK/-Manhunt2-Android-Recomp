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

// Function: sub_0018CF10
// Address: 0x18cf10 - 0x18cf80
void sub_0018CF10_0x18cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CF10_0x18cf10");
#endif

    switch (ctx->pc) {
        case 0x18cf10u: goto label_18cf10;
        case 0x18cf14u: goto label_18cf14;
        case 0x18cf18u: goto label_18cf18;
        case 0x18cf1cu: goto label_18cf1c;
        case 0x18cf20u: goto label_18cf20;
        case 0x18cf24u: goto label_18cf24;
        case 0x18cf28u: goto label_18cf28;
        case 0x18cf2cu: goto label_18cf2c;
        case 0x18cf30u: goto label_18cf30;
        case 0x18cf34u: goto label_18cf34;
        case 0x18cf38u: goto label_18cf38;
        case 0x18cf3cu: goto label_18cf3c;
        case 0x18cf40u: goto label_18cf40;
        case 0x18cf44u: goto label_18cf44;
        case 0x18cf48u: goto label_18cf48;
        case 0x18cf4cu: goto label_18cf4c;
        case 0x18cf50u: goto label_18cf50;
        case 0x18cf54u: goto label_18cf54;
        case 0x18cf58u: goto label_18cf58;
        case 0x18cf5cu: goto label_18cf5c;
        case 0x18cf60u: goto label_18cf60;
        case 0x18cf64u: goto label_18cf64;
        case 0x18cf68u: goto label_18cf68;
        case 0x18cf6cu: goto label_18cf6c;
        case 0x18cf70u: goto label_18cf70;
        case 0x18cf74u: goto label_18cf74;
        case 0x18cf78u: goto label_18cf78;
        case 0x18cf7cu: goto label_18cf7c;
        default: break;
    }

    ctx->pc = 0x18cf10u;

label_18cf10:
    // 0x18cf10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18cf14:
    // 0x18cf14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18cf18:
    // 0x18cf18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18cf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18cf1c:
    // 0x18cf1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18cf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18cf20:
    // 0x18cf20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18cf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18cf24:
    // 0x18cf24: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18cf28:
    // 0x18cf28: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_18cf2c:
    if (ctx->pc == 0x18CF2Cu) {
        ctx->pc = 0x18CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF28u;
        // 0x18cf2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF30u;
        goto label_18cf30;
    }
    ctx->pc = 0x18CF28u;
    {
        const bool branch_taken_0x18cf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18cf28) {
            ctx->pc = 0x18CF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CF28u;
            // 0x18cf2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CF70u;
            goto label_18cf70;
        }
    }
    ctx->pc = 0x18CF30u;
label_18cf30:
    // 0x18cf30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18cf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18cf34:
    // 0x18cf34: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x18cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_18cf38:
    // 0x18cf38: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18cf3c:
    if (ctx->pc == 0x18CF3Cu) {
        ctx->pc = 0x18CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF38u;
        // 0x18cf3c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF40u;
        goto label_18cf40;
    }
    ctx->pc = 0x18CF38u;
    {
        const bool branch_taken_0x18cf38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF38u;
        // 0x18cf3c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf38) {
            ctx->pc = 0x18CF50u;
            goto label_18cf50;
        }
    }
    ctx->pc = 0x18CF40u;
label_18cf40:
    // 0x18cf40: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18cf44:
    // 0x18cf44: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18cf48:
    // 0x18cf48: 0x40f809  jalr        $v0
label_18cf4c:
    if (ctx->pc == 0x18CF4Cu) {
        ctx->pc = 0x18CF50u;
        goto label_18cf50;
    }
    ctx->pc = 0x18CF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CF50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CF48u, 0x18CF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CF50u;
label_18cf50:
    // 0x18cf50: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_18cf54:
    // 0x18cf54: 0xc061a16  jal         func_186858
label_18cf58:
    if (ctx->pc == 0x18CF58u) {
        ctx->pc = 0x18CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF54u;
        // 0x18cf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF5Cu;
        goto label_18cf5c;
    }
    ctx->pc = 0x18CF54u;
    SET_GPR_U32(ctx, 31, 0x18CF5Cu);
    ctx->pc = 0x18CF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF54u;
    // 0x18cf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18CF54u, 0x18CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF5Cu;
label_18cf5c:
    // 0x18cf5c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18cf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18cf60:
    // 0x18cf60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cf60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cf64:
    // 0x18cf64: 0x0  nop
    ctx->pc = 0x18cf64u;
    // NOP
label_18cf68:
    // 0x18cf68: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x18cf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_18cf6c:
    // 0x18cf6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18cf6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18cf70:
    // 0x18cf70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18cf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18cf74:
    // 0x18cf74: 0x3e00008  jr          $ra
label_18cf78:
    if (ctx->pc == 0x18CF78u) {
        ctx->pc = 0x18CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF74u;
        // 0x18cf78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF7Cu;
        goto label_18cf7c;
    }
    ctx->pc = 0x18CF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF74u;
        // 0x18cf78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CF7Cu;
label_18cf7c:
    // 0x18cf7c: 0x0  nop
    ctx->pc = 0x18cf7cu;
    // NOP
    ctx->pc = 0x18cf80u;
}
