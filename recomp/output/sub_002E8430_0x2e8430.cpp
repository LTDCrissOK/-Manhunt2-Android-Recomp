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

// Function: sub_002E8430
// Address: 0x2e8430 - 0x2e8528
void sub_002E8430_0x2e8430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8430_0x2e8430");
#endif

    switch (ctx->pc) {
        case 0x2e847cu: goto label_2e847c;
        case 0x2e848cu: goto label_2e848c;
        case 0x2e849cu: goto label_2e849c;
        case 0x2e84dcu: goto label_2e84dc;
        case 0x2e84e8u: goto label_2e84e8;
        case 0x2e84f4u: goto label_2e84f4;
        case 0x2e84fcu: goto label_2e84fc;
        case 0x2e8508u: goto label_2e8508;
        default: break;
    }

    ctx->pc = 0x2e8430u;

    // 0x2e8430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e8434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8438: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e8438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e843c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e843cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8440: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e8440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e8444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e8444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8448: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e8448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e844c: 0x8e2212bc  lw          $v0, 0x12BC($s1)
    ctx->pc = 0x2e844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
    // 0x2e8450: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x2e8450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e8454: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E8454u;
    {
        const bool branch_taken_0x2e8454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8454u;
        // 0x2e8458: 0x2412000d  addiu       $s2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8454) {
            ctx->pc = 0x2E84B4u;
            goto label_2e84b4;
        }
    }
    ctx->pc = 0x2E845Cu;
    // 0x2e845c: 0x8e220388  lw          $v0, 0x388($s1)
    ctx->pc = 0x2e845cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
    // 0x2e8460: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E8460u;
    {
        const bool branch_taken_0x2e8460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8460) {
            ctx->pc = 0x2E8464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8460u;
            // 0x2e8464: 0x8e2312bc  lw          $v1, 0x12BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E84B8u;
            goto label_2e84b8;
        }
    }
    ctx->pc = 0x2E8468u;
    // 0x2e8468: 0x8c420220  lw          $v0, 0x220($v0)
    ctx->pc = 0x2e8468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x2e846c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E846Cu;
    {
        const bool branch_taken_0x2e846c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e846c) {
            ctx->pc = 0x2E8470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E846Cu;
            // 0x2e8470: 0x8e2312bc  lw          $v1, 0x12BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E84B8u;
            goto label_2e84b8;
        }
    }
    ctx->pc = 0x2E8474u;
    // 0x2e8474: 0xc0bf228  jal         func_2FC8A0
    ctx->pc = 0x2E8474u;
    SET_GPR_U32(ctx, 31, 0x2E847Cu);
    ctx->pc = 0x2E8478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8474u;
    // 0x2e8478: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8A0u, 0x2E8474u, 0x2E847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E847Cu;
label_2e847c:
    // 0x2e847c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2E847Cu;
    {
        const bool branch_taken_0x2e847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e847c) {
            ctx->pc = 0x2E8480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E847Cu;
            // 0x2e8480: 0x8e2312bc  lw          $v1, 0x12BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E84B8u;
            goto label_2e84b8;
        }
    }
    ctx->pc = 0x2E8484u;
    // 0x2e8484: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x2E8484u;
    SET_GPR_U32(ctx, 31, 0x2E848Cu);
    ctx->pc = 0x2E8488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8484u;
    // 0x2e8488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2E8484u, 0x2E848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E848Cu;
label_2e848c:
    // 0x2e848c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E848Cu;
    {
        const bool branch_taken_0x2e848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E848Cu;
        // 0x2e8490: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e848c) {
            ctx->pc = 0x2E84ACu;
            goto label_2e84ac;
        }
    }
    ctx->pc = 0x2E8494u;
    // 0x2e8494: 0xc06a046  jal         func_1A8118
    ctx->pc = 0x2E8494u;
    SET_GPR_U32(ctx, 31, 0x2E849Cu);
    ctx->pc = 0x2E8498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8494u;
    // 0x2e8498: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8118u, 0x2E8494u, 0x2E849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E849Cu;
