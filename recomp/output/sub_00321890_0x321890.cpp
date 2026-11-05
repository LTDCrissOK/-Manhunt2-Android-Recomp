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

// Function: sub_00321890
// Address: 0x321890 - 0x321928
void sub_00321890_0x321890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321890_0x321890");
#endif

    switch (ctx->pc) {
        case 0x3218b0u: goto label_3218b0;
        case 0x3218bcu: goto label_3218bc;
        case 0x3218ccu: goto label_3218cc;
        case 0x3218e8u: goto label_3218e8;
        case 0x3218f4u: goto label_3218f4;
        case 0x321900u: goto label_321900;
        default: break;
    }

    ctx->pc = 0x321890u;

    // 0x321890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321894: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x321894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x321898: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x321898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32189c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32189cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3218a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3218a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3218a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3218a8: 0xc0c32c4  jal         func_30CB10
    ctx->pc = 0x3218A8u;
    SET_GPR_U32(ctx, 31, 0x3218B0u);
    ctx->pc = 0x3218ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3218A8u;
    // 0x3218ac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CB10u, 0x3218A8u, 0x3218B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3218B0u;
label_3218b0:
    // 0x3218b0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3218b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3218b4: 0xc0c4882  jal         func_312208
    ctx->pc = 0x3218B4u;
    SET_GPR_U32(ctx, 31, 0x3218BCu);
    ctx->pc = 0x3218B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3218B4u;
    // 0x3218b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312208u, 0x3218B4u, 0x3218BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3218BCu;
label_3218bc:
    // 0x3218bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3218bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3218c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3218c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218c4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3218C4u;
    SET_GPR_U32(ctx, 31, 0x3218CCu);
    ctx->pc = 0x3218C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3218C4u;
    // 0x3218c8: 0x24a545f0  addiu       $a1, $a1, 0x45F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3218C4u, 0x3218CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3218CCu;
label_3218cc:
    // 0x3218cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3218CCu;
    {
        const bool branch_taken_0x3218cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3218D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218CCu;
        // 0x3218d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3218cc) {
            ctx->pc = 0x3218F8u;
            goto label_3218f8;
        }
    }
    ctx->pc = 0x3218D4u;
    // 0x3218d4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3218d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3218d8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3218D8u;
    {
        const bool branch_taken_0x3218d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3218d8) {
            ctx->pc = 0x3218DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3218D8u;
            // 0x3218dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3218F8u;
            goto label_3218f8;
        }
    }
    ctx->pc = 0x3218E0u;
    // 0x3218e0: 0xc0c4882  jal         func_312208
    ctx->pc = 0x3218E0u;
    SET_GPR_U32(ctx, 31, 0x3218E8u);
    ctx->pc = 0x312208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312208u, 0x3218E0u, 0x3218E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3218E8u;
label_3218e8:
    // 0x3218e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3218e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218ec: 0xc0c4884  jal         func_312210
    ctx->pc = 0x3218ECu;
    SET_GPR_U32(ctx, 31, 0x3218F4u);
    ctx->pc = 0x3218F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3218ECu;
    // 0x3218f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312210u, 0x3218ECu, 0x3218F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3218F4u;
label_3218f4:
    // 0x3218f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3218f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3218f8:
    // 0x3218f8: 0xc0fb9fe  jal         func_3EE7F8
    ctx->pc = 0x3218F8u;
    SET_GPR_U32(ctx, 31, 0x321900u);
    ctx->pc = 0x3218FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3218F8u;
    // 0x3218fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE7F8u, 0x3218F8u, 0x321900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321900u;
label_321900:
    // 0x321900: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x321900u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x321904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321908: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x321908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32190c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32190cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321910: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x321910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321914: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x321914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x321918: 0x3e00008  jr          $ra
    ctx->pc = 0x321918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321918u;
        // 0x32191c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321920u;
    // 0x321920: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x321920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x321924: 0x0  nop
    ctx->pc = 0x321924u;
    // NOP
    ctx->pc = 0x321928u;
}
