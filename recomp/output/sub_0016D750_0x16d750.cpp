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

// Function: sub_0016D750
// Address: 0x16d750 - 0x16d838
void sub_0016D750_0x16d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D750_0x16d750");
#endif

    switch (ctx->pc) {
        case 0x16d764u: goto label_16d764;
        case 0x16d774u: goto label_16d774;
        case 0x16d77cu: goto label_16d77c;
        case 0x16d78cu: goto label_16d78c;
        case 0x16d79cu: goto label_16d79c;
        case 0x16d7a4u: goto label_16d7a4;
        case 0x16d7b4u: goto label_16d7b4;
        case 0x16d7ccu: goto label_16d7cc;
        case 0x16d7dcu: goto label_16d7dc;
        case 0x16d7ecu: goto label_16d7ec;
        case 0x16d7f8u: goto label_16d7f8;
        case 0x16d808u: goto label_16d808;
        case 0x16d818u: goto label_16d818;
        case 0x16d820u: goto label_16d820;
        case 0x16d828u: goto label_16d828;
        default: break;
    }

    ctx->pc = 0x16d750u;

    // 0x16d750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d758: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16d758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16d75c: 0xc05ba26  jal         func_16E898
    ctx->pc = 0x16D75Cu;
    SET_GPR_U32(ctx, 31, 0x16D764u);
    ctx->pc = 0x16D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D75Cu;
    // 0x16d760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E898u, 0x16D75Cu, 0x16D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D764u;
label_16d764:
    // 0x16d764: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D764u;
    {
        const bool branch_taken_0x16d764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d764) {
            ctx->pc = 0x16D784u;
            goto label_16d784;
        }
    }
    ctx->pc = 0x16D76Cu;
    // 0x16d76c: 0xc05b9aa  jal         func_16E6A8
    ctx->pc = 0x16D76Cu;
    SET_GPR_U32(ctx, 31, 0x16D774u);
    ctx->pc = 0x16D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D76Cu;
    // 0x16d770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E6A8u, 0x16D76Cu, 0x16D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D774u;
label_16d774:
    // 0x16d774: 0xc05b8b0  jal         func_16E2C0
    ctx->pc = 0x16D774u;
    SET_GPR_U32(ctx, 31, 0x16D77Cu);
    ctx->pc = 0x16D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D774u;
    // 0x16d778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E2C0u, 0x16D774u, 0x16D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D77Cu;
label_16d77c:
    // 0x16d77c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x16D77Cu;
    {
        const bool branch_taken_0x16d77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D77Cu;
        // 0x16d780: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d77c) {
            ctx->pc = 0x16D82Cu;
            goto label_16d82c;
        }
    }
    ctx->pc = 0x16D784u;
label_16d784:
    // 0x16d784: 0xc05bd66  jal         func_16F598
    ctx->pc = 0x16D784u;
    SET_GPR_U32(ctx, 31, 0x16D78Cu);
    ctx->pc = 0x16D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D784u;
    // 0x16d788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F598u, 0x16D784u, 0x16D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D78Cu;
label_16d78c:
    // 0x16d78c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D78Cu;
    {
        const bool branch_taken_0x16d78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d78c) {
            ctx->pc = 0x16D7ACu;
            goto label_16d7ac;
        }
    }
    ctx->pc = 0x16D794u;
    // 0x16d794: 0xc05b9aa  jal         func_16E6A8
    ctx->pc = 0x16D794u;
    SET_GPR_U32(ctx, 31, 0x16D79Cu);
    ctx->pc = 0x16D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D794u;
    // 0x16d798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E6A8u, 0x16D794u, 0x16D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D79Cu;
label_16d79c:
    // 0x16d79c: 0xc05b94a  jal         func_16E528
    ctx->pc = 0x16D79Cu;
    SET_GPR_U32(ctx, 31, 0x16D7A4u);
    ctx->pc = 0x16D7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D79Cu;
    // 0x16d7a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E528u, 0x16D79Cu, 0x16D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7A4u;
label_16d7a4:
    // 0x16d7a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x16D7A4u;
    {
        const bool branch_taken_0x16d7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7A4u;
        // 0x16d7a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7a4) {
            ctx->pc = 0x16D82Cu;
            goto label_16d82c;
        }
    }
    ctx->pc = 0x16D7ACu;
