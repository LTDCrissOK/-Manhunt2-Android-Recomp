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

// Function: sub_002D0A88
// Address: 0x2d0a88 - 0x2d0e30
void sub_002D0A88_0x2d0a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0A88_0x2d0a88");
#endif

    switch (ctx->pc) {
        case 0x2d0ae4u: goto label_2d0ae4;
        case 0x2d0af0u: goto label_2d0af0;
        case 0x2d0bd0u: goto label_2d0bd0;
        case 0x2d0c00u: goto label_2d0c00;
        case 0x2d0d38u: goto label_2d0d38;
        case 0x2d0dd0u: goto label_2d0dd0;
        case 0x2d0df8u: goto label_2d0df8;
        default: break;
    }

    ctx->pc = 0x2d0a88u;

    // 0x2d0a88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d0a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d0a8c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2d0a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d0a90: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2d0a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2d0a94: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2d0a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0a98: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2d0a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2d0a9c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2d0a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2d0aa0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2d0aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2d0aa4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2d0aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0aa8: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2d0aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2d0aac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d0aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d0ab0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d0ab0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ab4: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2d0ab4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d0ab8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0abc: 0x26b4008c  addiu       $s4, $s5, 0x8C
    ctx->pc = 0x2d0abcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 140));
    // 0x2d0ac0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2d0ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0ac4: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x2d0ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0ac8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2d0ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0acc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d0accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0ad0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2d0ad0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d0ad4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2d0ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d0ad8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2d0ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d0adc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2D0ADCu;
    SET_GPR_U32(ctx, 31, 0x2D0AE4u);
    ctx->pc = 0x2D0AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0ADCu;
    // 0x2d0ae0: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D0ADCu, 0x2D0AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0AE4u;
label_2d0ae4:
    // 0x2d0ae4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2d0ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0ae8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2D0AE8u;
    SET_GPR_U32(ctx, 31, 0x2D0AF0u);
    ctx->pc = 0x2D0AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0AE8u;
    // 0x2d0aec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D0AE8u, 0x2D0AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0AF0u;
label_2d0af0:
    // 0x2d0af0: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2d0af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d0af4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2d0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2d0af8: 0x10c20023  beq         $a2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D0AF8u;
    {
        const bool branch_taken_0x2d0af8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AF8u;
        // 0x2d0afc: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0af8) {
            ctx->pc = 0x2D0B88u;
            goto label_2d0b88;
        }
    }
    ctx->pc = 0x2D0B00u;
    // 0x2d0b00: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D0B00u;
    {
        const bool branch_taken_0x2d0b00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B00u;
        // 0x2d0b04: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b00) {
            ctx->pc = 0x2D0B78u;
            goto label_2d0b78;
        }
    }
    ctx->pc = 0x2D0B08u;
    // 0x2d0b08: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x2d0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2d0b0c: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x2d0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2d0b10: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x2d0b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2d0b14: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2d0b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2d0b18: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d0b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0b1c: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2d0b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2d0b20: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d0b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0b24: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d0b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d0b28: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2d0b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0b2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d0b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d0b30: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2d0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0b34: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2d0b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2d0b38: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2d0b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0b3c: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x2d0b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x2d0b40: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2d0b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0b44: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d0b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d0b48: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2d0b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0b4c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d0b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d0b50: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2d0b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0b54: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2d0b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2d0b58: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d0b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0b5c: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x2d0b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x2d0b60: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2d0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0b64: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2d0b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d0b68: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2d0b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0b6c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d0b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d0b70: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x2d0b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0b74: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2d0b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2d0b78:
    // 0x2d0b78: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2d0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d0b7c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d0b80: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2D0B80u;
    {
        const bool branch_taken_0x2d0b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B80u;
        // 0x2d0b84: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b80) {
            ctx->pc = 0x2D0E08u;
            goto label_2d0e08;
        }
    }
    ctx->pc = 0x2D0B88u;
