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

// Function: sub_0039C460
// Address: 0x39c460 - 0x39c5a0
void sub_0039C460_0x39c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C460_0x39c460");
#endif

    switch (ctx->pc) {
        case 0x39c460u: goto label_39c460;
        case 0x39c464u: goto label_39c464;
        case 0x39c468u: goto label_39c468;
        case 0x39c46cu: goto label_39c46c;
        case 0x39c470u: goto label_39c470;
        case 0x39c474u: goto label_39c474;
        case 0x39c478u: goto label_39c478;
        case 0x39c47cu: goto label_39c47c;
        case 0x39c480u: goto label_39c480;
        case 0x39c484u: goto label_39c484;
        case 0x39c488u: goto label_39c488;
        case 0x39c48cu: goto label_39c48c;
        case 0x39c490u: goto label_39c490;
        case 0x39c494u: goto label_39c494;
        case 0x39c498u: goto label_39c498;
        case 0x39c49cu: goto label_39c49c;
        case 0x39c4a0u: goto label_39c4a0;
        case 0x39c4a4u: goto label_39c4a4;
        case 0x39c4a8u: goto label_39c4a8;
        case 0x39c4acu: goto label_39c4ac;
        case 0x39c4b0u: goto label_39c4b0;
        case 0x39c4b4u: goto label_39c4b4;
        case 0x39c4b8u: goto label_39c4b8;
        case 0x39c4bcu: goto label_39c4bc;
        case 0x39c4c0u: goto label_39c4c0;
        case 0x39c4c4u: goto label_39c4c4;
        case 0x39c4c8u: goto label_39c4c8;
        case 0x39c4ccu: goto label_39c4cc;
        case 0x39c4d0u: goto label_39c4d0;
        case 0x39c4d4u: goto label_39c4d4;
        case 0x39c4d8u: goto label_39c4d8;
        case 0x39c4dcu: goto label_39c4dc;
        case 0x39c4e0u: goto label_39c4e0;
        case 0x39c4e4u: goto label_39c4e4;
        case 0x39c4e8u: goto label_39c4e8;
        case 0x39c4ecu: goto label_39c4ec;
        case 0x39c4f0u: goto label_39c4f0;
        case 0x39c4f4u: goto label_39c4f4;
        case 0x39c4f8u: goto label_39c4f8;
        case 0x39c4fcu: goto label_39c4fc;
        case 0x39c500u: goto label_39c500;
        case 0x39c504u: goto label_39c504;
        case 0x39c508u: goto label_39c508;
        case 0x39c50cu: goto label_39c50c;
        case 0x39c510u: goto label_39c510;
        case 0x39c514u: goto label_39c514;
        case 0x39c518u: goto label_39c518;
        case 0x39c51cu: goto label_39c51c;
        case 0x39c520u: goto label_39c520;
        case 0x39c524u: goto label_39c524;
        case 0x39c528u: goto label_39c528;
        case 0x39c52cu: goto label_39c52c;
        case 0x39c530u: goto label_39c530;
        case 0x39c534u: goto label_39c534;
        case 0x39c538u: goto label_39c538;
        case 0x39c53cu: goto label_39c53c;
        case 0x39c540u: goto label_39c540;
        case 0x39c544u: goto label_39c544;
        case 0x39c548u: goto label_39c548;
        case 0x39c54cu: goto label_39c54c;
        case 0x39c550u: goto label_39c550;
        case 0x39c554u: goto label_39c554;
        case 0x39c558u: goto label_39c558;
        case 0x39c55cu: goto label_39c55c;
        case 0x39c560u: goto label_39c560;
        case 0x39c564u: goto label_39c564;
        case 0x39c568u: goto label_39c568;
        case 0x39c56cu: goto label_39c56c;
        case 0x39c570u: goto label_39c570;
        case 0x39c574u: goto label_39c574;
        case 0x39c578u: goto label_39c578;
        case 0x39c57cu: goto label_39c57c;
        case 0x39c580u: goto label_39c580;
        case 0x39c584u: goto label_39c584;
        case 0x39c588u: goto label_39c588;
        case 0x39c58cu: goto label_39c58c;
        case 0x39c590u: goto label_39c590;
        case 0x39c594u: goto label_39c594;
        case 0x39c598u: goto label_39c598;
        case 0x39c59cu: goto label_39c59c;
        default: break;
    }

    ctx->pc = 0x39c460u;

