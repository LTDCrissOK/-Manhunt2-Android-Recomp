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

// Function: sub_00364EA8
// Address: 0x364ea8 - 0x3652d8
void sub_00364EA8_0x364ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364EA8_0x364ea8");
#endif

    switch (ctx->pc) {
        case 0x364ee4u: goto label_364ee4;
        case 0x364ef8u: goto label_364ef8;
        case 0x364f08u: goto label_364f08;
        case 0x364f28u: goto label_364f28;
        case 0x364f4cu: goto label_364f4c;
        case 0x364f60u: goto label_364f60;
        case 0x364f70u: goto label_364f70;
        case 0x364fe4u: goto label_364fe4;
        case 0x36503cu: goto label_36503c;
        case 0x365068u: goto label_365068;
        case 0x365070u: goto label_365070;
        case 0x365110u: goto label_365110;
        case 0x36512cu: goto label_36512c;
        case 0x36513cu: goto label_36513c;
        case 0x365208u: goto label_365208;
        case 0x36523cu: goto label_36523c;
        case 0x365278u: goto label_365278;
        case 0x36528cu: goto label_36528c;
        case 0x36529cu: goto label_36529c;
        case 0x3652b8u: goto label_3652b8;
        default: break;
    }

    ctx->pc = 0x364ea8u;

    // 0x364ea8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x364ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x364eac: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x364eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x364eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x364eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364eb4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x364eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x364eb8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x364eb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x364ebc: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x364ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x364ec0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x364ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364ec4: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x364ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x364ec8: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x364ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x364ecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x364eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ed0: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x364ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x364ed4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x364ED4u;
    {
        const bool branch_taken_0x364ed4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x364ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364ED4u;
        // 0x364ed8: 0xffbf00c0  sd          $ra, 0xC0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364ed4) {
            ctx->pc = 0x364F20u;
            goto label_364f20;
        }
    }
    ctx->pc = 0x364EDCu;
    // 0x364edc: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x364EDCu;
    SET_GPR_U32(ctx, 31, 0x364EE4u);
    ctx->pc = 0x364EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364EDCu;
    // 0x364ee0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x364EDCu, 0x364EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364EE4u;
label_364ee4:
    // 0x364ee4: 0x8c50029c  lw          $s0, 0x29C($v0)
    ctx->pc = 0x364ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x364ee8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x364EE8u;
    {
        const bool branch_taken_0x364ee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x364EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364EE8u;
        // 0x364eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364ee8) {
            ctx->pc = 0x364F0Cu;
            goto label_364f0c;
        }
    }
    ctx->pc = 0x364EF0u;
    // 0x364ef0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x364EF0u;
    SET_GPR_U32(ctx, 31, 0x364EF8u);
    ctx->pc = 0x364EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364EF0u;
    // 0x364ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x364EF0u, 0x364EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364EF8u;
label_364ef8:
    // 0x364ef8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x364EF8u;
    {
        const bool branch_taken_0x364ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364EF8u;
        // 0x364efc: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364ef8) {
            ctx->pc = 0x364F0Cu;
            goto label_364f0c;
        }
    }
    ctx->pc = 0x364F00u;
    // 0x364f00: 0xc0c4900  jal         func_312400
    ctx->pc = 0x364F00u;
    SET_GPR_U32(ctx, 31, 0x364F08u);
    ctx->pc = 0x364F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F00u;
    // 0x364f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x364F00u, 0x364F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F08u;
label_364f08:
    // 0x364f08: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x364f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_364f0c:
    // 0x364f0c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x364f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x364f10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x364f10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x364f14: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x364f14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x364f18: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x364F18u;
    {
        const bool branch_taken_0x364f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364F18u;
        // 0x364f1c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364f18) {
            ctx->pc = 0x3652B8u;
            goto label_3652b8;
        }
    }
    ctx->pc = 0x364F20u;
label_364f20:
    // 0x364f20: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x364F20u;
    SET_GPR_U32(ctx, 31, 0x364F28u);
    ctx->pc = 0x364F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F20u;
    // 0x364f24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x364F20u, 0x364F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F28u;
label_364f28:
    // 0x364f28: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x364f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x364f2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x364f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364f30: 0x0  nop
    ctx->pc = 0x364f30u;
    // NOP
    // 0x364f34: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x364f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364f38: 0x0  nop
    ctx->pc = 0x364f38u;
    // NOP
    // 0x364f3c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x364F3Cu;
    {
        const bool branch_taken_0x364f3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x364F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364F3Cu;
        // 0x364f40: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364f3c) {
            ctx->pc = 0x364FCCu;
            goto label_364fcc;
        }
    }
    ctx->pc = 0x364F44u;
    // 0x364f44: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x364F44u;
    SET_GPR_U32(ctx, 31, 0x364F4Cu);
    ctx->pc = 0x364F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F44u;
    // 0x364f48: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x364F44u, 0x364F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F4Cu;
