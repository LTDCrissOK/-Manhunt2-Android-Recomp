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

// Function: sub_002B9A38
// Address: 0x2b9a38 - 0x2b9ad8
void sub_002B9A38_0x2b9a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9A38_0x2b9a38");
#endif

    switch (ctx->pc) {
        case 0x2b9a98u: goto label_2b9a98;
        case 0x2b9ab4u: goto label_2b9ab4;
        case 0x2b9ac8u: goto label_2b9ac8;
        default: break;
    }

    ctx->pc = 0x2b9a38u;

    // 0x2b9a38: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b9a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2b9a3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b9a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b9a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b9a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9a44: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x2b9a44u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x2b9a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9a4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b9a4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9a54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b9a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b9a58: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x2B9A58u;
    {
        const bool branch_taken_0x2b9a58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A58u;
        // 0x2b9a5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a58) {
            ctx->pc = 0x2B9AC8u;
            goto label_2b9ac8;
        }
    }
    ctx->pc = 0x2B9A60u;
    // 0x2b9a60: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2b9a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2b9a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b9a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9a68: 0x0  nop
    ctx->pc = 0x2b9a68u;
    // NOP
    // 0x2b9a6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b9a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9a70: 0x0  nop
    ctx->pc = 0x2b9a70u;
    // NOP
    // 0x2b9a74: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B9A74u;
    {
        const bool branch_taken_0x2b9a74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9a74) {
            ctx->pc = 0x2B9A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9A74u;
            // 0x2b9a78: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9A7Cu;
            goto label_2b9a7c;
        }
    }
    ctx->pc = 0x2B9A7Cu;
label_2b9a7c:
    // 0x2b9a7c: 0x3c0140d0  lui         $at, 0x40D0
    ctx->pc = 0x2b9a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16592 << 16));
    // 0x2b9a80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b9a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b9a84: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x2b9a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x2b9a88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b9a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9a8c: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x2b9a8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2b9a90: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2B9A90u;
    SET_GPR_U32(ctx, 31, 0x2B9A98u);
    ctx->pc = 0x2B9A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A90u;
    // 0x2b9a94: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2B9A90u, 0x2B9A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A98u;
label_2b9a98:
    // 0x2b9a98: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x2b9a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x2b9a9c: 0x2c4300fb  sltiu       $v1, $v0, 0xFB
    ctx->pc = 0x2b9a9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)251) ? 1 : 0);
    // 0x2b9aa0: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x2b9aa0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2b9aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9aa8: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x2b9aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2b9aac: 0xc0ae8ac  jal         func_2BA2B0
    ctx->pc = 0x2B9AACu;
    SET_GPR_U32(ctx, 31, 0x2B9AB4u);
    ctx->pc = 0x2B9AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9AACu;
    // 0x2b9ab0: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA2B0u, 0x2B9AACu, 0x2B9AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AB4u;
label_2b9ab4:
    // 0x2b9ab4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b9ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2b9ab8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2b9ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b9abc: 0x24844d40  addiu       $a0, $a0, 0x4D40
    ctx->pc = 0x2b9abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    // 0x2b9ac0: 0xc0ae67a  jal         func_2B99E8
    ctx->pc = 0x2B9AC0u;
    SET_GPR_U32(ctx, 31, 0x2B9AC8u);
    ctx->pc = 0x2B9AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9AC0u;
    // 0x2b9ac4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B99E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B99E8u, 0x2B9AC0u, 0x2B9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AC8u;
label_2b9ac8:
    // 0x2b9ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9acc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b9accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AD0u;
        // 0x2b9ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9AD8u;
}
