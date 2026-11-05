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

// Function: sub_0016CE80
// Address: 0x16ce80 - 0x16ced8
void sub_0016CE80_0x16ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CE80_0x16ce80");
#endif

    switch (ctx->pc) {
        case 0x16cea0u: goto label_16cea0;
        case 0x16ceacu: goto label_16ceac;
        case 0x16cec4u: goto label_16cec4;
        default: break;
    }

    ctx->pc = 0x16ce80u;

    // 0x16ce80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ce84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16ce88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16ce8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16ce8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16ce94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16ce94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce98: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16CE98u;
    SET_GPR_U32(ctx, 31, 0x16CEA0u);
    ctx->pc = 0x16CE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE98u;
    // 0x16ce9c: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16CE98u, 0x16CEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CEA0u;
label_16cea0:
    // 0x16cea0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16cea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cea4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x16CEA4u;
    SET_GPR_U32(ctx, 31, 0x16CEACu);
    ctx->pc = 0x16CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CEA4u;
    // 0x16cea8: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x16CEA4u, 0x16CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CEACu;
label_16ceac:
    // 0x16ceac: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x16ceacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16ceb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16ceb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ceb4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x16ceb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x16ceb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16cebc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16CEBCu;
    SET_GPR_U32(ctx, 31, 0x16CEC4u);
    ctx->pc = 0x16CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CEBCu;
    // 0x16cec0: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16CEBCu, 0x16CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CEC4u;
label_16cec4:
    // 0x16cec4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16cec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cec8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16cec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16cecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16ceccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ced0: 0x3e00008  jr          $ra
    ctx->pc = 0x16CED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CED0u;
        // 0x16ced4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CED8u;
}
