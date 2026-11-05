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

// Function: sub_0016C850
// Address: 0x16c850 - 0x16c918
void sub_0016C850_0x16c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C850_0x16c850");
#endif

    switch (ctx->pc) {
        case 0x16c874u: goto label_16c874;
        case 0x16c880u: goto label_16c880;
        case 0x16c898u: goto label_16c898;
        case 0x16c8a4u: goto label_16c8a4;
        case 0x16c8b4u: goto label_16c8b4;
        case 0x16c8e0u: goto label_16c8e0;
        case 0x16c8ecu: goto label_16c8ec;
        case 0x16c904u: goto label_16c904;
        default: break;
    }

    ctx->pc = 0x16c850u;

    // 0x16c850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c854: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16c858: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16c85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c860: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x16c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x16c864: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16C864u;
    {
        const bool branch_taken_0x16c864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C864u;
        // 0x16c868: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c864) {
            ctx->pc = 0x16C89Cu;
            goto label_16c89c;
        }
    }
    ctx->pc = 0x16C86Cu;
    // 0x16c86c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16C86Cu;
    SET_GPR_U32(ctx, 31, 0x16C874u);
    ctx->pc = 0x16C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C86Cu;
    // 0x16c870: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16C86Cu, 0x16C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C874u;
label_16c874:
    // 0x16c874: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x16c874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x16c878: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x16C878u;
    SET_GPR_U32(ctx, 31, 0x16C880u);
    ctx->pc = 0x16C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C878u;
    // 0x16c87c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x16C878u, 0x16C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C880u;
label_16c880:
    // 0x16c880: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C880u;
    {
        const bool branch_taken_0x16c880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C880u;
        // 0x16c884: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c880) {
            ctx->pc = 0x16C890u;
            goto label_16c890;
        }
    }
    ctx->pc = 0x16C888u;
    // 0x16c888: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x16c888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x16c88c: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x16c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_16c890:
    // 0x16c890: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16C890u;
    SET_GPR_U32(ctx, 31, 0x16C898u);
    ctx->pc = 0x16C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C890u;
    // 0x16c894: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16C890u, 0x16C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C898u;
label_16c898:
    // 0x16c898: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16c898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_16c89c:
    // 0x16c89c: 0xc04952c  jal         func_1254B0
    ctx->pc = 0x16C89Cu;
    SET_GPR_U32(ctx, 31, 0x16C8A4u);
    ctx->pc = 0x16C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C89Cu;
    // 0x16c8a0: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254B0u, 0x16C89Cu, 0x16C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8A4u;
label_16c8a4:
    // 0x16c8a4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x16C8A4u;
    {
        const bool branch_taken_0x16c8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c8a4) {
            ctx->pc = 0x16C8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C8A4u;
            // 0x16c8a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C908u;
            goto label_16c908;
        }
    }
    ctx->pc = 0x16C8ACu;
    // 0x16c8ac: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16C8ACu;
    SET_GPR_U32(ctx, 31, 0x16C8B4u);
    ctx->pc = 0x16C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8ACu;
    // 0x16c8b0: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16C8ACu, 0x16C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8B4u;
label_16c8b4:
    // 0x16c8b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16C8B4u;
    {
        const bool branch_taken_0x16c8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8B4u;
        // 0x16c8b8: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8b4) {
            ctx->pc = 0x16C904u;
            goto label_16c904;
        }
    }
    ctx->pc = 0x16C8BCu;
    // 0x16c8bc: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x16c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x16c8c0: 0x8c439b18  lw          $v1, -0x64E8($v0)
    ctx->pc = 0x16c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941464)));
    // 0x16c8c4: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x16c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x16c8c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c8cc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16c8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x16c8d0: 0x5445000d  bnel        $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x16C8D0u;
    {
        const bool branch_taken_0x16c8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x16c8d0) {
            ctx->pc = 0x16C8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C8D0u;
            // 0x16c8d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C908u;
            goto label_16c908;
        }
    }
    ctx->pc = 0x16C8D8u;
    // 0x16c8d8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16C8D8u;
    SET_GPR_U32(ctx, 31, 0x16C8E0u);
    ctx->pc = 0x16C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8D8u;
    // 0x16c8dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16C8D8u, 0x16C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8E0u;
label_16c8e0:
    // 0x16c8e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16c8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8e4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x16C8E4u;
    SET_GPR_U32(ctx, 31, 0x16C8ECu);
    ctx->pc = 0x16C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8E4u;
    // 0x16c8e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x16C8E4u, 0x16C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8ECu;
label_16c8ec:
    // 0x16c8ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c8f0: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x16c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x16c8f4: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x16c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
    // 0x16c8f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16c8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8fc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16C8FCu;
    SET_GPR_U32(ctx, 31, 0x16C904u);
    ctx->pc = 0x16C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8FCu;
    // 0x16c900: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16C8FCu, 0x16C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C904u;
label_16c904:
    // 0x16c904: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16c904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c908:
    // 0x16c908: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c90c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C90Cu;
        // 0x16c910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C914u;
    // 0x16c914: 0x0  nop
    ctx->pc = 0x16c914u;
    // NOP
    ctx->pc = 0x16c918u;
}
