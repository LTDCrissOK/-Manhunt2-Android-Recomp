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

// Function: sub_002D3F60
// Address: 0x2d3f60 - 0x2d4098
void sub_002D3F60_0x2d3f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3F60_0x2d3f60");
#endif

    switch (ctx->pc) {
        case 0x2d3f9cu: goto label_2d3f9c;
        case 0x2d3ffcu: goto label_2d3ffc;
        case 0x2d400cu: goto label_2d400c;
        case 0x2d4018u: goto label_2d4018;
        case 0x2d4028u: goto label_2d4028;
        case 0x2d4078u: goto label_2d4078;
        case 0x2d4080u: goto label_2d4080;
        default: break;
    }

    ctx->pc = 0x2d3f60u;

    // 0x2d3f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3f64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d3f68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d3f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d3f6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d3f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3f74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d3f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d3f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d3f7c: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2d3f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2d3f80: 0x3082020f  andi        $v0, $a0, 0x20F
    ctx->pc = 0x2d3f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)527);
    // 0x2d3f84: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2d3f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2d3f88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3F88u;
    {
        const bool branch_taken_0x2d3f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F88u;
        // 0x2d3f8c: 0x8e3001a8  lw          $s0, 0x1A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f88) {
            ctx->pc = 0x2D3FA4u;
            goto label_2d3fa4;
        }
    }
    ctx->pc = 0x2D3F90u;
    // 0x2d3f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f94: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x2D3F94u;
    SET_GPR_U32(ctx, 31, 0x2D3F9Cu);
    ctx->pc = 0x2D3F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3F94u;
    // 0x2d3f98: 0x24050448  addiu       $a1, $zero, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2D3F94u, 0x2D3F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F9Cu;
label_2d3f9c:
    // 0x2d3f9c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D3F9Cu;
    {
        const bool branch_taken_0x2d3f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F9Cu;
        // 0x2d3fa0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f9c) {
            ctx->pc = 0x2D3FF4u;
            goto label_2d3ff4;
        }
    }
    ctx->pc = 0x2D3FA4u;
label_2d3fa4:
    // 0x2d3fa4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2d3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2d3fa8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2d3fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2d3fac: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x2d3facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2d3fb0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3FB0u;
    {
        const bool branch_taken_0x2d3fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FB0u;
        // 0x2d3fb4: 0x30820401  andi        $v0, $a0, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fb0) {
            ctx->pc = 0x2D3FD0u;
            goto label_2d3fd0;
        }
    }
    ctx->pc = 0x2D3FB8u;
    // 0x2d3fb8: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x2d3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x2d3fbc: 0x8c62032c  lw          $v0, 0x32C($v1)
    ctx->pc = 0x2d3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
    // 0x2d3fc0: 0x14510030  bne         $v0, $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D3FC0u;
    {
        const bool branch_taken_0x2d3fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2D3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FC0u;
        // 0x2d3fc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fc0) {
            ctx->pc = 0x2D4084u;
            goto label_2d4084;
        }
    }
    ctx->pc = 0x2D3FC8u;
    // 0x2d3fc8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D3FC8u;
    {
        const bool branch_taken_0x2d3fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FC8u;
        // 0x2d3fcc: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fc8) {
            ctx->pc = 0x2D4010u;
            goto label_2d4010;
        }
    }
    ctx->pc = 0x2D3FD0u;
label_2d3fd0:
    // 0x2d3fd0: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x2d3fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
    // 0x2d3fd4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3FD4u;
    {
        const bool branch_taken_0x2d3fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3fd4) {
            ctx->pc = 0x2D3FECu;
            goto label_2d3fec;
        }
    }
    ctx->pc = 0x2D3FDCu;
    // 0x2d3fdc: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2d3fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2d3fe0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d3fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3fe4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D3FE4u;
    {
        const bool branch_taken_0x2d3fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FE4u;
        // 0x2d3fe8: 0x24650070  addiu       $a1, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fe4) {
            ctx->pc = 0x2D4010u;
            goto label_2d4010;
        }
    }
    ctx->pc = 0x2D3FECu;
label_2d3fec:
    // 0x2d3fec: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3FECu;
    {
        const bool branch_taken_0x2d3fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FECu;
        // 0x2d3ff0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fec) {
            ctx->pc = 0x2D4010u;
            goto label_2d4010;
        }
    }
    ctx->pc = 0x2D3FF4u;
