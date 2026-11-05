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

// Function: sub_0018BF08
// Address: 0x18bf08 - 0x18bf70
void sub_0018BF08_0x18bf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BF08_0x18bf08");
#endif

    switch (ctx->pc) {
        case 0x18bf08u: goto label_18bf08;
        case 0x18bf0cu: goto label_18bf0c;
        case 0x18bf10u: goto label_18bf10;
        case 0x18bf14u: goto label_18bf14;
        case 0x18bf18u: goto label_18bf18;
        case 0x18bf1cu: goto label_18bf1c;
        case 0x18bf20u: goto label_18bf20;
        case 0x18bf24u: goto label_18bf24;
        case 0x18bf28u: goto label_18bf28;
        case 0x18bf2cu: goto label_18bf2c;
        case 0x18bf30u: goto label_18bf30;
        case 0x18bf34u: goto label_18bf34;
        case 0x18bf38u: goto label_18bf38;
        case 0x18bf3cu: goto label_18bf3c;
        case 0x18bf40u: goto label_18bf40;
        case 0x18bf44u: goto label_18bf44;
        case 0x18bf48u: goto label_18bf48;
        case 0x18bf4cu: goto label_18bf4c;
        case 0x18bf50u: goto label_18bf50;
        case 0x18bf54u: goto label_18bf54;
        case 0x18bf58u: goto label_18bf58;
        case 0x18bf5cu: goto label_18bf5c;
        case 0x18bf60u: goto label_18bf60;
        case 0x18bf64u: goto label_18bf64;
        case 0x18bf68u: goto label_18bf68;
        case 0x18bf6cu: goto label_18bf6c;
        default: break;
    }

    ctx->pc = 0x18bf08u;

label_18bf08:
    // 0x18bf08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18bf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18bf0c:
    // 0x18bf0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18bf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bf10:
    // 0x18bf10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18bf14:
    // 0x18bf14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18bf18:
    // 0x18bf18: 0xc062974  jal         func_18A5D0
label_18bf1c:
    if (ctx->pc == 0x18BF1Cu) {
        ctx->pc = 0x18BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF18u;
        // 0x18bf1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF20u;
        goto label_18bf20;
    }
    ctx->pc = 0x18BF18u;
    SET_GPR_U32(ctx, 31, 0x18BF20u);
    ctx->pc = 0x18BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF18u;
    // 0x18bf1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x18BF18u, 0x18BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF20u;
label_18bf20:
    // 0x18bf20: 0xc062992  jal         func_18A648
label_18bf24:
    if (ctx->pc == 0x18BF24u) {
        ctx->pc = 0x18BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF20u;
        // 0x18bf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF28u;
        goto label_18bf28;
    }
    ctx->pc = 0x18BF20u;
    SET_GPR_U32(ctx, 31, 0x18BF28u);
    ctx->pc = 0x18BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF20u;
    // 0x18bf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A648u, 0x18BF20u, 0x18BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF28u;
label_18bf28:
    // 0x18bf28: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18bf2c:
    // 0x18bf2c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x18bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_18bf30:
    // 0x18bf30: 0xc0f7200  jal         func_3DC800
label_18bf34:
    if (ctx->pc == 0x18BF34u) {
        ctx->pc = 0x18BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF30u;
        // 0x18bf34: 0x2484ef50  addiu       $a0, $a0, -0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF38u;
        goto label_18bf38;
    }
    ctx->pc = 0x18BF30u;
    SET_GPR_U32(ctx, 31, 0x18BF38u);
    ctx->pc = 0x18BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF30u;
    // 0x18bf34: 0x2484ef50  addiu       $a0, $a0, -0x10B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC800u, 0x18BF30u, 0x18BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF38u;
label_18bf38:
    // 0x18bf38: 0xc095510  jal         func_255440
label_18bf3c:
    if (ctx->pc == 0x18BF3Cu) {
        ctx->pc = 0x18BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF38u;
        // 0x18bf3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF40u;
        goto label_18bf40;
    }
    ctx->pc = 0x18BF38u;
    SET_GPR_U32(ctx, 31, 0x18BF40u);
    ctx->pc = 0x18BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF38u;
    // 0x18bf3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255440u, 0x18BF38u, 0x18BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF40u;
label_18bf40:
    // 0x18bf40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18bf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18bf44:
    // 0x18bf44: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_18bf48:
    if (ctx->pc == 0x18BF48u) {
        ctx->pc = 0x18BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF44u;
        // 0x18bf48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF4Cu;
        goto label_18bf4c;
    }
    ctx->pc = 0x18BF44u;
    {
        const bool branch_taken_0x18bf44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF44u;
        // 0x18bf48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf44) {
            ctx->pc = 0x18BF60u;
            goto label_18bf60;
        }
    }
    ctx->pc = 0x18BF4Cu;
label_18bf4c:
    // 0x18bf4c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18bf50:
    // 0x18bf50: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18bf54:
    // 0x18bf54: 0x40f809  jalr        $v0
label_18bf58:
    if (ctx->pc == 0x18BF58u) {
        ctx->pc = 0x18BF5Cu;
        goto label_18bf5c;
    }
    ctx->pc = 0x18BF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BF5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BF54u, 0x18BF5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BF5Cu;
label_18bf5c:
    // 0x18bf5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18bf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18bf60:
    // 0x18bf60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18bf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18bf64:
    // 0x18bf64: 0x3e00008  jr          $ra
label_18bf68:
    if (ctx->pc == 0x18BF68u) {
        ctx->pc = 0x18BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF64u;
        // 0x18bf68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BF6Cu;
        goto label_18bf6c;
    }
    ctx->pc = 0x18BF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF64u;
        // 0x18bf68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BF6Cu;
label_18bf6c:
    // 0x18bf6c: 0x0  nop
    ctx->pc = 0x18bf6cu;
    // NOP
    ctx->pc = 0x18bf70u;
}
