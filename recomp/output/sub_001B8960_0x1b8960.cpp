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

// Function: sub_001B8960
// Address: 0x1b8960 - 0x1b8f40
void sub_001B8960_0x1b8960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8960_0x1b8960");
#endif

    switch (ctx->pc) {
        case 0x1b89e4u: goto label_1b89e4;
        case 0x1b89ecu: goto label_1b89ec;
        case 0x1b89f4u: goto label_1b89f4;
        case 0x1b8a5cu: goto label_1b8a5c;
        case 0x1b8dd4u: goto label_1b8dd4;
        case 0x1b8e14u: goto label_1b8e14;
        case 0x1b8e44u: goto label_1b8e44;
        default: break;
    }

    ctx->pc = 0x1b8960u;

    // 0x1b8960: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b8960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b8964: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b8964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8968: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1b8968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1b896c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b896cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b8970: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b8970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8974: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1b8974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1b8978: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1b8978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1b897c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1b897cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1b8980: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b8980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b8984: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1b8984u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1b8988: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1b8988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1b898c: 0x8e750030  lw          $s5, 0x30($s3)
    ctx->pc = 0x1b898cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1b8990: 0x12a20010  beq         $s5, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B8990u;
    {
        const bool branch_taken_0x1b8990 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8990u;
        // 0x1b8994: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8990) {
            ctx->pc = 0x1B89D4u;
            goto label_1b89d4;
        }
    }
    ctx->pc = 0x1B8998u;
    // 0x1b8998: 0x8e8203f0  lw          $v0, 0x3F0($s4)
    ctx->pc = 0x1b8998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1008)));
    // 0x1b899c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1b899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b89a0: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1b89a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1b89a4: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1b89a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b89a8: 0xc661002c  lwc1        $f1, 0x2C($s3)
    ctx->pc = 0x1b89a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b89ac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1b89acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b89b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b89b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b89b4: 0x0  nop
    ctx->pc = 0x1b89b4u;
    // NOP
    // 0x1b89b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b89b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b89bc: 0xb41821  addu        $v1, $a1, $s4
    ctx->pc = 0x1b89bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x1b89c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b89c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b89c4: 0x8c72019c  lw          $s2, 0x19C($v1)
    ctx->pc = 0x1b89c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
    // 0x1b89c8: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1b89c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1b89cc: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B89CCu;
    {
        const bool branch_taken_0x1b89cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b89cc) {
            ctx->pc = 0x1B89DCu;
            goto label_1b89dc;
        }
    }
    ctx->pc = 0x1B89D4u;
label_1b89d4:
    // 0x1b89d4: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x1B89D4u;
    {
        const bool branch_taken_0x1b89d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89D4u;
        // 0x1b89d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89d4) {
            ctx->pc = 0x1B8F0Cu;
            goto label_1b8f0c;
        }
    }
    ctx->pc = 0x1B89DCu;
label_1b89dc:
    // 0x1b89dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B89DCu;
    SET_GPR_U32(ctx, 31, 0x1B89E4u);
    ctx->pc = 0x1B89E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B89DCu;
    // 0x1b89e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B89DCu, 0x1B89E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89E4u;
label_1b89e4:
    // 0x1b89e4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B89E4u;
    SET_GPR_U32(ctx, 31, 0x1B89ECu);
    ctx->pc = 0x1B89E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B89E4u;
    // 0x1b89e8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B89E4u, 0x1B89ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89ECu;
label_1b89ec:
    // 0x1b89ec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B89ECu;
    SET_GPR_U32(ctx, 31, 0x1B89F4u);
    ctx->pc = 0x1B89F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B89ECu;
    // 0x1b89f0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B89ECu, 0x1B89F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89F4u;
