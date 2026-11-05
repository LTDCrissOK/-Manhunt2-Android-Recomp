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

// Function: sub_0038A480
// Address: 0x38a480 - 0x38a608
void sub_0038A480_0x38a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A480_0x38a480");
#endif

    switch (ctx->pc) {
        case 0x38a514u: goto label_38a514;
        case 0x38a518u: goto label_38a518;
        default: break;
    }

    ctx->pc = 0x38a480u;

    // 0x38a480: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x38a480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x38a484: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38a484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38a488: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x38A488u;
    {
        const bool branch_taken_0x38a488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38a488) {
            ctx->pc = 0x38A5A0u;
            goto label_38a5a0;
        }
    }
    ctx->pc = 0x38A490u;
    // 0x38a490: 0x8c820188  lw          $v0, 0x188($a0)
    ctx->pc = 0x38a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x38a494: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x38A494u;
    {
        const bool branch_taken_0x38a494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a494) {
            ctx->pc = 0x38A498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A494u;
            // 0x38a498: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A528u;
            goto label_38a528;
        }
    }
    ctx->pc = 0x38A49Cu;
    // 0x38a49c: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A49Cu;
    {
        const bool branch_taken_0x38a49c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x38A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A49Cu;
        // 0x38a4a0: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a49c) {
            ctx->pc = 0x38A4B0u;
            goto label_38a4b0;
        }
    }
    ctx->pc = 0x38A4A4u;
    // 0x38a4a4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x38a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x38a4a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38A4A8u;
    {
        const bool branch_taken_0x38a4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4A8u;
        // 0x38a4ac: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a4a8) {
            ctx->pc = 0x38A4B4u;
            goto label_38a4b4;
        }
    }
    ctx->pc = 0x38A4B0u;
label_38a4b0:
    // 0x38a4b0: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x38a4b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_38a4b4:
    // 0x38a4b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38a4b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x38a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x38a4bc: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A4BCu;
    {
        const bool branch_taken_0x38a4bc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x38A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4BCu;
        // 0x38a4c0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a4bc) {
            ctx->pc = 0x38A4D0u;
            goto label_38a4d0;
        }
    }
    ctx->pc = 0x38A4C4u;
    // 0x38a4c4: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x38a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x38a4c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38A4C8u;
    {
        const bool branch_taken_0x38a4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4C8u;
        // 0x38a4cc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a4c8) {
            ctx->pc = 0x38A4D4u;
            goto label_38a4d4;
        }
    }
    ctx->pc = 0x38A4D0u;
label_38a4d0:
    // 0x38a4d0: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x38a4d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_38a4d4:
    // 0x38a4d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38a4d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38a4dc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x38a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x38a4e0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x38a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x38a4e4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x38a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x38a4e8: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x38A4E8u;
    {
        const bool branch_taken_0x38a4e8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x38A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4E8u;
        // 0x38a4ec: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a4e8) {
            ctx->pc = 0x38A4F4u;
            goto label_38a4f4;
        }
    }
    ctx->pc = 0x38A4F0u;
    // 0x38a4f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38a4f4:
    // 0x38a4f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38a4f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x38a4f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38a4fc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x38a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x38a500: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x38a500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x38a504: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x38a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x38a508: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38A508u;
    {
        const bool branch_taken_0x38a508 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x38A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A508u;
        // 0x38a50c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a508) {
            ctx->pc = 0x38A514u;
            goto label_38a514;
        }
    }
    ctx->pc = 0x38A510u;
    // 0x38a510: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38a510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38a514:
    // 0x38a514: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38a514u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_38a518:
    // 0x38a518: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x38a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x38a51c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38a520: 0x3e00008  jr          $ra
    ctx->pc = 0x38A520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A520u;
        // 0x38a524: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A528u;
