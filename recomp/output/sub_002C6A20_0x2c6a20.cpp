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

// Function: sub_002C6A20
// Address: 0x2c6a20 - 0x2c6a98
void sub_002C6A20_0x2c6a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6A20_0x2c6a20");
#endif

    switch (ctx->pc) {
        case 0x2c6a64u: goto label_2c6a64;
        case 0x2c6a7cu: goto label_2c6a7c;
        default: break;
    }

    ctx->pc = 0x2c6a20u;

    // 0x2c6a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c6a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c6a24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c6a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c6a28: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c6a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c6a2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c6a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c6a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c6a34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c6a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a38: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2c6a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6a3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c6a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c6a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2c6a44: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2c6a44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c6a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c6a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c6a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a54: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2c6a58: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2c6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2c6a5c: 0xc0b19e2  jal         func_2C6788
    ctx->pc = 0x2C6A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C6A64u);
    ctx->pc = 0x2C6A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6A5Cu;
    // 0x2c6a60: 0xa3a00008  sb          $zero, 0x8($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6788u, 0x2C6A5Cu, 0x2C6A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A64u;
label_2c6a64:
    // 0x2c6a64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c6a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c6a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c6a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6a70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6a74: 0xc0b1a26  jal         func_2C6898
    ctx->pc = 0x2C6A74u;
    SET_GPR_U32(ctx, 31, 0x2C6A7Cu);
    ctx->pc = 0x2C6A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6A74u;
    // 0x2c6a78: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6898u, 0x2C6A74u, 0x2C6A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A7Cu;
label_2c6a7c:
    // 0x2c6a7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c6a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6a80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c6a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c6a84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c6a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6a88: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c6a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6a8c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2c6a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c6a90: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A90u;
        // 0x2c6a94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6A98u;
}
