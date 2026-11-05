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

// Function: sub_001FFA68
// Address: 0x1ffa68 - 0x1ffba8
void sub_001FFA68_0x1ffa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFA68_0x1ffa68");
#endif

    switch (ctx->pc) {
        case 0x1ffae0u: goto label_1ffae0;
        case 0x1ffaf4u: goto label_1ffaf4;
        case 0x1ffb50u: goto label_1ffb50;
        case 0x1ffb64u: goto label_1ffb64;
        default: break;
    }

    ctx->pc = 0x1ffa68u;

    // 0x1ffa68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ffa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ffa6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ffa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ffa70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffa74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ffa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ffa78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ffa78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ffa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ffa80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ffa80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa84: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1ffa84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ffa88: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ffa88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa8c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1ffa8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ffa90: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1ffa90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1ffa94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffa98: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1ffa98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1ffa9c: 0x1222001e  beq         $s1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FFA9Cu;
    {
        const bool branch_taken_0x1ffa9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA9Cu;
        // 0x1ffaa0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa9c) {
            ctx->pc = 0x1FFB18u;
            goto label_1ffb18;
        }
    }
    ctx->pc = 0x1FFAA4u;
    // 0x1ffaa4: 0x2631fffb  addiu       $s1, $s1, -0x5
    ctx->pc = 0x1ffaa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967291));
    // 0x1ffaa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ffaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ffaac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ffaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ffab0: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1ffab0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ffab4: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1ffab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1ffab8: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1ffab8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1ffabc: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x1ffabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ffac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ffac4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ffac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffac8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ffac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffacc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ffaccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ffad0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ffad4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1ffad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1ffad8: 0xc07fe1c  jal         func_1FF870
    ctx->pc = 0x1FFAD8u;
    SET_GPR_U32(ctx, 31, 0x1FFAE0u);
    ctx->pc = 0x1FFADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAD8u;
    // 0x1ffadc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF870u, 0x1FFAD8u, 0x1FFAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAE0u;
label_1ffae0:
    // 0x1ffae0: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1ffae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1ffae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ffae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffae8: 0x8e0600a8  lw          $a2, 0xA8($s0)
    ctx->pc = 0x1ffae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1ffaec: 0xc07fe04  jal         func_1FF810
    ctx->pc = 0x1FFAECu;
    SET_GPR_U32(ctx, 31, 0x1FFAF4u);
    ctx->pc = 0x1FFAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAECu;
    // 0x1ffaf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF810u, 0x1FFAECu, 0x1FFAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAF4u;
label_1ffaf4:
    // 0x1ffaf4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ffaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ffaf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ffaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ffafc: 0x0  nop
    ctx->pc = 0x1ffafcu;
    // NOP
    // 0x1ffb00: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ffb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ffb04: 0x0  nop
    ctx->pc = 0x1ffb04u;
    // NOP
    // 0x1ffb08: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFB08u;
    {
        const bool branch_taken_0x1ffb08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB08u;
        // 0x1ffb0c: 0x26220005  addiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb08) {
            ctx->pc = 0x1FFB14u;
            goto label_1ffb14;
        }
    }
    ctx->pc = 0x1FFB10u;
    // 0x1ffb10: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x1ffb10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_1ffb14:
    // 0x1ffb14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ffb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ffb18:
    // 0x1ffb18: 0x1262001a  beq         $s3, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FFB18u;
    {
        const bool branch_taken_0x1ffb18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB18u;
        // 0x1ffb1c: 0x2673fffb  addiu       $s3, $s3, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb18) {
            ctx->pc = 0x1FFB84u;
            goto label_1ffb84;
        }
    }
    ctx->pc = 0x1FFB20u;
    // 0x1ffb20: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ffb20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ffb24: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x1ffb24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ffb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ffb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb2c: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1ffb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1ffb30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ffb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb34: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x1ffb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffb38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ffb38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ffb3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1ffb3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1ffb40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ffb40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ffb44: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1ffb44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1ffb48: 0xc07fe1c  jal         func_1FF870
    ctx->pc = 0x1FFB48u;
    SET_GPR_U32(ctx, 31, 0x1FFB50u);
    ctx->pc = 0x1FFB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB48u;
    // 0x1ffb4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF870u, 0x1FFB48u, 0x1FFB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB50u;
label_1ffb50:
    // 0x1ffb50: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1ffb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1ffb54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ffb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb58: 0x8e0600a8  lw          $a2, 0xA8($s0)
    ctx->pc = 0x1ffb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1ffb5c: 0xc07fe04  jal         func_1FF810
    ctx->pc = 0x1FFB5Cu;
    SET_GPR_U32(ctx, 31, 0x1FFB64u);
    ctx->pc = 0x1FFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB5Cu;
    // 0x1ffb60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF810u, 0x1FFB5Cu, 0x1FFB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB64u;
label_1ffb64:
    // 0x1ffb64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ffb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ffb68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ffb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ffb6c: 0x0  nop
    ctx->pc = 0x1ffb6cu;
    // NOP
    // 0x1ffb70: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1ffb70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ffb74: 0x0  nop
    ctx->pc = 0x1ffb74u;
    // NOP
    // 0x1ffb78: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFB78u;
    {
        const bool branch_taken_0x1ffb78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB78u;
        // 0x1ffb7c: 0x26620005  addiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb78) {
            ctx->pc = 0x1FFB84u;
            goto label_1ffb84;
        }
    }
    ctx->pc = 0x1FFB80u;
    // 0x1ffb80: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x1ffb80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_1ffb84:
    // 0x1ffb84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffb88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffb8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ffb8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffb90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ffb90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ffb94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ffb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffb98: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1ffb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ffb9c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1ffb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ffba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBA0u;
        // 0x1ffba4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFBA8u;
}
