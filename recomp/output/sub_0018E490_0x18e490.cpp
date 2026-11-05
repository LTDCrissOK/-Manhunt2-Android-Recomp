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

// Function: sub_0018E490
// Address: 0x18e490 - 0x18e530
void sub_0018E490_0x18e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E490_0x18e490");
#endif

    switch (ctx->pc) {
        case 0x18e490u: goto label_18e490;
        case 0x18e494u: goto label_18e494;
        case 0x18e498u: goto label_18e498;
        case 0x18e49cu: goto label_18e49c;
        case 0x18e4a0u: goto label_18e4a0;
        case 0x18e4a4u: goto label_18e4a4;
        case 0x18e4a8u: goto label_18e4a8;
        case 0x18e4acu: goto label_18e4ac;
        case 0x18e4b0u: goto label_18e4b0;
        case 0x18e4b4u: goto label_18e4b4;
        case 0x18e4b8u: goto label_18e4b8;
        case 0x18e4bcu: goto label_18e4bc;
        case 0x18e4c0u: goto label_18e4c0;
        case 0x18e4c4u: goto label_18e4c4;
        case 0x18e4c8u: goto label_18e4c8;
        case 0x18e4ccu: goto label_18e4cc;
        case 0x18e4d0u: goto label_18e4d0;
        case 0x18e4d4u: goto label_18e4d4;
        case 0x18e4d8u: goto label_18e4d8;
        case 0x18e4dcu: goto label_18e4dc;
        case 0x18e4e0u: goto label_18e4e0;
        case 0x18e4e4u: goto label_18e4e4;
        case 0x18e4e8u: goto label_18e4e8;
        case 0x18e4ecu: goto label_18e4ec;
        case 0x18e4f0u: goto label_18e4f0;
        case 0x18e4f4u: goto label_18e4f4;
        case 0x18e4f8u: goto label_18e4f8;
        case 0x18e4fcu: goto label_18e4fc;
        case 0x18e500u: goto label_18e500;
        case 0x18e504u: goto label_18e504;
        case 0x18e508u: goto label_18e508;
        case 0x18e50cu: goto label_18e50c;
        case 0x18e510u: goto label_18e510;
        case 0x18e514u: goto label_18e514;
        case 0x18e518u: goto label_18e518;
        case 0x18e51cu: goto label_18e51c;
        case 0x18e520u: goto label_18e520;
        case 0x18e524u: goto label_18e524;
        case 0x18e528u: goto label_18e528;
        case 0x18e52cu: goto label_18e52c;
        default: break;
    }

    ctx->pc = 0x18e490u;

label_18e490:
    // 0x18e490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18e494:
    // 0x18e494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18e498:
    // 0x18e498: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18e49c:
    // 0x18e49c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e4a0:
    // 0x18e4a0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e4a4:
    // 0x18e4a4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_18e4a8:
    if (ctx->pc == 0x18E4A8u) {
        ctx->pc = 0x18E4ACu;
        goto label_18e4ac;
    }
    ctx->pc = 0x18E4A4u;
    {
        const bool branch_taken_0x18e4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e4a4) {
            ctx->pc = 0x18E4E8u;
            goto label_18e4e8;
        }
    }
    ctx->pc = 0x18E4ACu;
label_18e4ac:
    // 0x18e4ac: 0xc061a2a  jal         func_1868A8
label_18e4b0:
    if (ctx->pc == 0x18E4B0u) {
        ctx->pc = 0x18E4B4u;
        goto label_18e4b4;
    }
    ctx->pc = 0x18E4ACu;
    SET_GPR_U32(ctx, 31, 0x18E4B4u);
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18E4ACu, 0x18E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4B4u;
label_18e4b4:
    // 0x18e4b4: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18e4b8:
    // 0x18e4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e4bc:
    // 0x18e4bc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_18e4c0:
    if (ctx->pc == 0x18E4C0u) {
        ctx->pc = 0x18E4C4u;
        goto label_18e4c4;
    }
    ctx->pc = 0x18E4BCu;
    {
        const bool branch_taken_0x18e4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e4bc) {
            ctx->pc = 0x18E4E8u;
            goto label_18e4e8;
        }
    }
    ctx->pc = 0x18E4C4u;
