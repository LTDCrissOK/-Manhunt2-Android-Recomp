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

// Function: sub_003ACAF0
// Address: 0x3acaf0 - 0x3acb70
void sub_003ACAF0_0x3acaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACAF0_0x3acaf0");
#endif

    switch (ctx->pc) {
        case 0x3acaf0u: goto label_3acaf0;
        case 0x3acaf4u: goto label_3acaf4;
        case 0x3acaf8u: goto label_3acaf8;
        case 0x3acafcu: goto label_3acafc;
        case 0x3acb00u: goto label_3acb00;
        case 0x3acb04u: goto label_3acb04;
        case 0x3acb08u: goto label_3acb08;
        case 0x3acb0cu: goto label_3acb0c;
        case 0x3acb10u: goto label_3acb10;
        case 0x3acb14u: goto label_3acb14;
        case 0x3acb18u: goto label_3acb18;
        case 0x3acb1cu: goto label_3acb1c;
        case 0x3acb20u: goto label_3acb20;
        case 0x3acb24u: goto label_3acb24;
        case 0x3acb28u: goto label_3acb28;
        case 0x3acb2cu: goto label_3acb2c;
        case 0x3acb30u: goto label_3acb30;
        case 0x3acb34u: goto label_3acb34;
        case 0x3acb38u: goto label_3acb38;
        case 0x3acb3cu: goto label_3acb3c;
        case 0x3acb40u: goto label_3acb40;
        case 0x3acb44u: goto label_3acb44;
        case 0x3acb48u: goto label_3acb48;
        case 0x3acb4cu: goto label_3acb4c;
        case 0x3acb50u: goto label_3acb50;
        case 0x3acb54u: goto label_3acb54;
        case 0x3acb58u: goto label_3acb58;
        case 0x3acb5cu: goto label_3acb5c;
        case 0x3acb60u: goto label_3acb60;
        case 0x3acb64u: goto label_3acb64;
        case 0x3acb68u: goto label_3acb68;
        case 0x3acb6cu: goto label_3acb6c;
        default: break;
    }

    ctx->pc = 0x3acaf0u;

label_3acaf0:
    // 0x3acaf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3acaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3acaf4:
    // 0x3acaf4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3acaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3acaf8:
    // 0x3acaf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3acaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3acafc:
    // 0x3acafc: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_3acb00:
    if (ctx->pc == 0x3ACB00u) {
        ctx->pc = 0x3ACB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAFCu;
        // 0x3acb00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB04u;
        goto label_3acb04;
    }
    ctx->pc = 0x3ACAFCu;
    {
        const bool branch_taken_0x3acafc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAFCu;
        // 0x3acb00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acafc) {
            ctx->pc = 0x3ACB28u;
            goto label_3acb28;
        }
    }
    ctx->pc = 0x3ACB04u;
label_3acb04:
    // 0x3acb04: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3acb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3acb08:
    // 0x3acb08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3acb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3acb0c:
    // 0x3acb0c: 0x244291b0  addiu       $v0, $v0, -0x6E50
    ctx->pc = 0x3acb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
label_3acb10:
    // 0x3acb10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3acb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3acb14:
    // 0x3acb14: 0x60f809  jalr        $v1
label_3acb18:
    if (ctx->pc == 0x3ACB18u) {
        ctx->pc = 0x3ACB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB14u;
        // 0x3acb18: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB1Cu;
        goto label_3acb1c;
    }
    ctx->pc = 0x3ACB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ACB1Cu);
        ctx->pc = 0x3ACB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB14u;
        // 0x3acb18: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACB14u, 0x3ACB1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACB1Cu;
label_3acb1c:
    // 0x3acb1c: 0x1000000f  b           . + 4 + (0xF << 2)
label_3acb20:
    if (ctx->pc == 0x3ACB20u) {
        ctx->pc = 0x3ACB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB1Cu;
        // 0x3acb20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB24u;
        goto label_3acb24;
    }
    ctx->pc = 0x3ACB1Cu;
    {
        const bool branch_taken_0x3acb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB1Cu;
        // 0x3acb20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb1c) {
            ctx->pc = 0x3ACB5Cu;
            goto label_3acb5c;
        }
    }
    ctx->pc = 0x3ACB24u;
label_3acb24:
    // 0x3acb24: 0x0  nop
    ctx->pc = 0x3acb24u;
    // NOP
label_3acb28:
    // 0x3acb28: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x3acb28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
label_3acb2c:
    // 0x3acb2c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x3acb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_3acb30:
    // 0x3acb30: 0x26103350  addiu       $s0, $s0, 0x3350
    ctx->pc = 0x3acb30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13136));
label_3acb34:
    // 0x3acb34: 0xc0efd60  jal         func_3BF580
label_3acb38:
    if (ctx->pc == 0x3ACB38u) {
        ctx->pc = 0x3ACB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB34u;
        // 0x3acb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB3Cu;
        goto label_3acb3c;
    }
    ctx->pc = 0x3ACB34u;
    SET_GPR_U32(ctx, 31, 0x3ACB3Cu);
    ctx->pc = 0x3ACB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACB34u;
    // 0x3acb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x3ACB34u, 0x3ACB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACB3Cu;
label_3acb3c:
    // 0x3acb3c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3acb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3acb40:
    // 0x3acb40: 0x244291b0  addiu       $v0, $v0, -0x6E50
    ctx->pc = 0x3acb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
label_3acb44:
    // 0x3acb44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3acb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3acb48:
    // 0x3acb48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3acb4c:
    if (ctx->pc == 0x3ACB4Cu) {
        ctx->pc = 0x3ACB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB48u;
        // 0x3acb4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB50u;
        goto label_3acb50;
    }
    ctx->pc = 0x3ACB48u;
    {
        const bool branch_taken_0x3acb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB48u;
        // 0x3acb4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb48) {
            ctx->pc = 0x3ACB58u;
            goto label_3acb58;
        }
    }
    ctx->pc = 0x3ACB50u;
label_3acb50:
    // 0x3acb50: 0x60f809  jalr        $v1
label_3acb54:
    if (ctx->pc == 0x3ACB54u) {
        ctx->pc = 0x3ACB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB50u;
        // 0x3acb54: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB58u;
        goto label_3acb58;
    }
    ctx->pc = 0x3ACB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ACB58u);
        ctx->pc = 0x3ACB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB50u;
        // 0x3acb54: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACB50u, 0x3ACB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACB58u;
label_3acb58:
    // 0x3acb58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3acb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3acb5c:
    // 0x3acb5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3acb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3acb60:
    // 0x3acb60: 0x3e00008  jr          $ra
label_3acb64:
    if (ctx->pc == 0x3ACB64u) {
        ctx->pc = 0x3ACB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB60u;
        // 0x3acb64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB68u;
        goto label_3acb68;
    }
    ctx->pc = 0x3ACB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB60u;
        // 0x3acb64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACB68u;
label_3acb68:
    // 0x3acb68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3acb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3acb6c:
    // 0x3acb6c: 0x0  nop
    ctx->pc = 0x3acb6cu;
    // NOP
    ctx->pc = 0x3acb70u;
}
