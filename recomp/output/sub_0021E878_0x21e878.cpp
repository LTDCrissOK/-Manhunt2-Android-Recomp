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

// Function: sub_0021E878
// Address: 0x21e878 - 0x21ea00
void sub_0021E878_0x21e878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E878_0x21e878");
#endif

    switch (ctx->pc) {
        case 0x21e8acu: goto label_21e8ac;
        case 0x21e8c0u: goto label_21e8c0;
        case 0x21e8d8u: goto label_21e8d8;
        case 0x21e8ecu: goto label_21e8ec;
        case 0x21e8f8u: goto label_21e8f8;
        case 0x21e900u: goto label_21e900;
        case 0x21e914u: goto label_21e914;
        case 0x21e928u: goto label_21e928;
        case 0x21e934u: goto label_21e934;
        case 0x21e93cu: goto label_21e93c;
        case 0x21e950u: goto label_21e950;
        case 0x21e964u: goto label_21e964;
        case 0x21e970u: goto label_21e970;
        case 0x21e978u: goto label_21e978;
        case 0x21e988u: goto label_21e988;
        case 0x21e99cu: goto label_21e99c;
        case 0x21e9b0u: goto label_21e9b0;
        case 0x21e9c0u: goto label_21e9c0;
        case 0x21e9ccu: goto label_21e9cc;
        case 0x21e9d8u: goto label_21e9d8;
        case 0x21e9e4u: goto label_21e9e4;
        default: break;
    }

    ctx->pc = 0x21e878u;

    // 0x21e878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21e87c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x21e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x21e880: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21e880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21e884: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21e884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e888: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21e88c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21e88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21e890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21e890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e894: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e898: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21e898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21e89c: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x21e89cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x21e8a0: 0x24a51e58  addiu       $a1, $a1, 0x1E58
    ctx->pc = 0x21e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7768));
    // 0x21e8a4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E8A4u;
    SET_GPR_U32(ctx, 31, 0x21E8ACu);
    ctx->pc = 0x21E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E8A4u;
    // 0x21e8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E8A4u, 0x21E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8ACu;
label_21e8ac:
    // 0x21e8ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e8b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E8B0u;
    {
        const bool branch_taken_0x21e8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8B0u;
        // 0x21e8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e8b0) {
            ctx->pc = 0x21E8C8u;
            goto label_21e8c8;
        }
    }
    ctx->pc = 0x21E8B8u;
    // 0x21e8b8: 0xc09e056  jal         func_278158
    ctx->pc = 0x21E8B8u;
    SET_GPR_U32(ctx, 31, 0x21E8C0u);
    ctx->pc = 0x21E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E8B8u;
    // 0x21e8bc: 0x262501a0  addiu       $a1, $s1, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x21E8B8u, 0x21E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8C0u;
label_21e8c0:
    // 0x21e8c0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x21E8C0u;
    {
        const bool branch_taken_0x21e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8C0u;
        // 0x21e8c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e8c0) {
            ctx->pc = 0x21E9E8u;
            goto label_21e9e8;
        }
    }
    ctx->pc = 0x21E8C8u;
label_21e8c8:
    // 0x21e8c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E8D0u;
    SET_GPR_U32(ctx, 31, 0x21E8D8u);
    ctx->pc = 0x21E8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E8D0u;
    // 0x21e8d4: 0x24a51e68  addiu       $a1, $a1, 0x1E68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E8D0u, 0x21E8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8D8u;
label_21e8d8:
    // 0x21e8d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e8dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21E8DCu;
    {
        const bool branch_taken_0x21e8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8DCu;
        // 0x21e8e0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e8dc) {
            ctx->pc = 0x21E908u;
            goto label_21e908;
        }
    }
    ctx->pc = 0x21E8E4u;
    // 0x21e8e4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21E8E4u;
    SET_GPR_U32(ctx, 31, 0x21E8ECu);
    ctx->pc = 0x21E8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E8E4u;
    // 0x21e8e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21E8E4u, 0x21E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8ECu;
