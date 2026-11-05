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

// Function: sub_0015F9B0
// Address: 0x15f9b0 - 0x15fb18
void sub_0015F9B0_0x15f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F9B0_0x15f9b0");
#endif

    switch (ctx->pc) {
        case 0x15fa10u: goto label_15fa10;
        case 0x15fa9cu: goto label_15fa9c;
        default: break;
    }

    ctx->pc = 0x15f9b0u;

    // 0x15f9b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15f9b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x15f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x15f9b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x15f9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x15f9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15f9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x15f9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x15f9c4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15f9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x15f9c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15f9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9cc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15f9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x15f9d0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x15f9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x15f9d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15f9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15f9d8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x15f9d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15f9dc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x15f9dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15f9e0: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x15f9e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x15f9e4: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x15F9E4u;
    {
        const bool branch_taken_0x15f9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9E4u;
        // 0x15f9e8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9e4) {
            ctx->pc = 0x15FAE4u;
            goto label_15fae4;
        }
    }
    ctx->pc = 0x15F9ECu;
    // 0x15f9ec: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15f9f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15f9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15f9f4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15f9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15f9f8: 0x24539c14  addiu       $s3, $v0, -0x63EC
    ctx->pc = 0x15f9f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x15f9fc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x15f9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x15fa00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15fa00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15fa04: 0x2675fefc  addiu       $s5, $s3, -0x104
    ctx->pc = 0x15fa04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967036));
    // 0x15fa08: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x15fa08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15fa0c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15fa10:
    // 0x15fa10: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15fa14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fa18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fa1c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x15FA1Cu;
    {
        const bool branch_taken_0x15fa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA1Cu;
        // 0x15fa20: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa1c) {
            ctx->pc = 0x15FAC4u;
            goto label_15fac4;
        }
    }
    ctx->pc = 0x15FA24u;
    // 0x15fa24: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x15fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15fa28: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x15fa2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fa30: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x15FA30u;
    {
        const bool branch_taken_0x15fa30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA30u;
        // 0x15fa34: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa30) {
            ctx->pc = 0x15FAC4u;
            goto label_15fac4;
        }
    }
    ctx->pc = 0x15FA38u;
    // 0x15fa38: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15fa3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15fa40: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x15fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15fa44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fa48: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FA48u;
    {
        const bool branch_taken_0x15fa48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fa48) {
            ctx->pc = 0x15FA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FA48u;
            // 0x15fa4c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FA58u;
            goto label_15fa58;
        }
    }
    ctx->pc = 0x15FA50u;
    // 0x15fa50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15FA50u;
    {
        const bool branch_taken_0x15fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA50u;
        // 0x15fa54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa50) {
            ctx->pc = 0x15FA60u;
            goto label_15fa60;
        }
    }
    ctx->pc = 0x15FA58u;
label_15fa58:
    // 0x15fa58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fa5c: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x15fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15fa60:
    // 0x15fa60: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x15FA60u;
    {
        const bool branch_taken_0x15fa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA60u;
        // 0x15fa64: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa60) {
            ctx->pc = 0x15FAC4u;
            goto label_15fac4;
        }
    }
    ctx->pc = 0x15FA68u;
    // 0x15fa68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fa6c: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x15fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x15fa70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15fa70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa74: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15fa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15fa78: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15fa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fa7c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15fa7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15fa80: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x15fa80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x15fa84: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fa88: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x15fa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15fa8c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x15fa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15fa90: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15fa90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15fa94: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15FA94u;
    SET_GPR_U32(ctx, 31, 0x15FA9Cu);
    ctx->pc = 0x15FA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FA94u;
    // 0x15fa98: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15FA94u, 0x15FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA9Cu;
label_15fa9c:
    // 0x15fa9c: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x15fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15faa0: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x15faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15faa4: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x15faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15faa8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15faa8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15faac: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15faacu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15fab0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x15fab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15fab4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x15fab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15fab8: 0x0  nop
    ctx->pc = 0x15fab8u;
    // NOP
    // 0x15fabc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x15FABCu;
    {
        const bool branch_taken_0x15fabc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FABCu;
        // 0x15fac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fabc) {
            ctx->pc = 0x15FAE8u;
            goto label_15fae8;
        }
    }
    ctx->pc = 0x15FAC4u;
label_15fac4:
    // 0x15fac4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x15fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15fac8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x15fac8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15facc: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x15faccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15fad0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15FAD0u;
    {
        const bool branch_taken_0x15fad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAD0u;
        // 0x15fad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fad0) {
            ctx->pc = 0x15FAE8u;
            goto label_15fae8;
        }
    }
    ctx->pc = 0x15FAD8u;
    // 0x15fad8: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x15fad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x15fadc: 0x5642ffcc  bnel        $s2, $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x15FADCu;
    {
        const bool branch_taken_0x15fadc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x15fadc) {
            ctx->pc = 0x15FAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FADCu;
            // 0x15fae0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fa10;
        }
    }
    ctx->pc = 0x15FAE4u;
label_15fae4:
    // 0x15fae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15fae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fae8:
    // 0x15fae8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15fae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15faec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x15faecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15faf0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x15faf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15faf4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x15faf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15faf8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15faf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15fafc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x15fafcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15fb00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15fb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15fb04: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x15fb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15fb08: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x15fb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15fb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x15FB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB0Cu;
        // 0x15fb10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FB14u;
    // 0x15fb14: 0x0  nop
    ctx->pc = 0x15fb14u;
    // NOP
    ctx->pc = 0x15fb18u;
}
