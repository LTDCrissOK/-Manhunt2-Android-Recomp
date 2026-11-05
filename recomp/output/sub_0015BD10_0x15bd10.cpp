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

// Function: sub_0015BD10
// Address: 0x15bd10 - 0x15bd80
void sub_0015BD10_0x15bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BD10_0x15bd10");
#endif

    switch (ctx->pc) {
        case 0x15bd40u: goto label_15bd40;
        case 0x15bd4cu: goto label_15bd4c;
        case 0x15bd68u: goto label_15bd68;
        default: break;
    }

    ctx->pc = 0x15bd10u;

    // 0x15bd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bd14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15bd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15bd18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15bd1c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x15bd1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15bd20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15bd24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15bd24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd28: 0x92220a20  lbu         $v0, 0xA20($s1)
    ctx->pc = 0x15bd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2592)));
    // 0x15bd2c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x15bd2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15bd30: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x15BD30u;
    {
        const bool branch_taken_0x15bd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd30) {
            ctx->pc = 0x15BD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BD30u;
            // 0x15bd34: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BD6Cu;
            goto label_15bd6c;
        }
    }
    ctx->pc = 0x15BD38u;
    // 0x15bd38: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15BD38u;
    SET_GPR_U32(ctx, 31, 0x15BD40u);
    ctx->pc = 0x15BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BD38u;
    // 0x15bd3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15BD38u, 0x15BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD40u;
label_15bd40:
    // 0x15bd40: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x15bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x15bd44: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x15BD44u;
    SET_GPR_U32(ctx, 31, 0x15BD4Cu);
    ctx->pc = 0x15BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BD44u;
    // 0x15bd48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15BD44u, 0x15BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD4Cu;
label_15bd4c:
    // 0x15bd4c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15bd50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15bd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd54: 0x2032818  mult        $a1, $s0, $v1
    ctx->pc = 0x15bd54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15bd58: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x15bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x15bd5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15bd60: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15BD60u;
    SET_GPR_U32(ctx, 31, 0x15BD68u);
    ctx->pc = 0x15BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BD60u;
    // 0x15bd64: 0xac620388  sw          $v0, 0x388($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 904), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15BD60u, 0x15BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD68u;
label_15bd68:
    // 0x15bd68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15bd68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15bd6c:
    // 0x15bd6c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15bd6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15bd70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15bd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bd74: 0x3e00008  jr          $ra
    ctx->pc = 0x15BD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD74u;
        // 0x15bd78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BD7Cu;
    // 0x15bd7c: 0x0  nop
    ctx->pc = 0x15bd7cu;
    // NOP
    ctx->pc = 0x15bd80u;
}