label_364f4c:
    // 0x364f4c: 0x8c50029c  lw          $s0, 0x29C($v0)
    ctx->pc = 0x364f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x364f50: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x364F50u;
    {
        const bool branch_taken_0x364f50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x364F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364F50u;
        // 0x364f54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364f50) {
            ctx->pc = 0x364F74u;
            goto label_364f74;
        }
    }
    ctx->pc = 0x364F58u;
    // 0x364f58: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x364F58u;
    SET_GPR_U32(ctx, 31, 0x364F60u);
    ctx->pc = 0x364F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F58u;
    // 0x364f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x364F58u, 0x364F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F60u;
label_364f60:
    // 0x364f60: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x364F60u;
    {
        const bool branch_taken_0x364f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364f60) {
            ctx->pc = 0x364F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364F60u;
            // 0x364f64: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364F74u;
            goto label_364f74;
        }
    }
    ctx->pc = 0x364F68u;
    // 0x364f68: 0xc0c4900  jal         func_312400
    ctx->pc = 0x364F68u;
    SET_GPR_U32(ctx, 31, 0x364F70u);
    ctx->pc = 0x364F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F68u;
    // 0x364f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x364F68u, 0x364F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F70u;
label_364f70:
    // 0x364f70: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x364f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_364f74:
    // 0x364f74: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x364f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x364f78: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x364f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x364f7c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x364f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364f80: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x364f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x364f84: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x364f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x364f88: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x364f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x364f8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x364f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x364f90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x364f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364f94: 0x0  nop
    ctx->pc = 0x364f94u;
    // NOP
    // 0x364f98: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x364f98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x364f9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x364f9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x364fa0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x364fa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x364fa4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x364fa4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x364fa8: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x364fa8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x364fac: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x364facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x364fb0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x364fb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x364fb4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x364fb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x364fb8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x364fb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x364fbc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x364fc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x364fc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364fc4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x364FC4u;
    {
        const bool branch_taken_0x364fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364FC4u;
        // 0x364fc8: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364fc4) {
            ctx->pc = 0x365034u;
            goto label_365034;
        }
    }
    ctx->pc = 0x364FCCu;
label_364fcc:
    // 0x364fcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x364fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x364fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364fd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x364fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364fd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364fdc: 0xc0d92c8  jal         func_364B20
    ctx->pc = 0x364FDCu;
    SET_GPR_U32(ctx, 31, 0x364FE4u);
    ctx->pc = 0x364FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364FDCu;
    // 0x364fe0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B20u, 0x364FDCu, 0x364FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FE4u;
label_364fe4:
    // 0x364fe4: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x364fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x364fe8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x364fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x364fec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x364fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x364ff0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x364ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x364ff4: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x364ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x364ff8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x364ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x364ffc: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x364ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x365000: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x365000u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x365004: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x365004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365008: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x365008u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x36500c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x36500cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x365010: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x365010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x365014: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x365014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x365018: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x365018u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36501c: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x36501cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x365020: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x365020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x365024: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x365024u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x365028: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x365028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36502c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36502cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365030: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x365030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365034:
    // 0x365034: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x365034u;
    SET_GPR_U32(ctx, 31, 0x36503Cu);
    ctx->pc = 0x365038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365034u;
    // 0x365038: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x365034u, 0x36503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36503Cu;
label_36503c:
    // 0x36503c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x36503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x365040: 0x8c620ff0  lw          $v0, 0xFF0($v1)
    ctx->pc = 0x365040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4080)));
    // 0x365044: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x365044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x365048: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x365048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36504c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x36504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x365050: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x365050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365054: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x365054u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x365058: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x365058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36505c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x365060: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x365060u;
    SET_GPR_U32(ctx, 31, 0x365068u);
    ctx->pc = 0x365064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365060u;
    // 0x365064: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x365060u, 0x365068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365068u;
label_365068:
    // 0x365068: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x365068u;
    SET_GPR_U32(ctx, 31, 0x365070u);
    ctx->pc = 0x36506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365068u;
    // 0x36506c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x365068u, 0x365070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365070u;
