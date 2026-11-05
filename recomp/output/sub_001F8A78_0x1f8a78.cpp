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

// Function: sub_001F8A78
// Address: 0x1f8a78 - 0x1f8f58
void sub_001F8A78_0x1f8a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8A78_0x1f8a78");
#endif

    switch (ctx->pc) {
        case 0x1f8b10u: goto label_1f8b10;
        case 0x1f8b24u: goto label_1f8b24;
        case 0x1f8b34u: goto label_1f8b34;
        case 0x1f8bbcu: goto label_1f8bbc;
        case 0x1f8ca4u: goto label_1f8ca4;
        case 0x1f8cc8u: goto label_1f8cc8;
        case 0x1f8cf4u: goto label_1f8cf4;
        case 0x1f8e0cu: goto label_1f8e0c;
        case 0x1f8ec4u: goto label_1f8ec4;
        case 0x1f8eccu: goto label_1f8ecc;
        case 0x1f8ee0u: goto label_1f8ee0;
        case 0x1f8f00u: goto label_1f8f00;
        case 0x1f8f28u: goto label_1f8f28;
        default: break;
    }

    ctx->pc = 0x1f8a78u;

    // 0x1f8a78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f8a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f8a7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f8a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f8a80: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f8a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f8a84: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f8a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a88: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f8a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f8a8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f8a8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a90: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1f8a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1f8a94: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f8a94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f8a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f8a9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f8a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f8aa0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f8aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f8aa4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1f8aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1f8aa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f8aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f8aac: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1f8aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f8ab0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1f8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f8ab4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8AB4u;
    {
        const bool branch_taken_0x1f8ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AB4u;
        // 0x1f8ab8: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ab4) {
            ctx->pc = 0x1F8AD0u;
            goto label_1f8ad0;
        }
    }
    ctx->pc = 0x1F8ABCu;
    // 0x1f8abc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8ac0: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1f8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1f8ac4: 0x2c420168  sltiu       $v0, $v0, 0x168
    ctx->pc = 0x1f8ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)360) ? 1 : 0);
    // 0x1f8ac8: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F8AC8u;
    {
        const bool branch_taken_0x1f8ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ac8) {
            ctx->pc = 0x1F8ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8AC8u;
            // 0x1f8acc: 0xc4800020  lwc1        $f0, 0x20($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8B3Cu;
            goto label_1f8b3c;
        }
    }
    ctx->pc = 0x1F8AD0u;
label_1f8ad0:
    // 0x1f8ad0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1f8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1f8ad4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8AD4u;
    {
        const bool branch_taken_0x1f8ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AD4u;
        // 0x1f8ad8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ad4) {
            ctx->pc = 0x1F8AF4u;
            goto label_1f8af4;
        }
    }
    ctx->pc = 0x1F8ADCu;
    // 0x1f8adc: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x1f8adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1f8ae0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1f8ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1f8ae4: 0x2844003f  slti        $a0, $v0, 0x3F
    ctx->pc = 0x1f8ae4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1f8ae8: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x1f8ae8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1f8aec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8AECu;
    {
        const bool branch_taken_0x1f8aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AECu;
        // 0x1f8af0: 0x38840  sll         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8aec) {
            ctx->pc = 0x1F8AF8u;
            goto label_1f8af8;
        }
    }
    ctx->pc = 0x1F8AF4u;
label_1f8af4:
    // 0x1f8af4: 0x9091001c  lbu         $s1, 0x1C($a0)
    ctx->pc = 0x1f8af4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_1f8af8:
    // 0x1f8af8: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x1f8af8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x1f8afc: 0xc4ac0018  lwc1        $f12, 0x18($a1)
    ctx->pc = 0x1f8afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f8b00: 0x26109c38  addiu       $s0, $s0, -0x63C8
    ctx->pc = 0x1f8b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941752));
    // 0x1f8b04: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f8b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b08: 0xc080786  jal         func_201E18
    ctx->pc = 0x1F8B08u;
    SET_GPR_U32(ctx, 31, 0x1F8B10u);
    ctx->pc = 0x1F8B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B08u;
    // 0x1f8b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E18u, 0x1F8B08u, 0x1F8B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B10u;
