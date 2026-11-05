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

// Function: sub_0027D838
// Address: 0x27d838 - 0x27d890
void sub_0027D838_0x27d838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D838_0x27d838");
#endif

    switch (ctx->pc) {
        case 0x27d85cu: goto label_27d85c;
        case 0x27d874u: goto label_27d874;
        default: break;
    }

    ctx->pc = 0x27d838u;

    // 0x27d838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d83c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d840: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27d840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27d844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27d844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d848: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x27d848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27d84c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27d84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d850: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d854: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x27D854u;
    SET_GPR_U32(ctx, 31, 0x27D85Cu);
    ctx->pc = 0x27D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D854u;
    // 0x27d858: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x283100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283100u, 0x27D854u, 0x27D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D85Cu;
label_27d85c:
    // 0x27d85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d860: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27d860u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27d864: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27d864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d868: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27d868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d86c: 0xc09f624  jal         func_27D890
    ctx->pc = 0x27D86Cu;
    SET_GPR_U32(ctx, 31, 0x27D874u);
    ctx->pc = 0x27D870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D86Cu;
    // 0x27d870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D890u, 0x27D86Cu, 0x27D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D874u;
label_27d874:
    // 0x27d874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27d878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27d87c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d880: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x27d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d884: 0x3e00008  jr          $ra
    ctx->pc = 0x27D884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D884u;
        // 0x27d888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D88Cu;
    // 0x27d88c: 0x0  nop
    ctx->pc = 0x27d88cu;
    // NOP
    ctx->pc = 0x27d890u;
}
