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

// Function: sub_002E9CF8
// Address: 0x2e9cf8 - 0x2e9f48
void sub_002E9CF8_0x2e9cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9CF8_0x2e9cf8");
#endif

    switch (ctx->pc) {
        case 0x2e9d2cu: goto label_2e9d2c;
        case 0x2e9d5cu: goto label_2e9d5c;
        case 0x2e9da0u: goto label_2e9da0;
        case 0x2e9decu: goto label_2e9dec;
        case 0x2e9e3cu: goto label_2e9e3c;
        default: break;
    }

    ctx->pc = 0x2e9cf8u;

    // 0x2e9cf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e9cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e9cfc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e9cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e9d00: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2e9d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2e9d04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e9d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e9d0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e9d0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e9d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e9d14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e9d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d18: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2e9d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2e9d1c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2e9d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2e9d20: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2e9d20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e9d24: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E9D24u;
    SET_GPR_U32(ctx, 31, 0x2E9D2Cu);
    ctx->pc = 0x2E9D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D24u;
    // 0x2e9d28: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E9D24u, 0x2E9D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D2Cu;
label_2e9d2c:
    // 0x2e9d2c: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2e9d30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e9d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e9d34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9D34u;
    {
        const bool branch_taken_0x2e9d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D34u;
        // 0x2e9d38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d34) {
            ctx->pc = 0x2E9D44u;
            goto label_2e9d44;
        }
    }
    ctx->pc = 0x2E9D3Cu;
    // 0x2e9d3c: 0x8e221208  lw          $v0, 0x1208($s1)
    ctx->pc = 0x2e9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4616)));
    // 0x2e9d40: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2e9d40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2e9d44:
    // 0x2e9d44: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2e9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2e9d48: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x2e9d48u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e9d4c: 0x24424dd0  addiu       $v0, $v0, 0x4DD0
    ctx->pc = 0x2e9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19920));
    // 0x2e9d50: 0xc4550478  lwc1        $f21, 0x478($v0)
    ctx->pc = 0x2e9d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e9d54: 0xc0b9134  jal         func_2E44D0
    ctx->pc = 0x2E9D54u;
    SET_GPR_U32(ctx, 31, 0x2E9D5Cu);
    ctx->pc = 0x2E9D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D54u;
    // 0x2e9d58: 0xc4540474  lwc1        $f20, 0x474($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E44D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E44D0u, 0x2E9D54u, 0x2E9D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D5Cu;
label_2e9d5c:
    // 0x2e9d5c: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x2E9D5Cu;
    {
        const bool branch_taken_0x2e9d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d5c) {
            ctx->pc = 0x2E9D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9D5Cu;
            // 0x2e9d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9F20u;
            goto label_2e9f20;
        }
    }
    ctx->pc = 0x2E9D64u;
    // 0x2e9d64: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E9D64u;
    {
        const bool branch_taken_0x2e9d64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D64u;
        // 0x2e9d68: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d64) {
            ctx->pc = 0x2E9D8Cu;
            goto label_2e9d8c;
        }
    }
    ctx->pc = 0x2E9D6Cu;
    // 0x2e9d6c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9D6Cu;
    {
        const bool branch_taken_0x2e9d6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D6Cu;
        // 0x2e9d70: 0x3c140400  lui         $s4, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d6c) {
            ctx->pc = 0x2E9D90u;
            goto label_2e9d90;
        }
    }
    ctx->pc = 0x2E9D74u;
    // 0x2e9d74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e9d78: 0x9043b825  lbu         $v1, -0x47DB($v0)
    ctx->pc = 0x2e9d78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB825u));
    // 0x2e9d7c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9D7Cu;
    {
        const bool branch_taken_0x2e9d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D7Cu;
        // 0x2e9d80: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d7c) {
            ctx->pc = 0x2E9D90u;
            goto label_2e9d90;
        }
    }
    ctx->pc = 0x2E9D84u;
    // 0x2e9d84: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2E9D84u;
    {
        const bool branch_taken_0x2e9d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D84u;
        // 0x2e9d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d84) {
            ctx->pc = 0x2E9F20u;
            goto label_2e9f20;
        }
    }
    ctx->pc = 0x2E9D8Cu;
label_2e9d8c:
    // 0x2e9d8c: 0x3c140400  lui         $s4, 0x400
    ctx->pc = 0x2e9d8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1024 << 16));