label_1f8b10:
    // 0x1f8b10: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f8b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b18: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f8b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b1c: 0xc08075e  jal         func_201D78
    ctx->pc = 0x1F8B1Cu;
    SET_GPR_U32(ctx, 31, 0x1F8B24u);
    ctx->pc = 0x1F8B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B1Cu;
    // 0x1f8b20: 0x8c460060  lw          $a2, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D78u, 0x1F8B1Cu, 0x1F8B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B24u;
label_1f8b24:
    // 0x1f8b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b28: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f8b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b2c: 0xc080738  jal         func_201CE0
    ctx->pc = 0x1F8B2Cu;
    SET_GPR_U32(ctx, 31, 0x1F8B34u);
    ctx->pc = 0x1F8B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B2Cu;
    // 0x1f8b30: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201CE0u, 0x1F8B2Cu, 0x1F8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B34u;
label_1f8b34:
    // 0x1f8b34: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x1F8B34u;
    {
        const bool branch_taken_0x1f8b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B34u;
        // 0x1f8b38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b34) {
            ctx->pc = 0x1F8F2Cu;
            goto label_1f8f2c;
        }
    }
    ctx->pc = 0x1F8B3Cu;
label_1f8b3c:
    // 0x1f8b3c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1f8b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1f8b40: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8b44: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1f8b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f8b48: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1f8b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8b4c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x1f8b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8b50: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x1f8b50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8b54: 0x0  nop
    ctx->pc = 0x1f8b54u;
    // NOP
    // 0x1f8b58: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1F8B58u;
    {
        const bool branch_taken_0x1f8b58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B58u;
        // 0x1f8b5c: 0x3c17004a  lui         $s7, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b58) {
            ctx->pc = 0x1F8BC4u;
            goto label_1f8bc4;
        }
    }
    ctx->pc = 0x1F8B60u;
    // 0x1f8b60: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1f8b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8b64: 0x0  nop
    ctx->pc = 0x1f8b64u;
    // NOP
    // 0x1f8b68: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8B68u;
    {
        const bool branch_taken_0x1f8b68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8b68) {
            ctx->pc = 0x1F8B8Cu;
            goto label_1f8b8c;
        }
    }
    ctx->pc = 0x1F8B70u;
    // 0x1f8b70: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1f8b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x1f8b74: 0x3421c290  ori         $at, $at, 0xC290
    ctx->pc = 0x1f8b74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49808);
    // 0x1f8b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8b7c: 0x0  nop
    ctx->pc = 0x1f8b7cu;
    // NOP
    // 0x1f8b80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8b84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8B84u;
    {
        const bool branch_taken_0x1f8b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B84u;
        // 0x1f8b88: 0x46001069  min.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = std::min(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b84) {
            ctx->pc = 0x1F8BA4u;
            goto label_1f8ba4;
        }
    }
    ctx->pc = 0x1F8B8Cu;
label_1f8b8c:
    // 0x1f8b8c: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1f8b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x1f8b90: 0x3421c290  ori         $at, $at, 0xC290
    ctx->pc = 0x1f8b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49808);
    // 0x1f8b94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8b98: 0x0  nop
    ctx->pc = 0x1f8b98u;
    // NOP
    // 0x1f8b9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f8b9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f8ba0: 0x46001068  max.s       $f1, $f2, $f0
    ctx->pc = 0x1f8ba0u;
    ctx->f[1] = std::max(ctx->f[2], ctx->f[0]);
label_1f8ba4:
    // 0x1f8ba4: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x1f8ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x1f8ba8: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1f8ba8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1f8bac: 0x26049c38  addiu       $a0, $s0, -0x63C8
    ctx->pc = 0x1f8bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941752));
    // 0x1f8bb0: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1f8bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f8bb4: 0xc080786  jal         func_201E18
    ctx->pc = 0x1F8BB4u;
    SET_GPR_U32(ctx, 31, 0x1F8BBCu);
    ctx->pc = 0x1F8BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8BB4u;
    // 0x1f8bb8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E18u, 0x1F8BB4u, 0x1F8BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8BBCu;
