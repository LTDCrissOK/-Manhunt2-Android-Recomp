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

// Function: sub_003918B0
// Address: 0x3918b0 - 0x391bd8
void sub_003918B0_0x3918b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003918B0_0x3918b0");
#endif

    ctx->pc = 0x3918b0u;

    // 0x3918b0: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x3918b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3918b4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3918b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3918b8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x3918b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x3918bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3918bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3918c0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3918c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3918c4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3918C4u;
    {
        const bool branch_taken_0x3918c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3918C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918C4u;
        // 0x3918c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3918c4) {
            ctx->pc = 0x391928u;
            goto label_391928;
        }
    }
    ctx->pc = 0x3918CCu;
    // 0x3918cc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3918ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3918d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3918d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3918d4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x3918d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x3918d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3918D8u;
    {
        const bool branch_taken_0x3918d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3918DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918D8u;
        // 0x3918dc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3918d8) {
            ctx->pc = 0x3918E8u;
            goto label_3918e8;
        }
    }
    ctx->pc = 0x3918E0u;
    // 0x3918e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3918E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3918E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918E0u;
        // 0x3918e4: 0xc4409e1c  lwc1        $f0, -0x61E4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3918E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3918E8u;
label_3918e8:
    // 0x3918e8: 0x4e10009  bgez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3918E8u;
    {
        const bool branch_taken_0x3918e8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x3918ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918E8u;
        // 0x3918ec: 0x2408ffe7  addiu       $t0, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3918e8) {
            ctx->pc = 0x391910u;
            goto label_391910;
        }
    }
    ctx->pc = 0x3918F0u;
    // 0x3918f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3918f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3918f4: 0x46000041  sub.s       $f1, $f0, $f0
    ctx->pc = 0x3918f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[0]);
    // 0x3918f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3918f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3918fc: 0x0  nop
    ctx->pc = 0x3918fcu;
    // NOP
    // 0x391900: 0x0  nop
    ctx->pc = 0x391900u;
    // NOP
    // 0x391904: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x391904u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x391908: 0x3e00008  jr          $ra
    ctx->pc = 0x391908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391910u;
label_391910:
    // 0x391910: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x391910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x391914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391918: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x391918u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39191c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x39191cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x391920: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x391920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x391924: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x391924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_391928:
    // 0x391928: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x391928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x39192c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391930: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x391930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x391934: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391934u;
    {
        const bool branch_taken_0x391934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391934u;
        // 0x391938: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391934) {
            ctx->pc = 0x391948u;
            goto label_391948;
        }
    }
    ctx->pc = 0x39193Cu;
    // 0x39193c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x39193cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x391940: 0x3e00008  jr          $ra
    ctx->pc = 0x391940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391940u;
        // 0x391944: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391948u;
label_391948:
    // 0x391948: 0x735c3  sra         $a2, $a3, 23
    ctx->pc = 0x391948u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 23));
    // 0x39194c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x39194cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x391950: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x391950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x391954: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x391954u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x391958: 0x3463fb20  ori         $v1, $v1, 0xFB20
    ctx->pc = 0x391958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64288);
    // 0x39195c: 0x2502ff81  addiu       $v0, $t0, -0x7F
    ctx->pc = 0x39195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967169));
    // 0x391960: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x391960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x391964: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x391964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x391968: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x391968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39196c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39196cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x391970: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x391970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x391974: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x391974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x391978: 0xe22025  or          $a0, $a3, $v0
    ctx->pc = 0x391978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x39197c: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x39197cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x391980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x391980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x391984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391988: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x391988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x39198c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x39198cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391990: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x391990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x391994: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x391994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x391998: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x391998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x39199c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x39199Cu;
    {
        const bool branch_taken_0x39199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3919A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39199Cu;
        // 0x3919a0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39199c) {
            ctx->pc = 0x391A54u;
            goto label_391a54;
        }
    }
    ctx->pc = 0x3919A4u;
    // 0x3919a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3919a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3919a8: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x3919a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3919ac: 0x0  nop
    ctx->pc = 0x3919acu;
    // NOP
    // 0x3919b0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x3919B0u;
    {
        const bool branch_taken_0x3919b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3919b0) {
            ctx->pc = 0x3919B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3919B0u;
            // 0x3919b4: 0x460c6082  mul.s       $f2, $f12, $f12 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3919F0u;
            goto label_3919f0;
        }
    }
    ctx->pc = 0x3919B8u;
    // 0x3919b8: 0x11000084  beqz        $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x3919B8u;
    {
        const bool branch_taken_0x3919b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3919b8) {
            ctx->pc = 0x391BCCu;
            goto label_391bcc;
        }
    }
    ctx->pc = 0x3919C0u;
    // 0x3919c0: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x3919c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x3919c4: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x3919c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x3919c8: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x3919c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x3919cc: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x3919ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x3919d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3919d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3919d4: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x3919d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x3919d8: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x3919d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x3919dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3919dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3919e0: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x3919e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x3919e4: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x3919e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x3919e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3919E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3919ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919E8u;
        // 0x3919ec: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3919E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3919F0u;
label_3919f0:
    // 0x3919f0: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x3919f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x3919f4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3919f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3919f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3919f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3919fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3919fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x391a00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391a04: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x391a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x391a08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x391a08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x391a0c: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x391A0Cu;
    {
        const bool branch_taken_0x391a0c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x391A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A0Cu;
        // 0x391a10: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a0c) {
            ctx->pc = 0x391A1Cu;
            goto label_391a1c;
        }
    }
    ctx->pc = 0x391A14u;
    // 0x391a14: 0x3e00008  jr          $ra
    ctx->pc = 0x391A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A14u;
        // 0x391a18: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391A1Cu;
