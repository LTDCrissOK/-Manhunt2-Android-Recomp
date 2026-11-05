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

// Function: sub_00169C88
// Address: 0x169c88 - 0x169cd8
void sub_00169C88_0x169c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169C88_0x169c88");
#endif

    switch (ctx->pc) {
        case 0x169cb0u: goto label_169cb0;
        case 0x169cc0u: goto label_169cc0;
        default: break;
    }

    ctx->pc = 0x169c88u;

    // 0x169c88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169c90: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x169c90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x169c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x169c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x169c9c: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x169c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169ca0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169CA0u;
    {
        const bool branch_taken_0x169ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CA0u;
        // 0x169ca4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ca0) {
            ctx->pc = 0x169CB4u;
            goto label_169cb4;
        }
    }
    ctx->pc = 0x169CA8u;
    // 0x169ca8: 0xc05a798  jal         func_169E60
    ctx->pc = 0x169CA8u;
    SET_GPR_U32(ctx, 31, 0x169CB0u);
    ctx->pc = 0x169CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CA8u;
    // 0x169cac: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E60u, 0x169CA8u, 0x169CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169CB0u;
label_169cb0:
    // 0x169cb0: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x169cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_169cb4:
    // 0x169cb4: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x169cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169cb8: 0xc046290  jal         func_118A40
    ctx->pc = 0x169CB8u;
    SET_GPR_U32(ctx, 31, 0x169CC0u);
    ctx->pc = 0x169CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CB8u;
    // 0x169cbc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x169CB8u, 0x169CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169CC0u;
label_169cc0:
    // 0x169cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169cc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x169cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169cc8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x169cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x169ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x169CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CCCu;
        // 0x169cd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169CD4u;
    // 0x169cd4: 0x0  nop
    ctx->pc = 0x169cd4u;
    // NOP
    ctx->pc = 0x169cd8u;
}