label_1f8bbc:
    // 0x1f8bbc: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x1f8bbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bc0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f8bc4:
    // 0x1f8bc4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f8bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8bc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f8bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bcc: 0x9051001c  lbu         $s1, 0x1C($v0)
    ctx->pc = 0x1f8bccu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1f8bd0: 0x80c30080  lb          $v1, 0x80($a2)
    ctx->pc = 0x1f8bd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x1f8bd4: 0x10640091  beq         $v1, $a0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1F8BD4u;
    {
        const bool branch_taken_0x1f8bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BD4u;
        // 0x1f8bd8: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bd4) {
            ctx->pc = 0x1F8E1Cu;
            goto label_1f8e1c;
        }
    }
    ctx->pc = 0x1F8BDCu;
    // 0x1f8bdc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f8be0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F8BE0u;
    {
        const bool branch_taken_0x1f8be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BE0u;
        // 0x1f8be4: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8be0) {
            ctx->pc = 0x1F8C60u;
            goto label_1f8c60;
        }
    }
    ctx->pc = 0x1F8BE8u;
    // 0x1f8be8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f8be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8bec: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1f8becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f8bf0: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x1f8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1f8bf4: 0x8c434f90  lw          $v1, 0x4F90($v0)
    ctx->pc = 0x1f8bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20368)));
    // 0x1f8bf8: 0x5464001a  bnel        $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F8BF8u;
    {
        const bool branch_taken_0x1f8bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f8bf8) {
            ctx->pc = 0x1F8BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8BF8u;
            // 0x1f8bfc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8C64u;
            goto label_1f8c64;
        }
    }
    ctx->pc = 0x1F8C00u;
    // 0x1f8c00: 0x8c434f98  lw          $v1, 0x4F98($v0)
    ctx->pc = 0x1f8c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20376)));
    // 0x1f8c04: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8C04u;
    {
        const bool branch_taken_0x1f8c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c04) {
            ctx->pc = 0x1F8C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8C04u;
            // 0x1f8c08: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8C64u;
            goto label_1f8c64;
        }
    }
    ctx->pc = 0x1F8C0Cu;
    // 0x1f8c0c: 0x8c424f94  lw          $v0, 0x4F94($v0)
    ctx->pc = 0x1f8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20372)));
    // 0x1f8c10: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F8C10u;
    {
        const bool branch_taken_0x1f8c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c10) {
            ctx->pc = 0x1F8C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8C10u;
            // 0x1f8c14: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8C64u;
            goto label_1f8c64;
        }
    }
    ctx->pc = 0x1F8C18u;
    // 0x1f8c18: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1f8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1f8c1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8c20: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1f8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1f8c24: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f8c24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8c28: 0xf8c10040  sqc2        $vf1, 0x40($a2)
    ctx->pc = 0x1f8c28u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f8c2c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8c30: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f8c34: 0x2442fe5a  addiu       $v0, $v0, -0x1A6
    ctx->pc = 0x1f8c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966874));
    // 0x1f8c38: 0x2c42340d  sltiu       $v0, $v0, 0x340D
    ctx->pc = 0x1f8c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13325) ? 1 : 0);
    // 0x1f8c3c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8C3Cu;
    {
        const bool branch_taken_0x1f8c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c3c) {
            ctx->pc = 0x1F8C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8C3Cu;
            // 0x1f8c40: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8C64u;
            goto label_1f8c64;
        }
    }
    ctx->pc = 0x1F8C44u;
    // 0x1f8c44: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1f8c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8c48: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1f8c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1f8c4c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f8c4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f8c50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f8c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8c54: 0x0  nop
    ctx->pc = 0x1f8c54u;
    // NOP
    // 0x1f8c58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f8c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f8c5c: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x1f8c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_1f8c60:
    // 0x1f8c60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f8c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f8c64:
    // 0x1f8c64: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1f8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f8c68: 0x80820080  lb          $v0, 0x80($a0)
    ctx->pc = 0x1f8c68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1f8c6c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8C6Cu;
    {
        const bool branch_taken_0x1f8c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C6Cu;
        // 0x1f8c70: 0x90850080  lbu         $a1, 0x80($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c6c) {
            ctx->pc = 0x1F8C84u;
            goto label_1f8c84;
        }
    }
    ctx->pc = 0x1F8C74u;
    // 0x1f8c74: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f8c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f8c78: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x1f8c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8c7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F8C7Cu;
    {
        const bool branch_taken_0x1f8c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C7Cu;
        // 0x1f8c80: 0xe480007c  swc1        $f0, 0x7C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c7c) {
            ctx->pc = 0x1F8CB8u;
            goto label_1f8cb8;
        }
    }
    ctx->pc = 0x1F8C84u;