label_2d0b88:
    // 0x2d0b88: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x2d0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x2d0b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0b90: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2d0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2d0b94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2d0b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d0b98: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x2d0b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2d0b9c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2d0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d0ba0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0ba4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2d0ba4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d0ba8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2d0ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2d0bac: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x2d0bacu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x2d0bb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d0bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0bb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0bb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0BB8u;
    {
        const bool branch_taken_0x2d0bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BB8u;
        // 0x2d0bbc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bb8) {
            ctx->pc = 0x2D0BD8u;
            goto label_2d0bd8;
        }
    }
    ctx->pc = 0x2D0BC0u;
    // 0x2d0bc0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d0bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bc8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D0BC8u;
    SET_GPR_U32(ctx, 31, 0x2D0BD0u);
    ctx->pc = 0x2D0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0BC8u;
    // 0x2d0bcc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D0BC8u, 0x2D0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BD0u;
label_2d0bd0:
    // 0x2d0bd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0BD0u;
    {
        const bool branch_taken_0x2d0bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BD0u;
        // 0x2d0bd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bd0) {
            ctx->pc = 0x2D0BE4u;
            goto label_2d0be4;
        }
    }
    ctx->pc = 0x2D0BD8u;
label_2d0bd8:
    // 0x2d0bd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bdc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d0bdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d0be4:
    // 0x2d0be4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2d0be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d0be8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2d0be8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bec: 0x10720025  beq         $v1, $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D0BECu;
    {
        const bool branch_taken_0x2d0bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D0BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BECu;
        // 0x2d0bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bec) {
            ctx->pc = 0x2D0C84u;
            goto label_2d0c84;
        }
    }
    ctx->pc = 0x2D0BF4u;
    // 0x2d0bf4: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2d0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2d0bf8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2d0bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d0bfc: 0x0  nop
    ctx->pc = 0x2d0bfcu;
    // NOP
label_2d0c00:
    // 0x2d0c00: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D0C00u;
    {
        const bool branch_taken_0x2d0c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c00) {
            ctx->pc = 0x2D0C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0C00u;
            // 0x2d0c04: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0C74u;
            goto label_2d0c74;
        }
    }
    ctx->pc = 0x2D0C08u;
    // 0x2d0c08: 0xc4a0ffd0  lwc1        $f0, -0x30($a1)
    ctx->pc = 0x2d0c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c0c: 0xe440ffd0  swc1        $f0, -0x30($v0)
    ctx->pc = 0x2d0c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967248), bits); }
    // 0x2d0c10: 0xc4a1ffe0  lwc1        $f1, -0x20($a1)
    ctx->pc = 0x2d0c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0c14: 0xe441ffe0  swc1        $f1, -0x20($v0)
    ctx->pc = 0x2d0c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), bits); }
    // 0x2d0c18: 0xc4a0ffe4  lwc1        $f0, -0x1C($a1)
    ctx->pc = 0x2d0c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c1c: 0xe440ffe4  swc1        $f0, -0x1C($v0)
    ctx->pc = 0x2d0c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), bits); }
    // 0x2d0c20: 0xc4a1ffe8  lwc1        $f1, -0x18($a1)
    ctx->pc = 0x2d0c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0c24: 0xe441ffe8  swc1        $f1, -0x18($v0)
    ctx->pc = 0x2d0c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), bits); }
    // 0x2d0c28: 0xc4a0ffec  lwc1        $f0, -0x14($a1)
    ctx->pc = 0x2d0c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c2c: 0xe440ffec  swc1        $f0, -0x14($v0)
    ctx->pc = 0x2d0c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), bits); }
    // 0x2d0c30: 0xc4a1fff0  lwc1        $f1, -0x10($a1)
    ctx->pc = 0x2d0c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0c34: 0xe441fff0  swc1        $f1, -0x10($v0)
    ctx->pc = 0x2d0c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), bits); }
    // 0x2d0c38: 0xc4a0fff4  lwc1        $f0, -0xC($a1)
    ctx->pc = 0x2d0c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c3c: 0xe440fff4  swc1        $f0, -0xC($v0)
    ctx->pc = 0x2d0c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), bits); }
    // 0x2d0c40: 0xc4a1fff8  lwc1        $f1, -0x8($a1)
    ctx->pc = 0x2d0c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0c44: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x2d0c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2d0c48: 0xc4a0fffc  lwc1        $f0, -0x4($a1)
    ctx->pc = 0x2d0c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c4c: 0xe440fffc  swc1        $f0, -0x4($v0)
    ctx->pc = 0x2d0c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2d0c50: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2d0c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0c54: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2d0c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d0c58: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2d0c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c5c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d0c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d0c60: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d0c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0c64: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d0c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d0c68: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d0c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c6c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2d0c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2d0c70: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2d0c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_2d0c74:
    // 0x2d0c74: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2d0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2d0c78: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d0c7c: 0x1472ffe0  bne         $v1, $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2D0C7Cu;
    {
        const bool branch_taken_0x2d0c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C7Cu;
        // 0x2d0c80: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c7c) {
            ctx->pc = 0x2D0C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0c00;
        }
    }
    ctx->pc = 0x2D0C84u;
