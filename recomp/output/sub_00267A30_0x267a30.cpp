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

// Function: sub_00267A30
// Address: 0x267a30 - 0x267e60
void sub_00267A30_0x267a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267A30_0x267a30");
#endif

    switch (ctx->pc) {
        case 0x267a8cu: goto label_267a8c;
        case 0x267aa0u: goto label_267aa0;
        case 0x267b4cu: goto label_267b4c;
        case 0x267cf4u: goto label_267cf4;
        case 0x267d08u: goto label_267d08;
        case 0x267d20u: goto label_267d20;
        case 0x267dd0u: goto label_267dd0;
        case 0x267e0cu: goto label_267e0c;
        case 0x267e48u: goto label_267e48;
        default: break;
    }

    ctx->pc = 0x267a30u;

    // 0x267a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x267a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x267a34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x267a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x267a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x267a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x267a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x267a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x267a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x267a44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x267a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x267a48: 0x92220245  lbu         $v0, 0x245($s1)
    ctx->pc = 0x267a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 581)));
    // 0x267a4c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x267A4Cu;
    {
        const bool branch_taken_0x267a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A4Cu;
        // 0x267a50: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a4c) {
            ctx->pc = 0x267B4Cu;
            goto label_267b4c;
        }
    }
    ctx->pc = 0x267A54u;
    // 0x267a54: 0x8e25024c  lw          $a1, 0x24C($s1)
    ctx->pc = 0x267a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x267a58: 0x8c432b40  lw          $v1, 0x2B40($v0)
    ctx->pc = 0x267a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11072)));
    // 0x267a5c: 0x26260258  addiu       $a2, $s1, 0x258
    ctx->pc = 0x267a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 600));
    // 0x267a60: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x267a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x267a64: 0x8e220248  lw          $v0, 0x248($s1)
    ctx->pc = 0x267a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x267a68: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x267a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x267a6c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x267a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x267a70: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x267a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x267a74: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x267A74u;
    {
        const bool branch_taken_0x267a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A74u;
        // 0x267a78: 0xae25024c  sw          $a1, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a74) {
            ctx->pc = 0x267AA8u;
            goto label_267aa8;
        }
    }
    ctx->pc = 0x267A7Cu;
    // 0x267a7c: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x267a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x267a80: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x267a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a84: 0xc099c44  jal         func_267110
    ctx->pc = 0x267A84u;
    SET_GPR_U32(ctx, 31, 0x267A8Cu);
    ctx->pc = 0x267A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A84u;
    // 0x267a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267110u, 0x267A84u, 0x267A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A8Cu;
label_267a8c:
    // 0x267a8c: 0x92220247  lbu         $v0, 0x247($s1)
    ctx->pc = 0x267a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 583)));
    // 0x267a90: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x267A90u;
    {
        const bool branch_taken_0x267a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A90u;
        // 0x267a94: 0xa2200245  sb          $zero, 0x245($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 581), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a90) {
            ctx->pc = 0x267B44u;
            goto label_267b44;
        }
    }
    ctx->pc = 0x267A98u;
    // 0x267a98: 0xc09a0a6  jal         func_268298
    ctx->pc = 0x267A98u;
    SET_GPR_U32(ctx, 31, 0x267AA0u);
    ctx->pc = 0x267A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A98u;
    // 0x267a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268298u, 0x267A98u, 0x267AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267AA0u;
label_267aa0:
    // 0x267aa0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x267AA0u;
    {
        const bool branch_taken_0x267aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267aa0) {
            ctx->pc = 0x267B44u;
            goto label_267b44;
        }
    }
    ctx->pc = 0x267AA8u;
label_267aa8:
    // 0x267aa8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x267AA8u;
    {
        const bool branch_taken_0x267aa8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x267AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AA8u;
        // 0x267aac: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267aa8) {
            ctx->pc = 0x267AC4u;
            goto label_267ac4;
        }
    }
    ctx->pc = 0x267AB0u;
    // 0x267ab0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x267ab0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267ab4: 0x0  nop
    ctx->pc = 0x267ab4u;
    // NOP
    // 0x267ab8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x267ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x267abc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267ABCu;
    {
        const bool branch_taken_0x267abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267ABCu;
        // 0x267ac0: 0x8e220248  lw          $v0, 0x248($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267abc) {
            ctx->pc = 0x267AE0u;
            goto label_267ae0;
        }
    }
    ctx->pc = 0x267AC4u;
