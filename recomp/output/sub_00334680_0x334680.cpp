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

// Function: sub_00334680
// Address: 0x334680 - 0x3346f8
void sub_00334680_0x334680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334680_0x334680");
#endif

    switch (ctx->pc) {
        case 0x334680u: goto label_334680;
        case 0x334684u: goto label_334684;
        case 0x334688u: goto label_334688;
        case 0x33468cu: goto label_33468c;
        case 0x334690u: goto label_334690;
        case 0x334694u: goto label_334694;
        case 0x334698u: goto label_334698;
        case 0x33469cu: goto label_33469c;
        case 0x3346a0u: goto label_3346a0;
        case 0x3346a4u: goto label_3346a4;
        case 0x3346a8u: goto label_3346a8;
        case 0x3346acu: goto label_3346ac;
        case 0x3346b0u: goto label_3346b0;
        case 0x3346b4u: goto label_3346b4;
        case 0x3346b8u: goto label_3346b8;
        case 0x3346bcu: goto label_3346bc;
        case 0x3346c0u: goto label_3346c0;
        case 0x3346c4u: goto label_3346c4;
        case 0x3346c8u: goto label_3346c8;
        case 0x3346ccu: goto label_3346cc;
        case 0x3346d0u: goto label_3346d0;
        case 0x3346d4u: goto label_3346d4;
        case 0x3346d8u: goto label_3346d8;
        case 0x3346dcu: goto label_3346dc;
        case 0x3346e0u: goto label_3346e0;
        case 0x3346e4u: goto label_3346e4;
        case 0x3346e8u: goto label_3346e8;
        case 0x3346ecu: goto label_3346ec;
        case 0x3346f0u: goto label_3346f0;
        case 0x3346f4u: goto label_3346f4;
        default: break;
    }

    ctx->pc = 0x334680u;

label_334680:
    // 0x334680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_334684:
    // 0x334684: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x334684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_334688:
    // 0x334688: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x334688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33468c:
    // 0x33468c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33468cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_334690:
    // 0x334690: 0xc09dcc6  jal         func_277318
label_334694:
    if (ctx->pc == 0x334694u) {
        ctx->pc = 0x334694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334690u;
        // 0x334694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334698u;
        goto label_334698;
    }
    ctx->pc = 0x334690u;
    SET_GPR_U32(ctx, 31, 0x334698u);
    ctx->pc = 0x334694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334690u;
    // 0x334694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x334690u, 0x334698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334698u;
label_334698:
    // 0x334698: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_33469c:
    if (ctx->pc == 0x33469Cu) {
        ctx->pc = 0x33469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334698u;
        // 0x33469c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3346A0u;
        goto label_3346a0;
    }
    ctx->pc = 0x334698u;
    {
        const bool branch_taken_0x334698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334698u;
        // 0x33469c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334698) {
            ctx->pc = 0x3346E0u;
            goto label_3346e0;
        }
    }
    ctx->pc = 0x3346A0u;
label_3346a0:
    // 0x3346a0: 0xc0cd16e  jal         func_3345B8
label_3346a4:
    if (ctx->pc == 0x3346A4u) {
        ctx->pc = 0x3346A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346A0u;
        // 0x3346a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3346A8u;
        goto label_3346a8;
    }
    ctx->pc = 0x3346A0u;
    SET_GPR_U32(ctx, 31, 0x3346A8u);
    ctx->pc = 0x3346A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3346A0u;
    // 0x3346a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3345B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3345B8u, 0x3346A0u, 0x3346A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3346A8u;
label_3346a8:
    // 0x3346a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3346a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_3346ac:
    // 0x3346ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3346acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3346b0:
    // 0x3346b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3346b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3346b4:
    // 0x3346b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3346b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_3346b8:
    // 0x3346b8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3346b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3346bc:
    // 0x3346bc: 0xc0cd1be  jal         func_3346F8
label_3346c0:
    if (ctx->pc == 0x3346C0u) {
        ctx->pc = 0x3346C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346BCu;
        // 0x3346c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3346C4u;
        goto label_3346c4;
    }
    ctx->pc = 0x3346BCu;
    SET_GPR_U32(ctx, 31, 0x3346C4u);
    ctx->pc = 0x3346C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3346BCu;
    // 0x3346c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3346F8u, 0x3346BCu, 0x3346C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3346C4u;
label_3346c4:
    // 0x3346c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3346c8:
    if (ctx->pc == 0x3346C8u) {
        ctx->pc = 0x3346C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346C4u;
        // 0x3346c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3346CCu;
        goto label_3346cc;
    }
    ctx->pc = 0x3346C4u;
    {
        const bool branch_taken_0x3346c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3346C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346C4u;
        // 0x3346c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346c4) {
            ctx->pc = 0x3346E4u;
            goto label_3346e4;
        }
    }
    ctx->pc = 0x3346CCu;
label_3346cc:
    // 0x3346cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3346ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3346d0:
    // 0x3346d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3346d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3346d4:
    // 0x3346d4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3346d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3346d8:
    // 0x3346d8: 0x40f809  jalr        $v0
label_3346dc:
    if (ctx->pc == 0x3346DCu) {
        ctx->pc = 0x3346E0u;
        goto label_3346e0;
    }
    ctx->pc = 0x3346D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3346E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3346D8u, 0x3346E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3346E0u;
label_3346e0:
    // 0x3346e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3346e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3346e4:
    // 0x3346e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3346e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3346e8:
    // 0x3346e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3346e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3346ec:
    // 0x3346ec: 0x3e00008  jr          $ra
label_3346f0:
    if (ctx->pc == 0x3346F0u) {
        ctx->pc = 0x3346F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346ECu;
        // 0x3346f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3346F4u;
        goto label_3346f4;
    }
    ctx->pc = 0x3346ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3346F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346ECu;
        // 0x3346f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3346ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3346F4u;
label_3346f4:
    // 0x3346f4: 0x0  nop
    ctx->pc = 0x3346f4u;
    // NOP
    ctx->pc = 0x3346f8u;
}
