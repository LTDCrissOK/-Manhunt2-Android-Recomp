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

// Function: sub_001A5D28
// Address: 0x1a5d28 - 0x1a5ec8
void sub_001A5D28_0x1a5d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5D28_0x1a5d28");
#endif

    switch (ctx->pc) {
        case 0x1a5de8u: goto label_1a5de8;
        case 0x1a5e54u: goto label_1a5e54;
        case 0x1a5e64u: goto label_1a5e64;
        case 0x1a5e74u: goto label_1a5e74;
        case 0x1a5e84u: goto label_1a5e84;
        case 0x1a5e94u: goto label_1a5e94;
        case 0x1a5ea4u: goto label_1a5ea4;
        default: break;
    }

    ctx->pc = 0x1a5d28u;

    // 0x1a5d28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5d2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1a5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1a5d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5d34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a5d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a5d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a5d40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5d44: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1a5d44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a5d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a5d4c: 0x8c52bd50  lw          $s2, -0x42B0($v0)
    ctx->pc = 0x1a5d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1a5d50: 0x8e110148  lw          $s1, 0x148($s0)
    ctx->pc = 0x1a5d50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a5d54: 0x1632004d  bne         $s1, $s2, . + 4 + (0x4D << 2)
    ctx->pc = 0x1A5D54u;
    {
        const bool branch_taken_0x1a5d54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D54u;
        // 0x1a5d58: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d54) {
            ctx->pc = 0x1A5E8Cu;
            goto label_1a5e8c;
        }
    }
    ctx->pc = 0x1A5D5Cu;
    // 0x1a5d5c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a5d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a5d60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5D60u;
    {
        const bool branch_taken_0x1a5d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D60u;
        // 0x1a5d64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d60) {
            ctx->pc = 0x1A5D70u;
            goto label_1a5d70;
        }
    }
    ctx->pc = 0x1A5D68u;
    // 0x1a5d68: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A5D68u;
    {
        const bool branch_taken_0x1a5d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5d68) {
            ctx->pc = 0x1A5E8Cu;
            goto label_1a5e8c;
        }
    }
    ctx->pc = 0x1A5D70u;
label_1a5d70:
    // 0x1a5d70: 0x2662fffa  addiu       $v0, $s3, -0x6
    ctx->pc = 0x1a5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967290));
    // 0x1a5d74: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a5d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a5d78: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1A5D78u;
    {
        const bool branch_taken_0x1a5d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d78) {
            ctx->pc = 0x1A5E6Cu;
            goto label_1a5e6c;
        }
    }
    ctx->pc = 0x1A5D80u;
    // 0x1a5d80: 0xc62110c4  lwc1        $f1, 0x10C4($s1)
    ctx->pc = 0x1a5d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5d84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5d88: 0x0  nop
    ctx->pc = 0x1a5d88u;
    // NOP
    // 0x1a5d8c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a5d8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5d90: 0x0  nop
    ctx->pc = 0x1a5d90u;
    // NOP
    // 0x1a5d94: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1A5D94u;
    {
        const bool branch_taken_0x1a5d94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D94u;
        // 0x1a5d98: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d94) {
            ctx->pc = 0x1A5DF0u;
            goto label_1a5df0;
        }
    }
    ctx->pc = 0x1A5D9Cu;
    // 0x1a5d9c: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1a5da0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5DA0u;
    {
        const bool branch_taken_0x1a5da0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DA0u;
        // 0x1a5da4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5da0) {
            ctx->pc = 0x1A5DBCu;
            goto label_1a5dbc;
        }
    }
    ctx->pc = 0x1A5DA8u;
    // 0x1a5da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5dac: 0x0  nop
    ctx->pc = 0x1a5dacu;
    // NOP
    // 0x1a5db0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5db0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5db4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5DB4u;
    {
        const bool branch_taken_0x1a5db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5db4) {
            ctx->pc = 0x1A5DD4u;
            goto label_1a5dd4;
        }
    }
    ctx->pc = 0x1A5DBCu;
label_1a5dbc:
    // 0x1a5dbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a5dc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a5dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5dc8: 0x0  nop
    ctx->pc = 0x1a5dc8u;
    // NOP
    // 0x1a5dcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5dd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a5dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a5dd4:
    // 0x1a5dd4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a5dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a5dd8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a5dd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a5ddc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a5ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a5de0: 0xc069746  jal         func_1A5D18
    ctx->pc = 0x1A5DE0u;
    SET_GPR_U32(ctx, 31, 0x1A5DE8u);
    ctx->pc = 0x1A5DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5DE0u;
    // 0x1a5de4: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D18u, 0x1A5DE0u, 0x1A5DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DE8u;