label_1b89f4:
    // 0x1b89f4: 0x8e420ff8  lw          $v0, 0xFF8($s2)
    ctx->pc = 0x1b89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4088)));
    // 0x1b89f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b89fc: 0x30430100  andi        $v1, $v0, 0x100
    ctx->pc = 0x1b89fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1b8a00: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8A00u;
    {
        const bool branch_taken_0x1b8a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A00u;
        // 0x1b8a04: 0x30420200  andi        $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a00) {
            ctx->pc = 0x1B8A1Cu;
            goto label_1b8a1c;
        }
    }
    ctx->pc = 0x1B8A08u;
    // 0x1b8a08: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b8a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1b8a0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b8a0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b8a10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b8a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b8a14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8A14u;
    {
        const bool branch_taken_0x1b8a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A14u;
        // 0x1b8a18: 0x264203b0  addiu       $v0, $s2, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a14) {
            ctx->pc = 0x1B8A3Cu;
            goto label_1b8a3c;
        }
    }
    ctx->pc = 0x1B8A1Cu;
label_1b8a1c:
    // 0x1b8a1c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1b8a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1b8a20: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b8a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b8a24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b8a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b8a28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8A28u;
    {
        const bool branch_taken_0x1b8a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A28u;
        // 0x1b8a2c: 0x264203b0  addiu       $v0, $s2, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a28) {
            ctx->pc = 0x1B8A3Cu;
            goto label_1b8a3c;
        }
    }
    ctx->pc = 0x1B8A30u;
    // 0x1b8a30: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1b8a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1b8a34: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b8a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b8a38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b8a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b8a3c:
    // 0x1b8a3c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8a40: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1b8a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8a44: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1b8a48: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B8A48u;
    {
        const bool branch_taken_0x1b8a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A48u;
        // 0x1b8a4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a48) {
            ctx->pc = 0x1B8A74u;
            goto label_1b8a74;
        }
    }
    ctx->pc = 0x1B8A50u;
    // 0x1b8a50: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1b8a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b8a54: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x1B8A54u;
    SET_GPR_U32(ctx, 31, 0x1B8A5Cu);
    ctx->pc = 0x1B8A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A54u;
    // 0x1b8a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1B8A54u, 0x1B8A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A5Cu;
label_1b8a5c:
    // 0x1b8a5c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1b8a5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b8a60: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1b8a60u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8a64: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b8a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8a6c: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x1B8A6Cu;
    {
        const bool branch_taken_0x1b8a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A6Cu;
        // 0x1b8a70: 0x24630f90  addiu       $v1, $v1, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a6c) {
            ctx->pc = 0x1B8F08u;
            goto label_1b8f08;
        }
    }
    ctx->pc = 0x1B8A74u;
label_1b8a74:
    // 0x1b8a74: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1b8a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8a78: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1b8a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1b8a7c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1b8a7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1b8a80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8a84: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8a84u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b8a88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8a8c: 0x0  nop
    ctx->pc = 0x1b8a8cu;
    // NOP
    // 0x1b8a90: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1B8A90u;
    {
        const bool branch_taken_0x1b8a90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A90u;
        // 0x1b8a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a90) {
            ctx->pc = 0x1B8AC4u;
            goto label_1b8ac4;
        }
    }
    ctx->pc = 0x1B8A98u;
    // 0x1b8a98: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1b8a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8a9c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8a9cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b8aa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8aa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8aa4: 0x0  nop
    ctx->pc = 0x1b8aa4u;
    // NOP
    // 0x1b8aa8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8AA8u;
    {
        const bool branch_taken_0x1b8aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AA8u;
        // 0x1b8aac: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8aa8) {
            ctx->pc = 0x1B8AC4u;
            goto label_1b8ac4;
        }
    }
    ctx->pc = 0x1B8AB0u;
    // 0x1b8ab0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8ab0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b8ab4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8ab8: 0x0  nop
    ctx->pc = 0x1b8ab8u;
    // NOP
    // 0x1b8abc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B8ABCu;
    {
        const bool branch_taken_0x1b8abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8abc) {
            ctx->pc = 0x1B8AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8ABCu;
            // 0x1b8ac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8AC4u;
            goto label_1b8ac4;
        }
    }
    ctx->pc = 0x1B8AC4u;
