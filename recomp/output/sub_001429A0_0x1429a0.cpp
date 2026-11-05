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

// Function: sub_001429A0
// Address: 0x1429a0 - 0x142a70
void sub_001429A0_0x1429a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001429A0_0x1429a0");
#endif

    switch (ctx->pc) {
        case 0x1429bcu: goto label_1429bc;
        case 0x1429ccu: goto label_1429cc;
        case 0x1429f0u: goto label_1429f0;
        case 0x1429fcu: goto label_1429fc;
        case 0x142a18u: goto label_142a18;
        case 0x142a2cu: goto label_142a2c;
        case 0x142a48u: goto label_142a48;
        case 0x142a54u: goto label_142a54;
        default: break;
    }

    ctx->pc = 0x1429a0u;

    // 0x1429a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1429a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1429a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1429a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1429a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1429a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1429ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1429acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1429b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1429b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1429b4: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x1429B4u;
    SET_GPR_U32(ctx, 31, 0x1429BCu);
    ctx->pc = 0x1429B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429B4u;
    // 0x1429b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x1429B4u, 0x1429BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429BCu;
label_1429bc:
    // 0x1429bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1429bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1429c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429c4: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1429C4u;
    SET_GPR_U32(ctx, 31, 0x1429CCu);
    ctx->pc = 0x1429C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429C4u;
    // 0x1429c8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1429C4u, 0x1429CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429CCu;
label_1429cc:
    // 0x1429cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1429ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429d0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1429d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429d4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1429d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1429d8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1429d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1429dc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1429dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1429e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1429e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1429e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429e8: 0xc04daca  jal         func_136B28
    ctx->pc = 0x1429E8u;
    SET_GPR_U32(ctx, 31, 0x1429F0u);
    ctx->pc = 0x1429ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429E8u;
    // 0x1429ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x1429E8u, 0x1429F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429F0u;
label_1429f0:
    // 0x1429f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1429f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429f4: 0xc046030  jal         func_1180C0
    ctx->pc = 0x1429F4u;
    SET_GPR_U32(ctx, 31, 0x1429FCu);
    ctx->pc = 0x1429F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429F4u;
    // 0x1429f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x1429F4u, 0x1429FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429FCu;
label_1429fc:
    // 0x1429fc: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1429fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x142a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a04: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x142a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x142a08: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x142a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x142a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142a10: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x142A10u;
    SET_GPR_U32(ctx, 31, 0x142A18u);
    ctx->pc = 0x142A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A10u;
    // 0x142a14: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x142A10u, 0x142A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A18u;
label_142a18:
    // 0x142a18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x142a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a1c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x142a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a24: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x142A24u;
    SET_GPR_U32(ctx, 31, 0x142A2Cu);
    ctx->pc = 0x142A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A24u;
    // 0x142a28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x142A24u, 0x142A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A2Cu;
label_142a2c:
    // 0x142a2c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x142a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x142a30: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x142a30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x142a34: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x142a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x142a38: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x142a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x142a3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x142a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x142a40: 0xc043c56  jal         func_10F158
    ctx->pc = 0x142A40u;
    SET_GPR_U32(ctx, 31, 0x142A48u);
    ctx->pc = 0x142A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A40u;
    // 0x142a44: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x142A40u, 0x142A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A48u;
label_142a48:
    // 0x142a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a4c: 0xc050874  jal         func_1421D0
    ctx->pc = 0x142A4Cu;
    SET_GPR_U32(ctx, 31, 0x142A54u);
    ctx->pc = 0x142A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A4Cu;
    // 0x142a50: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421D0u, 0x142A4Cu, 0x142A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A54u;
label_142a54:
    // 0x142a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142a58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142a5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142a5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142a60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x142a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x142a64: 0x3e00008  jr          $ra
    ctx->pc = 0x142A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A64u;
        // 0x142a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142A6Cu;
    // 0x142a6c: 0x0  nop
    ctx->pc = 0x142a6cu;
    // NOP
    ctx->pc = 0x142a70u;
}