label_267ac4:
    // 0x267ac4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x267ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x267ac8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x267ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x267acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267ad0: 0x0  nop
    ctx->pc = 0x267ad0u;
    // NOP
    // 0x267ad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x267ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x267ad8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x267ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x267adc: 0x8e220248  lw          $v0, 0x248($s1)
    ctx->pc = 0x267adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
label_267ae0:
    // 0x267ae0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267AE0u;
    {
        const bool branch_taken_0x267ae0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x267AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AE0u;
        // 0x267ae4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ae0) {
            ctx->pc = 0x267AFCu;
            goto label_267afc;
        }
    }
    ctx->pc = 0x267AE8u;
    // 0x267ae8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x267ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x267aec: 0x0  nop
    ctx->pc = 0x267aecu;
    // NOP
    // 0x267af0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x267af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x267af4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x267AF4u;
    {
        const bool branch_taken_0x267af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267af4) {
            ctx->pc = 0x267B14u;
            goto label_267b14;
        }
    }
    ctx->pc = 0x267AFCu;
label_267afc:
    // 0x267afc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x267b00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x267b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x267b04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x267b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x267b08: 0x0  nop
    ctx->pc = 0x267b08u;
    // NOP
    // 0x267b0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x267b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x267b10: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x267b10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_267b14:
    // 0x267b14: 0x0  nop
    ctx->pc = 0x267b14u;
    // NOP
    // 0x267b18: 0x0  nop
    ctx->pc = 0x267b18u;
    // NOP
    // 0x267b1c: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x267b1cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x267b20: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x267b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267b24: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x267b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x267b28: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x267b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x267b2c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x267b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267b30: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x267b30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x267b34: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x267b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x267b38: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x267b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267b3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x267b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x267b40: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x267b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_267b44:
    // 0x267b44: 0xc09a26a  jal         func_2689A8
    ctx->pc = 0x267B44u;
    SET_GPR_U32(ctx, 31, 0x267B4Cu);
    ctx->pc = 0x267B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B44u;
    // 0x267b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2689A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689A8u, 0x267B44u, 0x267B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B4Cu;
label_267b4c:
    // 0x267b4c: 0x92220246  lbu         $v0, 0x246($s1)
    ctx->pc = 0x267b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x267b50: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x267B50u;
    {
        const bool branch_taken_0x267b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B50u;
        // 0x267b54: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b50) {
            ctx->pc = 0x267D20u;
            goto label_267d20;
        }
    }
    ctx->pc = 0x267B58u;
    // 0x267b58: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x267b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x267b5c: 0x26270258  addiu       $a3, $s1, 0x258
    ctx->pc = 0x267b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 600));
    // 0x267b60: 0x8c662b40  lw          $a2, 0x2B40($v1)
    ctx->pc = 0x267b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11072)));
    // 0x267b64: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x267b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x267b68: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x267b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267b6c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x267b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x267b70: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267B70u;
    {
        const bool branch_taken_0x267b70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x267B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B70u;
        // 0x267b74: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b70) {
            ctx->pc = 0x267B8Cu;
            goto label_267b8c;
        }
    }
    ctx->pc = 0x267B78u;
    // 0x267b78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x267b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x267b7c: 0x0  nop
    ctx->pc = 0x267b7cu;
    // NOP
    // 0x267b80: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x267b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x267b84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267B84u;
    {
        const bool branch_taken_0x267b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b84) {
            ctx->pc = 0x267BA8u;
            goto label_267ba8;
        }
    }
    ctx->pc = 0x267B8Cu;
