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

// Function: sub_003E2CE0
// Address: 0x3e2ce0 - 0x3e2ed0
void sub_003E2CE0_0x3e2ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2CE0_0x3e2ce0");
#endif

    switch (ctx->pc) {
        case 0x3e2d24u: goto label_3e2d24;
        case 0x3e2d58u: goto label_3e2d58;
        case 0x3e2e2cu: goto label_3e2e2c;
        case 0x3e2e78u: goto label_3e2e78;
        case 0x3e2e8cu: goto label_3e2e8c;
        default: break;
    }

    ctx->pc = 0x3e2ce0u;

    // 0x3e2ce0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e2ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3e2ce4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3e2ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3e2ce8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x3e2ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x3e2cec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e2cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2cf0: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x3e2cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x3e2cf4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3e2cf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2cf8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3e2cf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2cfc: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x3e2cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x3e2d00: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3e2d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3e2d04: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x3e2d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x3e2d08: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x3e2d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x3e2d0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e2d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d10: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x3e2d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x3e2d14: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x3e2d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x3e2d18: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x3e2d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x3e2d1c: 0xc0f8ac4  jal         func_3E2B10
    ctx->pc = 0x3E2D1Cu;
    SET_GPR_U32(ctx, 31, 0x3E2D24u);
    ctx->pc = 0x3E2D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D1Cu;
    // 0x3e2d20: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B10u, 0x3E2D1Cu, 0x3E2D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D24u;
label_3e2d24:
    // 0x3e2d24: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x3e2d24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3e2d28: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3E2D28u;
    {
        const bool branch_taken_0x3e2d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2D28u;
        // 0x3e2d2c: 0x2921823  subu        $v1, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2d28) {
            ctx->pc = 0x3E2E3Cu;
            goto label_3e2e3c;
        }
    }
    ctx->pc = 0x3E2D30u;
    // 0x3e2d30: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x3e2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x3e2d34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3e2d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3e2d38: 0x27b60008  addiu       $s6, $sp, 0x8
    ctx->pc = 0x3e2d38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3e2d3c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x3e2d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e2d40: 0x265e0008  addiu       $fp, $s2, 0x8
    ctx->pc = 0x3e2d40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3e2d44: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3e2d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e2d48: 0x27b50028  addiu       $s5, $sp, 0x28
    ctx->pc = 0x3e2d48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x3e2d4c: 0x26900008  addiu       $s0, $s4, 0x8
    ctx->pc = 0x3e2d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x3e2d50: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x3e2d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x3e2d54: 0x0  nop
    ctx->pc = 0x3e2d54u;
    // NOP
label_3e2d58:
    // 0x3e2d58: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x3e2d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3e2d5c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3e2d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2d60: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x3e2d60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2d64: 0x0  nop
    ctx->pc = 0x3e2d64u;
    // NOP
    // 0x3e2d68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E2D68u;
    {
        const bool branch_taken_0x3e2d68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2D68u;
        // 0x3e2d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2d68) {
            ctx->pc = 0x3E2D74u;
            goto label_3e2d74;
        }
    }
    ctx->pc = 0x3E2D70u;
    // 0x3e2d70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e2d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2d74:
    // 0x3e2d74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e2d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e2d78: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3E2D78u;
    {
        const bool branch_taken_0x3e2d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2D78u;
        // 0x3e2d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2d78) {
            ctx->pc = 0x3E2E2Cu;
            goto label_3e2e2c;
        }
    }
    ctx->pc = 0x3E2D80u;
    // 0x3e2d80: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x3e2d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2d84: 0xc604fff8  lwc1        $f4, -0x8($s0)
    ctx->pc = 0x3e2d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e2d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e2d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d8c: 0xe600fff8  swc1        $f0, -0x8($s0)
    ctx->pc = 0x3e2d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), bits); }
    // 0x3e2d90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3e2d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d94: 0xc603fffc  lwc1        $f3, -0x4($s0)
    ctx->pc = 0x3e2d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e2d98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e2d98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d9c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3e2d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2da0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e2da4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3e2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e2da8: 0xe600fffc  swc1        $f0, -0x4($s0)
    ctx->pc = 0x3e2da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), bits); }
    // 0x3e2dac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2db0: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x3e2db0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3e2db4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2db8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3e2db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2dbc: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x3e2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x3e2dc0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3e2dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2dc4: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x3e2dc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2dc8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3e2dc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2dcc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3e2dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2dd0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x3e2dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2dd4: 0xe6c20004  swc1        $f2, 0x4($s6)
    ctx->pc = 0x3e2dd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x3e2dd8: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x3e2dd8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3e2ddc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3e2ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3e2de0: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x3e2de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2de4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3e2de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3e2de8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3e2de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x3e2dec: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3e2decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3e2df0: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x3e2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x3e2df4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x3e2df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3e2df8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3e2df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2dfc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3e2dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2e00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3e2e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3e2e04: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x3e2e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3e2e08: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3e2e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2e0c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3e2e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2e10: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x3e2e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2e14: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3e2e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3e2e18: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x3e2e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3e2e1c: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x3e2e1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x3e2e20: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3e2e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2e24: 0xc0f8a44  jal         func_3E2910
    ctx->pc = 0x3E2E24u;
    SET_GPR_U32(ctx, 31, 0x3E2E2Cu);
    ctx->pc = 0x3E2E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E24u;
    // 0x3e2e28: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2910u, 0x3E2E24u, 0x3E2E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E2Cu;