label_1f8c84:
    // 0x1f8c84: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1f8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f8c88: 0xa0820080  sb          $v0, 0x80($a0)
    ctx->pc = 0x1f8c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f8c8c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1f8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f8c90: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8C90u;
    {
        const bool branch_taken_0x1f8c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c90) {
            ctx->pc = 0x1F8C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8C90u;
            // 0x1f8c94: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8CBCu;
            goto label_1f8cbc;
        }
    }
    ctx->pc = 0x1F8C98u;
    // 0x1f8c98: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1f8c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f8c9c: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1F8C9Cu;
    SET_GPR_U32(ctx, 31, 0x1F8CA4u);
    ctx->pc = 0x1F8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C9Cu;
    // 0x1f8ca0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1F8C9Cu, 0x1F8CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CA4u;
label_1f8ca4:
    // 0x1f8ca4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8ca8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1f8ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f8cac: 0xe460007c  swc1        $f0, 0x7C($v1)
    ctx->pc = 0x1f8cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x1f8cb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8cb4: 0xa0440080  sb          $a0, 0x80($v0)
    ctx->pc = 0x1f8cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 4));
label_1f8cb8:
    // 0x1f8cb8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1f8cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f8cbc:
    // 0x1f8cbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f8cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cc0: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F8CC0u;
    SET_GPR_U32(ctx, 31, 0x1F8CC8u);
    ctx->pc = 0x1F8CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CC0u;
    // 0x1f8cc4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F8CC0u, 0x1F8CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CC8u;
label_1f8cc8:
    // 0x1f8cc8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f8cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8ccc: 0xc46c0030  lwc1        $f12, 0x30($v1)
    ctx->pc = 0x1f8cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f8cd0: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x1f8cd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1f8cd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f8cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8cd8: 0x0  nop
    ctx->pc = 0x1f8cd8u;
    // NOP
    // 0x1f8cdc: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x1F8CDCu;
    {
        const bool branch_taken_0x1f8cdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CDCu;
        // 0x1f8ce0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cdc) {
            ctx->pc = 0x1F8E14u;
            goto label_1f8e14;
        }
    }
    ctx->pc = 0x1F8CE4u;
    // 0x1f8ce4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f8ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f8ce8: 0x9065002c  lbu         $a1, 0x2C($v1)
    ctx->pc = 0x1f8ce8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1f8cec: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F8CECu;
    SET_GPR_U32(ctx, 31, 0x1F8CF4u);
    ctx->pc = 0x1F8CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CECu;
    // 0x1f8cf0: 0xc44d0020  lwc1        $f13, 0x20($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F8CECu, 0x1F8CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CF4u;