label_39c460:
    // 0x39c460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39c464:
    // 0x39c464: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_39c468:
    // 0x39c468: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x39c468u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
label_39c46c:
    // 0x39c46c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39c46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39c470:
    // 0x39c470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_39c474:
    // 0x39c474: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_39c478:
    // 0x39c478: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39c478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39c47c:
    // 0x39c47c: 0xc0ebe50  jal         func_3AF940
label_39c480:
    if (ctx->pc == 0x39C480u) {
        ctx->pc = 0x39C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C47Cu;
        // 0x39c480: 0x2670ad8c  addiu       $s0, $s3, -0x5274 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C484u;
        goto label_39c484;
    }
    ctx->pc = 0x39C47Cu;
    SET_GPR_U32(ctx, 31, 0x39C484u);
    ctx->pc = 0x39C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C47Cu;
    // 0x39c480: 0x2670ad8c  addiu       $s0, $s3, -0x5274 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x39C47Cu, 0x39C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C484u;
label_39c484:
    // 0x39c484: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c488:
    // 0x39c488: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_39c48c:
    if (ctx->pc == 0x39C48Cu) {
        ctx->pc = 0x39C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C488u;
        // 0x39c48c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C490u;
        goto label_39c490;
    }
    ctx->pc = 0x39C488u;
    {
        const bool branch_taken_0x39c488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C488u;
        // 0x39c48c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c488) {
            ctx->pc = 0x39C4A8u;
            goto label_39c4a8;
        }
    }
    ctx->pc = 0x39C490u;
label_39c490:
    // 0x39c490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c494:
    // 0x39c494: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39c494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39c498:
    // 0x39c498: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39c498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39c49c:
    // 0x39c49c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39c4a0:
    // 0x39c4a0: 0x80ebe56  j           func_3AF958
label_39c4a4:
    if (ctx->pc == 0x39C4A4u) {
        ctx->pc = 0x39C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4A0u;
        // 0x39c4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4A8u;
        goto label_39c4a8;
    }
    ctx->pc = 0x39C4A0u;
    ctx->pc = 0x39C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C4A0u;
    // 0x39c4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    sub_003AF958_0x3af958(rdram, ctx, runtime); return;
    ctx->pc = 0x39C4A8u;
label_39c4a8:
    // 0x39c4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39c4ac:
    // 0x39c4ac: 0xc0ebe56  jal         func_3AF958
label_39c4b0:
    if (ctx->pc == 0x39C4B0u) {
        ctx->pc = 0x39C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4ACu;
        // 0x39c4b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4B4u;
        goto label_39c4b4;
    }
    ctx->pc = 0x39C4ACu;
    SET_GPR_U32(ctx, 31, 0x39C4B4u);
    ctx->pc = 0x39C4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C4ACu;
    // 0x39c4b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x39C4ACu, 0x39C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C4B4u;
label_39c4b4:
    // 0x39c4b4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_39c4b8:
    // 0x39c4b8: 0x8c43ad78  lw          $v1, -0x5288($v0)
    ctx->pc = 0x39c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946168)));
label_39c4bc:
    // 0x39c4bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_39c4c0:
    if (ctx->pc == 0x39C4C0u) {
        ctx->pc = 0x39C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4BCu;
        // 0x39c4c0: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4C4u;
        goto label_39c4c4;
    }
    ctx->pc = 0x39C4BCu;
    {
        const bool branch_taken_0x39c4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4BCu;
        // 0x39c4c0: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c4bc) {
            ctx->pc = 0x39C4CCu;
            goto label_39c4cc;
        }
    }
    ctx->pc = 0x39C4C4u;
label_39c4c4:
    // 0x39c4c4: 0x60f809  jalr        $v1
label_39c4c8:
    if (ctx->pc == 0x39C4C8u) {
        ctx->pc = 0x39C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4C4u;
        // 0x39c4c8: 0x8c44ad7c  lw          $a0, -0x5284($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C4CCu;
        goto label_39c4cc;
    }
    ctx->pc = 0x39C4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39C4CCu);
        ctx->pc = 0x39C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4C4u;
        // 0x39c4c8: 0x8c44ad7c  lw          $a0, -0x5284($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946172)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C4C4u, 0x39C4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C4CCu;
