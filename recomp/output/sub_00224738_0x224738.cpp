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

// Function: sub_00224738
// Address: 0x224738 - 0x224808
void sub_00224738_0x224738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224738_0x224738");
#endif

    switch (ctx->pc) {
        case 0x22476cu: goto label_22476c;
        case 0x224780u: goto label_224780;
        case 0x224798u: goto label_224798;
        case 0x2247acu: goto label_2247ac;
        case 0x2247c4u: goto label_2247c4;
        case 0x2247dcu: goto label_2247dc;
        case 0x2247ecu: goto label_2247ec;
        default: break;
    }

    ctx->pc = 0x224738u;

    // 0x224738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22473c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x22473cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x224740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224744: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x224744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224748: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22474c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224754: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224758: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22475c: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x22475cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x224760: 0x24a53c50  addiu       $a1, $a1, 0x3C50
    ctx->pc = 0x224760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15440));
    // 0x224764: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224764u;
    SET_GPR_U32(ctx, 31, 0x22476Cu);
    ctx->pc = 0x224768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224764u;
    // 0x224768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224764u, 0x22476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22476Cu;
label_22476c:
    // 0x22476c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224770u;
    {
        const bool branch_taken_0x224770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224770u;
        // 0x224774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224770) {
            ctx->pc = 0x224788u;
            goto label_224788;
        }
    }
    ctx->pc = 0x224778u;
    // 0x224778: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224778u;
    SET_GPR_U32(ctx, 31, 0x224780u);
    ctx->pc = 0x22477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224778u;
    // 0x22477c: 0x262500ac  addiu       $a1, $s1, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224778u, 0x224780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224780u;
label_224780:
    // 0x224780: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x224780u;
    {
        const bool branch_taken_0x224780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224780u;
        // 0x224784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224780) {
            ctx->pc = 0x2247F0u;
            goto label_2247f0;
        }
    }
    ctx->pc = 0x224788u;
label_224788:
    // 0x224788: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22478c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22478cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224790: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224790u;
    SET_GPR_U32(ctx, 31, 0x224798u);
    ctx->pc = 0x224794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224790u;
    // 0x224794: 0x24a53c60  addiu       $a1, $a1, 0x3C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224790u, 0x224798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224798u;
label_224798:
    // 0x224798: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22479c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22479Cu;
    {
        const bool branch_taken_0x22479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2247A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22479Cu;
        // 0x2247a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22479c) {
            ctx->pc = 0x2247B4u;
            goto label_2247b4;
        }
    }
    ctx->pc = 0x2247A4u;
    // 0x2247a4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2247A4u;
    SET_GPR_U32(ctx, 31, 0x2247ACu);
    ctx->pc = 0x2247A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247A4u;
    // 0x2247a8: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2247A4u, 0x2247ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247ACu;
label_2247ac:
    // 0x2247ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2247ACu;
    {
        const bool branch_taken_0x2247ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2247B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247ACu;
        // 0x2247b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247ac) {
            ctx->pc = 0x2247F0u;
            goto label_2247f0;
        }
    }
    ctx->pc = 0x2247B4u;
label_2247b4:
    // 0x2247b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2247b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2247b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2247b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2247bc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2247BCu;
    SET_GPR_U32(ctx, 31, 0x2247C4u);
    ctx->pc = 0x2247C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247BCu;
    // 0x2247c0: 0x24a53c70  addiu       $a1, $a1, 0x3C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2247BCu, 0x2247C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247C4u;
label_2247c4:
    // 0x2247c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2247c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2247c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2247C8u;
    {
        const bool branch_taken_0x2247c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2247CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247C8u;
        // 0x2247cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247c8) {
            ctx->pc = 0x2247E4u;
            goto label_2247e4;
        }
    }
    ctx->pc = 0x2247D0u;
    // 0x2247d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2247d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2247d4: 0xc088fac  jal         func_223EB0
    ctx->pc = 0x2247D4u;
    SET_GPR_U32(ctx, 31, 0x2247DCu);
    ctx->pc = 0x2247D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247D4u;
    // 0x2247d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EB0u, 0x2247D4u, 0x2247DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247DCu;
label_2247dc:
    // 0x2247dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2247DCu;
    {
        const bool branch_taken_0x2247dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2247E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247DCu;
        // 0x2247e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247dc) {
            ctx->pc = 0x2247F4u;
            goto label_2247f4;
        }
    }
    ctx->pc = 0x2247E4u;
label_2247e4:
    // 0x2247e4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2247E4u;
    SET_GPR_U32(ctx, 31, 0x2247ECu);
    ctx->pc = 0x2247E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247E4u;
    // 0x2247e8: 0x262500b4  addiu       $a1, $s1, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2247E4u, 0x2247ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247ECu;
label_2247ec:
    // 0x2247ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2247ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2247f0:
    // 0x2247f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2247f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2247f4:
    // 0x2247f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2247f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2247f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2247f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2247fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2247fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224800: 0x3e00008  jr          $ra
    ctx->pc = 0x224800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224800u;
        // 0x224804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224808u;
}
