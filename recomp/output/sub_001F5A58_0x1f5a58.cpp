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

// Function: sub_001F5A58
// Address: 0x1f5a58 - 0x1f5ae0
void sub_001F5A58_0x1f5a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5A58_0x1f5a58");
#endif

    switch (ctx->pc) {
        case 0x1f5a98u: goto label_1f5a98;
        case 0x1f5ab0u: goto label_1f5ab0;
        default: break;
    }

    ctx->pc = 0x1f5a58u;

    // 0x1f5a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f5a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5a60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5a64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f5a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a70: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1f5a70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f5a74: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x1f5a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1f5a78: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F5A78u;
    {
        const bool branch_taken_0x1f5a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A78u;
        // 0x1f5a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a78) {
            ctx->pc = 0x1F5AC4u;
            goto label_1f5ac4;
        }
    }
    ctx->pc = 0x1F5A80u;
    // 0x1f5a80: 0x24a2ffd9  addiu       $v0, $a1, -0x27
    ctx->pc = 0x1f5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967257));
    // 0x1f5a84: 0x2c42003b  sltiu       $v0, $v0, 0x3B
    ctx->pc = 0x1f5a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x1f5a88: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1F5A88u;
    {
        const bool branch_taken_0x1f5a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a88) {
            ctx->pc = 0x1F5A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5A88u;
            // 0x1f5a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5AC4u;
            goto label_1f5ac4;
        }
    }
    ctx->pc = 0x1F5A90u;
    // 0x1f5a90: 0xc07d708  jal         func_1F5C20
    ctx->pc = 0x1F5A90u;
    SET_GPR_U32(ctx, 31, 0x1F5A98u);
    ctx->pc = 0x1F5A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A90u;
    // 0x1f5a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5C20u, 0x1F5A90u, 0x1F5A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A98u;
label_1f5a98:
    // 0x1f5a98: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x1f5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1f5a9c: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x1f5a9cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1f5aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5aa4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f5aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5aa8: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F5AA8u;
    SET_GPR_U32(ctx, 31, 0x1F5AB0u);
    ctx->pc = 0x1F5AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AA8u;
    // 0x1f5aac: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F5AA8u, 0x1F5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5AB0u;
label_1f5ab0:
    // 0x1f5ab0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1f5ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5ab4: 0x0  nop
    ctx->pc = 0x1f5ab4u;
    // NOP
    // 0x1f5ab8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5AB8u;
    {
        const bool branch_taken_0x1f5ab8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AB8u;
        // 0x1f5abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ab8) {
            ctx->pc = 0x1F5AC4u;
            goto label_1f5ac4;
        }
    }
    ctx->pc = 0x1F5AC0u;
    // 0x1f5ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5ac4:
    // 0x1f5ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5ad0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1f5ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f5ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AD4u;
        // 0x1f5ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5ADCu;
    // 0x1f5adc: 0x0  nop
    ctx->pc = 0x1f5adcu;
    // NOP
    ctx->pc = 0x1f5ae0u;
}
