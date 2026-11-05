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

// Function: sub_00112500
// Address: 0x112500 - 0x1125b0
void sub_00112500_0x112500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112500_0x112500");
#endif

    switch (ctx->pc) {
        case 0x112500u: goto label_112500;
        case 0x112504u: goto label_112504;
        case 0x112508u: goto label_112508;
        case 0x11250cu: goto label_11250c;
        case 0x112510u: goto label_112510;
        case 0x112514u: goto label_112514;
        case 0x112518u: goto label_112518;
        case 0x11251cu: goto label_11251c;
        case 0x112520u: goto label_112520;
        case 0x112524u: goto label_112524;
        case 0x112528u: goto label_112528;
        case 0x11252cu: goto label_11252c;
        case 0x112530u: goto label_112530;
        case 0x112534u: goto label_112534;
        case 0x112538u: goto label_112538;
        case 0x11253cu: goto label_11253c;
        case 0x112540u: goto label_112540;
        case 0x112544u: goto label_112544;
        case 0x112548u: goto label_112548;
        case 0x11254cu: goto label_11254c;
        case 0x112550u: goto label_112550;
        case 0x112554u: goto label_112554;
        case 0x112558u: goto label_112558;
        case 0x11255cu: goto label_11255c;
        case 0x112560u: goto label_112560;
        case 0x112564u: goto label_112564;
        case 0x112568u: goto label_112568;
        case 0x11256cu: goto label_11256c;
        case 0x112570u: goto label_112570;
        case 0x112574u: goto label_112574;
        case 0x112578u: goto label_112578;
        case 0x11257cu: goto label_11257c;
        case 0x112580u: goto label_112580;
        case 0x112584u: goto label_112584;
        case 0x112588u: goto label_112588;
        case 0x11258cu: goto label_11258c;
        case 0x112590u: goto label_112590;
        case 0x112594u: goto label_112594;
        case 0x112598u: goto label_112598;
        case 0x11259cu: goto label_11259c;
        case 0x1125a0u: goto label_1125a0;
        case 0x1125a4u: goto label_1125a4;
        case 0x1125a8u: goto label_1125a8;
        case 0x1125acu: goto label_1125ac;
        default: break;
    }

    ctx->pc = 0x112500u;

label_112500:
    // 0x112500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_112504:
    // 0x112504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_112508:
    // 0x112508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_11250c:
    // 0x11250c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11250cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_112510:
    // 0x112510: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_112514:
    // 0x112514: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_112518:
    if (ctx->pc == 0x112518u) {
        ctx->pc = 0x112518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112514u;
        // 0x112518: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11251Cu;
        goto label_11251c;
    }
    ctx->pc = 0x112514u;
    {
        const bool branch_taken_0x112514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112514) {
            ctx->pc = 0x112518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112514u;
            // 0x112518: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1125A4u;
            goto label_1125a4;
        }
    }
    ctx->pc = 0x11251Cu;
label_11251c:
    // 0x11251c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x11251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_112520:
    // 0x112520: 0x50800020  beql        $a0, $zero, . + 4 + (0x20 << 2)
label_112524:
    if (ctx->pc == 0x112524u) {
        ctx->pc = 0x112524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112520u;
        // 0x112524: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112528u;
        goto label_112528;
    }
    ctx->pc = 0x112520u;
    {
        const bool branch_taken_0x112520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112520) {
            ctx->pc = 0x112524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112520u;
            // 0x112524: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1125A4u;
            goto label_1125a4;
        }
    }
    ctx->pc = 0x112528u;
label_112528:
    // 0x112528: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x112528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_11252c:
    // 0x11252c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x11252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_112530:
    // 0x112530: 0x40f809  jalr        $v0
label_112534:
    if (ctx->pc == 0x112534u) {
        ctx->pc = 0x112538u;
        goto label_112538;
    }
    ctx->pc = 0x112530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112538u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112530u, 0x112538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112538u;
label_112538:
    // 0x112538: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x112538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_11253c:
    // 0x11253c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x11253cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_112540:
    // 0x112540: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x112540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_112544:
    // 0x112544: 0x40f809  jalr        $v0
label_112548:
    if (ctx->pc == 0x112548u) {
        ctx->pc = 0x11254Cu;
        goto label_11254c;
    }
    ctx->pc = 0x112544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11254Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112544u, 0x11254Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11254Cu;
