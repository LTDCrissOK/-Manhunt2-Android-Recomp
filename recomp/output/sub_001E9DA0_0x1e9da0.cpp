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

// Function: sub_001E9DA0
// Address: 0x1e9da0 - 0x1e9f60
void sub_001E9DA0_0x1e9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9DA0_0x1e9da0");
#endif

    switch (ctx->pc) {
        case 0x1e9de8u: goto label_1e9de8;
        case 0x1e9e28u: goto label_1e9e28;
        case 0x1e9ed8u: goto label_1e9ed8;
        default: break;
    }

    ctx->pc = 0x1e9da0u;

    // 0x1e9da0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e9da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9da8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1e9da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1e9dac: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1e9dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1e9db0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1e9db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1e9db4: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x1e9db4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
    // 0x1e9db8: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x1e9db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x1e9dbc: 0x2630c758  addiu       $s0, $s1, -0x38A8
    ctx->pc = 0x1e9dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952792));
    // 0x1e9dc0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1e9dc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9dc4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1e9dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1e9dc8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1e9dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1e9dcc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1e9dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1e9dd0: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1e9dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x1e9dd4: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1e9dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1e9dd8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1e9dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1e9ddc: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1e9ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x1e9de0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x1E9DE0u;
    SET_GPR_U32(ctx, 31, 0x1E9DE8u);
    ctx->pc = 0x1E9DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9DE0u;
    // 0x1e9de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x1E9DE0u, 0x1E9DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DE8u;
label_1e9de8:
    // 0x1e9de8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e9dec: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1e9decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1e9df0: 0x9043bd24  lbu         $v1, -0x42DC($v0)
    ctx->pc = 0x1e9df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x1e9df4: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1E9DF4u;
    {
        const bool branch_taken_0x1e9df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DF4u;
        // 0x1e9df8: 0xaca091f4  sw          $zero, -0x6E0C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294939124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9df4) {
            ctx->pc = 0x1E9F18u;
            goto label_1e9f18;
        }
    }
    ctx->pc = 0x1E9DFCu;
    // 0x1e9dfc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e9dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e9e00: 0x8c74bd20  lw          $s4, -0x42E0($v1)
    ctx->pc = 0x1e9e00u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3FBD20u));
    // 0x1e9e04: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e9e08: 0x18400048  blez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1E9E08u;
    {
        const bool branch_taken_0x1e9e08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E08u;
        // 0x1e9e0c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e08) {
            ctx->pc = 0x1E9F2Cu;
            goto label_1e9f2c;
        }
    }
    ctx->pc = 0x1E9E10u;
    // 0x1e9e10: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e9e10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e14: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1e9e14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e9e18: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1e9e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e9e1c: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x1e9e1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e9e20: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e9e20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e24: 0x0  nop
    ctx->pc = 0x1e9e24u;
    // NOP
