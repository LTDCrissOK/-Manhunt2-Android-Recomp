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

// Function: sub_00154B08
// Address: 0x154b08 - 0x154b68
void sub_00154B08_0x154b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154B08_0x154b08");
#endif

    switch (ctx->pc) {
        case 0x154b28u: goto label_154b28;
        case 0x154b34u: goto label_154b34;
        case 0x154b50u: goto label_154b50;
        default: break;
    }

    ctx->pc = 0x154b08u;

    // 0x154b08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154b0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x154b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x154b10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x154b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x154b14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x154b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x154b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x154b1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x154b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b20: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x154B20u;
    SET_GPR_U32(ctx, 31, 0x154B28u);
    ctx->pc = 0x154B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B20u;
    // 0x154b24: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x154B20u, 0x154B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B28u;
label_154b28:
    // 0x154b28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x154b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b2c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x154B2Cu;
    SET_GPR_U32(ctx, 31, 0x154B34u);
    ctx->pc = 0x154B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B2Cu;
    // 0x154b30: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x154B2Cu, 0x154B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B34u;
label_154b34:
    // 0x154b34: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x154b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x154b38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x154b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b3c: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x154b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x154b40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x154b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154b44: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x154b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x154b48: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x154B48u;
    SET_GPR_U32(ctx, 31, 0x154B50u);
    ctx->pc = 0x154B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B48u;
    // 0x154b4c: 0xae2204f4  sw          $v0, 0x4F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x154B48u, 0x154B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B50u;
label_154b50:
    // 0x154b50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x154b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154b54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x154b54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154b58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x154B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B5Cu;
        // 0x154b60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154B64u;
    // 0x154b64: 0x0  nop
    ctx->pc = 0x154b64u;
    // NOP
    ctx->pc = 0x154b68u;
}
