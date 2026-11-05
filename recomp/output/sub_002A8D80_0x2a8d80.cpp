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

// Function: sub_002A8D80
// Address: 0x2a8d80 - 0x2a8f30
void sub_002A8D80_0x2a8d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8D80_0x2a8d80");
#endif

    switch (ctx->pc) {
        case 0x2a8dd8u: goto label_2a8dd8;
        case 0x2a8dfcu: goto label_2a8dfc;
        case 0x2a8e08u: goto label_2a8e08;
        case 0x2a8ec8u: goto label_2a8ec8;
        case 0x2a8efcu: goto label_2a8efc;
        case 0x2a8f04u: goto label_2a8f04;
        default: break;
    }

    ctx->pc = 0x2a8d80u;

    // 0x2a8d80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a8d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a8d84: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2a8d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2a8d88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d8c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2a8d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a8d90: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2a8d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2a8d94: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a8d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a8d98: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2a8d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2a8d9c: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x2a8d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2a8da0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a8da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a8da4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a8da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8da8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2a8da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2a8dac: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2a8dacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8db0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a8db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2a8db4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2a8db4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8db8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2a8db8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a8dbc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2a8dbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8dc0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2a8dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2a8dc4: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2a8dc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8dc8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2a8dc8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2a8dcc: 0x24a5d960  addiu       $a1, $a1, -0x26A0
    ctx->pc = 0x2a8dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957408));
    // 0x2a8dd0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A8DD0u;
    SET_GPR_U32(ctx, 31, 0x2A8DD8u);
    ctx->pc = 0x2A8DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8DD0u;
    // 0x2a8dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A8DD0u, 0x2A8DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8DD8u;
label_2a8dd8:
    // 0x2a8dd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a8dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a8ddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a8ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a8de0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2A8DE0u;
    {
        const bool branch_taken_0x2a8de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8de0) {
            ctx->pc = 0x2A8DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8DE0u;
            // 0x2a8de4: 0xc6690000  lwc1        $f9, 0x0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8E10u;
            goto label_2a8e10;
        }
    }
    ctx->pc = 0x2A8DE8u;
    // 0x2a8de8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2a8de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2a8dec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8DECu;
    {
        const bool branch_taken_0x2a8dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8dec) {
            ctx->pc = 0x2A8DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8DECu;
            // 0x2a8df0: 0xc6690000  lwc1        $f9, 0x0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8E10u;
            goto label_2a8e10;
        }
    }
    ctx->pc = 0x2A8DF4u;
    // 0x2a8df4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2A8DF4u;
    SET_GPR_U32(ctx, 31, 0x2A8DFCu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2A8DF4u, 0x2A8DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8DFCu;
label_2a8dfc:
    // 0x2a8dfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e00: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x2A8E00u;
    SET_GPR_U32(ctx, 31, 0x2A8E08u);
    ctx->pc = 0x2A8E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8E00u;
    // 0x2a8e04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x2A8E00u, 0x2A8E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E08u;
label_2a8e08:
    // 0x2a8e08: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2a8e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x2a8e0c: 0xc6690000  lwc1        $f9, 0x0($s3)
    ctx->pc = 0x2a8e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2a8e10:
    // 0x2a8e10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a8e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8e14: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x2a8e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e1c: 0xc66b0004  lwc1        $f11, 0x4($s3)
    ctx->pc = 0x2a8e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2a8e20: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2a8e20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2a8e24: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x2a8e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e28: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x2a8e28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2a8e2c: 0xc6870018  lwc1        $f7, 0x18($s4)
    ctx->pc = 0x2a8e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a8e30: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2a8e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2a8e34: 0xc623004c  lwc1        $f3, 0x4C($s1)
    ctx->pc = 0x2a8e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8e38: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x2a8e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e3c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2a8e3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2a8e40: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2a8e40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2a8e44: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x2a8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a8e48: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2a8e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2a8e4c: 0xc648000c  lwc1        $f8, 0xC($s2)
    ctx->pc = 0x2a8e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a8e50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a8e50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a8e54: 0xc6460000  lwc1        $f6, 0x0($s2)
    ctx->pc = 0x2a8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a8e58: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2a8e58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2a8e5c: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x2a8e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8e60: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x2a8e60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x2a8e64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a8e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a8e68: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2a8e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2a8e6c: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x2a8e6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x2a8e70: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2a8e70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a8e74: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a8e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a8e78: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x2a8e78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a8e7c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2a8e7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2a8e80: 0xe7a8002c  swc1        $f8, 0x2C($sp)
    ctx->pc = 0x2a8e80u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a8e84: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2a8e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2a8e88: 0xe7a8001c  swc1        $f8, 0x1C($sp)
    ctx->pc = 0x2a8e88u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a8e8c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2a8e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a8e90: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2a8e90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2a8e94: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2a8e94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a8e98: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2a8e98u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2a8e9c: 0x460a0142  mul.s       $f5, $f0, $f10
    ctx->pc = 0x2a8e9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2a8ea0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a8ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a8ea4: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x2a8ea4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x2a8ea8: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2a8ea8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2a8eac: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2a8eacu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2a8eb0: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x2a8eb0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2a8eb4: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x2a8eb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a8eb8: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x2a8eb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a8ebc: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x2a8ebcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a8ec0: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x2A8EC0u;
    SET_GPR_U32(ctx, 31, 0x2A8EC8u);
    ctx->pc = 0x2A8EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8EC0u;
    // 0x2a8ec4: 0xe7a60010  swc1        $f6, 0x10($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x2A8EC0u, 0x2A8EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8EC8u;
label_2a8ec8:
    // 0x2a8ec8: 0xc6ad0004  lwc1        $f13, 0x4($s5)
    ctx->pc = 0x2a8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a8ecc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a8eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a8ed0: 0xc6cf0004  lwc1        $f15, 0x4($s6)
    ctx->pc = 0x2a8ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a8ed4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a8ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a8ed8: 0x8e2a0048  lw          $t2, 0x48($s1)
    ctx->pc = 0x2a8ed8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2a8edc: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2a8edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a8ee0: 0x8e0ba300  lw          $t3, -0x5D00($s0)
    ctx->pc = 0x2a8ee0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943488)));
    // 0x2a8ee4: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x2a8ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a8ee8: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x2a8ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8eec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a8eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a8ef0: 0xc6ce0000  lwc1        $f14, 0x0($s6)
    ctx->pc = 0x2a8ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a8ef4: 0xc0dafd6  jal         func_36BF58
    ctx->pc = 0x2A8EF4u;
    SET_GPR_U32(ctx, 31, 0x2A8EFCu);
    ctx->pc = 0x2A8EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8EF4u;
    // 0x2a8ef8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BF58u, 0x2A8EF4u, 0x2A8EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8EFCu;
label_2a8efc:
    // 0x2a8efc: 0xc0db1fa  jal         func_36C7E8
    ctx->pc = 0x2A8EFCu;
    SET_GPR_U32(ctx, 31, 0x2A8F04u);
    ctx->pc = 0x36C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C7E8u, 0x2A8EFCu, 0x2A8F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8F04u;
label_2a8f04:
    // 0x2a8f04: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2a8f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8f08: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2a8f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f0c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2a8f0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8f10: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2a8f10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8f14: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a8f14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a8f18: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2a8f18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a8f1c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a8f1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a8f20: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2a8f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a8f24: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2a8f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a8f28: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F28u;
        // 0x2a8f2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8F30u;
}
