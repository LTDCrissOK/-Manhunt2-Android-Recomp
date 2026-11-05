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

// Function: sub_0016E438
// Address: 0x16e438 - 0x16e528
void sub_0016E438_0x16e438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E438_0x16e438");
#endif

    switch (ctx->pc) {
        case 0x16e478u: goto label_16e478;
        case 0x16e4a4u: goto label_16e4a4;
        case 0x16e4b4u: goto label_16e4b4;
        case 0x16e4c4u: goto label_16e4c4;
        case 0x16e4d0u: goto label_16e4d0;
        case 0x16e4dcu: goto label_16e4dc;
        case 0x16e4ecu: goto label_16e4ec;
        case 0x16e500u: goto label_16e500;
        default: break;
    }

    ctx->pc = 0x16e438u;

    // 0x16e438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e440: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16e440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16e444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16e444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e448: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16e448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16e44c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16e44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16e450: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16e450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16e454: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16e454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16e458: 0x920200f8  lbu         $v0, 0xF8($s0)
    ctx->pc = 0x16e458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x16e45c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x16e45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16e460: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e464: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x16e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x16e468: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16e468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16e46c: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x16e46cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16e470: 0xc05be62  jal         func_16F988
    ctx->pc = 0x16E470u;
    SET_GPR_U32(ctx, 31, 0x16E478u);
    ctx->pc = 0x16E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E470u;
    // 0x16e474: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F988u, 0x16E470u, 0x16E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E478u;
label_16e478:
    // 0x16e478: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16e478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e47c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x16e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16e480: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16E480u;
    {
        const bool branch_taken_0x16e480 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x16E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E480u;
        // 0x16e484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e480) {
            ctx->pc = 0x16E4ACu;
            goto label_16e4ac;
        }
    }
    ctx->pc = 0x16E488u;
    // 0x16e488: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E488u;
    {
        const bool branch_taken_0x16e488 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E488u;
        // 0x16e48c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e488) {
            ctx->pc = 0x16E49Cu;
            goto label_16e49c;
        }
    }
    ctx->pc = 0x16E490u;
    // 0x16e490: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x16e490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x16e494: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16E494u;
    {
        const bool branch_taken_0x16e494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E494u;
        // 0x16e498: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e494) {
            ctx->pc = 0x16E504u;
            goto label_16e504;
        }
    }
    ctx->pc = 0x16E49Cu;
label_16e49c:
    // 0x16e49c: 0xc04fb54  jal         func_13ED50
    ctx->pc = 0x16E49Cu;
    SET_GPR_U32(ctx, 31, 0x16E4A4u);
    ctx->pc = 0x16E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E49Cu;
    // 0x16e4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ED50u, 0x16E49Cu, 0x16E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E4A4u;
label_16e4a4:
    // 0x16e4a4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16E4A4u;
    {
        const bool branch_taken_0x16e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4A4u;
        // 0x16e4a8: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4a4) {
            ctx->pc = 0x16E504u;
            goto label_16e504;
        }
    }
    ctx->pc = 0x16E4ACu;
label_16e4ac:
    // 0x16e4ac: 0xc04f8fc  jal         func_13E3F0
    ctx->pc = 0x16E4ACu;
    SET_GPR_U32(ctx, 31, 0x16E4B4u);
    ctx->pc = 0x16E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E4ACu;
    // 0x16e4b0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x16E4ACu, 0x16E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E4B4u;
label_16e4b4:
    // 0x16e4b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16e4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e4b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16e4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e4bc: 0xc046138  jal         func_1184E0
    ctx->pc = 0x16E4BCu;
    SET_GPR_U32(ctx, 31, 0x16E4C4u);
    ctx->pc = 0x16E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E4BCu;
    // 0x16e4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x16E4BCu, 0x16E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E4C4u;
label_16e4c4:
    // 0x16e4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e4c8: 0xc046154  jal         func_118550
    ctx->pc = 0x16E4C8u;
    SET_GPR_U32(ctx, 31, 0x16E4D0u);
    ctx->pc = 0x16E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E4C8u;
    // 0x16e4cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x16E4C8u, 0x16E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E4D0u;
label_16e4d0:
    // 0x16e4d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e4d4: 0xc046256  jal         func_118958
    ctx->pc = 0x16E4D4u;
    SET_GPR_U32(ctx, 31, 0x16E4DCu);
    ctx->pc = 0x16E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E4D4u;
    // 0x16e4d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x16E4D4u, 0x16E4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E4DCu;
label_16e4dc:
    // 0x16e4dc: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E4DCu;
    {
        const bool branch_taken_0x16e4dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4DCu;
        // 0x16e4e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4dc) {
            ctx->pc = 0x16E4ECu;
            goto label_16e4ec;
        }
    }
    ctx->pc = 0x16E4E4u;
    // 0x16e4e4: 0xc046164  jal         func_118590
    ctx->pc = 0x16E4E4u;
    SET_GPR_U32(ctx, 31, 0x16E4ECu);
    ctx->pc = 0x16E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E4E4u;
    // 0x16e4e8: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x16E4E4u, 0x16E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E4ECu;
label_16e4ec:
    // 0x16e4ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16e4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e4f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16e4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e4f8: 0xc04fb24  jal         func_13EC90
    ctx->pc = 0x16E4F8u;
    SET_GPR_U32(ctx, 31, 0x16E500u);
    ctx->pc = 0x16E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E4F8u;
    // 0x16e4fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC90u, 0x16E4F8u, 0x16E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E500u;
label_16e500:
    // 0x16e500: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x16e500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_16e504:
    // 0x16e504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16e508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e50c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16e50cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e510: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16e510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16e514: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16e514u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e518: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16e518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e51c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E51Cu;
        // 0x16e520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E524u;
    // 0x16e524: 0x0  nop
    ctx->pc = 0x16e524u;
    // NOP
    ctx->pc = 0x16e528u;
}
