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

// Function: sub_0015ABF8
// Address: 0x15abf8 - 0x15ac78
void sub_0015ABF8_0x15abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ABF8_0x15abf8");
#endif

    switch (ctx->pc) {
        case 0x15ac30u: goto label_15ac30;
        case 0x15ac3cu: goto label_15ac3c;
        case 0x15ac50u: goto label_15ac50;
        case 0x15ac60u: goto label_15ac60;
        default: break;
    }

    ctx->pc = 0x15abf8u;

    // 0x15abf8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15abf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15abfc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x15abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15ac00: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x15ac00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15ac04: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ac04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ac08: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15ac0c: 0x24840a28  addiu       $a0, $a0, 0xA28
    ctx->pc = 0x15ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2600));
    // 0x15ac10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15ac14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15ac18: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x15ac18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15ac1c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x15ac1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15ac20: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15AC20u;
    {
        const bool branch_taken_0x15ac20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC20u;
        // 0x15ac24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac20) {
            ctx->pc = 0x15AC64u;
            goto label_15ac64;
        }
    }
    ctx->pc = 0x15AC28u;
    // 0x15ac28: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15AC28u;
    SET_GPR_U32(ctx, 31, 0x15AC30u);
    ctx->pc = 0x15AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AC28u;
    // 0x15ac2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15AC28u, 0x15AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC30u;
label_15ac30:
    // 0x15ac30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ac30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac34: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15AC34u;
    SET_GPR_U32(ctx, 31, 0x15AC3Cu);
    ctx->pc = 0x15AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AC34u;
    // 0x15ac38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15AC34u, 0x15AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC3Cu;
label_15ac3c:
    // 0x15ac3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15AC3Cu;
    {
        const bool branch_taken_0x15ac3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC3Cu;
        // 0x15ac40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac3c) {
            ctx->pc = 0x15AC58u;
            goto label_15ac58;
        }
    }
    ctx->pc = 0x15AC44u;
    // 0x15ac44: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x15ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x15ac48: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15AC48u;
    SET_GPR_U32(ctx, 31, 0x15AC50u);
    ctx->pc = 0x15AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AC48u;
    // 0x15ac4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15AC48u, 0x15AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC50u;
label_15ac50:
    // 0x15ac50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15AC50u;
    {
        const bool branch_taken_0x15ac50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC50u;
        // 0x15ac54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac50) {
            ctx->pc = 0x15AC64u;
            goto label_15ac64;
        }
    }
    ctx->pc = 0x15AC58u;
label_15ac58:
    // 0x15ac58: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15AC58u;
    SET_GPR_U32(ctx, 31, 0x15AC60u);
    ctx->pc = 0x15AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AC58u;
    // 0x15ac5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15AC58u, 0x15AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC60u;
label_15ac60:
    // 0x15ac60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15ac60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ac64:
    // 0x15ac64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15ac64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ac68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15ac68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ac6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ac6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ac70: 0x3e00008  jr          $ra
    ctx->pc = 0x15AC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC70u;
        // 0x15ac74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AC78u;
}
