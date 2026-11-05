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

// Function: sub_0017B438
// Address: 0x17b438 - 0x17b540
void sub_0017B438_0x17b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B438_0x17b438");
#endif

    switch (ctx->pc) {
        case 0x17b490u: goto label_17b490;
        case 0x17b4b4u: goto label_17b4b4;
        case 0x17b4c4u: goto label_17b4c4;
        case 0x17b4e8u: goto label_17b4e8;
        default: break;
    }

    ctx->pc = 0x17b438u;

    // 0x17b438: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b43c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b440: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17b440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17b444: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b448: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17b448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17b44c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17b44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17b450: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17b450u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b454: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17b458: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x17b458u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b460: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x17b460u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b468: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17b46c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x17b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17b470: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17b474: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x17b474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x17b478: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x17b478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17b47c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x17B47Cu;
    {
        const bool branch_taken_0x17b47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B47Cu;
        // 0x17b480: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b47c) {
            ctx->pc = 0x17B50Cu;
            goto label_17b50c;
        }
    }
    ctx->pc = 0x17B484u;
    // 0x17b484: 0x241e0028  addiu       $fp, $zero, 0x28
    ctx->pc = 0x17b484u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17b488: 0x24160012  addiu       $s6, $zero, 0x12
    ctx->pc = 0x17b488u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x17b48c: 0x27e1018  mult        $v0, $s3, $fp
    ctx->pc = 0x17b48cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_17b490:
    // 0x17b490: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x17b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x17b494: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x17b494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17b498: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x17b498u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b49c: 0x12360012  beq         $s1, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x17B49Cu;
    {
        const bool branch_taken_0x17b49c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        ctx->pc = 0x17B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B49Cu;
        // 0x17b4a0: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b49c) {
            ctx->pc = 0x17B4E8u;
            goto label_17b4e8;
        }
    }
    ctx->pc = 0x17B4A4u;
    // 0x17b4a4: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x17b4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17b4a8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x17b4a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17b4ac: 0xc05a5f4  jal         func_1697D0
    ctx->pc = 0x17B4ACu;
    SET_GPR_U32(ctx, 31, 0x17B4B4u);
    ctx->pc = 0x17B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B4ACu;
    // 0x17b4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697D0u, 0x17B4ACu, 0x17B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4B4u;
label_17b4b4:
    // 0x17b4b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17B4B4u;
    {
        const bool branch_taken_0x17b4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4B4u;
        // 0x17b4b8: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4b4) {
            ctx->pc = 0x17B4ECu;
            goto label_17b4ec;
        }
    }
    ctx->pc = 0x17B4BCu;
    // 0x17b4bc: 0xc05a618  jal         func_169860
    ctx->pc = 0x17B4BCu;
    SET_GPR_U32(ctx, 31, 0x17B4C4u);
    ctx->pc = 0x17B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B4BCu;
    // 0x17b4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x17B4BCu, 0x17B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4C4u;
label_17b4c4:
    // 0x17b4c4: 0x54570009  bnel        $v0, $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B4C4u;
    {
        const bool branch_taken_0x17b4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x17b4c4) {
            ctx->pc = 0x17B4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B4C4u;
            // 0x17b4c8: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B4ECu;
            goto label_17b4ec;
        }
    }
    ctx->pc = 0x17B4CCu;
    // 0x17b4cc: 0x12b60004  beq         $s5, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B4CCu;
    {
        const bool branch_taken_0x17b4cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x17B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4CCu;
        // 0x17b4d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4cc) {
            ctx->pc = 0x17B4E0u;
            goto label_17b4e0;
        }
    }
    ctx->pc = 0x17B4D4u;
    // 0x17b4d4: 0x16350005  bne         $s1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B4D4u;
    {
        const bool branch_taken_0x17b4d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x17B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4D4u;
        // 0x17b4d8: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4d4) {
            ctx->pc = 0x17B4ECu;
            goto label_17b4ec;
        }
    }
    ctx->pc = 0x17B4DCu;
    // 0x17b4dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17b4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b4e0:
    // 0x17b4e0: 0xc05e388  jal         func_178E20
    ctx->pc = 0x17B4E0u;
    SET_GPR_U32(ctx, 31, 0x17B4E8u);
    ctx->pc = 0x17B4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B4E0u;
    // 0x17b4e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E20u, 0x17B4E0u, 0x17B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4E8u;
label_17b4e8:
    // 0x17b4e8: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x17b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_17b4ec:
    // 0x17b4ec: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x17b4ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17b4f0: 0x2e630014  sltiu       $v1, $s3, 0x14
    ctx->pc = 0x17b4f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x17b4f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B4F4u;
    {
        const bool branch_taken_0x17b4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4F4u;
        // 0x17b4f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4f4) {
            ctx->pc = 0x17B510u;
            goto label_17b510;
        }
    }
    ctx->pc = 0x17B4FCu;
    // 0x17b4fc: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x17b4fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x17b500: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x17b500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17b504: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17B504u;
    {
        const bool branch_taken_0x17b504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B504u;
        // 0x17b508: 0x27e1018  mult        $v0, $s3, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b504) {
            ctx->pc = 0x17B490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b490;
        }
    }
    ctx->pc = 0x17B50Cu;
label_17b50c:
    // 0x17b50c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b510:
    // 0x17b510: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b514: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b518: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17b518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b51c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17b51cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b520: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17b520u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17b524: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17b524u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b528: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17b528u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17b52c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17b52cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b530: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17b530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b534: 0x3e00008  jr          $ra
    ctx->pc = 0x17B534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B534u;
        // 0x17b538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B53Cu;
    // 0x17b53c: 0x0  nop
    ctx->pc = 0x17b53cu;
    // NOP
    ctx->pc = 0x17b540u;
}
