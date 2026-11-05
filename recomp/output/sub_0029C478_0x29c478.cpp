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

// Function: sub_0029C478
// Address: 0x29c478 - 0x29c508
void sub_0029C478_0x29c478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C478_0x29c478");
#endif

    switch (ctx->pc) {
        case 0x29c478u: goto label_29c478;
        case 0x29c47cu: goto label_29c47c;
        case 0x29c480u: goto label_29c480;
        case 0x29c484u: goto label_29c484;
        case 0x29c488u: goto label_29c488;
        case 0x29c48cu: goto label_29c48c;
        case 0x29c490u: goto label_29c490;
        case 0x29c494u: goto label_29c494;
        case 0x29c498u: goto label_29c498;
        case 0x29c49cu: goto label_29c49c;
        case 0x29c4a0u: goto label_29c4a0;
        case 0x29c4a4u: goto label_29c4a4;
        case 0x29c4a8u: goto label_29c4a8;
        case 0x29c4acu: goto label_29c4ac;
        case 0x29c4b0u: goto label_29c4b0;
        case 0x29c4b4u: goto label_29c4b4;
        case 0x29c4b8u: goto label_29c4b8;
        case 0x29c4bcu: goto label_29c4bc;
        case 0x29c4c0u: goto label_29c4c0;
        case 0x29c4c4u: goto label_29c4c4;
        case 0x29c4c8u: goto label_29c4c8;
        case 0x29c4ccu: goto label_29c4cc;
        case 0x29c4d0u: goto label_29c4d0;
        case 0x29c4d4u: goto label_29c4d4;
        case 0x29c4d8u: goto label_29c4d8;
        case 0x29c4dcu: goto label_29c4dc;
        case 0x29c4e0u: goto label_29c4e0;
        case 0x29c4e4u: goto label_29c4e4;
        case 0x29c4e8u: goto label_29c4e8;
        case 0x29c4ecu: goto label_29c4ec;
        case 0x29c4f0u: goto label_29c4f0;
        case 0x29c4f4u: goto label_29c4f4;
        case 0x29c4f8u: goto label_29c4f8;
        case 0x29c4fcu: goto label_29c4fc;
        case 0x29c500u: goto label_29c500;
        case 0x29c504u: goto label_29c504;
        default: break;
    }

    ctx->pc = 0x29c478u;

label_29c478:
    // 0x29c478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29c47c:
    // 0x29c47c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_29c480:
    // 0x29c480: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29c484:
    // 0x29c484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29c484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29c488:
    // 0x29c488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c48c:
    // 0x29c48c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29c48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29c490:
    // 0x29c490: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x29c490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_29c494:
    // 0x29c494: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29c494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_29c498:
    // 0x29c498: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29c498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29c49c:
    // 0x29c49c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x29c49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29c4a0:
    // 0x29c4a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29c4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c4a4:
    // 0x29c4a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29c4a8:
    // 0x29c4a8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x29c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_29c4ac:
    // 0x29c4ac: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x29c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_29c4b0:
    // 0x29c4b0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29c4b4:
    // 0x29c4b4: 0x8c430278  lw          $v1, 0x278($v0)
    ctx->pc = 0x29c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
label_29c4b8:
    // 0x29c4b8: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x29c4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29c4bc:
    // 0x29c4bc: 0xc0f809  jalr        $a2
label_29c4c0:
    if (ctx->pc == 0x29C4C0u) {
        ctx->pc = 0x29C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4BCu;
        // 0x29c4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C4C4u;
        goto label_29c4c4;
    }
    ctx->pc = 0x29C4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x29C4C4u);
        ctx->pc = 0x29C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4BCu;
        // 0x29c4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C4BCu, 0x29C4C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C4C4u;
label_29c4c4:
    // 0x29c4c4: 0xc0a7678  jal         func_29D9E0
label_29c4c8:
    if (ctx->pc == 0x29C4C8u) {
        ctx->pc = 0x29C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4C4u;
        // 0x29c4c8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C4CCu;
        goto label_29c4cc;
    }
    ctx->pc = 0x29C4C4u;
    SET_GPR_U32(ctx, 31, 0x29C4CCu);
    ctx->pc = 0x29C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4C4u;
    // 0x29c4c8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D9E0u, 0x29C4C4u, 0x29C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4CCu;
label_29c4cc:
    // 0x29c4cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29c4d0:
    // 0x29c4d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29c4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c4d4:
    // 0x29c4d4: 0xa0520010  sb          $s2, 0x10($v0)
    ctx->pc = 0x29c4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 18));
label_29c4d8:
    // 0x29c4d8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x29c4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29c4dc:
    // 0x29c4dc: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x29c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_29c4e0:
    // 0x29c4e0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x29c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_29c4e4:
    // 0x29c4e4: 0x40f809  jalr        $v0
label_29c4e8:
    if (ctx->pc == 0x29C4E8u) {
        ctx->pc = 0x29C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4E4u;
        // 0x29c4e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C4ECu;
        goto label_29c4ec;
    }
    ctx->pc = 0x29C4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C4ECu);
        ctx->pc = 0x29C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4E4u;
        // 0x29c4e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C4E4u, 0x29C4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C4ECu;
label_29c4ec:
    // 0x29c4ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c4f0:
    // 0x29c4f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29c4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29c4f4:
    // 0x29c4f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29c4f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c4f8:
    // 0x29c4f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29c4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29c4fc:
    // 0x29c4fc: 0x3e00008  jr          $ra
label_29c500:
    if (ctx->pc == 0x29C500u) {
        ctx->pc = 0x29C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4FCu;
        // 0x29c500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C504u;
        goto label_29c504;
    }
    ctx->pc = 0x29C4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4FCu;
        // 0x29c500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C504u;
label_29c504:
    // 0x29c504: 0x0  nop
    ctx->pc = 0x29c504u;
    // NOP
    ctx->pc = 0x29c508u;
}
