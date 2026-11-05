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

// Function: sub_0038BFA0
// Address: 0x38bfa0 - 0x38c140
void sub_0038BFA0_0x38bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BFA0_0x38bfa0");
#endif

    switch (ctx->pc) {
        case 0x38c010u: goto label_38c010;
        case 0x38c034u: goto label_38c034;
        case 0x38c06cu: goto label_38c06c;
        case 0x38c078u: goto label_38c078;
        case 0x38c0fcu: goto label_38c0fc;
        default: break;
    }

    ctx->pc = 0x38bfa0u;

    // 0x38bfa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x38bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x38bfa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38bfa8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x38bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x38bfac: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x38bfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x38bfb0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x38bfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x38bfb4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x38bfb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bfb8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x38bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x38bfbc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x38bfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x38bfc0: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x38bfc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bfc4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x38bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x38bfc8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x38bfc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bfcc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x38bfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x38bfd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x38bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x38bfd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38bfd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bfd8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x38bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x38bfdc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x38bfdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bfe0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38bfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x38bfe4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x38bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x38bfe8: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x38bfe8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38bfec: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x38bfecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x38bff0: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38BFF0u;
    {
        const bool branch_taken_0x38bff0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x38BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFF0u;
        // 0x38bff4: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bff0) {
            ctx->pc = 0x38C028u;
            goto label_38c028;
        }
    }
    ctx->pc = 0x38BFF8u;
    // 0x38bff8: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x38BFF8u;
    {
        const bool branch_taken_0x38bff8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x38bff8) {
            ctx->pc = 0x38BFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BFF8u;
            // 0x38bffc: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C0D4u;
            goto label_38c0d4;
        }
    }
    ctx->pc = 0x38C000u;
    // 0x38c000: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x38C000u;
    {
        const bool branch_taken_0x38c000 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c000) {
            ctx->pc = 0x38C004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C000u;
            // 0x38c004: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C0D4u;
            goto label_38c0d4;
        }
    }
    ctx->pc = 0x38C008u;
    // 0x38c008: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38C008u;
    SET_GPR_U32(ctx, 31, 0x38C010u);
    ctx->pc = 0x38C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C008u;
    // 0x38c00c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38C008u, 0x38C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C010u;
label_38c010:
    // 0x38c010: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x38c010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c014: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x38c014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x38c018: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38c01c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x38c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x38c020: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x38C020u;
    {
        const bool branch_taken_0x38c020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C020u;
        // 0x38c024: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c020) {
            ctx->pc = 0x38C0D0u;
            goto label_38c0d0;
        }
    }
    ctx->pc = 0x38C028u;
label_38c028:
    // 0x38c028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38c028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c02c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38C02Cu;
    SET_GPR_U32(ctx, 31, 0x38C034u);
    ctx->pc = 0x38C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C02Cu;
    // 0x38c030: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38C02Cu, 0x38C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C034u;
label_38c034:
    // 0x38c034: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x38c034u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x38c038: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x38c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c03c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x38c03cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x38c040: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x38c040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x38c044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38c044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c048: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x38c048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x38c04c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x38c04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c050: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38c050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x38c054: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x38c054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c058: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x38c058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c05c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x38c05cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c060: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x38c060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c064: 0xc0e2ede  jal         func_38BB78
    ctx->pc = 0x38C064u;
    SET_GPR_U32(ctx, 31, 0x38C06Cu);
    ctx->pc = 0x38C068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C064u;
    // 0x38c068: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BB78u, 0x38C064u, 0x38C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C06Cu;
label_38c06c:
    // 0x38c06c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c070: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38C070u;
    SET_GPR_U32(ctx, 31, 0x38C078u);
    ctx->pc = 0x38C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C070u;
    // 0x38c074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38C070u, 0x38C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C078u;
label_38c078:
    // 0x38c078: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x38c078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x38c07c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x38c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x38c080: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x38c080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x38c084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38c084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c088: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x38c088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c08c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x38c08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c090: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x38c090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c094: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x38c094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c098: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x38c098u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c09c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x38c09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38c0a0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x38c0a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38c0a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38c0a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0a8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x38c0a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38c0ac: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x38c0acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38c0b0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x38c0b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38c0b4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x38c0b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38c0b8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x38c0b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c0bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x38c0bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38c0c0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38c0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38c0c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38c0c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c0c8: 0x80e2ede  j           func_38BB78
    ctx->pc = 0x38C0C8u;
    ctx->pc = 0x38C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C0C8u;
    // 0x38c0cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BB78u;
    sub_0038BB78_0x38bb78(rdram, ctx, runtime); return;
    ctx->pc = 0x38C0D0u;
label_38c0d0:
    // 0x38c0d0: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x38c0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_38c0d4:
    // 0x38c0d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38c0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0d8: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x38c0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x38c0dc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x38c0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0e0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x38c0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0e4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x38c0e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0e8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x38c0e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0ec: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x38c0ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38c0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0f4: 0xc0e2ede  jal         func_38BB78
    ctx->pc = 0x38C0F4u;
    SET_GPR_U32(ctx, 31, 0x38C0FCu);
    ctx->pc = 0x38C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C0F4u;
    // 0x38c0f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BB78u, 0x38C0F4u, 0x38C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C0FCu;
label_38c0fc:
    // 0x38c0fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38c100: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38c100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38c104: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x38c104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x38c108: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x38c108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x38c10c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x38c10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38c110: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x38c110u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38c114: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x38c114u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38c118: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x38c118u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38c11c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x38c11cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38c120: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x38c120u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38c124: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x38c124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c128: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x38c128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38c12c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38c12cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38c130: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38c130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c134: 0x3e00008  jr          $ra
    ctx->pc = 0x38C134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C134u;
        // 0x38c138: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C13Cu;
    // 0x38c13c: 0x0  nop
    ctx->pc = 0x38c13cu;
    // NOP
    ctx->pc = 0x38c140u;
}