label_1b8ac4:
    // 0x1b8ac4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8AC4u;
    {
        const bool branch_taken_0x1b8ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ac4) {
            ctx->pc = 0x1B8AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8AC4u;
            // 0x1b8ac8: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8AD8u;
            goto label_1b8ad8;
        }
    }
    ctx->pc = 0x1B8ACCu;
    // 0x1b8acc: 0x8e820420  lw          $v0, 0x420($s4)
    ctx->pc = 0x1b8accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1056)));
    // 0x1b8ad0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1B8AD0u;
    {
        const bool branch_taken_0x1b8ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AD0u;
        // 0x1b8ad4: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ad0) {
            ctx->pc = 0x1B8BECu;
            goto label_1b8bec;
        }
    }
    ctx->pc = 0x1B8AD8u;
label_1b8ad8:
    // 0x1b8ad8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1b8ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1b8adc: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x1b8adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x1b8ae0: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B8AE0u;
    {
        const bool branch_taken_0x1b8ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ae0) {
            ctx->pc = 0x1B8AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8AE0u;
            // 0x1b8ae4: 0xc6600028  lwc1        $f0, 0x28($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8BB8u;
            goto label_1b8bb8;
        }
    }
    ctx->pc = 0x1B8AE8u;
    // 0x1b8ae8: 0x8e420fe8  lw          $v0, 0xFE8($s2)
    ctx->pc = 0x1b8ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
    // 0x1b8aec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8af0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b8af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b8af4: 0xc4410240  lwc1        $f1, 0x240($v0)
    ctx->pc = 0x1b8af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8af8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b8af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8afc: 0x0  nop
    ctx->pc = 0x1b8afcu;
    // NOP
    // 0x1b8b00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8B00u;
    {
        const bool branch_taken_0x1b8b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B00u;
        // 0x1b8b04: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b00) {
            ctx->pc = 0x1B8B0Cu;
            goto label_1b8b0c;
        }
    }
    ctx->pc = 0x1B8B08u;
    // 0x1b8b08: 0x24640220  addiu       $a0, $v1, 0x220
    ctx->pc = 0x1b8b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
label_1b8b0c:
    // 0x1b8b0c: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B8B0Cu;
    {
        const bool branch_taken_0x1b8b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8b0c) {
            ctx->pc = 0x1B8B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8B0Cu;
            // 0x1b8b10: 0xc6600028  lwc1        $f0, 0x28($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8BB8u;
            goto label_1b8bb8;
        }
    }
    ctx->pc = 0x1B8B14u;
    // 0x1b8b14: 0x8e420fec  lw          $v0, 0xFEC($s2)
    ctx->pc = 0x1b8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4076)));
    // 0x1b8b18: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1b8b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8b1c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1b8b1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8b20: 0x0  nop
    ctx->pc = 0x1b8b20u;
    // NOP
    // 0x1b8b24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8B24u;
    {
        const bool branch_taken_0x1b8b24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B24u;
        // 0x1b8b28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b24) {
            ctx->pc = 0x1B8B30u;
            goto label_1b8b30;
        }
    }
    ctx->pc = 0x1B8B2Cu;
    // 0x1b8b2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b30:
    // 0x1b8b30: 0x54800021  bnel        $a0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B8B30u;
    {
        const bool branch_taken_0x1b8b30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8b30) {
            ctx->pc = 0x1B8B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8B30u;
            // 0x1b8b34: 0xc6600028  lwc1        $f0, 0x28($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8BB8u;
            goto label_1b8bb8;
        }
    }
    ctx->pc = 0x1B8B38u;
    // 0x1b8b38: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b8b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8b3c: 0x0  nop
    ctx->pc = 0x1b8b3cu;
    // NOP
    // 0x1b8b40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8B40u;
    {
        const bool branch_taken_0x1b8b40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B40u;
        // 0x1b8b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b40) {
            ctx->pc = 0x1B8B4Cu;
            goto label_1b8b4c;
        }
    }
    ctx->pc = 0x1B8B48u;
    // 0x1b8b48: 0x24620220  addiu       $v0, $v1, 0x220
    ctx->pc = 0x1b8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