label_1e9e28:
    // 0x1e9e28: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x1e9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1e9e2c: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x1e9e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1e9e30: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e9e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e9e34: 0x147e0002  bne         $v1, $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9E34u;
    {
        const bool branch_taken_0x1e9e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        ctx->pc = 0x1E9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E34u;
        // 0x1e9e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e34) {
            ctx->pc = 0x1E9E40u;
            goto label_1e9e40;
        }
    }
    ctx->pc = 0x1E9E3Cu;
    // 0x1e9e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9e40:
    // 0x1e9e40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e9e44: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1E9E44u;
    {
        const bool branch_taken_0x1e9e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E44u;
        // 0x1e9e48: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e44) {
            ctx->pc = 0x1E9EFCu;
            goto label_1e9efc;
        }
    }
    ctx->pc = 0x1E9E4Cu;
    // 0x1e9e4c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1e9e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e9e50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e9e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e54: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1e9e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e9e58: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1e9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e9e5c: 0x24660020  addiu       $a2, $v1, 0x20
    ctx->pc = 0x1e9e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1e9e60: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1e9e60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e9e64: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e9e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e9e68: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1e9e68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e9e6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e9e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e70: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1e9e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e9e74: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1e9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9e78: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x1e9e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1e9e7c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1e9e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e80: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1e9e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e9e84: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1e9e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9e88: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1e9e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e9e8c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1e9e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9e90: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1e9e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e9e94: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1e9e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9e98: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1e9e98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e9e9c: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x1e9e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1e9ea0: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1e9ea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1e9ea4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1e9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ea8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1e9ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1e9eac: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1e9eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9eb0: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1e9eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1e9eb4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1e9eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9eb8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1e9eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9ebc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e9ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e9ec0: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1e9ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1e9ec4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1e9ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ec8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1e9ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1e9ecc: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1e9eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9ed0: 0xc078932  jal         func_1E24C8
    ctx->pc = 0x1E9ED0u;
    SET_GPR_U32(ctx, 31, 0x1E9ED8u);
    ctx->pc = 0x1E9ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9ED0u;
    // 0x1e9ed4: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E24C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E24C8u, 0x1E9ED0u, 0x1E9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9ED8u;
label_1e9ed8:
    // 0x1e9ed8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9ED8u;
    {
        const bool branch_taken_0x1e9ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9ED8u;
        // 0x1e9edc: 0x8ec291f4  lw          $v0, -0x6E0C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294939124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ed8) {
            ctx->pc = 0x1E9EFCu;
            goto label_1e9efc;
        }
    }
    ctx->pc = 0x1E9EE0u;
    // 0x1e9ee0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x1e9ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x1e9ee4: 0x2484c758  addiu       $a0, $a0, -0x38A8
    ctx->pc = 0x1e9ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952792));
    // 0x1e9ee8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e9ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9eec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9ef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e9ef4: 0xaec291f4  sw          $v0, -0x6E0C($s6)
    ctx->pc = 0x1e9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294939124), GPR_U32(ctx, 2));
    // 0x1e9ef8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1e9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1e9efc:
    // 0x1e9efc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e9f00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e9f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e9f04: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1e9f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e9f08: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1E9F08u;
    {
        const bool branch_taken_0x1e9f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F08u;
        // 0x1e9f0c: 0x26b501c4  addiu       $s5, $s5, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f08) {
            ctx->pc = 0x1E9E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9e28;
        }
    }
    ctx->pc = 0x1E9F10u;
    // 0x1e9f10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9F10u;
    {
        const bool branch_taken_0x1e9f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F10u;
        // 0x1e9f14: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f10) {
            ctx->pc = 0x1E9F30u;
            goto label_1e9f30;
        }
    }
    ctx->pc = 0x1E9F18u;
label_1e9f18:
    // 0x1e9f18: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e9f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e9f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9f20: 0x8c44bd28  lw          $a0, -0x42D8($v0)
    ctx->pc = 0x1e9f20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD28u));
    // 0x1e9f24: 0xaca391f4  sw          $v1, -0x6E0C($a1)
    ctx->pc = 0x1e9f24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294939124), GPR_U32(ctx, 3));
    // 0x1e9f28: 0xae24c758  sw          $a0, -0x38A8($s1)
    ctx->pc = 0x1e9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952792), GPR_U32(ctx, 4));
label_1e9f2c:
    // 0x1e9f2c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1e9f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e9f30:
    // 0x1e9f30: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1e9f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e9f34: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1e9f34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9f38: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1e9f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e9f3c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1e9f3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9f40: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1e9f40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e9f44: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1e9f44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e9f48: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x1e9f48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e9f4c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1e9f4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e9f50: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1e9f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e9f54: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F54u;
        // 0x1e9f58: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9F5Cu;
    // 0x1e9f5c: 0x0  nop
    ctx->pc = 0x1e9f5cu;
    // NOP
    ctx->pc = 0x1e9f60u;
}
