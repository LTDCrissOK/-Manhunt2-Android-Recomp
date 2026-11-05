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

// Function: sub_002A0D60
// Address: 0x2a0d60 - 0x2a0ee0
void sub_002A0D60_0x2a0d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0D60_0x2a0d60");
#endif

    switch (ctx->pc) {
        case 0x2a0dd4u: goto label_2a0dd4;
        case 0x2a0e00u: goto label_2a0e00;
        case 0x2a0e10u: goto label_2a0e10;
        case 0x2a0e40u: goto label_2a0e40;
        case 0x2a0ea4u: goto label_2a0ea4;
        default: break;
    }

    ctx->pc = 0x2a0d60u;

    // 0x2a0d60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a0d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a0d64: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a0d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a0d68: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2a0d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2a0d6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a0d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d70: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2a0d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2a0d74: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2a0d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2a0d78: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2a0d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2a0d7c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2a0d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2a0d80: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a0d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a0d84: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2a0d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2a0d88: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a0d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a0d8c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2a0d8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a0d90: 0x9242006d  lbu         $v0, 0x6D($s2)
    ctx->pc = 0x2a0d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 109)));
    // 0x2a0d94: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2A0D94u;
    {
        const bool branch_taken_0x2a0d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D94u;
        // 0x2a0d98: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d94) {
            ctx->pc = 0x2A0EB0u;
            goto label_2a0eb0;
        }
    }
    ctx->pc = 0x2A0D9Cu;
    // 0x2a0d9c: 0x26510028  addiu       $s1, $s2, 0x28
    ctx->pc = 0x2a0d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x2a0da0: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x2a0da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0da4: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2a0da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a0da8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a0da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0dac: 0xc641004c  lwc1        $f1, 0x4C($s2)
    ctx->pc = 0x2a0dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0db0: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x2a0db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0db4: 0x26500018  addiu       $s0, $s2, 0x18
    ctx->pc = 0x2a0db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2a0db8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a0db8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a0dbc: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2a0dbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0dc0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a0dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a0dc4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2a0dc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0dc8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a0dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a0dcc: 0xc0a59b8  jal         func_2966E0
    ctx->pc = 0x2A0DCCu;
    SET_GPR_U32(ctx, 31, 0x2A0DD4u);
    ctx->pc = 0x2A0DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DCCu;
    // 0x2a0dd0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2966E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2966E0u, 0x2A0DCCu, 0x2A0DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DD4u;
label_2a0dd4:
    // 0x2a0dd4: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2a0dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a0dd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a0dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ddc: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x2a0ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0de4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a0de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0de8: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x2a0de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0dec: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2a0decu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2a0df0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a0df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a0df4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2a0df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a0df8: 0xc0a59ea  jal         func_2967A8
    ctx->pc = 0x2A0DF8u;
    SET_GPR_U32(ctx, 31, 0x2A0E00u);
    ctx->pc = 0x2A0DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DF8u;
    // 0x2a0dfc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2967A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2967A8u, 0x2A0DF8u, 0x2A0E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E00u;
label_2a0e00:
    // 0x2a0e00: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a0e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a0e04: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x2a0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2a0e08: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A0E08u;
    SET_GPR_U32(ctx, 31, 0x2A0E10u);
    ctx->pc = 0x2A0E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E08u;
    // 0x2a0e0c: 0x24a5c850  addiu       $a1, $a1, -0x37B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A0E08u, 0x2A0E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E10u;
label_2a0e10:
    // 0x2a0e10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a0e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a0e14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a0e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0e18: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A0E18u;
    {
        const bool branch_taken_0x2a0e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E18u;
        // 0x2a0e1c: 0x3c11004c  lui         $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e18) {
            ctx->pc = 0x2A0EACu;
            goto label_2a0eac;
        }
    }
    ctx->pc = 0x2A0E20u;
    // 0x2a0e20: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x2a0e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
    // 0x2a0e24: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x2a0e24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x2a0e28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a0e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a0e2c: 0x26361858  addiu       $s6, $s1, 0x1858
    ctx->pc = 0x2a0e2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 6232));
    // 0x2a0e30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a0e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e34: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x2a0e34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x2a0e38: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2a0e38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0e3c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x2a0e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a0e40:
    // 0x2a0e40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e44: 0xc6450018  lwc1        $f5, 0x18($s2)
    ctx->pc = 0x2a0e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a0e48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a0e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e4c: 0xc6a1a97c  lwc1        $f1, -0x5684($s5)
    ctx->pc = 0x2a0e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294945148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0e50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a0e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a0e54: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2a0e54u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2a0e58: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x2a0e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a0e5c: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x2a0e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0e60: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2a0e60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2a0e64: 0xc6231858  lwc1        $f3, 0x1858($s1)
    ctx->pc = 0x2a0e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a0e68: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a0e68u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a0e6c: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x2a0e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0e70: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x2a0e70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2a0e74: 0x92460078  lbu         $a2, 0x78($s2)
    ctx->pc = 0x2a0e74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2a0e78: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a0e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a0e7c: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x2a0e7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2a0e80: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a0e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a0e84: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2a0e84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a0e88: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x2a0e88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a0e8c: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x2a0e8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a0e90: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2a0e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a0e94: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2a0e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a0e98: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2a0e98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a0e9c: 0xc0a8424  jal         func_2A1090
    ctx->pc = 0x2A0E9Cu;
    SET_GPR_U32(ctx, 31, 0x2A0EA4u);
    ctx->pc = 0x2A0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E9Cu;
    // 0x2a0ea0: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1090u, 0x2A0E9Cu, 0x2A0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EA4u;
label_2a0ea4:
    // 0x2a0ea4: 0x5200ffe6  beql        $s0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2A0EA4u;
    {
        const bool branch_taken_0x2a0ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ea4) {
            ctx->pc = 0x2A0EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0EA4u;
            // 0x2a0ea8: 0xc6400028  lwc1        $f0, 0x28($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0e40;
        }
    }
    ctx->pc = 0x2A0EACu;
label_2a0eac:
    // 0x2a0eac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2a0eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a0eb0:
    // 0x2a0eb0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2a0eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a0eb4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a0eb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0eb8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2a0eb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a0ebc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2a0ebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0ec0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2a0ec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a0ec4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a0ec4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0ec8: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2a0ec8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a0ecc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a0eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0ed0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2a0ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a0ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0ED4u;
        // 0x2a0ed8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0EDCu;
    // 0x2a0edc: 0x0  nop
    ctx->pc = 0x2a0edcu;
    // NOP
    ctx->pc = 0x2a0ee0u;
}
