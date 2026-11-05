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

// Function: sub_0010EED8
// Address: 0x10eed8 - 0x10ef80
void sub_0010EED8_0x10eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EED8_0x10eed8");
#endif

    switch (ctx->pc) {
        case 0x10ef00u: goto label_10ef00;
        case 0x10ef20u: goto label_10ef20;
        case 0x10ef38u: goto label_10ef38;
        case 0x10ef48u: goto label_10ef48;
        case 0x10ef54u: goto label_10ef54;
        case 0x10ef60u: goto label_10ef60;
        default: break;
    }

    ctx->pc = 0x10eed8u;

    // 0x10eed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10eed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10eedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10eedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10eee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10eee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10eee4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10eee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eee8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10eee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10eeec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10eeecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eef0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10eef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10eef8: 0xc044a44  jal         func_112910
    ctx->pc = 0x10EEF8u;
    SET_GPR_U32(ctx, 31, 0x10EF00u);
    ctx->pc = 0x10EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EEF8u;
    // 0x10eefc: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112910u, 0x10EEF8u, 0x10EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF00u;
label_10ef00:
    // 0x10ef00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ef00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef04: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x10ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10ef08: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10EF08u;
    {
        const bool branch_taken_0x10ef08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x10EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF08u;
        // 0x10ef0c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef08) {
            ctx->pc = 0x10EF28u;
            goto label_10ef28;
        }
    }
    ctx->pc = 0x10EF10u;
    // 0x10ef10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ef10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10ef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef18: 0xc043b80  jal         func_10EE00
    ctx->pc = 0x10EF18u;
    SET_GPR_U32(ctx, 31, 0x10EF20u);
    ctx->pc = 0x10EF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF18u;
    // 0x10ef1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EE00u, 0x10EF18u, 0x10EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF20u;
label_10ef20:
    // 0x10ef20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10EF20u;
    {
        const bool branch_taken_0x10ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF20u;
        // 0x10ef24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef20) {
            ctx->pc = 0x10EF64u;
            goto label_10ef64;
        }
    }
    ctx->pc = 0x10EF28u;
label_10ef28:
    // 0x10ef28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10ef2c: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x10ef2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x10ef30: 0xc04569a  jal         func_115A68
    ctx->pc = 0x10EF30u;
    SET_GPR_U32(ctx, 31, 0x10EF38u);
    ctx->pc = 0x10EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF30u;
    // 0x10ef34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A68u, 0x10EF30u, 0x10EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF38u;
label_10ef38:
    // 0x10ef38: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10EF38u;
    {
        const bool branch_taken_0x10ef38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ef38) {
            ctx->pc = 0x10EF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EF38u;
            // 0x10ef3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EF64u;
            goto label_10ef64;
        }
    }
    ctx->pc = 0x10EF40u;
    // 0x10ef40: 0xc04561a  jal         func_115868
    ctx->pc = 0x10EF40u;
    SET_GPR_U32(ctx, 31, 0x10EF48u);
    ctx->pc = 0x10EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF40u;
    // 0x10ef44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x10EF40u, 0x10EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF48u;
label_10ef48:
    // 0x10ef48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ef48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef4c: 0xc043be0  jal         func_10EF80
    ctx->pc = 0x10EF4Cu;
    SET_GPR_U32(ctx, 31, 0x10EF54u);
    ctx->pc = 0x10EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF4Cu;
    // 0x10ef50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EF80u, 0x10EF4Cu, 0x10EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF54u;
label_10ef54:
    // 0x10ef54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef58: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x10EF58u;
    SET_GPR_U32(ctx, 31, 0x10EF60u);
    ctx->pc = 0x10EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF58u;
    // 0x10ef5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x10EF58u, 0x10EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF60u;
label_10ef60:
    // 0x10ef60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ef60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ef64:
    // 0x10ef64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ef64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ef68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ef68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ef6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10ef6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ef70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ef70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ef74: 0x3e00008  jr          $ra
    ctx->pc = 0x10EF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF74u;
        // 0x10ef78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EF7Cu;
    // 0x10ef7c: 0x0  nop
    ctx->pc = 0x10ef7cu;
    // NOP
    ctx->pc = 0x10ef80u;
}
