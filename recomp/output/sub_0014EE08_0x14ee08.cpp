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

// Function: sub_0014EE08
// Address: 0x14ee08 - 0x14ee68
void sub_0014EE08_0x14ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EE08_0x14ee08");
#endif

    switch (ctx->pc) {
        case 0x14ee28u: goto label_14ee28;
        case 0x14ee34u: goto label_14ee34;
        case 0x14ee50u: goto label_14ee50;
        default: break;
    }

    ctx->pc = 0x14ee08u;

    // 0x14ee08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ee0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14ee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14ee10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14ee10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14ee14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ee14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14ee18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14ee1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14ee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee20: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14EE20u;
    SET_GPR_U32(ctx, 31, 0x14EE28u);
    ctx->pc = 0x14EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE20u;
    // 0x14ee24: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14EE20u, 0x14EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE28u;
label_14ee28:
    // 0x14ee28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14ee28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee2c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14EE2Cu;
    SET_GPR_U32(ctx, 31, 0x14EE34u);
    ctx->pc = 0x14EE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE2Cu;
    // 0x14ee30: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14EE2Cu, 0x14EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE34u;
label_14ee34:
    // 0x14ee34: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14ee38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14ee38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee3c: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x14ee3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14ee40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ee44: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14ee44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14ee48: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14EE48u;
    SET_GPR_U32(ctx, 31, 0x14EE50u);
    ctx->pc = 0x14EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE48u;
    // 0x14ee4c: 0xae2204ec  sw          $v0, 0x4EC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1260), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14EE48u, 0x14EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE50u;
label_14ee50:
    // 0x14ee50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14ee50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ee54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14ee54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ee58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ee58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x14EE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE5Cu;
        // 0x14ee60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EE64u;
    // 0x14ee64: 0x0  nop
    ctx->pc = 0x14ee64u;
    // NOP
    ctx->pc = 0x14ee68u;
}