label_11254c:
    // 0x11254c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_112550:
    if (ctx->pc == 0x112550u) {
        ctx->pc = 0x112550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11254Cu;
        // 0x112550: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112554u;
        goto label_112554;
    }
    ctx->pc = 0x11254Cu;
    {
        const bool branch_taken_0x11254c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11254Cu;
        // 0x112550: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11254c) {
            ctx->pc = 0x112568u;
            goto label_112568;
        }
    }
    ctx->pc = 0x112554u;
label_112554:
    // 0x112554: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x112554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_112558:
    // 0x112558: 0xc042040  jal         func_108100
label_11255c:
    if (ctx->pc == 0x11255Cu) {
        ctx->pc = 0x11255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112558u;
        // 0x11255c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112560u;
        goto label_112560;
    }
    ctx->pc = 0x112558u;
    SET_GPR_U32(ctx, 31, 0x112560u);
    ctx->pc = 0x11255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112558u;
    // 0x11255c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108100u, 0x112558u, 0x112560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112560u;
label_112560:
    // 0x112560: 0x1000000f  b           . + 4 + (0xF << 2)
label_112564:
    if (ctx->pc == 0x112564u) {
        ctx->pc = 0x112564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112560u;
        // 0x112564: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112568u;
        goto label_112568;
    }
    ctx->pc = 0x112560u;
    {
        const bool branch_taken_0x112560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112560u;
        // 0x112564: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112560) {
            ctx->pc = 0x1125A0u;
            goto label_1125a0;
        }
    }
    ctx->pc = 0x112568u;
label_112568:
    // 0x112568: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x112568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_11256c:
    // 0x11256c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_112570:
    if (ctx->pc == 0x112570u) {
        ctx->pc = 0x112570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11256Cu;
        // 0x112570: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112574u;
        goto label_112574;
    }
    ctx->pc = 0x11256Cu;
    {
        const bool branch_taken_0x11256c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x112570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11256Cu;
        // 0x112570: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11256c) {
            ctx->pc = 0x11257Cu;
            goto label_11257c;
        }
    }
    ctx->pc = 0x112574u;
label_112574:
    // 0x112574: 0x10000003  b           . + 4 + (0x3 << 2)
label_112578:
    if (ctx->pc == 0x112578u) {
        ctx->pc = 0x112578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112574u;
        // 0x112578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11257Cu;
        goto label_11257c;
    }
    ctx->pc = 0x112574u;
    {
        const bool branch_taken_0x112574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112574u;
        // 0x112578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112574) {
            ctx->pc = 0x112584u;
            goto label_112584;
        }
    }
    ctx->pc = 0x11257Cu;
label_11257c:
    // 0x11257c: 0xc0478c8  jal         func_11E320
label_112580:
    if (ctx->pc == 0x112580u) {
        ctx->pc = 0x112580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11257Cu;
        // 0x112580: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112584u;
        goto label_112584;
    }
    ctx->pc = 0x11257Cu;
    SET_GPR_U32(ctx, 31, 0x112584u);
    ctx->pc = 0x112580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11257Cu;
    // 0x112580: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x11257Cu, 0x112584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112584u;
label_112584:
    // 0x112584: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_112588:
    if (ctx->pc == 0x112588u) {
        ctx->pc = 0x112588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112584u;
        // 0x112588: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11258Cu;
        goto label_11258c;
    }
    ctx->pc = 0x112584u;
    {
        const bool branch_taken_0x112584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112584) {
            ctx->pc = 0x112588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112584u;
            // 0x112588: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1125A0u;
            goto label_1125a0;
        }
    }
    ctx->pc = 0x11258Cu;
label_11258c:
    // 0x11258c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11258cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_112590:
    // 0x112590: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x112590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_112594:
    // 0x112594: 0xc04204c  jal         func_108130
label_112598:
    if (ctx->pc == 0x112598u) {
        ctx->pc = 0x112598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112594u;
        // 0x112598: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11259Cu;
        goto label_11259c;
    }
    ctx->pc = 0x112594u;
    SET_GPR_U32(ctx, 31, 0x11259Cu);
    ctx->pc = 0x112598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112594u;
    // 0x112598: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108130u, 0x112594u, 0x11259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11259Cu;
label_11259c:
    // 0x11259c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x11259cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1125a0:
    // 0x1125a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1125a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1125a4:
    // 0x1125a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1125a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1125a8:
    // 0x1125a8: 0x3e00008  jr          $ra
label_1125ac:
    if (ctx->pc == 0x1125ACu) {
        ctx->pc = 0x1125ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125A8u;
        // 0x1125ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1125B0u;
        goto label_fallthrough_0x1125a8;
    }
    ctx->pc = 0x1125A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1125ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125A8u;
        // 0x1125ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1125A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1125a8:
    ctx->pc = 0x1125B0u;
}