label_1b8b4c:
    // 0x1b8b4c: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1b8b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8b50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b8b50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b8b54: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8b54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8b58: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1b8b58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1b8b5c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b8b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8b60: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b8b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8b64: 0x8e420fe8  lw          $v0, 0xFE8($s2)
    ctx->pc = 0x1b8b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
    // 0x1b8b68: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x1b8b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8b6c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b8b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8b70: 0x0  nop
    ctx->pc = 0x1b8b70u;
    // NOP
    // 0x1b8b74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8B74u;
    {
        const bool branch_taken_0x1b8b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B74u;
        // 0x1b8b78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b74) {
            ctx->pc = 0x1B8B80u;
            goto label_1b8b80;
        }
    }
    ctx->pc = 0x1B8B7Cu;
    // 0x1b8b7c: 0x24440220  addiu       $a0, $v0, 0x220
    ctx->pc = 0x1b8b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_1b8b80:
    // 0x1b8b80: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1b8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1b8b84: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1b8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b8b88: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1b8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1b8b8c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8b8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1b8b90: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1b8b90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b8b94: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1b8b94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1b8b98: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1b8b98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8b9c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b8b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8ba0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1b8ba0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8ba4: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x1b8ba4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x1b8ba8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b8ba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8bac: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1b8bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8bb0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1B8BB0u;
    {
        const bool branch_taken_0x1b8bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BB0u;
        // 0x1b8bb4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8bb0) {
            ctx->pc = 0x1B8DC8u;
            goto label_1b8dc8;
        }
    }
    ctx->pc = 0x1B8BB8u;
label_1b8bb8:
    // 0x1b8bb8: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x1b8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1b8bbc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1b8bbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b8bc0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8bc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8bc4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1b8bc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1b8bc8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b8bc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8bcc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b8bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8bd0: 0x26830050  addiu       $v1, $s4, 0x50
    ctx->pc = 0x1b8bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1b8bd4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1b8bd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8bd8: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x1b8bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x1b8bdc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b8bdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8be0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1b8be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8be4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1B8BE4u;
    {
        const bool branch_taken_0x1b8be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BE4u;
        // 0x1b8be8: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8be4) {
            ctx->pc = 0x1B8DC8u;
            goto label_1b8dc8;
        }
    }
    ctx->pc = 0x1B8BECu;
label_1b8bec:
    // 0x1b8bec: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1b8becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1b8bf0: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x1b8bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x1b8bf4: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x1B8BF4u;
    {
        const bool branch_taken_0x1b8bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8bf4) {
            ctx->pc = 0x1B8BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8BF4u;
            // 0x1b8bf8: 0x8e430104  lw          $v1, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8D2Cu;
            goto label_1b8d2c;
        }
    }
    ctx->pc = 0x1B8BFCu;
    // 0x1b8bfc: 0x8e420fe8  lw          $v0, 0xFE8($s2)
    ctx->pc = 0x1b8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
    // 0x1b8c00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b8c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8c08: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x1b8c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8c0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8c10: 0x0  nop
    ctx->pc = 0x1b8c10u;
    // NOP
    // 0x1b8c14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8C14u;
    {
        const bool branch_taken_0x1b8c14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C14u;
        // 0x1b8c18: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c14) {
            ctx->pc = 0x1B8C20u;
            goto label_1b8c20;
        }
    }
    ctx->pc = 0x1B8C1Cu;
    // 0x1b8c1c: 0x24640220  addiu       $a0, $v1, 0x220
    ctx->pc = 0x1b8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
label_1b8c20:
    // 0x1b8c20: 0x50800042  beql        $a0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x1B8C20u;
    {
        const bool branch_taken_0x1b8c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c20) {
            ctx->pc = 0x1B8C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8C20u;
            // 0x1b8c24: 0x8e430104  lw          $v1, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8D2Cu;
            goto label_1b8d2c;
        }
    }
    ctx->pc = 0x1B8C28u;
    // 0x1b8c28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8c2c: 0x0  nop
    ctx->pc = 0x1b8c2cu;
    // NOP
    // 0x1b8c30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8C30u;
    {
        const bool branch_taken_0x1b8c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C30u;
        // 0x1b8c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c30) {
            ctx->pc = 0x1B8C3Cu;
            goto label_1b8c3c;
        }
    }
    ctx->pc = 0x1B8C38u;
    // 0x1b8c38: 0x24620220  addiu       $v0, $v1, 0x220
    ctx->pc = 0x1b8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
