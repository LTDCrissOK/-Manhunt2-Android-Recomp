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

// Function: sub_00138040
// Address: 0x138040 - 0x138118
void sub_00138040_0x138040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138040_0x138040");
#endif

    switch (ctx->pc) {
        case 0x138088u: goto label_138088;
        case 0x13809cu: goto label_13809c;
        case 0x1380acu: goto label_1380ac;
        case 0x1380bcu: goto label_1380bc;
        case 0x1380d0u: goto label_1380d0;
        case 0x1380e4u: goto label_1380e4;
        case 0x1380f4u: goto label_1380f4;
        default: break;
    }

    ctx->pc = 0x138040u;

    // 0x138040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138044: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x138044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x138048: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x138048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13804c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13804cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138054: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x138054u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x138058: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x138058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13805c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13805cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x138060: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x138060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x138064: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x138064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x138068: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x138068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x13806c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138070: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x138070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138078: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x138078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13807c: 0x8c90020c  lw          $s0, 0x20C($a0)
    ctx->pc = 0x13807cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x138080: 0xc04397c  jal         func_10E5F0
    ctx->pc = 0x138080u;
    SET_GPR_U32(ctx, 31, 0x138088u);
    ctx->pc = 0x138084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138080u;
    // 0x138084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E5F0u, 0x138080u, 0x138088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138088u;
label_138088:
    // 0x138088: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x138088u;
    {
        const bool branch_taken_0x138088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138088u;
        // 0x13808c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138088) {
            ctx->pc = 0x1380B4u;
            goto label_1380b4;
        }
    }
    ctx->pc = 0x138090u;
    // 0x138090: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138094: 0xc04d8fe  jal         func_1363F8
    ctx->pc = 0x138094u;
    SET_GPR_U32(ctx, 31, 0x13809Cu);
    ctx->pc = 0x138098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138094u;
    // 0x138098: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363F8u, 0x138094u, 0x13809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13809Cu;
label_13809c:
    // 0x13809c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13809cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1380a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1380a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1380a4: 0xc04d91a  jal         func_136468
    ctx->pc = 0x1380A4u;
    SET_GPR_U32(ctx, 31, 0x1380ACu);
    ctx->pc = 0x1380A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1380A4u;
    // 0x1380a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136468u, 0x1380A4u, 0x1380ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1380ACu;
label_1380ac:
    // 0x1380ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1380ACu;
    {
        const bool branch_taken_0x1380ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380ACu;
        // 0x1380b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380ac) {
            ctx->pc = 0x1380F8u;
            goto label_1380f8;
        }
    }
    ctx->pc = 0x1380B4u;
label_1380b4:
    // 0x1380b4: 0xc043966  jal         func_10E598
    ctx->pc = 0x1380B4u;
    SET_GPR_U32(ctx, 31, 0x1380BCu);
    ctx->pc = 0x1380B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1380B4u;
    // 0x1380b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E598u, 0x1380B4u, 0x1380BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1380BCu;
label_1380bc:
    // 0x1380bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1380BCu;
    {
        const bool branch_taken_0x1380bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380BCu;
        // 0x1380c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380bc) {
            ctx->pc = 0x1380D8u;
            goto label_1380d8;
        }
    }
    ctx->pc = 0x1380C4u;
    // 0x1380c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1380c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1380c8: 0xc04d8fe  jal         func_1363F8
    ctx->pc = 0x1380C8u;
    SET_GPR_U32(ctx, 31, 0x1380D0u);
    ctx->pc = 0x1380CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1380C8u;
    // 0x1380cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363F8u, 0x1380C8u, 0x1380D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1380D0u;
label_1380d0:
    // 0x1380d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1380D0u;
    {
        const bool branch_taken_0x1380d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380D0u;
        // 0x1380d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380d0) {
            ctx->pc = 0x1380F8u;
            goto label_1380f8;
        }
    }
    ctx->pc = 0x1380D8u;
label_1380d8:
    // 0x1380d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1380d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1380dc: 0xc04d8fe  jal         func_1363F8
    ctx->pc = 0x1380DCu;
    SET_GPR_U32(ctx, 31, 0x1380E4u);
    ctx->pc = 0x1380E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1380DCu;
    // 0x1380e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363F8u, 0x1380DCu, 0x1380E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1380E4u;
label_1380e4:
    // 0x1380e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1380e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1380e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1380e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1380ec: 0xc04d91a  jal         func_136468
    ctx->pc = 0x1380ECu;
    SET_GPR_U32(ctx, 31, 0x1380F4u);
    ctx->pc = 0x1380F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1380ECu;
    // 0x1380f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136468u, 0x1380ECu, 0x1380F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1380F4u;
label_1380f4:
    // 0x1380f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1380f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1380f8:
    // 0x1380f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1380f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1380fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1380fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138100: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x138100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x138104: 0x3e00008  jr          $ra
    ctx->pc = 0x138104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138104u;
        // 0x138108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13810Cu;
    // 0x13810c: 0x0  nop
    ctx->pc = 0x13810cu;
    // NOP
    // 0x138110: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x138110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x138114: 0x0  nop
    ctx->pc = 0x138114u;
    // NOP
    ctx->pc = 0x138118u;
}