label_267b8c:
    // 0x267b8c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x267b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x267b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x267b94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x267b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x267b98: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x267b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x267b9c: 0x0  nop
    ctx->pc = 0x267b9cu;
    // NOP
    // 0x267ba0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x267ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x267ba4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x267ba4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_267ba8:
    // 0x267ba8: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x267BA8u;
    {
        const bool branch_taken_0x267ba8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x267BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BA8u;
        // 0x267bac: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ba8) {
            ctx->pc = 0x267BC4u;
            goto label_267bc4;
        }
    }
    ctx->pc = 0x267BB0u;
    // 0x267bb0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x267bb0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267bb4: 0x0  nop
    ctx->pc = 0x267bb4u;
    // NOP
    // 0x267bb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x267bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x267bbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267BBCu;
    {
        const bool branch_taken_0x267bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BBCu;
        // 0x267bc0: 0xc4e10000  lwc1        $f1, 0x0($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267bbc) {
            ctx->pc = 0x267BE0u;
            goto label_267be0;
        }
    }
    ctx->pc = 0x267BC4u;
label_267bc4:
    // 0x267bc4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x267bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x267bc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x267bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x267bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267bd0: 0x0  nop
    ctx->pc = 0x267bd0u;
    // NOP
    // 0x267bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x267bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x267bd8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x267bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x267bdc: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x267bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_267be0:
    // 0x267be0: 0x0  nop
    ctx->pc = 0x267be0u;
    // NOP
    // 0x267be4: 0x0  nop
    ctx->pc = 0x267be4u;
    // NOP
    // 0x267be8: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x267be8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x267bec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x267becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x267bf0: 0x0  nop
    ctx->pc = 0x267bf0u;
    // NOP
    // 0x267bf4: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x267bf4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267bf8: 0x0  nop
    ctx->pc = 0x267bf8u;
    // NOP
    // 0x267bfc: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x267BFCu;
    {
        const bool branch_taken_0x267bfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267bfc) {
            ctx->pc = 0x267C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267BFCu;
            // 0x267c00: 0xc4e10004  lwc1        $f1, 0x4($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x267C20u;
            goto label_267c20;
        }
    }
    ctx->pc = 0x267C04u;
    // 0x267c04: 0x0  nop
    ctx->pc = 0x267c04u;
    // NOP
    // 0x267c08: 0x0  nop
    ctx->pc = 0x267c08u;
    // NOP
    // 0x267c0c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x267c0cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x267c10: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x267c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x267c14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x267c18: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x267c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x267c1c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x267c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_267c20:
    // 0x267c20: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x267c20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267c24: 0x0  nop
    ctx->pc = 0x267c24u;
    // NOP
    // 0x267c28: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x267C28u;
    {
        const bool branch_taken_0x267c28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267c28) {
            ctx->pc = 0x267C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267C28u;
            // 0x267c2c: 0xc4e10008  lwc1        $f1, 0x8($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x267C4Cu;
            goto label_267c4c;
        }
    }
    ctx->pc = 0x267C30u;
    // 0x267c30: 0x0  nop
    ctx->pc = 0x267c30u;
    // NOP
    // 0x267c34: 0x0  nop
    ctx->pc = 0x267c34u;
    // NOP
    // 0x267c38: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x267c38u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x267c3c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x267c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x267c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x267c44: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x267c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x267c48: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x267c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_267c4c:
    // 0x267c4c: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x267c4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267c50: 0x0  nop
    ctx->pc = 0x267c50u;
    // NOP
    // 0x267c54: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x267C54u;
    {
        const bool branch_taken_0x267c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x267c54) {
            ctx->pc = 0x267C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267C54u;
            // 0x267c58: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x267C78u;
            goto label_267c78;
        }
    }
    ctx->pc = 0x267C5Cu;
    // 0x267c5c: 0x0  nop
    ctx->pc = 0x267c5cu;
    // NOP
    // 0x267c60: 0x0  nop
    ctx->pc = 0x267c60u;
    // NOP
    // 0x267c64: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x267c64u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x267c68: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x267c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x267c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x267c70: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x267c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x267c74: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x267c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_267c78:
    // 0x267c78: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x267c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267c7c: 0x0  nop
    ctx->pc = 0x267c7cu;
    // NOP
    // 0x267c80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x267C80u;
    {
        const bool branch_taken_0x267c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x267C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C80u;
        // 0x267c84: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c80) {
            ctx->pc = 0x267C8Cu;
            goto label_267c8c;
        }
    }
    ctx->pc = 0x267C88u;
    // 0x267c88: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x267c88u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_267c8c:
    // 0x267c8c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x267c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267c90: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x267c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x267c94: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x267c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267c98: 0x0  nop
    ctx->pc = 0x267c98u;
    // NOP
    // 0x267c9c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x267C9Cu;
    {
        const bool branch_taken_0x267c9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x267CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C9Cu;
        // 0x267ca0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c9c) {
            ctx->pc = 0x267CA8u;
            goto label_267ca8;
        }
    }
    ctx->pc = 0x267CA4u;
    // 0x267ca4: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x267ca4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_267ca8:
    // 0x267ca8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x267ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267cac: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x267cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267cb0: 0x0  nop
    ctx->pc = 0x267cb0u;
    // NOP
    // 0x267cb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x267CB4u;
    {
        const bool branch_taken_0x267cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x267CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CB4u;
        // 0x267cb8: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cb4) {
            ctx->pc = 0x267CC0u;
            goto label_267cc0;
        }
    }
    ctx->pc = 0x267CBCu;
    // 0x267cbc: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x267cbcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_267cc0:
    // 0x267cc0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x267cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x267cc4: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x267cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x267cc8: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x267cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x267ccc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x267cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x267cd0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x267CD0u;
    {
        const bool branch_taken_0x267cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CD0u;
        // 0x267cd4: 0x8e422b40  lw          $v0, 0x2B40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cd0) {
            ctx->pc = 0x267D10u;
            goto label_267d10;
        }
    }
    ctx->pc = 0x267CD8u;
    // 0x267cd8: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x267cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x267cdc: 0xae200254  sw          $zero, 0x254($s1)
    ctx->pc = 0x267cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 0));
    // 0x267ce0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x267CE0u;
    {
        const bool branch_taken_0x267ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CE0u;
        // 0x267ce4: 0xa2200293  sb          $zero, 0x293($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 659), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ce0) {
            ctx->pc = 0x267CECu;
            goto label_267cec;
        }
    }
    ctx->pc = 0x267CE8u;
    // 0x267ce8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x267ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_267cec:
    // 0x267cec: 0xc099c44  jal         func_267110
    ctx->pc = 0x267CECu;
    SET_GPR_U32(ctx, 31, 0x267CF4u);
    ctx->pc = 0x267CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267CECu;
    // 0x267cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267110u, 0x267CECu, 0x267CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267CF4u;
