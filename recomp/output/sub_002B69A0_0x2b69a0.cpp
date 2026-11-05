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

// Function: sub_002B69A0
// Address: 0x2b69a0 - 0x2b6ac8
void sub_002B69A0_0x2b69a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B69A0_0x2b69a0");
#endif

    switch (ctx->pc) {
        case 0x2b69b4u: goto label_2b69b4;
        case 0x2b6a34u: goto label_2b6a34;
        case 0x2b6aa4u: goto label_2b6aa4;
        default: break;
    }

    ctx->pc = 0x2b69a0u;

    // 0x2b69a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b69a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b69a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b69a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b69a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b69ac: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B69ACu;
    SET_GPR_U32(ctx, 31, 0x2B69B4u);
    ctx->pc = 0x2B69B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69ACu;
    // 0x2b69b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B69ACu, 0x2B69B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69B4u;
label_2b69b4:
    // 0x2b69b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B69B4u;
    {
        const bool branch_taken_0x2b69b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69B4u;
        // 0x2b69b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69b4) {
            ctx->pc = 0x2B69D0u;
            goto label_2b69d0;
        }
    }
    ctx->pc = 0x2B69BCu;
    // 0x2b69bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b69bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b69c0: 0x0  nop
    ctx->pc = 0x2b69c0u;
    // NOP
    // 0x2b69c4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b69c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b69c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B69C8u;
    {
        const bool branch_taken_0x2b69c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b69c8) {
            ctx->pc = 0x2B69E8u;
            goto label_2b69e8;
        }
    }
    ctx->pc = 0x2B69D0u;
label_2b69d0:
    // 0x2b69d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b69d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b69d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b69d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b69d8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b69d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b69dc: 0x0  nop
    ctx->pc = 0x2b69dcu;
    // NOP
    // 0x2b69e0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b69e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b69e4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b69e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b69e8:
    // 0x2b69e8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b69e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b69ec: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b69ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b69f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b69f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b69f4: 0xc6015900  lwc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b69f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b69f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b69f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b69fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b69fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b6a00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b6a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6a04: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b6a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b6a08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b6a08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b6a0c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b6a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6a10: 0x0  nop
    ctx->pc = 0x2b6a10u;
    // NOP
    // 0x2b6a14: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x2B6A14u;
    {
        const bool branch_taken_0x2b6a14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A14u;
        // 0x2b6a18: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a14) {
            ctx->pc = 0x2B6AB4u;
            goto label_2b6ab4;
        }
    }
    ctx->pc = 0x2B6A1Cu;
    // 0x2b6a1c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b6a20: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x2b6a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x2b6a24: 0x1464001d  bne         $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B6A24u;
    {
        const bool branch_taken_0x2b6a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b6a24) {
            ctx->pc = 0x2B6A9Cu;
            goto label_2b6a9c;
        }
    }
    ctx->pc = 0x2B6A2Cu;
    // 0x2b6a2c: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B6A2Cu;
    SET_GPR_U32(ctx, 31, 0x2B6A34u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B6A2Cu, 0x2B6A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A34u;
label_2b6a34:
    // 0x2b6a34: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6A34u;
    {
        const bool branch_taken_0x2b6a34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B6A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A34u;
        // 0x2b6a38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a34) {
            ctx->pc = 0x2B6A50u;
            goto label_2b6a50;
        }
    }
    ctx->pc = 0x2B6A3Cu;
    // 0x2b6a3c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6a40: 0x0  nop
    ctx->pc = 0x2b6a40u;
    // NOP
    // 0x2b6a44: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b6a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b6a48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6A48u;
    {
        const bool branch_taken_0x2b6a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6a48) {
            ctx->pc = 0x2B6A68u;
            goto label_2b6a68;
        }
    }
    ctx->pc = 0x2B6A50u;
label_2b6a50:
    // 0x2b6a50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6a54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b6a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b6a58: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6a5c: 0x0  nop
    ctx->pc = 0x2b6a5cu;
    // NOP
    // 0x2b6a60: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b6a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b6a64: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b6a64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b6a68:
    // 0x2b6a68: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b6a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b6a6c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b6a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b6a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6a74: 0xc6015900  lwc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b6a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6a78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b6a78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b6a7c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b6a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b6a80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b6a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6a84: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b6a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b6a88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b6a88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b6a8c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b6a8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6a90: 0x0  nop
    ctx->pc = 0x2b6a90u;
    // NOP
    // 0x2b6a94: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6A94u;
    {
        const bool branch_taken_0x2b6a94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A94u;
        // 0x2b6a98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a94) {
            ctx->pc = 0x2B6AB8u;
            goto label_2b6ab8;
        }
    }
    ctx->pc = 0x2B6A9Cu;
label_2b6a9c:
    // 0x2b6a9c: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6A9Cu;
    SET_GPR_U32(ctx, 31, 0x2B6AA4u);
    ctx->pc = 0x2B6AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A9Cu;
    // 0x2b6aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6A9Cu, 0x2B6AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6AA4u;
label_2b6aa4:
    // 0x2b6aa4: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2b6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2b6aa8: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2b6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2b6aac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6AACu;
    {
        const bool branch_taken_0x2b6aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AACu;
        // 0x2b6ab0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6aac) {
            ctx->pc = 0x2B6AB8u;
            goto label_2b6ab8;
        }
    }
    ctx->pc = 0x2B6AB4u;
label_2b6ab4:
    // 0x2b6ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6ab8:
    // 0x2b6ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6abc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b6abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AC0u;
        // 0x2b6ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6AC8u;
}
