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

// Function: sub_00121F70
// Address: 0x121f70 - 0x122130
void sub_00121F70_0x121f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121F70_0x121f70");
#endif

    switch (ctx->pc) {
        case 0x121fb4u: goto label_121fb4;
        case 0x121fc4u: goto label_121fc4;
        case 0x121fd4u: goto label_121fd4;
        case 0x12204cu: goto label_12204c;
        case 0x122090u: goto label_122090;
        case 0x1220a0u: goto label_1220a0;
        case 0x1220b0u: goto label_1220b0;
        case 0x1220bcu: goto label_1220bc;
        case 0x1220c8u: goto label_1220c8;
        case 0x1220d4u: goto label_1220d4;
        case 0x1220e0u: goto label_1220e0;
        case 0x1220ecu: goto label_1220ec;
        case 0x1220f8u: goto label_1220f8;
        default: break;
    }

    ctx->pc = 0x121f70u;

    // 0x121f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x121f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x121f74: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x121f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x121f78: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x121f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x121f7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x121f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x121f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x121f84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x121f84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f88: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x121f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x121f8c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x121f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f90: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x121f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x121f94: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x121f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f98: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x121f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x121f9c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x121f9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121fa0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x121fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x121fa4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x121fa4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121fa8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x121fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x121fac: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121FACu;
    SET_GPR_U32(ctx, 31, 0x121FB4u);
    ctx->pc = 0x121FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121FACu;
    // 0x121fb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121FACu, 0x121FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FB4u;
label_121fb4:
    // 0x121fb4: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x121FB4u;
    {
        const bool branch_taken_0x121fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FB4u;
        // 0x121fb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fb4) {
            ctx->pc = 0x122104u;
            goto label_122104;
        }
    }
    ctx->pc = 0x121FBCu;
    // 0x121fbc: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121FBCu;
    SET_GPR_U32(ctx, 31, 0x121FC4u);
    ctx->pc = 0x121FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121FBCu;
    // 0x121fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121FBCu, 0x121FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FC4u;
label_121fc4:
    // 0x121fc4: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x121FC4u;
    {
        const bool branch_taken_0x121fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FC4u;
        // 0x121fc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fc4) {
            ctx->pc = 0x122104u;
            goto label_122104;
        }
    }
    ctx->pc = 0x121FCCu;
    // 0x121fcc: 0xc040a7a  jal         func_1029E8
    ctx->pc = 0x121FCCu;
    SET_GPR_U32(ctx, 31, 0x121FD4u);
    ctx->pc = 0x121FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121FCCu;
    // 0x121fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E8u, 0x121FCCu, 0x121FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FD4u;
label_121fd4:
    // 0x121fd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x121fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121fd8: 0x1240004a  beqz        $s2, . + 4 + (0x4A << 2)
    ctx->pc = 0x121FD8u;
    {
        const bool branch_taken_0x121fd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x121FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FD8u;
        // 0x121fdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fd8) {
            ctx->pc = 0x122104u;
            goto label_122104;
        }
    }
    ctx->pc = 0x121FE0u;
    // 0x121fe0: 0x52000049  beql        $s0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x121FE0u;
    {
        const bool branch_taken_0x121fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x121fe0) {
            ctx->pc = 0x121FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121FE0u;
            // 0x121fe4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122108u;
            goto label_122108;
        }
    }
    ctx->pc = 0x121FE8u;
    // 0x121fe8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x121fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121fec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x121fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121ff0: 0x0  nop
    ctx->pc = 0x121ff0u;
    // NOP
    // 0x121ff4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x121ff4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121ff8: 0x0  nop
    ctx->pc = 0x121ff8u;
    // NOP
    // 0x121ffc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x121FFCu;
    {
        const bool branch_taken_0x121ffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FFCu;
        // 0x122000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ffc) {
            ctx->pc = 0x12202Cu;
            goto label_12202c;
        }
    }
    ctx->pc = 0x122004u;
    // 0x122004: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x122004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122008: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x122008u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12200c: 0x0  nop
    ctx->pc = 0x12200cu;
    // NOP
    // 0x122010: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x122010u;
    {
        const bool branch_taken_0x122010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122010) {
            ctx->pc = 0x122014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122010u;
            // 0x122014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122030u;
            goto label_122030;
        }
    }
    ctx->pc = 0x122018u;
    // 0x122018: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x122018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12201c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12201cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122020: 0x0  nop
    ctx->pc = 0x122020u;
    // NOP
    // 0x122024: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x122024u;
    {
        const bool branch_taken_0x122024 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x122024) {
            ctx->pc = 0x122030u;
            goto label_122030;
        }
    }
    ctx->pc = 0x12202Cu;