label_2e849c:
    // 0x2e849c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2e849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e84a0: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E84A0u;
    {
        const bool branch_taken_0x2e84a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84A0u;
        // 0x2e84a4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84a0) {
            ctx->pc = 0x2E84CCu;
            goto label_2e84cc;
        }
    }
    ctx->pc = 0x2E84A8u;
    // 0x2e84a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e84a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e84ac:
    // 0x2e84ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E84ACu;
    {
        const bool branch_taken_0x2e84ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84ACu;
        // 0x2e84b0: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84ac) {
            ctx->pc = 0x2E84CCu;
            goto label_2e84cc;
        }
    }
    ctx->pc = 0x2E84B4u;
label_2e84b4:
    // 0x2e84b4: 0x8e2312bc  lw          $v1, 0x12BC($s1)
    ctx->pc = 0x2e84b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
label_2e84b8:
    // 0x2e84b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e84bc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E84BCu;
    {
        const bool branch_taken_0x2e84bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e84bc) {
            ctx->pc = 0x2E84CCu;
            goto label_2e84cc;
        }
    }
    ctx->pc = 0x2E84C4u;
    // 0x2e84c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e84c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e84c8: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x2e84c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e84cc:
    // 0x2e84cc: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E84CCu;
    {
        const bool branch_taken_0x2e84cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84CCu;
        // 0x2e84d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84cc) {
            ctx->pc = 0x2E850Cu;
            goto label_2e850c;
        }
    }
    ctx->pc = 0x2E84D4u;
    // 0x2e84d4: 0xc0b65b4  jal         func_2D96D0
    ctx->pc = 0x2E84D4u;
    SET_GPR_U32(ctx, 31, 0x2E84DCu);
    ctx->pc = 0x2E84D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E84D4u;
    // 0x2e84d8: 0xae3212bc  sw          $s2, 0x12BC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4796), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96D0u, 0x2E84D4u, 0x2E84DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E84DCu;
label_2e84dc:
    // 0x2e84dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e84dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e84e0: 0xc0bf228  jal         func_2FC8A0
    ctx->pc = 0x2E84E0u;
    SET_GPR_U32(ctx, 31, 0x2E84E8u);
    ctx->pc = 0x2E84E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E84E0u;
    // 0x2e84e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8A0u, 0x2E84E0u, 0x2E84E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E84E8u;
label_2e84e8:
    // 0x2e84e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e84e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e84ec: 0xc0b65c2  jal         func_2D9708
    ctx->pc = 0x2E84ECu;
    SET_GPR_U32(ctx, 31, 0x2E84F4u);
    ctx->pc = 0x2E84F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E84ECu;
    // 0x2e84f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9708u, 0x2E84ECu, 0x2E84F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E84F4u;
label_2e84f4:
    // 0x2e84f4: 0xc0b65b4  jal         func_2D96D0
    ctx->pc = 0x2E84F4u;
    SET_GPR_U32(ctx, 31, 0x2E84FCu);
    ctx->pc = 0x2D96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96D0u, 0x2E84F4u, 0x2E84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E84FCu;
label_2e84fc:
    // 0x2e84fc: 0x8e2512bc  lw          $a1, 0x12BC($s1)
    ctx->pc = 0x2e84fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
    // 0x2e8500: 0xc0b65c0  jal         func_2D9700
    ctx->pc = 0x2E8500u;
    SET_GPR_U32(ctx, 31, 0x2E8508u);
    ctx->pc = 0x2E8504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8500u;
    // 0x2e8504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9700u, 0x2E8500u, 0x2E8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8508u;
label_2e8508:
    // 0x2e8508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e850c:
    // 0x2e850c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e850cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8510: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e8510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e8514: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e8514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8518: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e8518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e851c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E851Cu;
        // 0x2e8520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8524u;
    // 0x2e8524: 0x0  nop
    ctx->pc = 0x2e8524u;
    // NOP
    ctx->pc = 0x2e8528u;
}