label_1f8cf4:
    // 0x1f8cf4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cfc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f8cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d04: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1f8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f8d08: 0x2482e50e  addiu       $v0, $a0, -0x1AF2
    ctx->pc = 0x1f8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960398));
    // 0x1f8d0c: 0x2c42194a  sltiu       $v0, $v0, 0x194A
    ctx->pc = 0x1f8d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6474) ? 1 : 0);
    // 0x1f8d10: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F8D10u;
    {
        const bool branch_taken_0x1f8d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D10u;
        // 0x1f8d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d10) {
            ctx->pc = 0x1F8D5Cu;
            goto label_1f8d5c;
        }
    }
    ctx->pc = 0x1F8D18u;
    // 0x1f8d18: 0xc461007c  lwc1        $f1, 0x7C($v1)
    ctx->pc = 0x1f8d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8d1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f8d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f8d20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8d24: 0x0  nop
    ctx->pc = 0x1f8d24u;
    // NOP
    // 0x1f8d28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f8d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8d2c: 0x0  nop
    ctx->pc = 0x1f8d2cu;
    // NOP
    // 0x1f8d30: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8D30u;
    {
        const bool branch_taken_0x1f8d30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8d30) {
            ctx->pc = 0x1F8D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8D30u;
            // 0x1f8d34: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8D48u;
            goto label_1f8d48;
        }
    }
    ctx->pc = 0x1F8D38u;
    // 0x1f8d38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f8d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8d3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8d40: 0x0  nop
    ctx->pc = 0x1f8d40u;
    // NOP
    // 0x1f8d44: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1f8d44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f8d48:
    // 0x1f8d48: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1f8d48u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8d4c: 0x0  nop
    ctx->pc = 0x1f8d4cu;
    // NOP
    // 0x1f8d50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f8d50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f8d54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8D54u;
    {
        const bool branch_taken_0x1f8d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D54u;
        // 0x1f8d58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d54) {
            ctx->pc = 0x1F8D7Cu;
            goto label_1f8d7c;
        }
    }
    ctx->pc = 0x1F8D5Cu;
label_1f8d5c:
    // 0x1f8d5c: 0x2482fe5a  addiu       $v0, $a0, -0x1A6
    ctx->pc = 0x1f8d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966874));
    // 0x1f8d60: 0x2c42194a  sltiu       $v0, $v0, 0x194A
    ctx->pc = 0x1f8d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6474) ? 1 : 0);
    // 0x1f8d64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F8D64u;
    {
        const bool branch_taken_0x1f8d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D64u;
        // 0x1f8d68: 0xc461007c  lwc1        $f1, 0x7C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d64) {
            ctx->pc = 0x1F8D9Cu;
            goto label_1f8d9c;
        }
    }
    ctx->pc = 0x1F8D6Cu;
    // 0x1f8d6c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1f8d6cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8d70: 0x0  nop
    ctx->pc = 0x1f8d70u;
    // NOP
    // 0x1f8d74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f8d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f8d78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8d7c:
    // 0x1f8d7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f8d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f8d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f8d84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f8d84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f8d88: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f8d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f8d8c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1f8d8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8d90: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1f8d90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f8d94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8D94u;
    {
        const bool branch_taken_0x1f8d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D94u;
        // 0x1f8d98: 0x3280b  movn        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d94) {
            ctx->pc = 0x1F8DB8u;
            goto label_1f8db8;
        }
    }
    ctx->pc = 0x1F8D9Cu;
label_1f8d9c:
    // 0x1f8d9c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1f8d9cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8da0: 0x0  nop
    ctx->pc = 0x1f8da0u;
    // NOP
    // 0x1f8da4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f8da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f8da8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f8da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f8dac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f8dacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f8db0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f8db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f8db4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1f8db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f8db8:
    // 0x1f8db8: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F8DB8u;
    {
        const bool branch_taken_0x1f8db8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8db8) {
            ctx->pc = 0x1F8E20u;
            goto label_1f8e20;
        }
    }
    ctx->pc = 0x1F8DC0u;
    // 0x1f8dc0: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8DC0u;
    {
        const bool branch_taken_0x1f8dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DC0u;
        // 0x1f8dc4: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8dc0) {
            ctx->pc = 0x1F8E20u;
            goto label_1f8e20;
        }
    }
    ctx->pc = 0x1F8DC8u;
    // 0x1f8dc8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8dd0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1f8dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f8dd4: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x1f8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1f8dd8: 0x8c624f98  lw          $v0, 0x4F98($v1)
    ctx->pc = 0x1f8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20376)));
    // 0x1f8ddc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F8DDCu;
    {
        const bool branch_taken_0x1f8ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DDCu;
        // 0x1f8de0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ddc) {
            ctx->pc = 0x1F8E20u;
            goto label_1f8e20;
        }
    }
    ctx->pc = 0x1F8DE4u;
    // 0x1f8de4: 0x8c424f94  lw          $v0, 0x4F94($v0)
    ctx->pc = 0x1f8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20372)));
    // 0x1f8de8: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x1f8de8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f8dec: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8DECu;
    {
        const bool branch_taken_0x1f8dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8dec) {
            ctx->pc = 0x1F8E20u;
            goto label_1f8e20;
        }
    }
    ctx->pc = 0x1F8DF4u;
    // 0x1f8df4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8DF4u;
    {
        const bool branch_taken_0x1f8df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DF4u;
        // 0x1f8df8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8df4) {
            ctx->pc = 0x1F8E20u;
            goto label_1f8e20;
        }
    }
    ctx->pc = 0x1F8DFCu;
    // 0x1f8dfc: 0x244502d8  addiu       $a1, $v0, 0x2D8
    ctx->pc = 0x1f8dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x1f8e00: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1f8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1f8e04: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F8E04u;
    SET_GPR_U32(ctx, 31, 0x1F8E0Cu);
    ctx->pc = 0x1F8E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E04u;
    // 0x1f8e08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F8E04u, 0x1F8E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E0Cu;