label_2d0c84:
    // 0x2d0c84: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2d0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2d0c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0c8c: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D0C8Cu;
    {
        const bool branch_taken_0x2d0c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C8Cu;
        // 0x2d0c90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c8c) {
            ctx->pc = 0x2D0D20u;
            goto label_2d0d20;
        }
    }
    ctx->pc = 0x2D0C94u;
    // 0x2d0c94: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D0C94u;
    {
        const bool branch_taken_0x2d0c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C94u;
        // 0x2d0c98: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c94) {
            ctx->pc = 0x2D0D18u;
            goto label_2d0d18;
        }
    }
    ctx->pc = 0x2D0C9Cu;
    // 0x2d0c9c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0ca0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2d0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d0ca4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2d0ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2d0ca8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2d0ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d0cac: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2d0cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2d0cb0: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x2d0cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2d0cb4: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x2d0cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2d0cb8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2d0cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0cbc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2d0cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2d0cc0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d0cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0cc4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d0cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d0cc8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d0cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0ccc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d0cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d0cd0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2d0cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0cd4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2d0cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2d0cd8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2d0cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0cdc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2d0cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2d0ce0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2d0ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0ce4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2d0ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d0ce8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0cec: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d0cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d0cf0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2d0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0cf4: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2d0cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2d0cf8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2d0cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0cfc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2d0cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2d0d00: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2d0d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0d04: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2d0d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2d0d08: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2d0d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0d0c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2d0d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2d0d10: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2d0d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0d14: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x2d0d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_2d0d18:
    // 0x2d0d18: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2D0D18u;
    {
        const bool branch_taken_0x2d0d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D18u;
        // 0x2d0d1c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d18) {
            ctx->pc = 0x2D0DB8u;
            goto label_2d0db8;
        }
    }
    ctx->pc = 0x2D0D20u;