label_16d7ac:
    // 0x16d7ac: 0xc05a618  jal         func_169860
    ctx->pc = 0x16D7ACu;
    SET_GPR_U32(ctx, 31, 0x16D7B4u);
    ctx->pc = 0x16D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7ACu;
    // 0x16d7b0: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16D7ACu, 0x16D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7B4u;
label_16d7b4:
    // 0x16d7b4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16d7b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d7bc: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16d7c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d7c4: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16D7C4u;
    SET_GPR_U32(ctx, 31, 0x16D7CCu);
    ctx->pc = 0x16D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7C4u;
    // 0x16d7c8: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16D7C4u, 0x16D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7CCu;
label_16d7cc:
    // 0x16d7cc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16D7CCu;
    {
        const bool branch_taken_0x16d7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d7cc) {
            ctx->pc = 0x16D810u;
            goto label_16d810;
        }
    }
    ctx->pc = 0x16D7D4u;
    // 0x16d7d4: 0xc05bdda  jal         func_16F768
    ctx->pc = 0x16D7D4u;
    SET_GPR_U32(ctx, 31, 0x16D7DCu);
    ctx->pc = 0x16D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7D4u;
    // 0x16d7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F768u, 0x16D7D4u, 0x16D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7DCu;
label_16d7dc:
    // 0x16d7dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D7DCu;
    {
        const bool branch_taken_0x16d7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7DCu;
        // 0x16d7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7dc) {
            ctx->pc = 0x16D800u;
            goto label_16d800;
        }
    }
    ctx->pc = 0x16D7E4u;
    // 0x16d7e4: 0xc05b9aa  jal         func_16E6A8
    ctx->pc = 0x16D7E4u;
    SET_GPR_U32(ctx, 31, 0x16D7ECu);
    ctx->pc = 0x16D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7E4u;
    // 0x16d7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E6A8u, 0x16D7E4u, 0x16D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7ECu;
label_16d7ec:
    // 0x16d7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7f0: 0xc05b7f0  jal         func_16DFC0
    ctx->pc = 0x16D7F0u;
    SET_GPR_U32(ctx, 31, 0x16D7F8u);
    ctx->pc = 0x16D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7F0u;
    // 0x16d7f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DFC0u, 0x16D7F0u, 0x16D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7F8u;
label_16d7f8:
    // 0x16d7f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16D7F8u;
    {
        const bool branch_taken_0x16d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7F8u;
        // 0x16d7fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7f8) {
            ctx->pc = 0x16D82Cu;
            goto label_16d82c;
        }
    }
    ctx->pc = 0x16D800u;
label_16d800:
    // 0x16d800: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x16D800u;
    SET_GPR_U32(ctx, 31, 0x16D808u);
    ctx->pc = 0x16D804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D800u;
    // 0x16d804: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F3A0u, 0x16D800u, 0x16D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D808u;
label_16d808:
    // 0x16d808: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16D808u;
    {
        const bool branch_taken_0x16d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D808u;
        // 0x16d80c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d808) {
            ctx->pc = 0x16D82Cu;
            goto label_16d82c;
        }
    }
    ctx->pc = 0x16D810u;
label_16d810:
    // 0x16d810: 0xc05b9aa  jal         func_16E6A8
    ctx->pc = 0x16D810u;
    SET_GPR_U32(ctx, 31, 0x16D818u);
    ctx->pc = 0x16D814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D810u;
    // 0x16d814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E6A8u, 0x16D810u, 0x16D818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D818u;
label_16d818:
    // 0x16d818: 0xc05b72c  jal         func_16DCB0
    ctx->pc = 0x16D818u;
    SET_GPR_U32(ctx, 31, 0x16D820u);
    ctx->pc = 0x16D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D818u;
    // 0x16d81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DCB0u, 0x16D818u, 0x16D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D820u;
label_16d820:
    // 0x16d820: 0xc05be2a  jal         func_16F8A8
    ctx->pc = 0x16D820u;
    SET_GPR_U32(ctx, 31, 0x16D828u);
    ctx->pc = 0x16D824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D820u;
    // 0x16d824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F8A8u, 0x16D820u, 0x16D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D828u;
label_16d828:
    // 0x16d828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d82c:
    // 0x16d82c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16d82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d830: 0x3e00008  jr          $ra
    ctx->pc = 0x16D830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D830u;
        // 0x16d834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D838u;
}