label_1a5de8:
    // 0x1a5de8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a5de8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1a5dec: 0xe65410c4  swc1        $f20, 0x10C4($s2)
    ctx->pc = 0x1a5decu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4292), bits); }
label_1a5df0:
    // 0x1a5df0: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1a5df4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5DF4u;
    {
        const bool branch_taken_0x1a5df4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DF4u;
        // 0x1a5df8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5df4) {
            ctx->pc = 0x1A5E10u;
            goto label_1a5e10;
        }
    }
    ctx->pc = 0x1A5DFCu;
    // 0x1a5dfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a5dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a5e00: 0x0  nop
    ctx->pc = 0x1a5e00u;
    // NOP
    // 0x1a5e04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a5e04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a5e08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5E08u;
    {
        const bool branch_taken_0x1a5e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e08) {
            ctx->pc = 0x1A5E28u;
            goto label_1a5e28;
        }
    }
    ctx->pc = 0x1A5E10u;
label_1a5e10:
    // 0x1a5e10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a5e14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a5e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5e18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a5e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a5e1c: 0x0  nop
    ctx->pc = 0x1a5e1cu;
    // NOP
    // 0x1a5e20: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a5e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a5e24: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a5e24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a5e28:
    // 0x1a5e28: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a5e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a5e2c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a5e2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a5e30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5e34: 0xc64110c4  lwc1        $f1, 0x10C4($s2)
    ctx->pc = 0x1a5e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5e38: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a5e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a5e3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a5e3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5e40: 0x0  nop
    ctx->pc = 0x1a5e40u;
    // NOP
    // 0x1a5e44: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x1A5E44u;
    {
        const bool branch_taken_0x1a5e44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5e44) {
            ctx->pc = 0x1A5E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5E44u;
            // 0x1a5e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5EA8u;
            goto label_1a5ea8;
        }
    }
    ctx->pc = 0x1A5E4Cu;
    // 0x1a5e4c: 0xc06a1c4  jal         func_1A8710
    ctx->pc = 0x1A5E4Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E54u);
    ctx->pc = 0x1A5E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E4Cu;
    // 0x1a5e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8710u, 0x1A5E4Cu, 0x1A5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E54u;
label_1a5e54:
    // 0x1a5e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a5e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e5c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A5E5Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E64u);
    ctx->pc = 0x1A5E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E5Cu;
    // 0x1a5e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A5E5Cu, 0x1A5E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E64u;
label_1a5e64:
    // 0x1a5e64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A5E64u;
    {
        const bool branch_taken_0x1a5e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E64u;
        // 0x1a5e68: 0xae4010c4  sw          $zero, 0x10C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e64) {
            ctx->pc = 0x1A5EA4u;
            goto label_1a5ea4;
        }
    }
    ctx->pc = 0x1A5E6Cu;
label_1a5e6c:
    // 0x1a5e6c: 0xc06a1c4  jal         func_1A8710
    ctx->pc = 0x1A5E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E74u);
    ctx->pc = 0x1A5E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E6Cu;
    // 0x1a5e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8710u, 0x1A5E6Cu, 0x1A5E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E74u;
label_1a5e74:
    // 0x1a5e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a5e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e7c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A5E7Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E84u);
    ctx->pc = 0x1A5E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E7Cu;
    // 0x1a5e80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A5E7Cu, 0x1A5E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E84u;
label_1a5e84:
    // 0x1a5e84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5E84u;
    {
        const bool branch_taken_0x1a5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E84u;
        // 0x1a5e88: 0xae2010c4  sw          $zero, 0x10C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e84) {
            ctx->pc = 0x1A5EA4u;
            goto label_1a5ea4;
        }
    }
    ctx->pc = 0x1A5E8Cu;
label_1a5e8c:
    // 0x1a5e8c: 0xc06a1c4  jal         func_1A8710
    ctx->pc = 0x1A5E8Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E94u);
    ctx->pc = 0x1A5E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E8Cu;
    // 0x1a5e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8710u, 0x1A5E8Cu, 0x1A5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E94u;
label_1a5e94:
    // 0x1a5e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a5e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e9c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A5E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A5EA4u);
    ctx->pc = 0x1A5EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E9Cu;
    // 0x1a5ea0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A5E9Cu, 0x1A5EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EA4u;
label_1a5ea4:
    // 0x1a5ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5ea8:
    // 0x1a5ea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5eac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a5eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5eb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a5eb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5eb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5eb8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1a5eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a5ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EBCu;
        // 0x1a5ec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5EC4u;
    // 0x1a5ec4: 0x0  nop
    ctx->pc = 0x1a5ec4u;
    // NOP
    ctx->pc = 0x1a5ec8u;
}
