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

// Function: sub_002056A0
// Address: 0x2056a0 - 0x205778
void sub_002056A0_0x2056a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002056A0_0x2056a0");
#endif

    switch (ctx->pc) {
        case 0x2056d0u: goto label_2056d0;
        case 0x2056ecu: goto label_2056ec;
        case 0x2056f4u: goto label_2056f4;
        case 0x2056fcu: goto label_2056fc;
        case 0x205710u: goto label_205710;
        case 0x205720u: goto label_205720;
        case 0x20572cu: goto label_20572c;
        case 0x205748u: goto label_205748;
        default: break;
    }

    ctx->pc = 0x2056a0u;

    // 0x2056a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2056a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2056a4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2056a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2056a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2056a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2056ac: 0x24421530  addiu       $v0, $v0, 0x1530
    ctx->pc = 0x2056acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5424));
    // 0x2056b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2056b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2056b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2056b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2056b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2056b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2056bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2056bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2056c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2056c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2056c4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2056c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2056c8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2056C8u;
    SET_GPR_U32(ctx, 31, 0x2056D0u);
    ctx->pc = 0x2056CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056C8u;
    // 0x2056cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2056C8u, 0x2056D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056D0u;
label_2056d0:
    // 0x2056d0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2056d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2056d4: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x2056d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x2056d8: 0x24421568  addiu       $v0, $v0, 0x1568
    ctx->pc = 0x2056d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5480));
    // 0x2056dc: 0xa2200010  sb          $zero, 0x10($s1)
    ctx->pc = 0x2056dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2056e0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2056e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2056e4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2056E4u;
    SET_GPR_U32(ctx, 31, 0x2056ECu);
    ctx->pc = 0x2056E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056E4u;
    // 0x2056e8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2056E4u, 0x2056ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056ECu;
label_2056ec:
    // 0x2056ec: 0xc081710  jal         func_205C40
    ctx->pc = 0x2056ECu;
    SET_GPR_U32(ctx, 31, 0x2056F4u);
    ctx->pc = 0x2056F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056ECu;
    // 0x2056f0: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x2056ECu, 0x2056F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056F4u;
label_2056f4:
    // 0x2056f4: 0xc081710  jal         func_205C40
    ctx->pc = 0x2056F4u;
    SET_GPR_U32(ctx, 31, 0x2056FCu);
    ctx->pc = 0x2056F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056F4u;
    // 0x2056f8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x2056F4u, 0x2056FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056FCu;
label_2056fc:
    // 0x2056fc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2056fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x205700: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205704: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x205704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x205708: 0xc0e7b78  jal         func_39EDE0
    ctx->pc = 0x205708u;
    SET_GPR_U32(ctx, 31, 0x205710u);
    ctx->pc = 0x20570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205708u;
    // 0x20570c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EDE0u, 0x205708u, 0x205710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205710u;
label_205710:
    // 0x205710: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x205710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x205714: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x205714u;
    {
        const bool branch_taken_0x205714 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x205718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205714u;
        // 0x205718: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205714) {
            ctx->pc = 0x205758u;
            goto label_205758;
        }
    }
    ctx->pc = 0x20571Cu;
    // 0x20571c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x20571cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_205720:
    // 0x205720: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x205720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205724: 0xc0e7ddc  jal         func_39F770
    ctx->pc = 0x205724u;
    SET_GPR_U32(ctx, 31, 0x20572Cu);
    ctx->pc = 0x205728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205724u;
    // 0x205728: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F770u, 0x205724u, 0x20572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20572Cu;
label_20572c:
    // 0x20572c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x20572cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x205730: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x205730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x205734: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x205734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20573c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205740: 0xc0e70a0  jal         func_39C280
    ctx->pc = 0x205740u;
    SET_GPR_U32(ctx, 31, 0x205748u);
    ctx->pc = 0x205744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205740u;
    // 0x205744: 0x24065dc0  addiu       $a2, $zero, 0x5DC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C280u, 0x205740u, 0x205748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205748u;
label_205748:
    // 0x205748: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x205748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20574c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x20574cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x205750: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x205750u;
    {
        const bool branch_taken_0x205750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205750) {
            ctx->pc = 0x205754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205750u;
            // 0x205754: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205720;
        }
    }
    ctx->pc = 0x205758u;
label_205758:
    // 0x205758: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x205758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20575c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20575cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205760: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205764: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x205764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205768: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x205768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20576c: 0x3e00008  jr          $ra
    ctx->pc = 0x20576Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20576Cu;
        // 0x205770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20576Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205774u;
    // 0x205774: 0x0  nop
    ctx->pc = 0x205774u;
    // NOP
    ctx->pc = 0x205778u;
}
