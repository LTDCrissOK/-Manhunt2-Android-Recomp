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

// Function: sub_00224638
// Address: 0x224638 - 0x224718
void sub_00224638_0x224638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224638_0x224638");
#endif

    switch (ctx->pc) {
        case 0x22466cu: goto label_22466c;
        case 0x224688u: goto label_224688;
        case 0x2246a0u: goto label_2246a0;
        case 0x2246bcu: goto label_2246bc;
        case 0x2246d4u: goto label_2246d4;
        case 0x2246ecu: goto label_2246ec;
        case 0x2246fcu: goto label_2246fc;
        default: break;
    }

    ctx->pc = 0x224638u;

    // 0x224638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22463c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x22463cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x224640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224644: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x224644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22464c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224654: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224658: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22465c: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x22465cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x224660: 0x24a53c18  addiu       $a1, $a1, 0x3C18
    ctx->pc = 0x224660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15384));
    // 0x224664: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224664u;
    SET_GPR_U32(ctx, 31, 0x22466Cu);
    ctx->pc = 0x224668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224664u;
    // 0x224668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224664u, 0x22466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22466Cu;
label_22466c:
    // 0x22466c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22466cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224670: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224670u;
    {
        const bool branch_taken_0x224670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224670u;
        // 0x224674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224670) {
            ctx->pc = 0x224690u;
            goto label_224690;
        }
    }
    ctx->pc = 0x224678u;
    // 0x224678: 0x260700b8  addiu       $a3, $s0, 0xB8
    ctx->pc = 0x224678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x22467c: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x22467cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x224680: 0xc09df62  jal         func_277D88
    ctx->pc = 0x224680u;
    SET_GPR_U32(ctx, 31, 0x224688u);
    ctx->pc = 0x224684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224680u;
    // 0x224684: 0x260600b4  addiu       $a2, $s0, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x224680u, 0x224688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224688u;
label_224688:
    // 0x224688: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x224688u;
    {
        const bool branch_taken_0x224688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224688u;
        // 0x22468c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224688) {
            ctx->pc = 0x224700u;
            goto label_224700;
        }
    }
    ctx->pc = 0x224690u;
label_224690:
    // 0x224690: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224698: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224698u;
    SET_GPR_U32(ctx, 31, 0x2246A0u);
    ctx->pc = 0x22469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224698u;
    // 0x22469c: 0x24a53c28  addiu       $a1, $a1, 0x3C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224698u, 0x2246A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246A0u;
label_2246a0:
    // 0x2246a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2246a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2246a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2246A4u;
    {
        const bool branch_taken_0x2246a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2246A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246A4u;
        // 0x2246a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246a4) {
            ctx->pc = 0x2246C4u;
            goto label_2246c4;
        }
    }
    ctx->pc = 0x2246ACu;
    // 0x2246ac: 0x260700c8  addiu       $a3, $s0, 0xC8
    ctx->pc = 0x2246acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x2246b0: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x2246b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2246b4: 0xc09df62  jal         func_277D88
    ctx->pc = 0x2246B4u;
    SET_GPR_U32(ctx, 31, 0x2246BCu);
    ctx->pc = 0x2246B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2246B4u;
    // 0x2246b8: 0x260600c4  addiu       $a2, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x2246B4u, 0x2246BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246BCu;
label_2246bc:
    // 0x2246bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2246BCu;
    {
        const bool branch_taken_0x2246bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2246C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246BCu;
        // 0x2246c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246bc) {
            ctx->pc = 0x224700u;
            goto label_224700;
        }
    }
    ctx->pc = 0x2246C4u;
label_2246c4:
    // 0x2246c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2246c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2246c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2246c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2246CCu;
    SET_GPR_U32(ctx, 31, 0x2246D4u);
    ctx->pc = 0x2246D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2246CCu;
    // 0x2246d0: 0x24a53c40  addiu       $a1, $a1, 0x3C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2246CCu, 0x2246D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246D4u;
label_2246d4:
    // 0x2246d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2246d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2246d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2246D8u;
    {
        const bool branch_taken_0x2246d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2246DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246D8u;
        // 0x2246dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246d8) {
            ctx->pc = 0x2246F4u;
            goto label_2246f4;
        }
    }
    ctx->pc = 0x2246E0u;
    // 0x2246e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2246e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246e4: 0xc088fac  jal         func_223EB0
    ctx->pc = 0x2246E4u;
    SET_GPR_U32(ctx, 31, 0x2246ECu);
    ctx->pc = 0x2246E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2246E4u;
    // 0x2246e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EB0u, 0x2246E4u, 0x2246ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246ECu;
label_2246ec:
    // 0x2246ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2246ECu;
    {
        const bool branch_taken_0x2246ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2246F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246ECu;
        // 0x2246f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246ec) {
            ctx->pc = 0x224704u;
            goto label_224704;
        }
    }
    ctx->pc = 0x2246F4u;
label_2246f4:
    // 0x2246f4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2246F4u;
    SET_GPR_U32(ctx, 31, 0x2246FCu);
    ctx->pc = 0x2246F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2246F4u;
    // 0x2246f8: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2246F4u, 0x2246FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246FCu;
label_2246fc:
    // 0x2246fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2246fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224700:
    // 0x224700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224704:
    // 0x224704: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224708: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224708u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22470c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22470cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224710: 0x3e00008  jr          $ra
    ctx->pc = 0x224710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224710u;
        // 0x224714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224718u;
}