label_267cf4:
    // 0x267cf4: 0x92220247  lbu         $v0, 0x247($s1)
    ctx->pc = 0x267cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 583)));
    // 0x267cf8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267CF8u;
    {
        const bool branch_taken_0x267cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CF8u;
        // 0x267cfc: 0xa2200246  sb          $zero, 0x246($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 582), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cf8) {
            ctx->pc = 0x267D18u;
            goto label_267d18;
        }
    }
    ctx->pc = 0x267D00u;
    // 0x267d00: 0xc09a07e  jal         func_2681F8
    ctx->pc = 0x267D00u;
    SET_GPR_U32(ctx, 31, 0x267D08u);
    ctx->pc = 0x267D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D00u;
    // 0x267d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2681F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2681F8u, 0x267D00u, 0x267D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D08u;
label_267d08:
    // 0x267d08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267D08u;
    {
        const bool branch_taken_0x267d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267d08) {
            ctx->pc = 0x267D18u;
            goto label_267d18;
        }
    }
    ctx->pc = 0x267D10u;
label_267d10:
    // 0x267d10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x267d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267d14: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x267d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
label_267d18:
    // 0x267d18: 0xc09a26a  jal         func_2689A8
    ctx->pc = 0x267D18u;
    SET_GPR_U32(ctx, 31, 0x267D20u);
    ctx->pc = 0x267D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D18u;
    // 0x267d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2689A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689A8u, 0x267D18u, 0x267D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D20u;