label_1f8e0c:
    // 0x1f8e0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8E0Cu;
    {
        const bool branch_taken_0x1f8e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8e0c) {
            ctx->pc = 0x1F8E20u;
            goto label_1f8e20;
        }
    }
    ctx->pc = 0x1F8E14u;
label_1f8e14:
    // 0x1f8e14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8E14u;
    {
        const bool branch_taken_0x1f8e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E14u;
        // 0x1f8e18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e14) {
            ctx->pc = 0x1F8E20u;
            goto label_1f8e20;
        }
    }
    ctx->pc = 0x1F8E1Cu;
label_1f8e1c:
    // 0x1f8e1c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1f8e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f8e20:
    // 0x1f8e20: 0x1215001e  beq         $s0, $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F8E20u;
    {
        const bool branch_taken_0x1f8e20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x1F8E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E20u;
        // 0x1f8e24: 0x2b0102a  slt         $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e20) {
            ctx->pc = 0x1F8E9Cu;
            goto label_1f8e9c;
        }
    }
    ctx->pc = 0x1F8E28u;
    // 0x1f8e28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F8E28u;
    {
        const bool branch_taken_0x1f8e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8e28) {
            ctx->pc = 0x1F8E60u;
            goto label_1f8e60;
        }
    }
    ctx->pc = 0x1F8E30u;
    // 0x1f8e30: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1f8e30u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8e34: 0x0  nop
    ctx->pc = 0x1f8e34u;
    // NOP
    // 0x1f8e38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f8e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f8e3c: 0x3c014099  lui         $at, 0x4099
    ctx->pc = 0x1f8e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16537 << 16));
    // 0x1f8e40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f8e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f8e44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f8e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f8e48: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1f8e48u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8e4c: 0x0  nop
    ctx->pc = 0x1f8e4cu;
    // NOP
    // 0x1f8e50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f8e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f8e54: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f8e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f8e58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F8E58u;
    {
        const bool branch_taken_0x1f8e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E58u;
        // 0x1f8e5c: 0x46000869  min.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e58) {
            ctx->pc = 0x1F8E8Cu;
            goto label_1f8e8c;
        }
    }
    ctx->pc = 0x1F8E60u;
label_1f8e60:
    // 0x1f8e60: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1f8e60u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8e64: 0x0  nop
    ctx->pc = 0x1f8e64u;
    // NOP
    // 0x1f8e68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f8e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f8e6c: 0x3c014099  lui         $at, 0x4099
    ctx->pc = 0x1f8e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16537 << 16));
    // 0x1f8e70: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f8e70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f8e74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f8e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f8e78: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1f8e78u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8e7c: 0x0  nop
    ctx->pc = 0x1f8e7cu;
    // NOP
    // 0x1f8e80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f8e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f8e84: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f8e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f8e88: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x1f8e88u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
label_1f8e8c:
    // 0x1f8e8c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f8e8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f8e90: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1f8e90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1f8e94: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8e98: 0xa051001c  sb          $s1, 0x1C($v0)
    ctx->pc = 0x1f8e98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 17));
