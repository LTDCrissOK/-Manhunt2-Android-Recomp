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

// Function: sub_003ACDE0
// Address: 0x3acde0 - 0x3acee0
void sub_003ACDE0_0x3acde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACDE0_0x3acde0");
#endif

    switch (ctx->pc) {
        case 0x3acea4u: goto label_3acea4;
        default: break;
    }

    ctx->pc = 0x3acde0u;

    // 0x3acde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3acde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3acde4: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x3acde4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3acde8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3acde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3acdec: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3acdecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acdf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3acdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3acdf4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3acdf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acdf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3acdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3acdfc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3acdfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ace00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ace00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ace04: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x3ace04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3ace08: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3ACE08u;
    {
        const bool branch_taken_0x3ace08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE08u;
        // 0x3ace0c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ace08) {
            ctx->pc = 0x3ACE38u;
            goto label_3ace38;
        }
    }
    ctx->pc = 0x3ACE10u;
    // 0x3ace10: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ace10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ace14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ace14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ace18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ace18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ace1c: 0x2484f430  addiu       $a0, $a0, -0xBD0
    ctx->pc = 0x3ace1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
    // 0x3ace20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ace20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ace24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3ace24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ace28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ace28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ace2c: 0x80eb2bc  j           func_3ACAF0
    ctx->pc = 0x3ACE2Cu;
    ctx->pc = 0x3ACE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACE2Cu;
    // 0x3ace30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACAF0u;
    sub_003ACAF0_0x3acaf0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ACE34u;
    // 0x3ace34: 0x0  nop
    ctx->pc = 0x3ace34u;
    // NOP
label_3ace38:
    // 0x3ace38: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3ACE38u;
    {
        const bool branch_taken_0x3ace38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE38u;
        // 0x3ace3c: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ace38) {
            ctx->pc = 0x3ACE68u;
            goto label_3ace68;
        }
    }
    ctx->pc = 0x3ACE40u;
    // 0x3ace40: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ace40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ace44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ace44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ace48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ace48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ace4c: 0x2484f458  addiu       $a0, $a0, -0xBA8
    ctx->pc = 0x3ace4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964312));
    // 0x3ace50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ace50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ace54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3ace54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ace58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ace58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ace5c: 0x80eb2bc  j           func_3ACAF0
    ctx->pc = 0x3ACE5Cu;
    ctx->pc = 0x3ACE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACE5Cu;
    // 0x3ace60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACAF0u;
    sub_003ACAF0_0x3acaf0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ACE64u;
    // 0x3ace64: 0x0  nop
    ctx->pc = 0x3ace64u;
    // NOP
label_3ace68:
    // 0x3ace68: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3ace68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3ace6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ace6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ace70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3ace70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3ace74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ace74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ace78: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ace78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ace7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ace7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ace80: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3ace80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3ace84: 0x26108f20  addiu       $s0, $s0, -0x70E0
    ctx->pc = 0x3ace84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938400));
    // 0x3ace88: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ace88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ace8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ace8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ace90: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3ACE90u;
    {
        const bool branch_taken_0x3ace90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ace90) {
            ctx->pc = 0x3ACE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACE90u;
            // 0x3ace94: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACEA8u;
            goto label_3acea8;
        }
    }
    ctx->pc = 0x3ACE98u;
    // 0x3ace98: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ace98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ace9c: 0xc0eb2bc  jal         func_3ACAF0
    ctx->pc = 0x3ACE9Cu;
    SET_GPR_U32(ctx, 31, 0x3ACEA4u);
    ctx->pc = 0x3ACEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACE9Cu;
    // 0x3acea0: 0x2484f480  addiu       $a0, $a0, -0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACAF0u, 0x3ACE9Cu, 0x3ACEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACEA4u;
label_3acea4:
    // 0x3acea4: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x3acea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_3acea8:
    // 0x3acea8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACEA8u;
    {
        const bool branch_taken_0x3acea8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEA8u;
        // 0x3aceac: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acea8) {
            ctx->pc = 0x3ACEB8u;
            goto label_3aceb8;
        }
    }
    ctx->pc = 0x3ACEB0u;
    // 0x3aceb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACEB0u;
    {
        const bool branch_taken_0x3aceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEB0u;
        // 0x3aceb4: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aceb0) {
            ctx->pc = 0x3ACEC4u;
            goto label_3acec4;
        }
    }
    ctx->pc = 0x3ACEB8u;
label_3aceb8:
    // 0x3aceb8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3aceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3acebc: 0x2442f3b0  addiu       $v0, $v0, -0xC50
    ctx->pc = 0x3acebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964144));
    // 0x3acec0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3acec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3acec4:
    // 0x3acec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3acec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3acec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3acec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3acecc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3aceccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aced0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3aced0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3aced4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3aced4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aced8: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACED8u;
        // 0x3acedc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACEE0u;
}
