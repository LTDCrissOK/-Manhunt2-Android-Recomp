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

// Function: sub_00137C78
// Address: 0x137c78 - 0x137e50
void sub_00137C78_0x137c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137C78_0x137c78");
#endif

    switch (ctx->pc) {
        case 0x137ca4u: goto label_137ca4;
        case 0x137d74u: goto label_137d74;
        case 0x137d88u: goto label_137d88;
        case 0x137e10u: goto label_137e10;
        case 0x137e30u: goto label_137e30;
        default: break;
    }

    ctx->pc = 0x137c78u;

    // 0x137c78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x137c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x137c7c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x137c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x137c80: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x137c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x137c84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x137c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c88: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x137c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x137c8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x137c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c90: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x137c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x137c94: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x137c94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x137c98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x137c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x137c9c: 0xc09c98c  jal         func_272630
    ctx->pc = 0x137C9Cu;
    SET_GPR_U32(ctx, 31, 0x137CA4u);
    ctx->pc = 0x137CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C9Cu;
    // 0x137ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272630u, 0x137C9Cu, 0x137CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CA4u;
label_137ca4:
    // 0x137ca4: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x137CA4u;
    {
        const bool branch_taken_0x137ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CA4u;
        // 0x137ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ca4) {
            ctx->pc = 0x137E34u;
            goto label_137e34;
        }
    }
    ctx->pc = 0x137CACu;
    // 0x137cac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x137cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x137cb0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x137cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x137cb4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x137cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x137cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137cbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x137cbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137cc0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x137cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137cc4: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x137cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x137cc8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x137cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x137ccc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x137cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x137cd0: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x137cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x137cd4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x137cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x137cd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x137cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137cdc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x137cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x137ce0: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x137ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x137ce4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x137CE4u;
    {
        const bool branch_taken_0x137ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137ce4) {
            ctx->pc = 0x137CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137CE4u;
            // 0x137ce8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137CF4u;
            goto label_137cf4;
        }
    }
    ctx->pc = 0x137CECu;
    // 0x137cec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137CECu;
    {
        const bool branch_taken_0x137cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CECu;
        // 0x137cf0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cec) {
            ctx->pc = 0x137CFCu;
            goto label_137cfc;
        }
    }
    ctx->pc = 0x137CF4u;
label_137cf4:
    // 0x137cf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x137cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137cf8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x137cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_137cfc:
    // 0x137cfc: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x137CFCu;
    {
        const bool branch_taken_0x137cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CFCu;
        // 0x137d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cfc) {
            ctx->pc = 0x137E34u;
            goto label_137e34;
        }
    }
    ctx->pc = 0x137D04u;
    // 0x137d04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x137d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d08: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x137d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x137d0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x137d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x137d10: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x137d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x137d14: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x137d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137d18: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x137d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x137d1c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x137d1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x137d20: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x137d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d24: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x137d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x137d28: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x137d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137d2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x137d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x137d30: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x137D30u;
    {
        const bool branch_taken_0x137d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D30u;
        // 0x137d34: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d30) {
            ctx->pc = 0x137E34u;
            goto label_137e34;
        }
    }
    ctx->pc = 0x137D38u;
    // 0x137d38: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x137d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137d3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d40: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x137d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x137d44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x137d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x137d48: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x137d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137d4c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x137d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137d50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d54: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x137d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x137d58: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x137d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137d5c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x137d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137d60: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x137d60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x137d64: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x137d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x137d68: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x137d68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x137d6c: 0xc041032  jal         func_1040C8
    ctx->pc = 0x137D6Cu;
    SET_GPR_U32(ctx, 31, 0x137D74u);
    ctx->pc = 0x137D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D6Cu;
    // 0x137d70: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x137D6Cu, 0x137D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D74u;
label_137d74:
    // 0x137d74: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x137D74u;
    {
        const bool branch_taken_0x137d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D74u;
        // 0x137d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d74) {
            ctx->pc = 0x137E34u;
            goto label_137e34;
        }
    }
    ctx->pc = 0x137D7Cu;
    // 0x137d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d80: 0xc043a98  jal         func_10EA60
    ctx->pc = 0x137D80u;
    SET_GPR_U32(ctx, 31, 0x137D88u);
    ctx->pc = 0x137D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D80u;
    // 0x137d84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA60u, 0x137D80u, 0x137D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D88u;
label_137d88:
    // 0x137d88: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x137d88u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x137d8c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x137d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x137d90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x137d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137d94: 0x0  nop
    ctx->pc = 0x137d94u;
    // NOP
    // 0x137d98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137d9c: 0x0  nop
    ctx->pc = 0x137d9cu;
    // NOP
    // 0x137da0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x137DA0u;
    {
        const bool branch_taken_0x137da0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DA0u;
        // 0x137da4: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137da0) {
            ctx->pc = 0x137DB0u;
            goto label_137db0;
        }
    }
    ctx->pc = 0x137DA8u;
    // 0x137da8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x137DA8u;
    {
        const bool branch_taken_0x137da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DA8u;
        // 0x137dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137da8) {
            ctx->pc = 0x137E34u;
            goto label_137e34;
        }
    }
    ctx->pc = 0x137DB0u;
label_137db0:
    // 0x137db0: 0x26629a08  addiu       $v0, $s3, -0x65F8
    ctx->pc = 0x137db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941192));
    // 0x137db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137db8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x137db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x137dbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x137dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x137dc0: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x137dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x137dc4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x137dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137dc8: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x137dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x137dcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x137dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137dd0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x137dd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x137dd4: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x137dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137dd8: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x137dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x137ddc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x137ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x137de0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x137de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137de4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x137de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x137de8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x137de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137dec: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x137decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x137df0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x137df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137df4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x137df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x137df8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x137df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137dfc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x137dfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x137e00: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x137e00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x137e04: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x137e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137e08: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x137E08u;
    SET_GPR_U32(ctx, 31, 0x137E10u);
    ctx->pc = 0x137E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E08u;
    // 0x137e0c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x137E08u, 0x137E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E10u;
label_137e10:
    // 0x137e10: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x137e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137e14: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x137e14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137e18: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x137e18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137e1c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x137e1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x137e20: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x137e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137e24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e28: 0xc041032  jal         func_1040C8
    ctx->pc = 0x137E28u;
    SET_GPR_U32(ctx, 31, 0x137E30u);
    ctx->pc = 0x137E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E28u;
    // 0x137e2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x137E28u, 0x137E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E30u;
label_137e30:
    // 0x137e30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x137e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_137e34:
    // 0x137e34: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x137e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137e38: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x137e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x137e3c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x137e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137e40: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x137e40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x137e44: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x137e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137e48: 0x3e00008  jr          $ra
    ctx->pc = 0x137E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E48u;
        // 0x137e4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137E50u;
}