label_1f8e9c:
    // 0x1f8e9c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1f8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1f8ea0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8EA0u;
    {
        const bool branch_taken_0x1f8ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EA0u;
        // 0x1f8ea4: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ea0) {
            ctx->pc = 0x1F8EB4u;
            goto label_1f8eb4;
        }
    }
    ctx->pc = 0x1F8EA8u;
    // 0x1f8ea8: 0x2a22003f  slti        $v0, $s1, 0x3F
    ctx->pc = 0x1f8ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1f8eac: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1f8eacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1f8eb0: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x1f8eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1f8eb4:
    // 0x1f8eb4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f8eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8eb8: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x1f8eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1f8ebc: 0xc080738  jal         func_201CE0
    ctx->pc = 0x1F8EBCu;
    SET_GPR_U32(ctx, 31, 0x1F8EC4u);
    ctx->pc = 0x1F8EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EBCu;
    // 0x1f8ec0: 0x26e49c38  addiu       $a0, $s7, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201CE0u, 0x1F8EBCu, 0x1F8EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EC4u;
label_1f8ec4:
    // 0x1f8ec4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F8EC4u;
    SET_GPR_U32(ctx, 31, 0x1F8ECCu);
    ctx->pc = 0x1F8EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EC4u;
    // 0x1f8ec8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F8EC4u, 0x1F8ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8ECCu;
label_1f8ecc:
    // 0x1f8ecc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f8eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8ed0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f8ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ed4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f8ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ed8: 0xc07dc96  jal         func_1F7258
    ctx->pc = 0x1F8ED8u;
    SET_GPR_U32(ctx, 31, 0x1F8EE0u);
    ctx->pc = 0x1F8EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8ED8u;
    // 0x1f8edc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7258u, 0x1F8ED8u, 0x1F8EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EE0u;
label_1f8ee0:
    // 0x1f8ee0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8ee4: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x1f8ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1f8ee8: 0x2a030168  slti        $v1, $s0, 0x168
    ctx->pc = 0x1f8ee8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)360) ? 1 : 0);
    // 0x1f8eec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8EECu;
    {
        const bool branch_taken_0x1f8eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EECu;
        // 0x1f8ef0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8eec) {
            ctx->pc = 0x1F8F18u;
            goto label_1f8f18;
        }
    }
    ctx->pc = 0x1F8EF4u;
    // 0x1f8ef4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1f8ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f8ef8: 0xc07dcdc  jal         func_1F7370
    ctx->pc = 0x1F8EF8u;
    SET_GPR_U32(ctx, 31, 0x1F8F00u);
    ctx->pc = 0x1F8EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EF8u;
    // 0x1f8efc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7370u, 0x1F8EF8u, 0x1F8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F00u;
label_1f8f00:
    // 0x1f8f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f04: 0x50900005  beql        $a0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8F04u;
    {
        const bool branch_taken_0x1f8f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x1f8f04) {
            ctx->pc = 0x1F8F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8F04u;
            // 0x1f8f08: 0x26e49c38  addiu       $a0, $s7, -0x63C8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941752));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8F1Cu;
            goto label_1f8f1c;
        }
    }
    ctx->pc = 0x1F8F0Cu;
    // 0x1f8f0c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f14: 0xac440060  sw          $a0, 0x60($v0)
    ctx->pc = 0x1f8f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
label_1f8f18:
    // 0x1f8f18: 0x26e49c38  addiu       $a0, $s7, -0x63C8
    ctx->pc = 0x1f8f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941752));
label_1f8f1c:
    // 0x1f8f1c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f8f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f20: 0xc08075e  jal         func_201D78
    ctx->pc = 0x1F8F20u;
    SET_GPR_U32(ctx, 31, 0x1F8F28u);
    ctx->pc = 0x1F8F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F20u;
    // 0x1f8f24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D78u, 0x1F8F20u, 0x1F8F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F28u;
label_1f8f28:
    // 0x1f8f28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f8f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8f2c:
    // 0x1f8f2c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f8f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8f30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f8f30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8f34: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f8f34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f8f38: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f8f38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8f3c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f8f3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f8f40: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1f8f40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8f44: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1f8f44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f8f48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f8f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F4Cu;
        // 0x1f8f50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8F54u;
    // 0x1f8f54: 0x0  nop
    ctx->pc = 0x1f8f54u;
    // NOP
    ctx->pc = 0x1f8f58u;
}