label_12202c:
    // 0x12202c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122030:
    // 0x122030: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x122030u;
    {
        const bool branch_taken_0x122030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122030u;
        // 0x122034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122030) {
            ctx->pc = 0x122100u;
            goto label_122100;
        }
    }
    ctx->pc = 0x122038u;
    // 0x122038: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x122038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x12203c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12203cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x122040: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x122040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122044: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x122044u;
    SET_GPR_U32(ctx, 31, 0x12204Cu);
    ctx->pc = 0x122048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122044u;
    // 0x122048: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x122044u, 0x12204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12204Cu;
label_12204c:
    // 0x12204c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12204cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x122050: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x122050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x122054: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x122054u;
    {
        const bool branch_taken_0x122054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122054u;
        // 0x122058: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122054) {
            ctx->pc = 0x122100u;
            goto label_122100;
        }
    }
    ctx->pc = 0x12205Cu;
    // 0x12205c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x12205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x122060: 0xc441c6a4  lwc1        $f1, -0x395C($v0)
    ctx->pc = 0x122060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122064: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x122064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122068: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x122068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12206c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12206cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122070: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x122070u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x122074: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x122074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122078: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x122078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12207c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x122080: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x122080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x122084: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x122084u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x122088: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x122088u;
    SET_GPR_U32(ctx, 31, 0x122090u);
    ctx->pc = 0x12208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122088u;
    // 0x12208c: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x122088u, 0x122090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122090u;
label_122090:
    // 0x122090: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x122094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122098: 0xc04a2e0  jal         func_128B80
    ctx->pc = 0x122098u;
    SET_GPR_U32(ctx, 31, 0x1220A0u);
    ctx->pc = 0x12209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122098u;
    // 0x12209c: 0x2405080b  addiu       $a1, $zero, 0x80B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B80u, 0x122098u, 0x1220A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220A0u;
label_1220a0:
    // 0x1220a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1220a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1220a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220a8: 0xc05a6b0  jal         func_169AC0
    ctx->pc = 0x1220A8u;
    SET_GPR_U32(ctx, 31, 0x1220B0u);
    ctx->pc = 0x1220ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220A8u;
    // 0x1220ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AC0u, 0x1220A8u, 0x1220B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220B0u;
label_1220b0:
    // 0x1220b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1220b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220b4: 0xc05a6ba  jal         func_169AE8
    ctx->pc = 0x1220B4u;
    SET_GPR_U32(ctx, 31, 0x1220BCu);
    ctx->pc = 0x1220B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220B4u;
    // 0x1220b8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AE8u, 0x1220B4u, 0x1220BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220BCu;
label_1220bc:
    // 0x1220bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1220bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220c0: 0xc05a6d2  jal         func_169B48
    ctx->pc = 0x1220C0u;
    SET_GPR_U32(ctx, 31, 0x1220C8u);
    ctx->pc = 0x1220C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220C0u;
    // 0x1220c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B48u, 0x1220C0u, 0x1220C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220C8u;
label_1220c8:
    // 0x1220c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1220c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220cc: 0xc05a70e  jal         func_169C38
    ctx->pc = 0x1220CCu;
    SET_GPR_U32(ctx, 31, 0x1220D4u);
    ctx->pc = 0x1220D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220CCu;
    // 0x1220d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C38u, 0x1220CCu, 0x1220D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220D4u;
label_1220d4:
    // 0x1220d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1220d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220d8: 0xc05a6e6  jal         func_169B98
    ctx->pc = 0x1220D8u;
    SET_GPR_U32(ctx, 31, 0x1220E0u);
    ctx->pc = 0x1220DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220D8u;
    // 0x1220dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B98u, 0x1220D8u, 0x1220E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220E0u;
label_1220e0:
    // 0x1220e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1220e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220e4: 0xc05a6fa  jal         func_169BE8
    ctx->pc = 0x1220E4u;
    SET_GPR_U32(ctx, 31, 0x1220ECu);
    ctx->pc = 0x1220E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220E4u;
    // 0x1220e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169BE8u, 0x1220E4u, 0x1220ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220ECu;
label_1220ec:
    // 0x1220ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1220ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220f0: 0xc049944  jal         func_126510
    ctx->pc = 0x1220F0u;
    SET_GPR_U32(ctx, 31, 0x1220F8u);
    ctx->pc = 0x1220F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220F0u;
    // 0x1220f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126510u, 0x1220F0u, 0x1220F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220F8u;
label_1220f8:
    // 0x1220f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1220F8u;
    {
        const bool branch_taken_0x1220f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1220FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220F8u;
        // 0x1220fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220f8) {
            ctx->pc = 0x122104u;
            goto label_122104;
        }
    }
    ctx->pc = 0x122100u;
label_122100:
    // 0x122100: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122104:
    // 0x122104: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x122104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_122108:
    // 0x122108: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x122108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12210c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12210cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122110: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x122110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122114: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x122114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122118: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x122118u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12211c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12211cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122120: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x122120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x122124: 0x3e00008  jr          $ra
    ctx->pc = 0x122124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122124u;
        // 0x122128: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12212Cu;
    // 0x12212c: 0x0  nop
    ctx->pc = 0x12212cu;
    // NOP
    ctx->pc = 0x122130u;
}