label_2e9d90:
    // 0x2e9d90: 0x24723d20  addiu       $s2, $v1, 0x3D20
    ctx->pc = 0x2e9d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 15648));
    // 0x2e9d94: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2e9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2e9d98: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2E9D98u;
    {
        const bool branch_taken_0x2e9d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D98u;
        // 0x2e9d9c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d98) {
            ctx->pc = 0x2E9EF0u;
            goto label_2e9ef0;
        }
    }
    ctx->pc = 0x2E9DA0u;
label_2e9da0:
    // 0x2e9da0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2e9da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2e9da4: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x2E9DA4u;
    {
        const bool branch_taken_0x2e9da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9da4) {
            ctx->pc = 0x2E9DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9DA4u;
            // 0x2e9da8: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EF4u;
            goto label_2e9ef4;
        }
    }
    ctx->pc = 0x2E9DACu;
    // 0x2e9dac: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x2e9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x2e9db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e9db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e9db4: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x2E9DB4u;
    {
        const bool branch_taken_0x2e9db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9db4) {
            ctx->pc = 0x2E9DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9DB4u;
            // 0x2e9db8: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EF4u;
            goto label_2e9ef4;
        }
    }
    ctx->pc = 0x2E9DBCu;
    // 0x2e9dbc: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x2e9dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x2e9dc0: 0x5054004c  beql        $v0, $s4, . + 4 + (0x4C << 2)
    ctx->pc = 0x2E9DC0u;
    {
        const bool branch_taken_0x2e9dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2e9dc0) {
            ctx->pc = 0x2E9DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9DC0u;
            // 0x2e9dc4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EF4u;
            goto label_2e9ef4;
        }
    }
    ctx->pc = 0x2E9DC8u;
    // 0x2e9dc8: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x2e9dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9dcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9dd0: 0x0  nop
    ctx->pc = 0x2e9dd0u;
    // NOP
    // 0x2e9dd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e9dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9dd8: 0x0  nop
    ctx->pc = 0x2e9dd8u;
    // NOP
    // 0x2e9ddc: 0x45020045  bc1fl       . + 4 + (0x45 << 2)
    ctx->pc = 0x2E9DDCu;
    {
        const bool branch_taken_0x2e9ddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9ddc) {
            ctx->pc = 0x2E9DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9DDCu;
            // 0x2e9de0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EF4u;
            goto label_2e9ef4;
        }
    }
    ctx->pc = 0x2E9DE4u;
    // 0x2e9de4: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x2E9DE4u;
    SET_GPR_U32(ctx, 31, 0x2E9DECu);
    ctx->pc = 0x2E9DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DE4u;
    // 0x2e9de8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2E9DE4u, 0x2E9DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DECu;
label_2e9dec:
    // 0x2e9dec: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E9DECu;
    {
        const bool branch_taken_0x2e9dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9dec) {
            ctx->pc = 0x2E9DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9DECu;
            // 0x2e9df0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EF4u;
            goto label_2e9ef4;
        }
    }
    ctx->pc = 0x2E9DF4u;
    // 0x2e9df4: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x2E9DF4u;
    {
        const bool branch_taken_0x2e9df4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DF4u;
        // 0x2e9df8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9df4) {
            ctx->pc = 0x2E9E34u;
            goto label_2e9e34;
        }
    }
    ctx->pc = 0x2E9DFCu;
    // 0x2e9dfc: 0x8e030ff8  lw          $v1, 0xFF8($s0)
    ctx->pc = 0x2e9dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x2e9e00: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2e9e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e9e04: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2e9e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e9e08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9E08u;
    {
        const bool branch_taken_0x2e9e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E08u;
        // 0x2e9e0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e08) {
            ctx->pc = 0x2E9E28u;
            goto label_2e9e28;
        }
    }
    ctx->pc = 0x2E9E10u;
    // 0x2e9e10: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2e9e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2e9e14: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9E14u;
    {
        const bool branch_taken_0x2e9e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e14) {
            ctx->pc = 0x2E9E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9E14u;
            // 0x2e9e18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9E2Cu;
            goto label_2e9e2c;
        }
    }
    ctx->pc = 0x2E9E1Cu;
    // 0x2e9e1c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2e9e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2e9e20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9E20u;
    {
        const bool branch_taken_0x2e9e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e20) {
            ctx->pc = 0x2E9E2Cu;
            goto label_2e9e2c;
        }
    }
    ctx->pc = 0x2E9E28u;