label_365070:
    // 0x365070: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x365070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365074: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x365074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x365078: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x365078u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36507c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36507cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x365080: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x365080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x365084: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x365084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x365088: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x365088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x36508c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x36508cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x365090: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x365090u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365094: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x365094u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x365098: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x365098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36509c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x36509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3650a0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3650a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3650a4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x3650a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3650a8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3650a8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3650ac: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3650acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3650b0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x3650b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3650b4: 0x0  nop
    ctx->pc = 0x3650b4u;
    // NOP
    // 0x3650b8: 0x0  nop
    ctx->pc = 0x3650b8u;
    // NOP
    // 0x3650bc: 0x46010084  c1          0x10084
    ctx->pc = 0x3650bcu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x3650c0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3650c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3650c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3650c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3650c8: 0x0  nop
    ctx->pc = 0x3650c8u;
    // NOP
    // 0x3650cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3650ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3650d0: 0x0  nop
    ctx->pc = 0x3650d0u;
    // NOP
    // 0x3650d4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3650D4u;
    {
        const bool branch_taken_0x3650d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3650D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3650D4u;
        // 0x3650d8: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3650d4) {
            ctx->pc = 0x365100u;
            goto label_365100;
        }
    }
    ctx->pc = 0x3650DCu;
    // 0x3650dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3650dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3650e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3650e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3650e4: 0x0  nop
    ctx->pc = 0x3650e4u;
    // NOP
    // 0x3650e8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3650e8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3650ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3650ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3650f0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3650f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3650f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3650f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3650f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3650f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3650fc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x3650fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_365100:
    // 0x365100: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x365100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x365104: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x365104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x365108: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x365108u;
    SET_GPR_U32(ctx, 31, 0x365110u);
    ctx->pc = 0x36510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365108u;
    // 0x36510c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x365108u, 0x365110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365110u;
label_365110:
    // 0x365110: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x365110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x365114: 0x24055000  addiu       $a1, $zero, 0x5000
    ctx->pc = 0x365114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x365118: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x365118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36511c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36511cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x365120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365124: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x365124u;
    SET_GPR_U32(ctx, 31, 0x36512Cu);
    ctx->pc = 0x365128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365124u;
    // 0x365128: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x365124u, 0x36512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36512Cu;
label_36512c:
    // 0x36512c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x36512Cu;
    {
        const bool branch_taken_0x36512c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36512c) {
            ctx->pc = 0x365224u;
            goto label_365224;
        }
    }
    ctx->pc = 0x365134u;
    // 0x365134: 0xc07a25c  jal         func_1E8970
    ctx->pc = 0x365134u;
    SET_GPR_U32(ctx, 31, 0x36513Cu);
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x365134u, 0x36513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36513Cu;
label_36513c:
    // 0x36513c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x365140: 0x8c432b20  lw          $v1, 0x2B20($v0)
    ctx->pc = 0x365140u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B20u));
    // 0x365144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x365144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365148: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x365148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36514c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x36514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x365150: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x365150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x365154: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x365154u;
    {
        const bool branch_taken_0x365154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365154u;
        // 0x365158: 0x8c822b20  lw          $v0, 0x2B20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365154) {
            ctx->pc = 0x365210u;
            goto label_365210;
        }
    }
    ctx->pc = 0x36515Cu;
    // 0x36515c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x36515cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x365160: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x365160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x365164: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x365164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x365168: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x365168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x36516c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x36516Cu;
    {
        const bool branch_taken_0x36516c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36516Cu;
        // 0x365170: 0x8c822b20  lw          $v0, 0x2B20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36516c) {
            ctx->pc = 0x365210u;
            goto label_365210;
        }
    }
    ctx->pc = 0x365174u;
    // 0x365174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365178: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x365178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    // 0x36517c: 0x8c842b20  lw          $a0, 0x2B20($a0)
    ctx->pc = 0x36517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x365180: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x365180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365184: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x365184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x365188: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x365188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x36518c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36518Cu;
    {
        const bool branch_taken_0x36518c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36518Cu;
        // 0x365190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36518c) {
            ctx->pc = 0x365198u;
            goto label_365198;
        }
    }
    ctx->pc = 0x365194u;
    // 0x365194: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x365194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_365198:
    // 0x365198: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x365198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x36519c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x36519cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3651a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3651a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3651a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3651a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3651a8: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x3651a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3651ac: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x3651acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x3651b0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3651b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3651b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3651b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3651b8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3651b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3651bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3651bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3651c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3651c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3651c4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3651c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3651c8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x3651c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3651cc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3651ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3651d0: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x3651d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3651d4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3651d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3651d8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3651d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3651dc: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x3651dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x3651e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3651E0u;
    {
        const bool branch_taken_0x3651e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3651E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3651E0u;
        // 0x3651e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3651e0) {
            ctx->pc = 0x3651ECu;
            goto label_3651ec;
        }
    }
    ctx->pc = 0x3651E8u;
    // 0x3651e8: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x3651e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_3651ec:
    // 0x3651ec: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x3651ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x3651f0: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x3651f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3651f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3651f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3651f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3651f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3651fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3651fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x365200: 0xc0791fe  jal         func_1E47F8
    ctx->pc = 0x365200u;
    SET_GPR_U32(ctx, 31, 0x365208u);
    ctx->pc = 0x365204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365200u;
    // 0x365204: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47F8u, 0x365200u, 0x365208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365208u;
