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

// Function: sub_0016EFD8
// Address: 0x16efd8 - 0x16f100
void sub_0016EFD8_0x16efd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EFD8_0x16efd8");
#endif

    switch (ctx->pc) {
        case 0x16f000u: goto label_16f000;
        case 0x16f024u: goto label_16f024;
        case 0x16f060u: goto label_16f060;
        case 0x16f0b4u: goto label_16f0b4;
        default: break;
    }

    ctx->pc = 0x16efd8u;

    // 0x16efd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16efd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16efdc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16efdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16efe0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x16efe0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x16efe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16efe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16efe8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16efec: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x16efecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x16eff0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16eff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16eff4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16eff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16eff8: 0xc05a618  jal         func_169860
    ctx->pc = 0x16EFF8u;
    SET_GPR_U32(ctx, 31, 0x16F000u);
    ctx->pc = 0x16EFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EFF8u;
    // 0x16effc: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16EFF8u, 0x16F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F000u;
label_16f000:
    // 0x16f000: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16F000u;
    {
        const bool branch_taken_0x16f000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F000u;
        // 0x16f004: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f000) {
            ctx->pc = 0x16F024u;
            goto label_16f024;
        }
    }
    ctx->pc = 0x16F008u;
    // 0x16f008: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f00c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x16f00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f010: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16f014: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16f014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f018: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x16f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16f01c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F01Cu;
    {
        const bool branch_taken_0x16f01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f01c) {
            ctx->pc = 0x16F020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F01Cu;
            // 0x16f020: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F02Cu;
            goto label_16f02c;
        }
    }
    ctx->pc = 0x16F024u;
label_16f024:
    // 0x16f024: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x16F024u;
    {
        const bool branch_taken_0x16f024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F024u;
        // 0x16f028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f024) {
            ctx->pc = 0x16F0E0u;
            goto label_16f0e0;
        }
    }
    ctx->pc = 0x16F02Cu;
label_16f02c:
    // 0x16f02c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f030: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f034: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x16f038: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F038u;
    {
        const bool branch_taken_0x16f038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f038) {
            ctx->pc = 0x16F03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F038u;
            // 0x16f03c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F048u;
            goto label_16f048;
        }
    }
    ctx->pc = 0x16F040u;
    // 0x16f040: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F040u;
    {
        const bool branch_taken_0x16f040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F040u;
        // 0x16f044: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f040) {
            ctx->pc = 0x16F050u;
            goto label_16f050;
        }
    }
    ctx->pc = 0x16F048u;
label_16f048:
    // 0x16f048: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f04c: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x16f04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16f050:
    // 0x16f050: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16F050u;
    {
        const bool branch_taken_0x16f050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F050u;
        // 0x16f054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f050) {
            ctx->pc = 0x16F0E0u;
            goto label_16f0e0;
        }
    }
    ctx->pc = 0x16F058u;
    // 0x16f058: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16F058u;
    SET_GPR_U32(ctx, 31, 0x16F060u);
    ctx->pc = 0x16F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F058u;
    // 0x16f05c: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16F058u, 0x16F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F060u;
label_16f060:
    // 0x16f060: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x16F060u;
    {
        const bool branch_taken_0x16f060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F060u;
        // 0x16f064: 0x26439a08  addiu       $v1, $s2, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f060) {
            ctx->pc = 0x16F024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f024;
        }
    }
    ctx->pc = 0x16F068u;
    // 0x16f068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f06c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f070: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x16f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16f074: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x16F074u;
    {
        const bool branch_taken_0x16f074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f074) {
            ctx->pc = 0x16F078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F074u;
            // 0x16f078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F0E0u;
            goto label_16f0e0;
        }
    }
    ctx->pc = 0x16F07Cu;
    // 0x16f07c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x16f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16f080: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f084: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16f084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f088: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x16f08c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F08Cu;
    {
        const bool branch_taken_0x16f08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f08c) {
            ctx->pc = 0x16F090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F08Cu;
            // 0x16f090: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F09Cu;
            goto label_16f09c;
        }
    }
    ctx->pc = 0x16F094u;
    // 0x16f094: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F094u;
    {
        const bool branch_taken_0x16f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F094u;
        // 0x16f098: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f094) {
            ctx->pc = 0x16F0A4u;
            goto label_16f0a4;
        }
    }
    ctx->pc = 0x16F09Cu;
label_16f09c:
    // 0x16f09c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f0a0: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x16f0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16f0a4:
    // 0x16f0a4: 0x10c0ffdf  beqz        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x16F0A4u;
    {
        const bool branch_taken_0x16f0a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0A4u;
        // 0x16f0a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0a4) {
            ctx->pc = 0x16F024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f024;
        }
    }
    ctx->pc = 0x16F0ACu;
    // 0x16f0ac: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x16F0ACu;
    SET_GPR_U32(ctx, 31, 0x16F0B4u);
    ctx->pc = 0x16F0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F0ACu;
    // 0x16f0b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x16F0ACu, 0x16F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F0B4u;
label_16f0b4:
    // 0x16f0b4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x16f0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16f0b8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x16f0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16f0bc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x16f0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16f0c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x16f0c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x16f0c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x16f0c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x16f0c8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x16f0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x16f0cc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x16f0ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f0d0: 0x0  nop
    ctx->pc = 0x16f0d0u;
    // NOP
    // 0x16f0d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F0D4u;
    {
        const bool branch_taken_0x16f0d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0D4u;
        // 0x16f0d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0d4) {
            ctx->pc = 0x16F0E0u;
            goto label_16f0e0;
        }
    }
    ctx->pc = 0x16F0DCu;
    // 0x16f0dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f0e0:
    // 0x16f0e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16f0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f0e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16f0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f0e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16f0e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f0ec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16f0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16f0f0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x16f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16f0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16F0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0F4u;
        // 0x16f0f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F0FCu;
    // 0x16f0fc: 0x0  nop
    ctx->pc = 0x16f0fcu;
    // NOP
    ctx->pc = 0x16f100u;
}