label_38a528:
    // 0x38a528: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x38a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38a52c: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x38A52Cu;
    {
        const bool branch_taken_0x38a52c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x38A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A52Cu;
        // 0x38a530: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a52c) {
            ctx->pc = 0x38A538u;
            goto label_38a538;
        }
    }
    ctx->pc = 0x38A534u;
    // 0x38a534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38a534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38a538:
    // 0x38a538: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38a538u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x38a53c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38a540: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x38a540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x38a544: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x38a544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x38a548: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x38a548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x38a54c: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38A54Cu;
    {
        const bool branch_taken_0x38a54c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x38A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A54Cu;
        // 0x38a550: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a54c) {
            ctx->pc = 0x38A558u;
            goto label_38a558;
        }
    }
    ctx->pc = 0x38A554u;
    // 0x38a554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38a558:
    // 0x38a558: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38a558u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x38a55c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38a560: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38a560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38a564: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x38a564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x38a568: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A568u;
    {
        const bool branch_taken_0x38a568 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x38A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A568u;
        // 0x38a56c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a568) {
            ctx->pc = 0x38A57Cu;
            goto label_38a57c;
        }
    }
    ctx->pc = 0x38A570u;
    // 0x38a570: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x38a570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x38a574: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38A574u;
    {
        const bool branch_taken_0x38a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A574u;
        // 0x38a578: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a574) {
            ctx->pc = 0x38A580u;
            goto label_38a580;
        }
    }
    ctx->pc = 0x38A57Cu;
label_38a57c:
    // 0x38a57c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x38a57cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_38a580:
    // 0x38a580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38a584: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x38a584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x38a588: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38A588u;
    {
        const bool branch_taken_0x38a588 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x38A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A588u;
        // 0x38a58c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a588) {
            ctx->pc = 0x38A598u;
            goto label_38a598;
        }
    }
    ctx->pc = 0x38A590u;
    // 0x38a590: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x38A590u;
    {
        const bool branch_taken_0x38a590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A590u;
        // 0x38a594: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a590) {
            ctx->pc = 0x38A514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38a514;
        }
    }
    ctx->pc = 0x38A598u;
label_38a598:
    // 0x38a598: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x38A598u;
    {
        const bool branch_taken_0x38a598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A598u;
        // 0x38a59c: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a598) {
            ctx->pc = 0x38A518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38a518;
        }
    }
    ctx->pc = 0x38A5A0u;
label_38a5a0:
    // 0x38a5a0: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A5A0u;
    {
        const bool branch_taken_0x38a5a0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x38A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5A0u;
        // 0x38a5a4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5a0) {
            ctx->pc = 0x38A5B4u;
            goto label_38a5b4;
        }
    }
    ctx->pc = 0x38A5A8u;
    // 0x38a5a8: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x38a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x38a5ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38A5ACu;
    {
        const bool branch_taken_0x38a5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5ACu;
        // 0x38a5b0: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5ac) {
            ctx->pc = 0x38A5B8u;
            goto label_38a5b8;
        }
    }
    ctx->pc = 0x38A5B4u;
label_38a5b4:
    // 0x38a5b4: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x38a5b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_38a5b8:
    // 0x38a5b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38a5bc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x38a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x38a5c0: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A5C0u;
    {
        const bool branch_taken_0x38a5c0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x38A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5C0u;
        // 0x38a5c4: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5c0) {
            ctx->pc = 0x38A5D4u;
            goto label_38a5d4;
        }
    }
    ctx->pc = 0x38A5C8u;
    // 0x38a5c8: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x38a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x38a5cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38A5CCu;
    {
        const bool branch_taken_0x38a5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5CCu;
        // 0x38a5d0: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5cc) {
            ctx->pc = 0x38A5D8u;
            goto label_38a5d8;
        }
    }
    ctx->pc = 0x38A5D4u;
label_38a5d4:
    // 0x38a5d4: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x38a5d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_38a5d8:
    // 0x38a5d8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x38a5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x38a5dc: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x38a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x38a5e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a5e4: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x38a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x38a5e8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A5E8u;
    {
        const bool branch_taken_0x38a5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x38A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5E8u;
        // 0x38a5ec: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a5e8) {
            ctx->pc = 0x38A5FCu;
            goto label_38a5fc;
        }
    }
    ctx->pc = 0x38A5F0u;
    // 0x38a5f0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x38a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x38a5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x38A5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5F4u;
        // 0x38a5f8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A5FCu;
label_38a5fc:
    // 0x38a5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x38A5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A5FCu;
        // 0x38a600: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A604u;
    // 0x38a604: 0x0  nop
    ctx->pc = 0x38a604u;
    // NOP
    ctx->pc = 0x38a608u;
}