label_2d3ff4:
    // 0x2d3ff4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2D3FF4u;
    SET_GPR_U32(ctx, 31, 0x2D3FFCu);
    ctx->pc = 0x2D3FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3FF4u;
    // 0x2d3ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2D3FF4u, 0x2D3FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3FFCu;
label_2d3ffc:
    // 0x2d3ffc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3FFCu;
    {
        const bool branch_taken_0x2d3ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FFCu;
        // 0x2d4000: 0x260500b0  addiu       $a1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ffc) {
            ctx->pc = 0x2D4010u;
            goto label_2d4010;
        }
    }
    ctx->pc = 0x2D4004u;
    // 0x2d4004: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2D4004u;
    SET_GPR_U32(ctx, 31, 0x2D400Cu);
    ctx->pc = 0x2D4008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4004u;
    // 0x2d4008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2D4004u, 0x2D400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D400Cu;
label_2d400c:
    // 0x2d400c: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x2d400cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2d4010:
    // 0x2d4010: 0xc0b5320  jal         func_2D4C80
    ctx->pc = 0x2D4010u;
    SET_GPR_U32(ctx, 31, 0x2D4018u);
    ctx->pc = 0x2D4014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4010u;
    // 0x2d4014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C80u, 0x2D4010u, 0x2D4018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4018u;
label_2d4018:
    // 0x2d4018: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D4018u;
    {
        const bool branch_taken_0x2d4018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4018u;
        // 0x2d401c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4018) {
            ctx->pc = 0x2D4080u;
            goto label_2d4080;
        }
    }
    ctx->pc = 0x2D4020u;
    // 0x2d4020: 0xc084492  jal         func_211248
    ctx->pc = 0x2D4020u;
    SET_GPR_U32(ctx, 31, 0x2D4028u);
    ctx->pc = 0x2D4024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4020u;
    // 0x2d4024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x2D4020u, 0x2D4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4028u;
label_2d4028:
    // 0x2d4028: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2d4028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2d402c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2d402cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2d4030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d4030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d4034: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x2d4034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4038: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d4038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d403c: 0x0  nop
    ctx->pc = 0x2d403cu;
    // NOP
    // 0x2d4040: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D4040u;
    {
        const bool branch_taken_0x2d4040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4040u;
        // 0x2d4044: 0x26220120  addiu       $v0, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4040) {
            ctx->pc = 0x2D4078u;
            goto label_2d4078;
        }
    }
    ctx->pc = 0x2D4048u;
    // 0x2d4048: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d4048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d404c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d404cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4050: 0x0  nop
    ctx->pc = 0x2d4050u;
    // NOP
    // 0x2d4054: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4054u;
    {
        const bool branch_taken_0x2d4054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4054) {
            ctx->pc = 0x2D4078u;
            goto label_2d4078;
        }
    }
    ctx->pc = 0x2D405Cu;
    // 0x2d405c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4060: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d4060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4064: 0x0  nop
    ctx->pc = 0x2d4064u;
    // NOP
    // 0x2d4068: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4068u;
    {
        const bool branch_taken_0x2d4068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d4068) {
            ctx->pc = 0x2D4078u;
            goto label_2d4078;
        }
    }
    ctx->pc = 0x2D4070u;
    // 0x2d4070: 0xc0846b0  jal         func_211AC0
    ctx->pc = 0x2D4070u;
    SET_GPR_U32(ctx, 31, 0x2D4078u);
    ctx->pc = 0x2D4074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4070u;
    // 0x2d4074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211AC0u, 0x2D4070u, 0x2D4078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4078u;
label_2d4078:
    // 0x2d4078: 0xc085876  jal         func_2161D8
    ctx->pc = 0x2D4078u;
    SET_GPR_U32(ctx, 31, 0x2D4080u);
    ctx->pc = 0x2D407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4078u;
    // 0x2d407c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2161D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2161D8u, 0x2D4078u, 0x2D4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4080u;
label_2d4080:
    // 0x2d4080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4084:
    // 0x2d4084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4088: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d408c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d408cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4090: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4090u;
        // 0x2d4094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4098u;
}