label_365208:
    // 0x365208: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x365208u;
    {
        const bool branch_taken_0x365208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365208u;
        // 0x36520c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365208) {
            ctx->pc = 0x365230u;
            goto label_365230;
        }
    }
    ctx->pc = 0x365210u;
label_365210:
    // 0x365210: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x365210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x365214: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x365214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x365218: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x365218u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36521c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36521Cu;
    {
        const bool branch_taken_0x36521c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36521Cu;
        // 0x365220: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36521c) {
            ctx->pc = 0x36522Cu;
            goto label_36522c;
        }
    }
    ctx->pc = 0x365224u;
label_365224:
    // 0x365224: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x365224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365228: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x365228u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_36522c:
    // 0x36522c: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x36522cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_365230:
    // 0x365230: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x365230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365234: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x365234u;
    SET_GPR_U32(ctx, 31, 0x36523Cu);
    ctx->pc = 0x365238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365234u;
    // 0x365238: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x365234u, 0x36523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36523Cu;
label_36523c:
    // 0x36523c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x36523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x365240: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x365240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x365244: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x365244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x365248: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x365248u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x36524c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x36524cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x365250: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x365250u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x365254: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x365254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x365258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x365258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36525c: 0x0  nop
    ctx->pc = 0x36525cu;
    // NOP
    // 0x365260: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x365260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x365264: 0x0  nop
    ctx->pc = 0x365264u;
    // NOP
    // 0x365268: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x365268u;
    {
        const bool branch_taken_0x365268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365268u;
        // 0x36526c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365268) {
            ctx->pc = 0x3652B0u;
            goto label_3652b0;
        }
    }
    ctx->pc = 0x365270u;
    // 0x365270: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x365270u;
    SET_GPR_U32(ctx, 31, 0x365278u);
    ctx->pc = 0x365274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365270u;
    // 0x365274: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x365270u, 0x365278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365278u;
label_365278:
    // 0x365278: 0x8c50029c  lw          $s0, 0x29C($v0)
    ctx->pc = 0x365278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x36527c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36527Cu;
    {
        const bool branch_taken_0x36527c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x365280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36527Cu;
        // 0x365280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36527c) {
            ctx->pc = 0x3652A0u;
            goto label_3652a0;
        }
    }
    ctx->pc = 0x365284u;
    // 0x365284: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x365284u;
    SET_GPR_U32(ctx, 31, 0x36528Cu);
    ctx->pc = 0x365288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365284u;
    // 0x365288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x365284u, 0x36528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36528Cu;
label_36528c:
    // 0x36528c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36528Cu;
    {
        const bool branch_taken_0x36528c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36528Cu;
        // 0x365290: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36528c) {
            ctx->pc = 0x3652A0u;
            goto label_3652a0;
        }
    }
    ctx->pc = 0x365294u;
    // 0x365294: 0xc0c4900  jal         func_312400
    ctx->pc = 0x365294u;
    SET_GPR_U32(ctx, 31, 0x36529Cu);
    ctx->pc = 0x365298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365294u;
    // 0x365298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x365294u, 0x36529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36529Cu;
label_36529c:
    // 0x36529c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x36529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_3652a0:
    // 0x3652a0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3652a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3652a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3652a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3652a8: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x3652a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3652ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3652acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3652b0:
    // 0x3652b0: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x3652B0u;
    SET_GPR_U32(ctx, 31, 0x3652B8u);
    ctx->pc = 0x3652B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3652B0u;
    // 0x3652b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x3652B0u, 0x3652B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3652B8u;
label_3652b8:
    // 0x3652b8: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x3652b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3652bc: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x3652bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3652c0: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x3652c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3652c4: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x3652c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3652c8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3652c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3652cc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3652ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3652d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3652D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3652D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3652D0u;
        // 0x3652d4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3652D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3652D8u;
}