label_39c4cc:
    // 0x39c4cc: 0xc0ebe50  jal         func_3AF940
label_39c4d0:
    if (ctx->pc == 0x39C4D0u) {
        ctx->pc = 0x39C4D4u;
        goto label_39c4d4;
    }
    ctx->pc = 0x39C4CCu;
    SET_GPR_U32(ctx, 31, 0x39C4D4u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x39C4CCu, 0x39C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C4D4u;
label_39c4d4:
    // 0x39c4d4: 0xc0e6410  jal         func_399040
label_39c4d8:
    if (ctx->pc == 0x39C4D8u) {
        ctx->pc = 0x39C4DCu;
        goto label_39c4dc;
    }
    ctx->pc = 0x39C4D4u;
    SET_GPR_U32(ctx, 31, 0x39C4DCu);
    ctx->pc = 0x399040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399040u, 0x39C4D4u, 0x39C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C4DCu;
label_39c4dc:
    // 0x39c4dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39c4e0:
    // 0x39c4e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_39c4e4:
    // 0x39c4e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_39c4e8:
    // 0x39c4e8: 0x24700c28  addiu       $s0, $v1, 0xC28
    ctx->pc = 0x39c4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3112));
label_39c4ec:
    // 0x39c4ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39c4ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39c4f0:
    // 0x39c4f0: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x39c4f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_39c4f4:
    // 0x39c4f4: 0x0  nop
    ctx->pc = 0x39c4f4u;
    // NOP
label_39c4f8:
    // 0x39c4f8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x39c4f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_39c4fc:
    // 0x39c4fc: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_39c500:
    if (ctx->pc == 0x39C500u) {
        ctx->pc = 0x39C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C4FCu;
        // 0x39c500: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C504u;
        goto label_39c504;
    }
    ctx->pc = 0x39C4FCu;
    {
        const bool branch_taken_0x39c4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x39c4fc) {
            ctx->pc = 0x39C500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C4FCu;
            // 0x39c500: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C510u;
            goto label_39c510;
        }
    }
    ctx->pc = 0x39C504u;
label_39c504:
    // 0x39c504: 0xc0e780c  jal         func_39E030
label_39c508:
    if (ctx->pc == 0x39C508u) {
        ctx->pc = 0x39C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C504u;
        // 0x39c508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C50Cu;
        goto label_39c50c;
    }
    ctx->pc = 0x39C504u;
    SET_GPR_U32(ctx, 31, 0x39C50Cu);
    ctx->pc = 0x39C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C504u;
    // 0x39c508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E030u, 0x39C504u, 0x39C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C50Cu;
label_39c50c:
    // 0x39c50c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39c50cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39c510:
    // 0x39c510: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
label_39c514:
    if (ctx->pc == 0x39C514u) {
        ctx->pc = 0x39C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C510u;
        // 0x39c514: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C518u;
        goto label_39c518;
    }
    ctx->pc = 0x39C510u;
    {
        const bool branch_taken_0x39c510 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x39C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C510u;
        // 0x39c514: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c510) {
            ctx->pc = 0x39C4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c4f8;
        }
    }
    ctx->pc = 0x39C518u;
label_39c518:
    // 0x39c518: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39c518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39c51c:
    // 0x39c51c: 0x2670ad8c  addiu       $s0, $s3, -0x5274
    ctx->pc = 0x39c51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946188));
label_39c520:
    // 0x39c520: 0xc0e5f3c  jal         func_397CF0
label_39c524:
    if (ctx->pc == 0x39C524u) {
        ctx->pc = 0x39C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C520u;
        // 0x39c524: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C528u;
        goto label_39c528;
    }
    ctx->pc = 0x39C520u;
    SET_GPR_U32(ctx, 31, 0x39C528u);
    ctx->pc = 0x39C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C520u;
    // 0x39c524: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397CF0u, 0x39C520u, 0x39C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C528u;