label_1b8c3c:
    // 0x1b8c3c: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1b8c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8c40: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b8c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b8c44: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8c48: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1b8c48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1b8c4c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b8c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8c50: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b8c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8c54: 0x8e420fe8  lw          $v0, 0xFE8($s2)
    ctx->pc = 0x1b8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
    // 0x1b8c58: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x1b8c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8c5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8c60: 0x0  nop
    ctx->pc = 0x1b8c60u;
    // NOP
    // 0x1b8c64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8C64u;
    {
        const bool branch_taken_0x1b8c64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C64u;
        // 0x1b8c68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c64) {
            ctx->pc = 0x1B8C70u;
            goto label_1b8c70;
        }
    }
    ctx->pc = 0x1B8C6Cu;
    // 0x1b8c6c: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x1b8c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_1b8c70:
    // 0x1b8c70: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1b8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1b8c74: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1b8c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1b8c78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8c78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1b8c7c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1b8c7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8c80: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1b8c80u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1b8c84: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1b8c84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8c88: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b8c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8c8c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1b8c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8c90: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1b8c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1b8c94: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1b8c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1b8c98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8c9c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8c9cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b8ca0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8ca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8ca4: 0x0  nop
    ctx->pc = 0x1b8ca4u;
    // NOP
    // 0x1b8ca8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1B8CA8u;
    {
        const bool branch_taken_0x1b8ca8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CA8u;
        // 0x1b8cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ca8) {
            ctx->pc = 0x1B8CDCu;
            goto label_1b8cdc;
        }
    }
    ctx->pc = 0x1B8CB0u;
    // 0x1b8cb0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1b8cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8cb4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8cb4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b8cb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8cb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8cbc: 0x0  nop
    ctx->pc = 0x1b8cbcu;
    // NOP
    // 0x1b8cc0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8CC0u;
    {
        const bool branch_taken_0x1b8cc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CC0u;
        // 0x1b8cc4: 0xc7a00038  lwc1        $f0, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8cc0) {
            ctx->pc = 0x1B8CDCu;
            goto label_1b8cdc;
        }
    }
    ctx->pc = 0x1B8CC8u;
    // 0x1b8cc8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8cc8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b8ccc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8cccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8cd0: 0x0  nop
    ctx->pc = 0x1b8cd0u;
    // NOP
    // 0x1b8cd4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B8CD4u;
    {
        const bool branch_taken_0x1b8cd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8cd4) {
            ctx->pc = 0x1B8CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8CD4u;
            // 0x1b8cd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8CDCu;
            goto label_1b8cdc;
        }
    }
    ctx->pc = 0x1B8CDCu;
label_1b8cdc:
    // 0x1b8cdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8CDCu;
    {
        const bool branch_taken_0x1b8cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CDCu;
        // 0x1b8ce0: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8cdc) {
            ctx->pc = 0x1B8CF4u;
            goto label_1b8cf4;
        }
    }
    ctx->pc = 0x1B8CE4u;
    // 0x1b8ce4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b8ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b8ce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8cec: 0x0  nop
    ctx->pc = 0x1b8cecu;
    // NOP
    // 0x1b8cf0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b8cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1b8cf4:
    // 0x1b8cf4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8cf8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1b8cf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b8cfc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1b8cfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b8d00: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1b8d00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b8d04: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1b8d04u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1b8d08: 0x4a0003bf  vwaitq
    ctx->pc = 0x1b8d08u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1b8d0c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1b8d0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8d10: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b8d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8d14: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8d14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8d18: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x1b8d18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x1b8d1c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b8d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8d20: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1b8d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8d24: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B8D24u;
    {
        const bool branch_taken_0x1b8d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D24u;
        // 0x1b8d28: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d24) {
            ctx->pc = 0x1B8DC8u;
            goto label_1b8dc8;
        }
    }
    ctx->pc = 0x1B8D2Cu;
