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

// Function: sub_002C6A98
// Address: 0x2c6a98 - 0x2c6af8
void sub_002C6A98_0x2c6a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6A98_0x2c6a98");
#endif

    switch (ctx->pc) {
        case 0x2c6ac8u: goto label_2c6ac8;
        case 0x2c6ae8u: goto label_2c6ae8;
        default: break;
    }

    ctx->pc = 0x2c6a98u;

    // 0x2c6a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c6a9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c6a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c6aa0: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C6AA0u;
    {
        const bool branch_taken_0x2c6aa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AA0u;
        // 0x2c6aa4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6aa0) {
            ctx->pc = 0x2C6AE8u;
            goto label_2c6ae8;
        }
    }
    ctx->pc = 0x2C6AA8u;
    // 0x2c6aa8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C6AA8u;
    {
        const bool branch_taken_0x2c6aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AA8u;
        // 0x2c6aac: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6aa8) {
            ctx->pc = 0x2C6AE8u;
            goto label_2c6ae8;
        }
    }
    ctx->pc = 0x2C6AB0u;
    // 0x2c6ab0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c6ab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c6ab4: 0x24845af0  addiu       $a0, $a0, 0x5AF0
    ctx->pc = 0x2c6ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23280));
    // 0x2c6ab8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c6ab8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c6abc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c6abcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c6ac0: 0xc0b187c  jal         func_2C61F0
    ctx->pc = 0x2C6AC0u;
    SET_GPR_U32(ctx, 31, 0x2C6AC8u);
    ctx->pc = 0x2C6AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6AC0u;
    // 0x2c6ac4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C61F0u, 0x2C6AC0u, 0x2C6AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6AC8u;
label_2c6ac8:
    // 0x2c6ac8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c6ac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c6acc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c6accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c6ad0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6ad4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2c6ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2c6ad8: 0x24845b00  addiu       $a0, $a0, 0x5B00
    ctx->pc = 0x2c6ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23296));
    // 0x2c6adc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c6adcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c6ae0: 0xc0b187c  jal         func_2C61F0
    ctx->pc = 0x2C6AE0u;
    SET_GPR_U32(ctx, 31, 0x2C6AE8u);
    ctx->pc = 0x2C6AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6AE0u;
    // 0x2c6ae4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C61F0u, 0x2C6AE0u, 0x2C6AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6AE8u;
label_2c6ae8:
    // 0x2c6ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6aec: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AECu;
        // 0x2c6af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6AF4u;
    // 0x2c6af4: 0x0  nop
    ctx->pc = 0x2c6af4u;
    // NOP
    ctx->pc = 0x2c6af8u;
}