label_39c528:
    // 0x39c528: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39c528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_39c52c:
    // 0x39c52c: 0x8c62ad94  lw          $v0, -0x526C($v1)
    ctx->pc = 0x39c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946196)));
label_39c530:
    // 0x39c530: 0x28420033  slti        $v0, $v0, 0x33
    ctx->pc = 0x39c530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
label_39c534:
    // 0x39c534: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39c538:
    if (ctx->pc == 0x39C538u) {
        ctx->pc = 0x39C53Cu;
        goto label_39c53c;
    }
    ctx->pc = 0x39C534u;
    {
        const bool branch_taken_0x39c534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c534) {
            ctx->pc = 0x39C544u;
            goto label_39c544;
        }
    }
    ctx->pc = 0x39C53Cu;
label_39c53c:
    // 0x39c53c: 0xc0e5f3c  jal         func_397CF0
label_39c540:
    if (ctx->pc == 0x39C540u) {
        ctx->pc = 0x39C544u;
        goto label_39c544;
    }
    ctx->pc = 0x39C53Cu;
    SET_GPR_U32(ctx, 31, 0x39C544u);
    ctx->pc = 0x397CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397CF0u, 0x39C53Cu, 0x39C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C544u;
label_39c544:
    // 0x39c544: 0xc0ebe56  jal         func_3AF958
label_39c548:
    if (ctx->pc == 0x39C548u) {
        ctx->pc = 0x39C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C544u;
        // 0x39c548: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C54Cu;
        goto label_39c54c;
    }
    ctx->pc = 0x39C544u;
    SET_GPR_U32(ctx, 31, 0x39C54Cu);
    ctx->pc = 0x39C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C544u;
    // 0x39c548: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x39C544u, 0x39C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C54Cu;
label_39c54c:
    // 0x39c54c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_39c550:
    // 0x39c550: 0x8c43ad80  lw          $v1, -0x5280($v0)
    ctx->pc = 0x39c550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946176)));
label_39c554:
    // 0x39c554: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_39c558:
    if (ctx->pc == 0x39C558u) {
        ctx->pc = 0x39C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C554u;
        // 0x39c558: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C55Cu;
        goto label_39c55c;
    }
    ctx->pc = 0x39C554u;
    {
        const bool branch_taken_0x39c554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C554u;
        // 0x39c558: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c554) {
            ctx->pc = 0x39C564u;
            goto label_39c564;
        }
    }
    ctx->pc = 0x39C55Cu;
label_39c55c:
    // 0x39c55c: 0x60f809  jalr        $v1
label_39c560:
    if (ctx->pc == 0x39C560u) {
        ctx->pc = 0x39C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C55Cu;
        // 0x39c560: 0x8c44ad84  lw          $a0, -0x527C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C564u;
        goto label_39c564;
    }
    ctx->pc = 0x39C55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39C564u);
        ctx->pc = 0x39C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C55Cu;
        // 0x39c560: 0x8c44ad84  lw          $a0, -0x527C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946180)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C55Cu, 0x39C564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C564u;
label_39c564:
    // 0x39c564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c568:
    // 0x39c568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39c568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39c56c:
    // 0x39c56c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39c56cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39c570:
    // 0x39c570: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39c570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39c574:
    // 0x39c574: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39c578:
    // 0x39c578: 0x3e00008  jr          $ra
label_39c57c:
    if (ctx->pc == 0x39C57Cu) {
        ctx->pc = 0x39C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C578u;
        // 0x39c57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C580u;
        goto label_39c580;
    }
    ctx->pc = 0x39C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C578u;
        // 0x39c57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C580u;
label_39c580:
    // 0x39c580: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39c584:
    // 0x39c584: 0x0  nop
    ctx->pc = 0x39c584u;
    // NOP
label_39c588:
    // 0x39c588: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39c58c:
    // 0x39c58c: 0x0  nop
    ctx->pc = 0x39c58cu;
    // NOP
label_39c590:
    // 0x39c590: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39c594:
    // 0x39c594: 0x0  nop
    ctx->pc = 0x39c594u;
    // NOP
label_39c598:
    // 0x39c598: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39c59c:
    // 0x39c59c: 0x0  nop
    ctx->pc = 0x39c59cu;
    // NOP
    ctx->pc = 0x39c5a0u;
}