label_1b8d2c:
    // 0x1b8d2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b8d30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8d34: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1b8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1b8d38: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1b8d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8d3c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1b8d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b8d40: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1b8d40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b8d44: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1b8d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8d48: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1b8d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b8d4c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1b8d4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1b8d50: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1b8d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b8d54: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1b8d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b8d58: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b8d58u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b8d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b8d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8d60: 0x0  nop
    ctx->pc = 0x1b8d60u;
    // NOP
    // 0x1b8d64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b8d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8d68: 0x0  nop
    ctx->pc = 0x1b8d68u;
    // NOP
    // 0x1b8d6c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8D6Cu;
    {
        const bool branch_taken_0x1b8d6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D6Cu;
        // 0x1b8d70: 0xc6600028  lwc1        $f0, 0x28($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d6c) {
            ctx->pc = 0x1B8D90u;
            goto label_1b8d90;
        }
    }
    ctx->pc = 0x1B8D74u;
    // 0x1b8d74: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1b8d74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b8d78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8d78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8d7c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1b8d7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1b8d80: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b8d80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8d84: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b8d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8d88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8D88u;
    {
        const bool branch_taken_0x1b8d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D88u;
        // 0x1b8d8c: 0x8e430104  lw          $v1, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d88) {
            ctx->pc = 0x1B8DACu;
            goto label_1b8dac;
        }
    }
    ctx->pc = 0x1B8D90u;
label_1b8d90:
    // 0x1b8d90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b8d90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b8d94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b8d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b8d98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8d98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8d9c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1b8d9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1b8da0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b8da0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8da4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b8da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8da8: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x1b8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_1b8dac:
    // 0x1b8dac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8db0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1b8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1b8db4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8db4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8db8: 0x48b01000  qmtc2.ni    $s0, $vf2
    ctx->pc = 0x1b8db8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 16));
    // 0x1b8dbc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b8dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8dc0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1b8dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8dc4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1b8dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b8dc8:
    // 0x1b8dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8dcc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B8DCCu;
    SET_GPR_U32(ctx, 31, 0x1B8DD4u);
    ctx->pc = 0x1B8DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8DCCu;
    // 0x1b8dd0: 0x3c100043  lui         $s0, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B8DCCu, 0x1B8DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8DD4u;
label_1b8dd4:
    // 0x1b8dd4: 0x26020f90  addiu       $v0, $s0, 0xF90
    ctx->pc = 0x1b8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3984));
    // 0x1b8dd8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b8ddc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1b8ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1b8de0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b8de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b8de4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1b8de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1b8de8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1b8de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1b8dec: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1b8decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1b8df0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1b8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1b8df4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1b8df8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b8df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8dfc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1b8dfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b8e00: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b8e00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8e04: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1b8e04u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8e08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b8e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e0c: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x1B8E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E14u);
    ctx->pc = 0x1B8E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E0Cu;
    // 0x1b8e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1B8E0Cu, 0x1B8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E14u;
label_1b8e14:
    // 0x1b8e14: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1b8e14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b8e18: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1b8e18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b8e1c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b8e1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8e20: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1b8e20u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8e24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b8e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8e28: 0x0  nop
    ctx->pc = 0x1b8e28u;
    // NOP
    // 0x1b8e2c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1b8e2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8e30: 0x0  nop
    ctx->pc = 0x1b8e30u;
    // NOP
    // 0x1b8e34: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1B8E34u;
    {
        const bool branch_taken_0x1b8e34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E34u;
        // 0x1b8e38: 0x26030f90  addiu       $v1, $s0, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e34) {
            ctx->pc = 0x1B8F04u;
            goto label_1b8f04;
        }
    }
    ctx->pc = 0x1B8E3Cu;
    // 0x1b8e3c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B8E3Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E44u);
    ctx->pc = 0x1B8E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E3Cu;
    // 0x1b8e40: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B8E3Cu, 0x1B8E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E44u;