label_2e9e28:
    // 0x2e9e28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e9e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9e2c:
    // 0x2e9e2c: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E9E2Cu;
    {
        const bool branch_taken_0x2e9e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E2Cu;
        // 0x2e9e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e2c) {
            ctx->pc = 0x2E9EF0u;
            goto label_2e9ef0;
        }
    }
    ctx->pc = 0x2E9E34u;
label_2e9e34:
    // 0x2e9e34: 0xc0ba6fe  jal         func_2E9BF8
    ctx->pc = 0x2E9E34u;
    SET_GPR_U32(ctx, 31, 0x2E9E3Cu);
    ctx->pc = 0x2E9E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9E34u;
    // 0x2e9e38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9BF8u, 0x2E9E34u, 0x2E9E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9E3Cu;
label_2e9e3c:
    // 0x2e9e3c: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E9E3Cu;
    {
        const bool branch_taken_0x2e9e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9e3c) {
            ctx->pc = 0x2E9E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9E3Cu;
            // 0x2e9e40: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EF4u;
            goto label_2e9ef4;
        }
    }
    ctx->pc = 0x2E9E44u;
    // 0x2e9e44: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2e9e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2e9e48: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x2e9e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2e9e4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e9e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e9e50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e9e54: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2e9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2e9e58: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2e9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2e9e5c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e9e5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9e60: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e9e60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e9e64: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e9e64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e9e68: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e9e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e9e6c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e9e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e9e70: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2e9e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e9e74: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2e9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e9e78: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e9e78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e9e7c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e9e7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e9e80: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2e9e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e9e84: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2e9e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9e88: 0x0  nop
    ctx->pc = 0x2e9e88u;
    // NOP
    // 0x2e9e8c: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x2E9E8Cu;
    {
        const bool branch_taken_0x2e9e8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9e8c) {
            ctx->pc = 0x2E9E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9E8Cu;
            // 0x2e9e90: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EF4u;
            goto label_2e9ef4;
        }
    }
    ctx->pc = 0x2E9E94u;
    // 0x2e9e94: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e9e94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9e98: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2e9e98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e9e9c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2e9e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e9ea0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2e9ea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e9ea4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2e9ea4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2e9ea8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e9ea8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2e9eac: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2e9eacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e9eb0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e9eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e9eb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e9eb8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2e9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2e9ebc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e9ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e9ec0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2e9ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e9ec4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2e9ec4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e9ec8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2e9ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e9ecc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2e9eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e9ed0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2e9ed0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2e9ed4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2e9ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e9ed8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2e9ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e9edc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2e9edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e9ee0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e9ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9ee4: 0x0  nop
    ctx->pc = 0x2e9ee4u;
    // NOP
    // 0x2e9ee8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2E9EE8u;
    {
        const bool branch_taken_0x2e9ee8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9EE8u;
        // 0x2e9eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ee8) {
            ctx->pc = 0x2E9F20u;
            goto label_2e9f20;
        }
    }
    ctx->pc = 0x2E9EF0u;
label_2e9ef0:
    // 0x2e9ef0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2e9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2e9ef4:
    // 0x2e9ef4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e9ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ef8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9EF8u;
    {
        const bool branch_taken_0x2e9ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9EF8u;
        // 0x2e9efc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ef8) {
            ctx->pc = 0x2E9F04u;
            goto label_2e9f04;
        }
    }
    ctx->pc = 0x2E9F00u;
    // 0x2e9f00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e9f00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9f04:
    // 0x2e9f04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9F04u;
    {
        const bool branch_taken_0x2e9f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f04) {
            ctx->pc = 0x2E9F14u;
            goto label_2e9f14;
        }
    }
    ctx->pc = 0x2E9F0Cu;
    // 0x2e9f0c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e9f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e9f10: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2e9f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2e9f14:
    // 0x2e9f14: 0x5600ffa2  bnel        $s0, $zero, . + 4 + (-0x5E << 2)
    ctx->pc = 0x2E9F14u;
    {
        const bool branch_taken_0x2e9f14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f14) {
            ctx->pc = 0x2E9F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9F14u;
            // 0x2e9f18: 0x8e03036c  lw          $v1, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9da0;
        }
    }
    ctx->pc = 0x2E9F1Cu;
    // 0x2e9f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9f20:
    // 0x2e9f20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e9f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9f24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e9f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e9f28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e9f28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9f2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2e9f2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e9f30: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2e9f30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9f34: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2e9f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e9f38: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2e9f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e9f3c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2e9f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e9f40: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F40u;
        // 0x2e9f44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9F48u;
}
