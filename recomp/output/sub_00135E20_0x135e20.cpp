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

// Function: sub_00135E20
// Address: 0x135e20 - 0x135e90
void sub_00135E20_0x135e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135E20_0x135e20");
#endif

    switch (ctx->pc) {
        case 0x135e20u: goto label_135e20;
        case 0x135e24u: goto label_135e24;
        case 0x135e28u: goto label_135e28;
        case 0x135e2cu: goto label_135e2c;
        case 0x135e30u: goto label_135e30;
        case 0x135e34u: goto label_135e34;
        case 0x135e38u: goto label_135e38;
        case 0x135e3cu: goto label_135e3c;
        case 0x135e40u: goto label_135e40;
        case 0x135e44u: goto label_135e44;
        case 0x135e48u: goto label_135e48;
        case 0x135e4cu: goto label_135e4c;
        case 0x135e50u: goto label_135e50;
        case 0x135e54u: goto label_135e54;
        case 0x135e58u: goto label_135e58;
        case 0x135e5cu: goto label_135e5c;
        case 0x135e60u: goto label_135e60;
        case 0x135e64u: goto label_135e64;
        case 0x135e68u: goto label_135e68;
        case 0x135e6cu: goto label_135e6c;
        case 0x135e70u: goto label_135e70;
        case 0x135e74u: goto label_135e74;
        case 0x135e78u: goto label_135e78;
        case 0x135e7cu: goto label_135e7c;
        case 0x135e80u: goto label_135e80;
        case 0x135e84u: goto label_135e84;
        case 0x135e88u: goto label_135e88;
        case 0x135e8cu: goto label_135e8c;
        default: break;
    }

    ctx->pc = 0x135e20u;

label_135e20:
    // 0x135e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_135e24:
    // 0x135e24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x135e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_135e28:
    // 0x135e28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x135e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_135e2c:
    // 0x135e2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x135e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135e30:
    // 0x135e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135e34:
    // 0x135e34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x135e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_135e38:
    // 0x135e38: 0xc04f750  jal         func_13DD40
label_135e3c:
    if (ctx->pc == 0x135E3Cu) {
        ctx->pc = 0x135E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E38u;
        // 0x135e3c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E40u;
        goto label_135e40;
    }
    ctx->pc = 0x135E38u;
    SET_GPR_U32(ctx, 31, 0x135E40u);
    ctx->pc = 0x135E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E38u;
    // 0x135e3c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x135E38u, 0x135E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E40u;
label_135e40:
    // 0x135e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135e44:
    // 0x135e44: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x135e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_135e48:
    // 0x135e48: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_135e4c:
    if (ctx->pc == 0x135E4Cu) {
        ctx->pc = 0x135E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E48u;
        // 0x135e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E50u;
        goto label_135e50;
    }
    ctx->pc = 0x135E48u;
    {
        const bool branch_taken_0x135e48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x135E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E48u;
        // 0x135e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e48) {
            ctx->pc = 0x135E74u;
            goto label_135e74;
        }
    }
    ctx->pc = 0x135E50u;
label_135e50:
    // 0x135e50: 0xc04d8f8  jal         func_1363E0
label_135e54:
    if (ctx->pc == 0x135E54u) {
        ctx->pc = 0x135E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E50u;
        // 0x135e54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E58u;
        goto label_135e58;
    }
    ctx->pc = 0x135E50u;
    SET_GPR_U32(ctx, 31, 0x135E58u);
    ctx->pc = 0x135E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E50u;
    // 0x135e54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x135E50u, 0x135E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E58u;
label_135e58:
    // 0x135e58: 0x54520007  bnel        $v0, $s2, . + 4 + (0x7 << 2)
label_135e5c:
    if (ctx->pc == 0x135E5Cu) {
        ctx->pc = 0x135E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E58u;
        // 0x135e5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E60u;
        goto label_135e60;
    }
    ctx->pc = 0x135E58u;
    {
        const bool branch_taken_0x135e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x135e58) {
            ctx->pc = 0x135E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135E58u;
            // 0x135e5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135E78u;
            goto label_135e78;
        }
    }
    ctx->pc = 0x135E60u;
label_135e60:
    // 0x135e60: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x135e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_135e64:
    // 0x135e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135e68:
    // 0x135e68: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x135e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_135e6c:
    // 0x135e6c: 0x40f809  jalr        $v0
label_135e70:
    if (ctx->pc == 0x135E70u) {
        ctx->pc = 0x135E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E6Cu;
        // 0x135e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E74u;
        goto label_135e74;
    }
    ctx->pc = 0x135E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135E74u);
        ctx->pc = 0x135E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E6Cu;
        // 0x135e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135E6Cu, 0x135E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135E74u;
label_135e74:
    // 0x135e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135e78:
    // 0x135e78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135e78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135e7c:
    // 0x135e7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135e7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_135e80:
    // 0x135e80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x135e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_135e84:
    // 0x135e84: 0x3e00008  jr          $ra
label_135e88:
    if (ctx->pc == 0x135E88u) {
        ctx->pc = 0x135E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E84u;
        // 0x135e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E8Cu;
        goto label_135e8c;
    }
    ctx->pc = 0x135E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E84u;
        // 0x135e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135E8Cu;
label_135e8c:
    // 0x135e8c: 0x0  nop
    ctx->pc = 0x135e8cu;
    // NOP
    ctx->pc = 0x135e90u;
}
