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

// Function: sub_0013BF98
// Address: 0x13bf98 - 0x13c058
void sub_0013BF98_0x13bf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BF98_0x13bf98");
#endif

    switch (ctx->pc) {
        case 0x13bfe0u: goto label_13bfe0;
        case 0x13bfe4u: goto label_13bfe4;
        case 0x13c024u: goto label_13c024;
        default: break;
    }

    ctx->pc = 0x13bf98u;

    // 0x13bf98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13bf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13bf9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13bf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13bfa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13bfa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13bfa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13bfac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13bfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13bfb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13bfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13bfb4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13bfb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13bfbc: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x13bfbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x13bfc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BFC0u;
    {
        const bool branch_taken_0x13bfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFC0u;
        // 0x13bfc4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfc0) {
            ctx->pc = 0x13BFD0u;
            goto label_13bfd0;
        }
    }
    ctx->pc = 0x13BFC8u;
    // 0x13bfc8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13BFC8u;
    {
        const bool branch_taken_0x13bfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFC8u;
        // 0x13bfcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfc8) {
            ctx->pc = 0x13C034u;
            goto label_13c034;
        }
    }
    ctx->pc = 0x13BFD0u;
label_13bfd0:
    // 0x13bfd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13bfd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfd4: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x13bfd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13BFD8u;
    {
        const bool branch_taken_0x13bfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFD8u;
        // 0x13bfdc: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfd8) {
            ctx->pc = 0x13BFE8u;
            goto label_13bfe8;
        }
    }
    ctx->pc = 0x13BFE0u;
label_13bfe0:
    // 0x13bfe0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x13bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13bfe4:
    // 0x13bfe4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x13bfe4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13bfe8:
    // 0x13bfe8: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x13bfe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13bfec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13BFECu;
    {
        const bool branch_taken_0x13bfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFECu;
        // 0x13bff0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfec) {
            ctx->pc = 0x13C034u;
            goto label_13c034;
        }
    }
    ctx->pc = 0x13BFF4u;
    // 0x13bff4: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x13bff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x13bff8: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13BFF8u;
    {
        const bool branch_taken_0x13bff8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x13BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFF8u;
        // 0x13bffc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bff8) {
            ctx->pc = 0x13C030u;
            goto label_13c030;
        }
    }
    ctx->pc = 0x13C000u;
    // 0x13c000: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x13c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13c004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c008: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13c008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c00c: 0x1200fff4  beqz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x13C00Cu;
    {
        const bool branch_taken_0x13c00c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C00Cu;
        // 0x13c010: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c00c) {
            ctx->pc = 0x13BFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bfe0;
        }
    }
    ctx->pc = 0x13C014u;
    // 0x13c014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c018: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x13c018u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c01c: 0xc04f112  jal         func_13C448
    ctx->pc = 0x13C01Cu;
    SET_GPR_U32(ctx, 31, 0x13C024u);
    ctx->pc = 0x13C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C01Cu;
    // 0x13c020: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x13C01Cu, 0x13C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C024u;
label_13c024:
    // 0x13c024: 0x1455ffef  bne         $v0, $s5, . + 4 + (-0x11 << 2)
    ctx->pc = 0x13C024u;
    {
        const bool branch_taken_0x13c024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x13C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C024u;
        // 0x13c028: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c024) {
            ctx->pc = 0x13BFE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bfe4;
        }
    }
    ctx->pc = 0x13C02Cu;
    // 0x13c02c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x13c02cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c030:
    // 0x13c030: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x13c030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13c034:
    // 0x13c034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c03c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13c03cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c040: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13c040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13c044: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13c044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c048: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13c048u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13c04c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13c04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c050: 0x3e00008  jr          $ra
    ctx->pc = 0x13C050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C050u;
        // 0x13c054: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C058u;
}