label_21e8ec:
    // 0x21e8ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21e8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8f0: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21E8F0u;
    SET_GPR_U32(ctx, 31, 0x21E8F8u);
    ctx->pc = 0x21E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E8F0u;
    // 0x21e8f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21E8F0u, 0x21E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8F8u;
label_21e8f8:
    // 0x21e8f8: 0xc061950  jal         func_186540
    ctx->pc = 0x21E8F8u;
    SET_GPR_U32(ctx, 31, 0x21E900u);
    ctx->pc = 0x21E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E8F8u;
    // 0x21e8fc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186540u, 0x21E8F8u, 0x21E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E900u;
label_21e900:
    // 0x21e900: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x21E900u;
    {
        const bool branch_taken_0x21e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E900u;
        // 0x21e904: 0xae2201ac  sw          $v0, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e900) {
            ctx->pc = 0x21E97Cu;
            goto label_21e97c;
        }
    }
    ctx->pc = 0x21E908u;
label_21e908:
    // 0x21e908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e90c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E90Cu;
    SET_GPR_U32(ctx, 31, 0x21E914u);
    ctx->pc = 0x21E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E90Cu;
    // 0x21e910: 0x24a51e78  addiu       $a1, $a1, 0x1E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E90Cu, 0x21E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E914u;
label_21e914:
    // 0x21e914: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e918: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21E918u;
    {
        const bool branch_taken_0x21e918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E918u;
        // 0x21e91c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e918) {
            ctx->pc = 0x21E944u;
            goto label_21e944;
        }
    }
    ctx->pc = 0x21E920u;
    // 0x21e920: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21E920u;
    SET_GPR_U32(ctx, 31, 0x21E928u);
    ctx->pc = 0x21E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E920u;
    // 0x21e924: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21E920u, 0x21E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E928u;
label_21e928:
    // 0x21e928: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21e928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e92c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21E92Cu;
    SET_GPR_U32(ctx, 31, 0x21E934u);
    ctx->pc = 0x21E930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E92Cu;
    // 0x21e930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21E92Cu, 0x21E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E934u;
label_21e934:
    // 0x21e934: 0xc06196c  jal         func_1865B0
    ctx->pc = 0x21E934u;
    SET_GPR_U32(ctx, 31, 0x21E93Cu);
    ctx->pc = 0x21E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E934u;
    // 0x21e938: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1865B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1865B0u, 0x21E934u, 0x21E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E93Cu;
label_21e93c:
    // 0x21e93c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21E93Cu;
    {
        const bool branch_taken_0x21e93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E93Cu;
        // 0x21e940: 0xae2201b4  sw          $v0, 0x1B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e93c) {
            ctx->pc = 0x21E97Cu;
            goto label_21e97c;
        }
    }
    ctx->pc = 0x21E944u;
label_21e944:
    // 0x21e944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e948: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E948u;
    SET_GPR_U32(ctx, 31, 0x21E950u);
    ctx->pc = 0x21E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E948u;
    // 0x21e94c: 0x24a51e88  addiu       $a1, $a1, 0x1E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E948u, 0x21E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E950u;
label_21e950:
    // 0x21e950: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e954: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x21E954u;
    {
        const bool branch_taken_0x21e954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e954) {
            ctx->pc = 0x21E958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E954u;
            // 0x21e958: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E990u;
            goto label_21e990;
        }
    }
    ctx->pc = 0x21E95Cu;
    // 0x21e95c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21E95Cu;
    SET_GPR_U32(ctx, 31, 0x21E964u);
    ctx->pc = 0x21E960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E95Cu;
    // 0x21e960: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21E95Cu, 0x21E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E964u;