label_391a1c:
    // 0x391a1c: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x391a1cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x391a20: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x391a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x391a24: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x391a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x391a28: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x391a28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x391a2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391a30: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x391a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x391a34: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x391a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x391a38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391a3c: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x391a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x391a40: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x391a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x391a44: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x391a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x391a48: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x391a48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x391a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x391A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A4Cu;
        // 0x391a50: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391A54u;
label_391a54:
    // 0x391a54: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x391a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x391a58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391a5c: 0x3c03ffcf  lui         $v1, 0xFFCF
    ctx->pc = 0x391a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65487 << 16));
    // 0x391a60: 0x3c013e17  lui         $at, 0x3E17
    ctx->pc = 0x391a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15895 << 16));
    // 0x391a64: 0x34218897  ori         $at, $at, 0x8897
    ctx->pc = 0x391a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34967);
    // 0x391a68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391a6c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x391a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x391a70: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x391a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x391a74: 0x3c013e3a  lui         $at, 0x3E3A
    ctx->pc = 0x391a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15930 << 16));
    // 0x391a78: 0x34213325  ori         $at, $at, 0x3325
    ctx->pc = 0x391a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13093);
    // 0x391a7c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x391a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x391a80: 0x3c013e1c  lui         $at, 0x3E1C
    ctx->pc = 0x391a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15900 << 16));
    // 0x391a84: 0x3421d04f  ori         $at, $at, 0xD04F
    ctx->pc = 0x391a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53327);
    // 0x391a88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x391a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x391a8c: 0x34635c30  ori         $v1, $v1, 0x5C30
    ctx->pc = 0x391a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23600);
    // 0x391a90: 0x3c013e63  lui         $at, 0x3E63
    ctx->pc = 0x391a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15971 << 16));
    // 0x391a94: 0x34218e29  ori         $at, $at, 0x8E29
    ctx->pc = 0x391a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36393);
    // 0x391a98: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x391a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x391a9c: 0x3442c288  ori         $v0, $v0, 0xC288
    ctx->pc = 0x391a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49800);
    // 0x391aa0: 0x0  nop
    ctx->pc = 0x391aa0u;
    // NOP
    // 0x391aa4: 0x0  nop
    ctx->pc = 0x391aa4u;
    // NOP
    // 0x391aa8: 0x46006283  div.s       $f10, $f12, $f0
    ctx->pc = 0x391aa8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x391aac: 0x3c013e92  lui         $at, 0x3E92
    ctx->pc = 0x391aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16018 << 16));
    // 0x391ab0: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x391ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
    // 0x391ab4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x391ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x391ab8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x391ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x391abc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x391abcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x391ac0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x391ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x391ac4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x391ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x391ac8: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x391ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x391acc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x391accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x391ad0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x391ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x391ad4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x391ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x391ad8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x391adc: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x391adcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x391ae0: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x391ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x391ae4: 0x460a50c2  mul.s       $f3, $f10, $f10
    ctx->pc = 0x391ae4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x391ae8: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x391ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x391aec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x391aecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x391af0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x391af0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x391af4: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x391af4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x391af8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x391af8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x391afc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x391afcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x391b00: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x391b00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x391b04: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x391b04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x391b08: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x391b08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x391b0c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x391b0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x391b10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x391b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x391b14: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x391b14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x391b18: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x391b18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x391b1c: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x391B1Cu;
    {
        const bool branch_taken_0x391b1c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x391B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B1Cu;
        // 0x391b20: 0x46001880  add.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b1c) {
            ctx->pc = 0x391B88u;
            goto label_391b88;
        }
    }
    ctx->pc = 0x391B24u;
    // 0x391b24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x391b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x391b28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391b2c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x391b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x391b30: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x391B30u;
    {
        const bool branch_taken_0x391b30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x391B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B30u;
        // 0x391b34: 0x460c0102  mul.s       $f4, $f0, $f12 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b30) {
            ctx->pc = 0x391B4Cu;
            goto label_391b4c;
        }
    }
    ctx->pc = 0x391B38u;
    // 0x391b38: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x391b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x391b3c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x391b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x391b40: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x391b40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x391b44: 0x3e00008  jr          $ra
    ctx->pc = 0x391B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B44u;
        // 0x391b48: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391B4Cu;
label_391b4c:
    // 0x391b4c: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x391b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x391b50: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x391b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x391b54: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x391b54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x391b58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391b5c: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x391b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x391b60: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x391b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x391b64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x391b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x391b68: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x391b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x391b6c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x391b6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x391b70: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x391b70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x391b74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x391b74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x391b78: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x391b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x391b7c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x391b7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x391b80: 0x3e00008  jr          $ra
    ctx->pc = 0x391B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B80u;
        // 0x391b84: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391B88u;
label_391b88:
    // 0x391b88: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391B88u;
    {
        const bool branch_taken_0x391b88 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x391B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B88u;
        // 0x391b8c: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391b88) {
            ctx->pc = 0x391B9Cu;
            goto label_391b9c;
        }
    }
    ctx->pc = 0x391B90u;
    // 0x391b90: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x391b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x391b94: 0x3e00008  jr          $ra
    ctx->pc = 0x391B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391B94u;
        // 0x391b98: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391B9Cu;
label_391b9c:
    // 0x391b9c: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x391b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x391ba0: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x391ba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x391ba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391ba8: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x391ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x391bac: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x391bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x391bb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x391bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x391bb4: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x391bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x391bb8: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x391bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x391bbc: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x391bbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x391bc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x391bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x391bc4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x391bc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x391bc8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x391bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_391bcc:
    // 0x391bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x391BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391BD4u;
    // 0x391bd4: 0x0  nop
    ctx->pc = 0x391bd4u;
    // NOP
    ctx->pc = 0x391bd8u;
}