label_2d0d20:
    // 0x2d0d20: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D0D20u;
    {
        const bool branch_taken_0x2d0d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D20u;
        // 0x2d0d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d20) {
            ctx->pc = 0x2D0DB4u;
            goto label_2d0db4;
        }
    }
    ctx->pc = 0x2D0D28u;
    // 0x2d0d28: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2d0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2d0d2c: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x2d0d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d0d30: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x2d0d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2d0d34: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x2d0d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2d0d38:
    // 0x2d0d38: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D0D38u;
    {
        const bool branch_taken_0x2d0d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D38u;
        // 0x2d0d3c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d38) {
            ctx->pc = 0x2D0DA8u;
            goto label_2d0da8;
        }
    }
    ctx->pc = 0x2D0D40u;
    // 0x2d0d40: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0d44: 0xe440ffd0  swc1        $f0, -0x30($v0)
    ctx->pc = 0x2d0d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967248), bits); }
    // 0x2d0d48: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2d0d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0d4c: 0xe441ffe0  swc1        $f1, -0x20($v0)
    ctx->pc = 0x2d0d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), bits); }
    // 0x2d0d50: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2d0d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0d54: 0xe440ffe4  swc1        $f0, -0x1C($v0)
    ctx->pc = 0x2d0d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), bits); }
    // 0x2d0d58: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2d0d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0d5c: 0xe441ffe8  swc1        $f1, -0x18($v0)
    ctx->pc = 0x2d0d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), bits); }
    // 0x2d0d60: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2d0d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0d64: 0xe440ffec  swc1        $f0, -0x14($v0)
    ctx->pc = 0x2d0d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), bits); }
    // 0x2d0d68: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2d0d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0d6c: 0xe441fff0  swc1        $f1, -0x10($v0)
    ctx->pc = 0x2d0d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), bits); }
    // 0x2d0d70: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2d0d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0d74: 0xe440fff4  swc1        $f0, -0xC($v0)
    ctx->pc = 0x2d0d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), bits); }
    // 0x2d0d78: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2d0d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0d7c: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x2d0d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2d0d80: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2d0d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0d84: 0xe440fffc  swc1        $f0, -0x4($v0)
    ctx->pc = 0x2d0d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2d0d88: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2d0d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0d8c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2d0d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d0d90: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2d0d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0d94: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d0d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d0d98: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d0d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0d9c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d0d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d0da0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d0da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0da4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2d0da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2d0da8:
    // 0x2d0da8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d0dac: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2D0DACu;
    {
        const bool branch_taken_0x2d0dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DACu;
        // 0x2d0db0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0dac) {
            ctx->pc = 0x2D0D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0d38;
        }
    }
    ctx->pc = 0x2D0DB4u;
label_2d0db4:
    // 0x2d0db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0db8:
    // 0x2d0db8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2d0db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d0dbc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2d0dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d0dc0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0DC0u;
    {
        const bool branch_taken_0x2d0dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DC0u;
        // 0x2d0dc4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0dc0) {
            ctx->pc = 0x2D0DE8u;
            goto label_2d0de8;
        }
    }
    ctx->pc = 0x2D0DC8u;
    // 0x2d0dc8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d0dcc: 0x0  nop
    ctx->pc = 0x2d0dccu;
    // NOP
label_2d0dd0:
    // 0x2d0dd0: 0x0  nop
    ctx->pc = 0x2d0dd0u;
    // NOP
    // 0x2d0dd4: 0x0  nop
    ctx->pc = 0x2d0dd4u;
    // NOP
    // 0x2d0dd8: 0x0  nop
    ctx->pc = 0x2d0dd8u;
    // NOP
    // 0x2d0ddc: 0x0  nop
    ctx->pc = 0x2d0ddcu;
    // NOP
    // 0x2d0de0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D0DE0u;
    {
        const bool branch_taken_0x2d0de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DE0u;
        // 0x2d0de4: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0de0) {
            ctx->pc = 0x2D0DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0dd0;
        }
    }
    ctx->pc = 0x2D0DE8u;
label_2d0de8:
    // 0x2d0de8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0DE8u;
    {
        const bool branch_taken_0x2d0de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DE8u;
        // 0x2d0dec: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0de8) {
            ctx->pc = 0x2D0DFCu;
            goto label_2d0dfc;
        }
    }
    ctx->pc = 0x2D0DF0u;
    // 0x2d0df0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D0DF0u;
    SET_GPR_U32(ctx, 31, 0x2D0DF8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D0DF0u, 0x2D0DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0DF8u;
label_2d0df8:
    // 0x2d0df8: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2d0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_2d0dfc:
    // 0x2d0dfc: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x2d0dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
    // 0x2d0e00: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2d0e00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2d0e04: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x2d0e04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_2d0e08:
    // 0x2d0e08: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2d0e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0e0c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2d0e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0e10: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2d0e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d0e14: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2d0e14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0e18: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2d0e18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d0e1c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2d0e1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d0e20: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d0e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d0e24: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E24u;
        // 0x2d0e28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0E2Cu;
    // 0x2d0e2c: 0x0  nop
    ctx->pc = 0x2d0e2cu;
    // NOP
    ctx->pc = 0x2d0e30u;
}