label_21e964:
    // 0x21e964: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21e964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e968: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21E968u;
    SET_GPR_U32(ctx, 31, 0x21E970u);
    ctx->pc = 0x21E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E968u;
    // 0x21e96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21E968u, 0x21E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E970u;
label_21e970:
    // 0x21e970: 0xc061988  jal         func_186620
    ctx->pc = 0x21E970u;
    SET_GPR_U32(ctx, 31, 0x21E978u);
    ctx->pc = 0x21E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E970u;
    // 0x21e974: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186620u, 0x21E970u, 0x21E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E978u;
label_21e978:
    // 0x21e978: 0xae2201b0  sw          $v0, 0x1B0($s1)
    ctx->pc = 0x21e978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 2));
label_21e97c:
    // 0x21e97c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e980: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21E980u;
    SET_GPR_U32(ctx, 31, 0x21E988u);
    ctx->pc = 0x21E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E980u;
    // 0x21e984: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21E980u, 0x21E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E988u;
label_21e988:
    // 0x21e988: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21E988u;
    {
        const bool branch_taken_0x21e988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E988u;
        // 0x21e98c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e988) {
            ctx->pc = 0x21E9E8u;
            goto label_21e9e8;
        }
    }
    ctx->pc = 0x21E990u;
label_21e990:
    // 0x21e990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e994: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E994u;
    SET_GPR_U32(ctx, 31, 0x21E99Cu);
    ctx->pc = 0x21E998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E994u;
    // 0x21e998: 0x24a51e98  addiu       $a1, $a1, 0x1E98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E994u, 0x21E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E99Cu;
label_21e99c:
    // 0x21e99c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e9a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E9A0u;
    {
        const bool branch_taken_0x21e9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9A0u;
        // 0x21e9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9a0) {
            ctx->pc = 0x21E9B8u;
            goto label_21e9b8;
        }
    }
    ctx->pc = 0x21E9A8u;
    // 0x21e9a8: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x21E9A8u;
    SET_GPR_U32(ctx, 31, 0x21E9B0u);
    ctx->pc = 0x21E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E9A8u;
    // 0x21e9ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x21E9A8u, 0x21E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E9B0u;
label_21e9b0:
    // 0x21e9b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21E9B0u;
    {
        const bool branch_taken_0x21e9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9B0u;
        // 0x21e9b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9b0) {
            ctx->pc = 0x21E9ECu;
            goto label_21e9ec;
        }
    }
    ctx->pc = 0x21E9B8u;
label_21e9b8:
    // 0x21e9b8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21E9B8u;
    SET_GPR_U32(ctx, 31, 0x21E9C0u);
    ctx->pc = 0x21E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E9B8u;
    // 0x21e9bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21E9B8u, 0x21E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E9C0u;
label_21e9c0:
    // 0x21e9c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21e9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9c4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21E9C4u;
    SET_GPR_U32(ctx, 31, 0x21E9CCu);
    ctx->pc = 0x21E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E9C4u;
    // 0x21e9c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21E9C4u, 0x21E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E9CCu;
label_21e9cc:
    // 0x21e9cc: 0x262401a4  addiu       $a0, $s1, 0x1A4
    ctx->pc = 0x21e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
    // 0x21e9d0: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x21E9D0u;
    SET_GPR_U32(ctx, 31, 0x21E9D8u);
    ctx->pc = 0x21E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E9D0u;
    // 0x21e9d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x21E9D0u, 0x21E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E9D8u;
label_21e9d8:
    // 0x21e9d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9dc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21E9DCu;
    SET_GPR_U32(ctx, 31, 0x21E9E4u);
    ctx->pc = 0x21E9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E9DCu;
    // 0x21e9e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21E9DCu, 0x21E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E9E4u;
label_21e9e4:
    // 0x21e9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e9e8:
    // 0x21e9e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21e9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21e9ec:
    // 0x21e9ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21e9ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e9f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21e9f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e9f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21e9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21e9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21E9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9F8u;
        // 0x21e9fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EA00u;
}