label_267d20:
    // 0x267d20: 0x8e260224  lw          $a2, 0x224($s1)
    ctx->pc = 0x267d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x267d24: 0x10c00049  beqz        $a2, . + 4 + (0x49 << 2)
    ctx->pc = 0x267D24u;
    {
        const bool branch_taken_0x267d24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D24u;
        // 0x267d28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d24) {
            ctx->pc = 0x267E4Cu;
            goto label_267e4c;
        }
    }
    ctx->pc = 0x267D2Cu;
    // 0x267d2c: 0x8e22022c  lw          $v0, 0x22C($s1)
    ctx->pc = 0x267d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x267d30: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x267D30u;
    {
        const bool branch_taken_0x267d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D30u;
        // 0x267d34: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d30) {
            ctx->pc = 0x267E4Cu;
            goto label_267e4c;
        }
    }
    ctx->pc = 0x267D38u;
    // 0x267d38: 0x8e220240  lw          $v0, 0x240($s1)
    ctx->pc = 0x267d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x267d3c: 0x8c642b40  lw          $a0, 0x2B40($v1)
    ctx->pc = 0x267d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11072)));
    // 0x267d40: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x267d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x267d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267d48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x267d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x267d4c: 0x10c50010  beq         $a2, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x267D4Cu;
    {
        const bool branch_taken_0x267d4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x267D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D4Cu;
        // 0x267d50: 0xae220240  sw          $v0, 0x240($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d4c) {
            ctx->pc = 0x267D90u;
            goto label_267d90;
        }
    }
    ctx->pc = 0x267D54u;
    // 0x267d54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x267d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267d58: 0x54c2002e  bnel        $a2, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x267D58u;
    {
        const bool branch_taken_0x267d58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x267d58) {
            ctx->pc = 0x267D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267D58u;
            // 0x267d5c: 0x8e230228  lw          $v1, 0x228($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267E14u;
            goto label_267e14;
        }
    }
    ctx->pc = 0x267D60u;
    // 0x267d60: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x267d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x267d64: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x267d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x267d68: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x267d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x267d6c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x267D6Cu;
    {
        const bool branch_taken_0x267d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267d6c) {
            ctx->pc = 0x267D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267D6Cu;
            // 0x267d70: 0x8e230238  lw          $v1, 0x238($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267D78u;
            goto label_267d78;
        }
    }
    ctx->pc = 0x267D74u;
    // 0x267d74: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x267d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_267d78:
    // 0x267d78: 0x8e220240  lw          $v0, 0x240($s1)
    ctx->pc = 0x267d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x267d7c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x267d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x267d80: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x267D80u;
    {
        const bool branch_taken_0x267d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267d80) {
            ctx->pc = 0x267D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267D80u;
            // 0x267d84: 0x8e230228  lw          $v1, 0x228($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267E14u;
            goto label_267e14;
        }
    }
    ctx->pc = 0x267D88u;
    // 0x267d88: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x267D88u;
    {
        const bool branch_taken_0x267d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D88u;
        // 0x267d8c: 0x92220295  lbu         $v0, 0x295($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 661)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d88) {
            ctx->pc = 0x267DFCu;
            goto label_267dfc;
        }
    }
    ctx->pc = 0x267D90u;
label_267d90:
    // 0x267d90: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x267d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x267d94: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x267d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x267d98: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x267d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x267d9c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x267D9Cu;
    {
        const bool branch_taken_0x267d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267d9c) {
            ctx->pc = 0x267DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267D9Cu;
            // 0x267da0: 0x8e300238  lw          $s0, 0x238($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267DA8u;
            goto label_267da8;
        }
    }
    ctx->pc = 0x267DA4u;
    // 0x267da4: 0x8e300230  lw          $s0, 0x230($s1)
    ctx->pc = 0x267da4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_267da8:
    // 0x267da8: 0x8e220240  lw          $v0, 0x240($s1)
    ctx->pc = 0x267da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x267dac: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x267dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x267db0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x267DB0u;
    {
        const bool branch_taken_0x267db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267db0) {
            ctx->pc = 0x267DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267DB0u;
            // 0x267db4: 0x92220295  lbu         $v0, 0x295($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 661)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267DFCu;
            goto label_267dfc;
        }
    }
    ctx->pc = 0x267DB8u;
    // 0x267db8: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x267db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x267dbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x267dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267dc0: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x267DC0u;
    {
        const bool branch_taken_0x267dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x267dc0) {
            ctx->pc = 0x267DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267DC0u;
            // 0x267dc4: 0x8e230228  lw          $v1, 0x228($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267E14u;
            goto label_267e14;
        }
    }
    ctx->pc = 0x267DC8u;
    // 0x267dc8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x267DC8u;
    SET_GPR_U32(ctx, 31, 0x267DD0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x267DC8u, 0x267DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DD0u;
label_267dd0:
    // 0x267dd0: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x267dd0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x267dd4: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x267dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x267dd8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x267DD8u;
    {
        const bool branch_taken_0x267dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x267dd8) {
            ctx->pc = 0x267DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267DD8u;
            // 0x267ddc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x267DE0u;
            goto label_267de0;
        }
    }
    ctx->pc = 0x267DE0u;
