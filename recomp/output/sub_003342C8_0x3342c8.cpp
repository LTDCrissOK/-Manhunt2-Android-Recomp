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

// Function: sub_003342C8
// Address: 0x3342c8 - 0x334360
void sub_003342C8_0x3342c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003342C8_0x3342c8");
#endif

    switch (ctx->pc) {
        case 0x3342c8u: goto label_3342c8;
        case 0x3342ccu: goto label_3342cc;
        case 0x3342d0u: goto label_3342d0;
        case 0x3342d4u: goto label_3342d4;
        case 0x3342d8u: goto label_3342d8;
        case 0x3342dcu: goto label_3342dc;
        case 0x3342e0u: goto label_3342e0;
        case 0x3342e4u: goto label_3342e4;
        case 0x3342e8u: goto label_3342e8;
        case 0x3342ecu: goto label_3342ec;
        case 0x3342f0u: goto label_3342f0;
        case 0x3342f4u: goto label_3342f4;
        case 0x3342f8u: goto label_3342f8;
        case 0x3342fcu: goto label_3342fc;
        case 0x334300u: goto label_334300;
        case 0x334304u: goto label_334304;
        case 0x334308u: goto label_334308;
        case 0x33430cu: goto label_33430c;
        case 0x334310u: goto label_334310;
        case 0x334314u: goto label_334314;
        case 0x334318u: goto label_334318;
        case 0x33431cu: goto label_33431c;
        case 0x334320u: goto label_334320;
        case 0x334324u: goto label_334324;
        case 0x334328u: goto label_334328;
        case 0x33432cu: goto label_33432c;
        case 0x334330u: goto label_334330;
        case 0x334334u: goto label_334334;
        case 0x334338u: goto label_334338;
        case 0x33433cu: goto label_33433c;
        case 0x334340u: goto label_334340;
        case 0x334344u: goto label_334344;
        case 0x334348u: goto label_334348;
        case 0x33434cu: goto label_33434c;
        case 0x334350u: goto label_334350;
        case 0x334354u: goto label_334354;
        case 0x334358u: goto label_334358;
        case 0x33435cu: goto label_33435c;
        default: break;
    }

    ctx->pc = 0x3342c8u;

label_3342c8:
    // 0x3342c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3342c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3342cc:
    // 0x3342cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3342ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3342d0:
    // 0x3342d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3342d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3342d4:
    // 0x3342d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3342d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3342d8:
    // 0x3342d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3342d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3342dc:
    // 0x3342dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3342dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3342e0:
    // 0x3342e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3342e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_3342e4:
    // 0x3342e4: 0xc0cd1a0  jal         func_334680
label_3342e8:
    if (ctx->pc == 0x3342E8u) {
        ctx->pc = 0x3342E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342E4u;
        // 0x3342e8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3342ECu;
        goto label_3342ec;
    }
    ctx->pc = 0x3342E4u;
    SET_GPR_U32(ctx, 31, 0x3342ECu);
    ctx->pc = 0x3342E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3342E4u;
    // 0x3342e8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334680u, 0x3342E4u, 0x3342ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342ECu;
label_3342ec:
    // 0x3342ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3342f0:
    if (ctx->pc == 0x3342F0u) {
        ctx->pc = 0x3342F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342ECu;
        // 0x3342f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3342F4u;
        goto label_3342f4;
    }
    ctx->pc = 0x3342ECu;
    {
        const bool branch_taken_0x3342ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3342F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342ECu;
        // 0x3342f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3342ec) {
            ctx->pc = 0x3342FCu;
            goto label_3342fc;
        }
    }
    ctx->pc = 0x3342F4u;
label_3342f4:
    // 0x3342f4: 0x10000012  b           . + 4 + (0x12 << 2)
