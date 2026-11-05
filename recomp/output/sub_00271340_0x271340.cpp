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

// Function: sub_00271340
// Address: 0x271340 - 0x271458
void sub_00271340_0x271340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271340_0x271340");
#endif

    switch (ctx->pc) {
        case 0x27135cu: goto label_27135c;
        case 0x271370u: goto label_271370;
        case 0x271388u: goto label_271388;
        case 0x2713a0u: goto label_2713a0;
        case 0x2713b8u: goto label_2713b8;
        case 0x2713d0u: goto label_2713d0;
        case 0x2713e8u: goto label_2713e8;
        case 0x271400u: goto label_271400;
        case 0x271418u: goto label_271418;
        case 0x271430u: goto label_271430;
        case 0x271440u: goto label_271440;
        default: break;
    }

    ctx->pc = 0x271340u;

    // 0x271340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x271340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x271344: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x271344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x271348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x271348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27134c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x271350: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x271354: 0xc0b5ec8  jal         func_2D7B20
    ctx->pc = 0x271354u;
    SET_GPR_U32(ctx, 31, 0x27135Cu);
    ctx->pc = 0x271358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271354u;
    // 0x271358: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B20u, 0x271354u, 0x27135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27135Cu;
label_27135c:
    // 0x27135c: 0x92260270  lbu         $a2, 0x270($s1)
    ctx->pc = 0x27135cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x271360: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271364: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x271364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271368: 0xc0b5f36  jal         func_2D7CD8
    ctx->pc = 0x271368u;
    SET_GPR_U32(ctx, 31, 0x271370u);
    ctx->pc = 0x27136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271368u;
    // 0x27136c: 0x24a57e80  addiu       $a1, $a1, 0x7E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CD8u, 0x271368u, 0x271370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271370u;
label_271370:
    // 0x271370: 0x8e260280  lw          $a2, 0x280($s1)
    ctx->pc = 0x271370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x271374: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271378: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x271378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27137c: 0x24a57e90  addiu       $a1, $a1, 0x7E90
    ctx->pc = 0x27137cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32400));
    // 0x271380: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x271380u;
    SET_GPR_U32(ctx, 31, 0x271388u);
    ctx->pc = 0x271384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271380u;
    // 0x271384: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x271380u, 0x271388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271388u;
label_271388:
    // 0x271388: 0x8e260274  lw          $a2, 0x274($s1)
    ctx->pc = 0x271388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x27138c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x27138cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271390: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x271390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271394: 0x24a57ea0  addiu       $a1, $a1, 0x7EA0
    ctx->pc = 0x271394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32416));
    // 0x271398: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x271398u;
    SET_GPR_U32(ctx, 31, 0x2713A0u);
    ctx->pc = 0x27139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271398u;
    // 0x27139c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x271398u, 0x2713A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713A0u;
label_2713a0:
    // 0x2713a0: 0x8e260278  lw          $a2, 0x278($s1)
    ctx->pc = 0x2713a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x2713a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2713a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2713a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2713a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713ac: 0x24a57eb0  addiu       $a1, $a1, 0x7EB0
    ctx->pc = 0x2713acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32432));
    // 0x2713b0: 0xc0b5ed6  jal         func_2D7B58
    ctx->pc = 0x2713B0u;
    SET_GPR_U32(ctx, 31, 0x2713B8u);
    ctx->pc = 0x2713B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713B0u;
    // 0x2713b4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B58u, 0x2713B0u, 0x2713B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713B8u;
label_2713b8:
    // 0x2713b8: 0x8e260288  lw          $a2, 0x288($s1)
    ctx->pc = 0x2713b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x2713bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2713bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2713c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2713c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713c4: 0x24a57ec8  addiu       $a1, $a1, 0x7EC8
    ctx->pc = 0x2713c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32456));
    // 0x2713c8: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x2713C8u;
    SET_GPR_U32(ctx, 31, 0x2713D0u);
    ctx->pc = 0x2713CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713C8u;
    // 0x2713cc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x2713C8u, 0x2713D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713D0u;
label_2713d0:
    // 0x2713d0: 0x8e260284  lw          $a2, 0x284($s1)
    ctx->pc = 0x2713d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x2713d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2713d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2713d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2713d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713dc: 0x24a57ed0  addiu       $a1, $a1, 0x7ED0
    ctx->pc = 0x2713dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32464));
    // 0x2713e0: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x2713E0u;
    SET_GPR_U32(ctx, 31, 0x2713E8u);
    ctx->pc = 0x2713E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713E0u;
    // 0x2713e4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x2713E0u, 0x2713E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713E8u;
label_2713e8:
    // 0x2713e8: 0x8e260290  lw          $a2, 0x290($s1)
    ctx->pc = 0x2713e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x2713ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2713ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2713f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2713f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713f4: 0x24a57ed8  addiu       $a1, $a1, 0x7ED8
    ctx->pc = 0x2713f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32472));
    // 0x2713f8: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x2713F8u;
    SET_GPR_U32(ctx, 31, 0x271400u);
    ctx->pc = 0x2713FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713F8u;
    // 0x2713fc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x2713F8u, 0x271400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271400u;
label_271400:
    // 0x271400: 0xc62c0294  lwc1        $f12, 0x294($s1)
    ctx->pc = 0x271400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x271404: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x271404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271408: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x271408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27140c: 0x24a57ef0  addiu       $a1, $a1, 0x7EF0
    ctx->pc = 0x27140cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32496));
    // 0x271410: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x271410u;
    SET_GPR_U32(ctx, 31, 0x271418u);
    ctx->pc = 0x271414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271410u;
    // 0x271414: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x271410u, 0x271418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271418u;
label_271418:
    // 0x271418: 0xc62c02ac  lwc1        $f12, 0x2AC($s1)
    ctx->pc = 0x271418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27141c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x27141cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x271420: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x271420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271424: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x271424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x271428: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x271428u;
    SET_GPR_U32(ctx, 31, 0x271430u);
    ctx->pc = 0x27142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271428u;
    // 0x27142c: 0x24a57f00  addiu       $a1, $a1, 0x7F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x271428u, 0x271430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271430u;
label_271430:
    // 0x271430: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x271430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x271434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x271434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271438: 0xc0b5ecc  jal         func_2D7B30
    ctx->pc = 0x271438u;
    SET_GPR_U32(ctx, 31, 0x271440u);
    ctx->pc = 0x27143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271438u;
    // 0x27143c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B30u, 0x271438u, 0x271440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271440u;
label_271440:
    // 0x271440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x271440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271444: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x271444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x271448: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x271448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27144c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27144cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271450: 0x3e00008  jr          $ra
    ctx->pc = 0x271450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271450u;
        // 0x271454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271458u;
}
