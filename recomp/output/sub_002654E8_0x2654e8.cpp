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

// Function: sub_002654E8
// Address: 0x2654e8 - 0x265578
void sub_002654E8_0x2654e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002654E8_0x2654e8");
#endif

    switch (ctx->pc) {
        case 0x265508u: goto label_265508;
        case 0x265518u: goto label_265518;
        case 0x265534u: goto label_265534;
        case 0x26554cu: goto label_26554c;
        case 0x26555cu: goto label_26555c;
        default: break;
    }

    ctx->pc = 0x2654e8u;

    // 0x2654e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2654e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2654ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2654ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2654f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2654f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2654f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2654f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2654f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2654fc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2654fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x265500: 0xc083854  jal         func_20E150
    ctx->pc = 0x265500u;
    SET_GPR_U32(ctx, 31, 0x265508u);
    ctx->pc = 0x265504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265500u;
    // 0x265504: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E150u, 0x265500u, 0x265508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265508u;
label_265508:
    // 0x265508: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x265508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26550c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26550cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265510: 0xc0b5ec8  jal         func_2D7B20
    ctx->pc = 0x265510u;
    SET_GPR_U32(ctx, 31, 0x265518u);
    ctx->pc = 0x265514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265510u;
    // 0x265514: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B20u, 0x265510u, 0x265518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265518u;
label_265518:
    // 0x265518: 0x8e4600c0  lw          $a2, 0xC0($s2)
    ctx->pc = 0x265518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x26551c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26551cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x265520: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x265520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265524: 0x24a57820  addiu       $a1, $a1, 0x7820
    ctx->pc = 0x265524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30752));
    // 0x265528: 0x630fa  dsrl        $a2, $a2, 3
    ctx->pc = 0x265528u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 3);
    // 0x26552c: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x26552Cu;
    SET_GPR_U32(ctx, 31, 0x265534u);
    ctx->pc = 0x265530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26552Cu;
    // 0x265530: 0x30c60001  andi        $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x26552Cu, 0x265534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265534u;
label_265534:
    // 0x265534: 0x92460320  lbu         $a2, 0x320($s2)
    ctx->pc = 0x265534u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x265538: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x265538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26553c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26553cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265540: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x265540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x265544: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x265544u;
    SET_GPR_U32(ctx, 31, 0x26554Cu);
    ctx->pc = 0x265548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265544u;
    // 0x265548: 0x24a57828  addiu       $a1, $a1, 0x7828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x265544u, 0x26554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26554Cu;
label_26554c:
    // 0x26554c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x26554cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x265550: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x265550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265554: 0xc0b5ecc  jal         func_2D7B30
    ctx->pc = 0x265554u;
    SET_GPR_U32(ctx, 31, 0x26555Cu);
    ctx->pc = 0x265558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265554u;
    // 0x265558: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B30u, 0x265554u, 0x26555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26555Cu;
label_26555c:
    // 0x26555c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26555cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265560: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x265560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265564: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x265564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x265568: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x265568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26556c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x26556cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x265570: 0x3e00008  jr          $ra
    ctx->pc = 0x265570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265570u;
        // 0x265574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265578u;
}
