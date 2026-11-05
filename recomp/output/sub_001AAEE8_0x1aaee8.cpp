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

// Function: sub_001AAEE8
// Address: 0x1aaee8 - 0x1ab040
void sub_001AAEE8_0x1aaee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAEE8_0x1aaee8");
#endif

    switch (ctx->pc) {
        case 0x1aaf88u: goto label_1aaf88;
        case 0x1aaf9cu: goto label_1aaf9c;
        case 0x1aafc4u: goto label_1aafc4;
        case 0x1aafdcu: goto label_1aafdc;
        case 0x1aaff0u: goto label_1aaff0;
        case 0x1ab004u: goto label_1ab004;
        case 0x1ab02cu: goto label_1ab02c;
        default: break;
    }

    ctx->pc = 0x1aaee8u;

    // 0x1aaee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aaee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aaeec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aaeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aaef0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aaef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aaef4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aaef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aaef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aaefc: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x1aaefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1aaf00: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AAF00u;
    {
        const bool branch_taken_0x1aaf00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF00u;
        // 0x1aaf04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf00) {
            ctx->pc = 0x1AAF4Cu;
            goto label_1aaf4c;
        }
    }
    ctx->pc = 0x1AAF08u;
    // 0x1aaf08: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x1aaf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1aaf0c: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x1aaf0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aaf10: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1AAF10u;
    {
        const bool branch_taken_0x1aaf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF10u;
        // 0x1aaf14: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf10) {
            ctx->pc = 0x1AAFA4u;
            goto label_1aafa4;
        }
    }
    ctx->pc = 0x1AAF18u;
    // 0x1aaf18: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x1aaf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x1aaf1c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aaf1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aaf20: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1AAF20u;
    {
        const bool branch_taken_0x1aaf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf20) {
            ctx->pc = 0x1AAF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAF20u;
            // 0x1aaf24: 0x8e230148  lw          $v1, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAF54u;
            goto label_1aaf54;
        }
    }
    ctx->pc = 0x1AAF28u;
    // 0x1aaf28: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1aaf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaf2c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1aaf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1aaf30: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1aaf30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1aaf34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aaf34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaf38: 0x0  nop
    ctx->pc = 0x1aaf38u;
    // NOP
    // 0x1aaf3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1aaf3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aaf40: 0x0  nop
    ctx->pc = 0x1aaf40u;
    // NOP
    // 0x1aaf44: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x1AAF44u;
    {
        const bool branch_taken_0x1aaf44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF44u;
        // 0x1aaf48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf44) {
            ctx->pc = 0x1AB02Cu;
            goto label_1ab02c;
        }
    }
    ctx->pc = 0x1AAF4Cu;
label_1aaf4c:
    // 0x1aaf4c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1AAF4Cu;
    {
        const bool branch_taken_0x1aaf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF4Cu;
        // 0x1aaf50: 0xae220160  sw          $v0, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf4c) {
            ctx->pc = 0x1AB02Cu;
            goto label_1ab02c;
        }
    }
    ctx->pc = 0x1AAF54u;
label_1aaf54:
    // 0x1aaf54: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1aaf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1aaf58: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1aaf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1aaf5c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAF5Cu;
    {
        const bool branch_taken_0x1aaf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf5c) {
            ctx->pc = 0x1AAF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAF5Cu;
            // 0x1aaf60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAF7Cu;
            goto label_1aaf7c;
        }
    }
    ctx->pc = 0x1AAF64u;
    // 0x1aaf64: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1aaf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1aaf68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1aaf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1aaf6c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1aaf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aaf70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aaf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aaf74: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAF74u;
    {
        const bool branch_taken_0x1aaf74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF74u;
        // 0x1aaf78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf74) {
            ctx->pc = 0x1AAF90u;
            goto label_1aaf90;
        }
    }
    ctx->pc = 0x1AAF7Cu;
label_1aaf7c:
    // 0x1aaf7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aaf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaf80: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AAF80u;
    SET_GPR_U32(ctx, 31, 0x1AAF88u);
    ctx->pc = 0x1AAF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF80u;
    // 0x1aaf84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AAF80u, 0x1AAF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF88u;