label_267de0:
    // 0x267de0: 0x2010  mfhi        $a0
    ctx->pc = 0x267de0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x267de4: 0x203001b  divu        $zero, $s0, $v1
    ctx->pc = 0x267de4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x267de8: 0x1012  mflo        $v0
    ctx->pc = 0x267de8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x267dec: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x267decu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x267df0: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x267DF0u;
    {
        const bool branch_taken_0x267df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x267df0) {
            ctx->pc = 0x267DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267DF0u;
            // 0x267df4: 0x8e230228  lw          $v1, 0x228($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267E14u;
            goto label_267e14;
        }
    }
    ctx->pc = 0x267DF8u;
    // 0x267df8: 0x92220295  lbu         $v0, 0x295($s1)
    ctx->pc = 0x267df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 661)));
label_267dfc:
    // 0x267dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x267e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x267e04: 0xc09a26a  jal         func_2689A8
    ctx->pc = 0x267E04u;
    SET_GPR_U32(ctx, 31, 0x267E0Cu);
    ctx->pc = 0x267E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267E04u;
    // 0x267e08: 0xa2220295  sb          $v0, 0x295($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 661), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2689A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689A8u, 0x267E04u, 0x267E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267E0Cu;
label_267e0c:
    // 0x267e0c: 0xae200240  sw          $zero, 0x240($s1)
    ctx->pc = 0x267e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 0));
    // 0x267e10: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x267e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_267e14:
    // 0x267e14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x267e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x267e18: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x267E18u;
    {
        const bool branch_taken_0x267e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x267E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E18u;
        // 0x267e1c: 0x8e432b40  lw          $v1, 0x2B40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e18) {
            ctx->pc = 0x267E48u;
            goto label_267e48;
        }
    }
    ctx->pc = 0x267E20u;
    // 0x267e20: 0x8e22022c  lw          $v0, 0x22C($s1)
    ctx->pc = 0x267e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x267e24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x267e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267e28: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267E28u;
    {
        const bool branch_taken_0x267e28 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x267E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E28u;
        // 0x267e2c: 0xae22022c  sw          $v0, 0x22C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e28) {
            ctx->pc = 0x267E48u;
            goto label_267e48;
        }
    }
    ctx->pc = 0x267E30u;
    // 0x267e30: 0x92220244  lbu         $v0, 0x244($s1)
    ctx->pc = 0x267e30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x267e34: 0xae200240  sw          $zero, 0x240($s1)
    ctx->pc = 0x267e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 0));
    // 0x267e38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267E38u;
    {
        const bool branch_taken_0x267e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E38u;
        // 0x267e3c: 0xae20022c  sw          $zero, 0x22C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e38) {
            ctx->pc = 0x267E48u;
            goto label_267e48;
        }
    }
    ctx->pc = 0x267E40u;
    // 0x267e40: 0xc09a0a6  jal         func_268298
    ctx->pc = 0x267E40u;
    SET_GPR_U32(ctx, 31, 0x267E48u);
    ctx->pc = 0x267E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267E40u;
    // 0x267e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268298u, 0x267E40u, 0x267E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267E48u;
label_267e48:
    // 0x267e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x267e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_267e4c:
    // 0x267e4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x267e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x267e50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x267e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267e54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x267e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x267e58: 0x3e00008  jr          $ra
    ctx->pc = 0x267E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E58u;
        // 0x267e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267E60u;
}