label_1b8e44:
    // 0x1b8e44: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1b8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b8e48: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x1b8e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b8e4c: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x1b8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1b8e50: 0x8c43019c  lw          $v1, 0x19C($v0)
    ctx->pc = 0x1b8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x1b8e54: 0x246303b0  addiu       $v1, $v1, 0x3B0
    ctx->pc = 0x1b8e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 944));
    // 0x1b8e58: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1b8e58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8e5c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1b8e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8e60: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1b8e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8e64: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1b8e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1b8e68: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1b8e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1b8e6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8e70: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8e70u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b8e74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8e74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8e78: 0x0  nop
    ctx->pc = 0x1b8e78u;
    // NOP
    // 0x1b8e7c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1B8E7Cu;
    {
        const bool branch_taken_0x1b8e7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E7Cu;
        // 0x1b8e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e7c) {
            ctx->pc = 0x1B8EB0u;
            goto label_1b8eb0;
        }
    }
    ctx->pc = 0x1B8E84u;
    // 0x1b8e84: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b8e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8e88: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8e88u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b8e8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8e90: 0x0  nop
    ctx->pc = 0x1b8e90u;
    // NOP
    // 0x1b8e94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8E94u;
    {
        const bool branch_taken_0x1b8e94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E94u;
        // 0x1b8e98: 0xc7a00058  lwc1        $f0, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e94) {
            ctx->pc = 0x1B8EB0u;
            goto label_1b8eb0;
        }
    }
    ctx->pc = 0x1B8E9Cu;
    // 0x1b8e9c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8e9cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b8ea0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8ea4: 0x0  nop
    ctx->pc = 0x1b8ea4u;
    // NOP
    // 0x1b8ea8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B8EA8u;
    {
        const bool branch_taken_0x1b8ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8ea8) {
            ctx->pc = 0x1B8EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8EA8u;
            // 0x1b8eac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8EB0u;
            goto label_1b8eb0;
        }
    }
    ctx->pc = 0x1B8EB0u;
label_1b8eb0:
    // 0x1b8eb0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B8EB0u;
    {
        const bool branch_taken_0x1b8eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EB0u;
        // 0x1b8eb4: 0x26030f90  addiu       $v1, $s0, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8eb0) {
            ctx->pc = 0x1B8F04u;
            goto label_1b8f04;
        }
    }
    ctx->pc = 0x1B8EB8u;
    // 0x1b8eb8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1b8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8ebc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8ebcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8ec0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1b8ec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b8ec4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1b8ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b8ec8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1b8ec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b8ecc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1b8eccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1b8ed0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1b8ed0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1b8ed4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1b8ed4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8ed8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1b8ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8edc: 0x4405a000  mfc1        $a1, $f20
    ctx->pc = 0x1b8edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b8ee0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8ee0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8ee4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1b8ee4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1b8ee8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b8ee8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8eec: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1b8eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8ef0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1b8ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b8ef4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1b8ef4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8ef8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b8ef8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b8efc: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1b8efcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8f00: 0x26030f90  addiu       $v1, $s0, 0xF90
    ctx->pc = 0x1b8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3984));
label_1b8f04:
    // 0x1b8f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8f08:
    // 0x1b8f08: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1b8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_1b8f0c:
    // 0x1b8f0c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1b8f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8f10: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1b8f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8f14: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1b8f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8f18: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1b8f18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b8f1c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b8f1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b8f20: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1b8f20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b8f24: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b8f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b8f28: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1b8f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b8f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F2Cu;
        // 0x1b8f30: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8F34u;
    // 0x1b8f34: 0x0  nop
    ctx->pc = 0x1b8f34u;
    // NOP
    // 0x1b8f38: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b8f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8f3c: 0x0  nop
    ctx->pc = 0x1b8f3cu;
    // NOP
    ctx->pc = 0x1b8f40u;
}