label_3e2e2c:
    // 0x3e2e2c: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x3e2e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x3e2e30: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x3e2e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3e2e34: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3E2E34u;
    {
        const bool branch_taken_0x3e2e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E34u;
        // 0x3e2e38: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e34) {
            ctx->pc = 0x3E2D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2d58;
        }
    }
    ctx->pc = 0x3E2E3Cu;
label_3e2e3c:
    // 0x3e2e3c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3e2e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2e40: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x3e2e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x3e2e44: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x3e2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x3e2e48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3e2e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3e2e4c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e2e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e2e50: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3e2e50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3e2e54: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3e2e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e2e58: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E2E58u;
    {
        const bool branch_taken_0x3e2e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2e58) {
            ctx->pc = 0x3E2E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2E58u;
            // 0x3e2e5c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2EA0u;
            goto label_3e2ea0;
        }
    }
    ctx->pc = 0x3E2E60u;
    // 0x3e2e60: 0x3c023333  lui         $v0, 0x3333
    ctx->pc = 0x3e2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13107 << 16));
    // 0x3e2e64: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x3e2e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3e2e68: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3e2e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3e2e6c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x3e2e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e2e70: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3e2e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e2e74: 0x0  nop
    ctx->pc = 0x3e2e74u;
    // NOP
label_3e2e78:
    // 0x3e2e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e2e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2e7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e2e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2e80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e2e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2e84: 0xc0f8afc  jal         func_3E2BF0
    ctx->pc = 0x3E2E84u;
    SET_GPR_U32(ctx, 31, 0x3E2E8Cu);
    ctx->pc = 0x3E2E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E84u;
    // 0x3e2e88: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2BF0u, 0x3E2E84u, 0x3E2E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E8Cu;
label_3e2e8c:
    // 0x3e2e8c: 0x101083  sra         $v0, $s0, 2
    ctx->pc = 0x3e2e8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 2));
    // 0x3e2e90: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3e2e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e2e94: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3E2E94u;
    {
        const bool branch_taken_0x3e2e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E94u;
        // 0x3e2e98: 0x2631ffec  addiu       $s1, $s1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e94) {
            ctx->pc = 0x3E2E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2e78;
        }
    }
    ctx->pc = 0x3E2E9Cu;
    // 0x3e2e9c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x3e2e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e2ea0:
    // 0x3e2ea0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x3e2ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3e2ea4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3e2ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e2ea8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x3e2ea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3e2eac: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x3e2eacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3e2eb0: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x3e2eb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3e2eb4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x3e2eb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3e2eb8: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x3e2eb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3e2ebc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x3e2ebcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3e2ec0: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x3e2ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3e2ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2EC4u;
        // 0x3e2ec8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2ECCu;
    // 0x3e2ecc: 0x0  nop
    ctx->pc = 0x3e2eccu;
    // NOP
    ctx->pc = 0x3e2ed0u;
}
