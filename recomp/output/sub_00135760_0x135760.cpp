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

// Function: sub_00135760
// Address: 0x135760 - 0x135814
void sub_00135760_0x135760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135760_0x135760");
#endif

    switch (ctx->pc) {
        case 0x13579cu: goto label_13579c;
        case 0x1357acu: goto label_1357ac;
        case 0x1357bcu: goto label_1357bc;
        case 0x1357ccu: goto label_1357cc;
        case 0x1357dcu: goto label_1357dc;
        case 0x1357ecu: goto label_1357ec;
        case 0x1357fcu: goto label_1357fc;
        case 0x13580cu: goto label_13580c;
        default: break;
    }

    ctx->pc = 0x135760u;

    // 0x135760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135764: 0x24a3fff4  addiu       $v1, $a1, -0xC
    ctx->pc = 0x135764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
    // 0x135768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13576c: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x13576cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x135770: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x135770u;
    {
        const bool branch_taken_0x135770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135770u;
        // 0x135774: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135770) {
            ctx->pc = 0x135824u;
            return;
        }
    }
    ctx->pc = 0x135778u;
    // 0x135778: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x135778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13577c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13577cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135780: 0x2442e520  addiu       $v0, $v0, -0x1AE0
    ctx->pc = 0x135780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960416));
    // 0x135784: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x135784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135788: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x135788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13578c: 0x800008  jr          $a0
    ctx->pc = 0x13578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135794u: goto label_135794;
            case 0x1357A4u: goto label_1357a4;
            case 0x1357B4u: goto label_1357b4;
            case 0x1357C4u: goto label_1357c4;
            case 0x1357D4u: goto label_1357d4;
            case 0x1357E4u: goto label_1357e4;
            case 0x1357F4u: goto label_1357f4;
            case 0x135804u: goto label_135804;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13578Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x135794u;
label_135794:
    // 0x135794: 0xc04d60e  jal         func_135838
    ctx->pc = 0x135794u;
    SET_GPR_U32(ctx, 31, 0x13579Cu);
    ctx->pc = 0x135798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135794u;
    // 0x135798: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135838u, 0x135794u, 0x13579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13579Cu;
label_13579c:
    // 0x13579c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13579Cu;
    {
        const bool branch_taken_0x13579c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1357A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13579Cu;
        // 0x1357a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13579c) {
            ctx->pc = 0x13582Cu;
            return;
        }
    }
    ctx->pc = 0x1357A4u;
label_1357a4:
    // 0x1357a4: 0xc04d622  jal         func_135888
    ctx->pc = 0x1357A4u;
    SET_GPR_U32(ctx, 31, 0x1357ACu);
    ctx->pc = 0x1357A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357A4u;
    // 0x1357a8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135888u, 0x1357A4u, 0x1357ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1357ACu;
label_1357ac:
    // 0x1357ac: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1357ACu;
    {
        const bool branch_taken_0x1357ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1357B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357ACu;
        // 0x1357b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1357ac) {
            ctx->pc = 0x13582Cu;
            return;
        }
    }
    ctx->pc = 0x1357B4u;
label_1357b4:
    // 0x1357b4: 0xc04d62e  jal         func_1358B8
    ctx->pc = 0x1357B4u;
    SET_GPR_U32(ctx, 31, 0x1357BCu);
    ctx->pc = 0x1357B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357B4u;
    // 0x1357b8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1358B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358B8u, 0x1357B4u, 0x1357BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1357BCu;
label_1357bc:
    // 0x1357bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1357BCu;
    {
        const bool branch_taken_0x1357bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1357C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357BCu;
        // 0x1357c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1357bc) {
            ctx->pc = 0x13582Cu;
            return;
        }
    }
    ctx->pc = 0x1357C4u;
label_1357c4:
    // 0x1357c4: 0xc04d63a  jal         func_1358E8
    ctx->pc = 0x1357C4u;
    SET_GPR_U32(ctx, 31, 0x1357CCu);
    ctx->pc = 0x1357C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357C4u;
    // 0x1357c8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1358E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358E8u, 0x1357C4u, 0x1357CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1357CCu;
label_1357cc:
    // 0x1357cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1357CCu;
    {
        const bool branch_taken_0x1357cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1357D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357CCu;
        // 0x1357d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1357cc) {
            ctx->pc = 0x13582Cu;
            return;
        }
    }
    ctx->pc = 0x1357D4u;
label_1357d4:
    // 0x1357d4: 0xc04d646  jal         func_135918
    ctx->pc = 0x1357D4u;
    SET_GPR_U32(ctx, 31, 0x1357DCu);
    ctx->pc = 0x1357D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357D4u;
    // 0x1357d8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135918u, 0x1357D4u, 0x1357DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1357DCu;
label_1357dc:
    // 0x1357dc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1357DCu;
    {
        const bool branch_taken_0x1357dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1357E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357DCu;
        // 0x1357e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1357dc) {
            ctx->pc = 0x13582Cu;
            return;
        }
    }
    ctx->pc = 0x1357E4u;
label_1357e4:
    // 0x1357e4: 0xc04d652  jal         func_135948
    ctx->pc = 0x1357E4u;
    SET_GPR_U32(ctx, 31, 0x1357ECu);
    ctx->pc = 0x1357E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357E4u;
    // 0x1357e8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135948u, 0x1357E4u, 0x1357ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1357ECu;
label_1357ec:
    // 0x1357ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1357ECu;
    {
        const bool branch_taken_0x1357ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1357F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357ECu;
        // 0x1357f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1357ec) {
            ctx->pc = 0x13582Cu;
            return;
        }
    }
    ctx->pc = 0x1357F4u;
label_1357f4:
    // 0x1357f4: 0xc04d65e  jal         func_135978
    ctx->pc = 0x1357F4u;
    SET_GPR_U32(ctx, 31, 0x1357FCu);
    ctx->pc = 0x1357F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357F4u;
    // 0x1357f8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135978u, 0x1357F4u, 0x1357FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1357FCu;
label_1357fc:
    // 0x1357fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1357FCu;
    {
        const bool branch_taken_0x1357fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357FCu;
        // 0x135800: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1357fc) {
            ctx->pc = 0x13582Cu;
            return;
        }
    }
    ctx->pc = 0x135804u;
label_135804:
    // 0x135804: 0xc04d66a  jal         func_1359A8
    ctx->pc = 0x135804u;
    SET_GPR_U32(ctx, 31, 0x13580Cu);
    ctx->pc = 0x135808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135804u;
    // 0x135808: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1359A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1359A8u, 0x135804u, 0x13580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13580Cu;
label_13580c:
    // 0x13580c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13580Cu;
    {
        const bool branch_taken_0x13580c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13580Cu;
        // 0x135810: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13580c) {
            ctx->pc = 0x13582Cu;
            return;
        }
    }
    ctx->pc = 0x135814u;
}