label_3342f8:
    if (ctx->pc == 0x3342F8u) {
        ctx->pc = 0x3342F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342F4u;
        // 0x3342f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3342FCu;
        goto label_3342fc;
    }
    ctx->pc = 0x3342F4u;
    {
        const bool branch_taken_0x3342f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3342F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342F4u;
        // 0x3342f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3342f4) {
            ctx->pc = 0x334340u;
            goto label_334340;
        }
    }
    ctx->pc = 0x3342FCu;
label_3342fc:
    // 0x3342fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_334300:
    if (ctx->pc == 0x334300u) {
        ctx->pc = 0x334300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342FCu;
        // 0x334300: 0x3c12005b  lui         $s2, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334304u;
        goto label_334304;
    }
    ctx->pc = 0x3342FCu;
    {
        const bool branch_taken_0x3342fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342FCu;
        // 0x334300: 0x3c12005b  lui         $s2, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3342fc) {
            ctx->pc = 0x334314u;
            goto label_334314;
        }
    }
    ctx->pc = 0x334304u;
label_334304:
    // 0x334304: 0x0  nop
    ctx->pc = 0x334304u;
    // NOP
label_334308:
    // 0x334308: 0xc0fba22  jal         func_3EE888
label_33430c:
    if (ctx->pc == 0x33430Cu) {
        ctx->pc = 0x33430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334308u;
        // 0x33430c: 0x26446e70  addiu       $a0, $s2, 0x6E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334310u;
        goto label_334310;
    }
    ctx->pc = 0x334308u;
    SET_GPR_U32(ctx, 31, 0x334310u);
    ctx->pc = 0x33430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334308u;
    // 0x33430c: 0x26446e70  addiu       $a0, $s2, 0x6E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE888u, 0x334308u, 0x334310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334310u;
label_334310:
    // 0x334310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x334310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_334314:
    // 0x334314: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x334314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_334318:
    // 0x334318: 0xc0cd0d8  jal         func_334360
label_33431c:
    if (ctx->pc == 0x33431Cu) {
        ctx->pc = 0x33431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334318u;
        // 0x33431c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334320u;
        goto label_334320;
    }
    ctx->pc = 0x334318u;
    SET_GPR_U32(ctx, 31, 0x334320u);
    ctx->pc = 0x33431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334318u;
    // 0x33431c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334360u, 0x334318u, 0x334320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334320u;
label_334320:
    // 0x334320: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_334324:
    if (ctx->pc == 0x334324u) {
        ctx->pc = 0x334324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334320u;
        // 0x334324: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334328u;
        goto label_334328;
    }
    ctx->pc = 0x334320u;
    {
        const bool branch_taken_0x334320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334320u;
        // 0x334324: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334320) {
            ctx->pc = 0x334308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334308;
        }
    }
    ctx->pc = 0x334328u;
label_334328:
    // 0x334328: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x334328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33432c:
    // 0x33432c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_334330:
    // 0x334330: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x334330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_334334:
    // 0x334334: 0x40f809  jalr        $v0
label_334338:
    if (ctx->pc == 0x334338u) {
        ctx->pc = 0x33433Cu;
        goto label_33433c;
    }
    ctx->pc = 0x334334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33433Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334334u, 0x33433Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33433Cu;
label_33433c:
    // 0x33433c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33433cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334340:
    // 0x334340: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x334340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_334344:
    // 0x334344: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x334344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_334348:
    // 0x334348: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x334348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33434c:
    // 0x33434c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33434cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_334350:
    // 0x334350: 0x3e00008  jr          $ra
label_334354:
    if (ctx->pc == 0x334354u) {
        ctx->pc = 0x334354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334350u;
        // 0x334354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334358u;
        goto label_334358;
    }
    ctx->pc = 0x334350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334350u;
        // 0x334354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334358u;
label_334358:
    // 0x334358: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x334358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33435c:
    // 0x33435c: 0x0  nop
    ctx->pc = 0x33435cu;
    // NOP
    ctx->pc = 0x334360u;
}