label_1aaf88:
    // 0x1aaf88: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1AAF88u;
    {
        const bool branch_taken_0x1aaf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF88u;
        // 0x1aaf8c: 0x8e22014c  lw          $v0, 0x14C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf88) {
            ctx->pc = 0x1AB008u;
            goto label_1ab008;
        }
    }
    ctx->pc = 0x1AAF90u;
label_1aaf90:
    // 0x1aaf90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aaf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaf94: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AAF94u;
    SET_GPR_U32(ctx, 31, 0x1AAF9Cu);
    ctx->pc = 0x1AAF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF94u;
    // 0x1aaf98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AAF94u, 0x1AAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF9Cu;
label_1aaf9c:
    // 0x1aaf9c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1AAF9Cu;
    {
        const bool branch_taken_0x1aaf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF9Cu;
        // 0x1aafa0: 0x8e22014c  lw          $v0, 0x14C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf9c) {
            ctx->pc = 0x1AB008u;
            goto label_1ab008;
        }
    }
    ctx->pc = 0x1AAFA4u;
label_1aafa4:
    // 0x1aafa4: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AAFA4u;
    {
        const bool branch_taken_0x1aafa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFA4u;
        // 0x1aafa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafa4) {
            ctx->pc = 0x1AAFF8u;
            goto label_1aaff8;
        }
    }
    ctx->pc = 0x1AAFACu;
    // 0x1aafac: 0x9470002a  lhu         $s0, 0x2A($v1)
    ctx->pc = 0x1aafacu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1aafb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aafb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aafb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aafb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aafb8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1aafb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1aafbc: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AAFBCu;
    SET_GPR_U32(ctx, 31, 0x1AAFC4u);
    ctx->pc = 0x1AAFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFBCu;
    // 0x1aafc0: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AAFBCu, 0x1AAFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFC4u;
label_1aafc4:
    // 0x1aafc4: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AAFC4u;
    {
        const bool branch_taken_0x1aafc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aafc4) {
            ctx->pc = 0x1AAFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAFC4u;
            // 0x1aafc8: 0x8e22014c  lw          $v0, 0x14C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB008u;
            goto label_1ab008;
        }
    }
    ctx->pc = 0x1AAFCCu;
    // 0x1aafcc: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1aafccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1aafd0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1aafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1aafd4: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1AAFD4u;
    SET_GPR_U32(ctx, 31, 0x1AAFDCu);
    ctx->pc = 0x1AAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFD4u;
    // 0x1aafd8: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1AAFD4u, 0x1AAFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFDCu;
label_1aafdc:
    // 0x1aafdc: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1aafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1aafe0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1aafe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1aafe4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aafe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aafe8: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1AAFE8u;
    SET_GPR_U32(ctx, 31, 0x1AAFF0u);
    ctx->pc = 0x1AAFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFE8u;
    // 0x1aafec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1AAFE8u, 0x1AAFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFF0u;
label_1aaff0:
    // 0x1aaff0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAFF0u;
    {
        const bool branch_taken_0x1aaff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFF0u;
        // 0x1aaff4: 0x8e22014c  lw          $v0, 0x14C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaff0) {
            ctx->pc = 0x1AB008u;
            goto label_1ab008;
        }
    }
    ctx->pc = 0x1AAFF8u;
label_1aaff8:
    // 0x1aaff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aaff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaffc: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AAFFCu;
    SET_GPR_U32(ctx, 31, 0x1AB004u);
    ctx->pc = 0x1AB000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFFCu;
    // 0x1ab000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AAFFCu, 0x1AB004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB004u;
label_1ab004:
    // 0x1ab004: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x1ab004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
label_1ab008:
    // 0x1ab008: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1ab008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x1ab00c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ab00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ab010: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB010u;
    {
        const bool branch_taken_0x1ab010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB010u;
        // 0x1ab014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab010) {
            ctx->pc = 0x1AB02Cu;
            goto label_1ab02c;
        }
    }
    ctx->pc = 0x1AB018u;
    // 0x1ab018: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1ab018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1ab01c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab020: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ab020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab024: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1AB024u;
    SET_GPR_U32(ctx, 31, 0x1AB02Cu);
    ctx->pc = 0x1AB028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB024u;
    // 0x1ab028: 0xae220160  sw          $v0, 0x160($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1AB024u, 0x1AB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB02Cu;
label_1ab02c:
    // 0x1ab02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab038: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB038u;
        // 0x1ab03c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB040u;
}