label_18e4c4:
    // 0x18e4c4: 0xc061a12  jal         func_186848
label_18e4c8:
    if (ctx->pc == 0x18E4C8u) {
        ctx->pc = 0x18E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4C4u;
        // 0x18e4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4CCu;
        goto label_18e4cc;
    }
    ctx->pc = 0x18E4C4u;
    SET_GPR_U32(ctx, 31, 0x18E4CCu);
    ctx->pc = 0x18E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4C4u;
    // 0x18e4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E4C4u, 0x18E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4CCu;
label_18e4cc:
    // 0x18e4cc: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x18e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_18e4d0:
    // 0x18e4d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_18e4d4:
    if (ctx->pc == 0x18E4D4u) {
        ctx->pc = 0x18E4D8u;
        goto label_18e4d8;
    }
    ctx->pc = 0x18E4D0u;
    {
        const bool branch_taken_0x18e4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e4d0) {
            ctx->pc = 0x18E4E8u;
            goto label_18e4e8;
        }
    }
    ctx->pc = 0x18E4D8u;
label_18e4d8:
    // 0x18e4d8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18e4dc:
    // 0x18e4dc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18e4e0:
    // 0x18e4e0: 0x40f809  jalr        $v0
label_18e4e4:
    if (ctx->pc == 0x18E4E4u) {
        ctx->pc = 0x18E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4E0u;
        // 0x18e4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4E8u;
        goto label_18e4e8;
    }
    ctx->pc = 0x18E4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E4E8u);
        ctx->pc = 0x18E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4E0u;
        // 0x18e4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E4E0u, 0x18E4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E4E8u;
label_18e4e8:
    // 0x18e4e8: 0xc061a12  jal         func_186848
label_18e4ec:
    if (ctx->pc == 0x18E4ECu) {
        ctx->pc = 0x18E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4E8u;
        // 0x18e4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4F0u;
        goto label_18e4f0;
    }
    ctx->pc = 0x18E4E8u;
    SET_GPR_U32(ctx, 31, 0x18E4F0u);
    ctx->pc = 0x18E4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4E8u;
    // 0x18e4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E4E8u, 0x18E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4F0u;
label_18e4f0:
    // 0x18e4f0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18e4f4:
    // 0x18e4f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e4f8:
    // 0x18e4f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18e4fc:
    // 0x18e4fc: 0x40f809  jalr        $v0
label_18e500:
    if (ctx->pc == 0x18E500u) {
        ctx->pc = 0x18E504u;
        goto label_18e504;
    }
    ctx->pc = 0x18E4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E504u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E4FCu, 0x18E504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E504u;
label_18e504:
    // 0x18e504: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_18e508:
    if (ctx->pc == 0x18E508u) {
        ctx->pc = 0x18E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E504u;
        // 0x18e508: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E50Cu;
        goto label_18e50c;
    }
    ctx->pc = 0x18E504u;
    {
        const bool branch_taken_0x18e504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e504) {
            ctx->pc = 0x18E508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E504u;
            // 0x18e508: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E520u;
            goto label_18e520;
        }
    }
    ctx->pc = 0x18E50Cu;
label_18e50c:
    // 0x18e50c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18e510:
    // 0x18e510: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18e514:
    // 0x18e514: 0x40f809  jalr        $v0
label_18e518:
    if (ctx->pc == 0x18E518u) {
        ctx->pc = 0x18E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E514u;
        // 0x18e518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E51Cu;
        goto label_18e51c;
    }
    ctx->pc = 0x18E514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E51Cu);
        ctx->pc = 0x18E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E514u;
        // 0x18e518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E514u, 0x18E51Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E51Cu;
label_18e51c:
    // 0x18e51c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18e520:
    // 0x18e520: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18e520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18e524:
    // 0x18e524: 0x3e00008  jr          $ra
label_18e528:
    if (ctx->pc == 0x18E528u) {
        ctx->pc = 0x18E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E524u;
        // 0x18e528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E52Cu;
        goto label_18e52c;
    }
    ctx->pc = 0x18E524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E524u;
        // 0x18e528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E52Cu;
label_18e52c:
    // 0x18e52c: 0x0  nop
    ctx->pc = 0x18e52cu;
    // NOP
    ctx->pc = 0x18e530u;
}
