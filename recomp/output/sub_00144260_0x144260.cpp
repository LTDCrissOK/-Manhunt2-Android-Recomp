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

// Function: sub_00144260
// Address: 0x144260 - 0x1443e0
void sub_00144260_0x144260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144260_0x144260");
#endif

    switch (ctx->pc) {
        case 0x144284u: goto label_144284;
        case 0x1442c0u: goto label_1442c0;
        case 0x1442d4u: goto label_1442d4;
        case 0x1442e8u: goto label_1442e8;
        case 0x1442f4u: goto label_1442f4;
        case 0x144304u: goto label_144304;
        case 0x14430cu: goto label_14430c;
        case 0x14431cu: goto label_14431c;
        case 0x144340u: goto label_144340;
        case 0x14434cu: goto label_14434c;
        case 0x144358u: goto label_144358;
        case 0x144374u: goto label_144374;
        case 0x144388u: goto label_144388;
        case 0x1443a4u: goto label_1443a4;
        case 0x1443b4u: goto label_1443b4;
        default: break;
    }

    ctx->pc = 0x144260u;

    // 0x144260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144264: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x144264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x144268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14426c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14426cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x144270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x144274: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x144274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x144278: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14427c: 0xc04e866  jal         func_13A198
    ctx->pc = 0x14427Cu;
    SET_GPR_U32(ctx, 31, 0x144284u);
    ctx->pc = 0x144280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14427Cu;
    // 0x144280: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x14427Cu, 0x144284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144284u;
label_144284:
    // 0x144284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x144284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144288: 0x1043004d  beq         $v0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x144288u;
    {
        const bool branch_taken_0x144288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144288u;
        // 0x14428c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144288) {
            ctx->pc = 0x1443C0u;
            goto label_1443c0;
        }
    }
    ctx->pc = 0x144290u;
    // 0x144290: 0x9243046c  lbu         $v1, 0x46C($s2)
    ctx->pc = 0x144290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x144294: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x144294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x144298: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14429c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14429cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1442a0: 0x2453020c  addiu       $s3, $v0, 0x20C
    ctx->pc = 0x1442a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 524));
    // 0x1442a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1442a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1442a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1442a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1442ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1442acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1442b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1442b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1442b4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1442b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1442b8: 0xc04392e  jal         func_10E4B8
    ctx->pc = 0x1442B8u;
    SET_GPR_U32(ctx, 31, 0x1442C0u);
    ctx->pc = 0x1442BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442B8u;
    // 0x1442bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4B8u, 0x1442B8u, 0x1442C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1442C0u;
label_1442c0:
    // 0x1442c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1442C0u;
    {
        const bool branch_taken_0x1442c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1442c0) {
            ctx->pc = 0x1442C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1442C0u;
            // 0x1442c4: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1442DCu;
            goto label_1442dc;
        }
    }
    ctx->pc = 0x1442C8u;
    // 0x1442c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1442c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1442cc: 0xc04398a  jal         func_10E628
    ctx->pc = 0x1442CCu;
    SET_GPR_U32(ctx, 31, 0x1442D4u);
    ctx->pc = 0x1442D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442CCu;
    // 0x1442d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x1442CCu, 0x1442D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1442D4u;
label_1442d4:
    // 0x1442d4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1442D4u;
    {
        const bool branch_taken_0x1442d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1442D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442D4u;
        // 0x1442d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1442d4) {
            ctx->pc = 0x1443C4u;
            goto label_1443c4;
        }
    }
    ctx->pc = 0x1442DCu;
label_1442dc:
    // 0x1442dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1442dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1442e0: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1442E0u;
    SET_GPR_U32(ctx, 31, 0x1442E8u);
    ctx->pc = 0x1442E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442E0u;
    // 0x1442e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1442E0u, 0x1442E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1442E8u;
label_1442e8:
    // 0x1442e8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1442e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1442ec: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1442ECu;
    SET_GPR_U32(ctx, 31, 0x1442F4u);
    ctx->pc = 0x1442F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442ECu;
    // 0x1442f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1442ECu, 0x1442F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1442F4u;
label_1442f4:
    // 0x1442f4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1442f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1442f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1442f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1442fc: 0xc04e860  jal         func_13A180
    ctx->pc = 0x1442FCu;
    SET_GPR_U32(ctx, 31, 0x144304u);
    ctx->pc = 0x144300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442FCu;
    // 0x144300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x1442FCu, 0x144304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144304u;
label_144304:
    // 0x144304: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x144304u;
    SET_GPR_U32(ctx, 31, 0x14430Cu);
    ctx->pc = 0x144308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144304u;
    // 0x144308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x144304u, 0x14430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14430Cu;
label_14430c:
    // 0x14430c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14430cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144314: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x144314u;
    SET_GPR_U32(ctx, 31, 0x14431Cu);
    ctx->pc = 0x144318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144314u;
    // 0x144318: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x144314u, 0x14431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14431Cu;
label_14431c:
    // 0x14431c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14431cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144320: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x144320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144324: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x144324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144328: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x144328u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14432c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x14432cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x144330: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x144330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144338: 0xc04daca  jal         func_136B28
    ctx->pc = 0x144338u;
    SET_GPR_U32(ctx, 31, 0x144340u);
    ctx->pc = 0x14433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144338u;
    // 0x14433c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x144338u, 0x144340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144340u;
label_144340:
    // 0x144340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x144340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144344: 0xc046030  jal         func_1180C0
    ctx->pc = 0x144344u;
    SET_GPR_U32(ctx, 31, 0x14434Cu);
    ctx->pc = 0x144348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144344u;
    // 0x144348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x144344u, 0x14434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14434Cu;
label_14434c:
    // 0x14434c: 0x8e450b14  lw          $a1, 0xB14($s2)
    ctx->pc = 0x14434cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2836)));
    // 0x144350: 0xc0460c4  jal         func_118310
    ctx->pc = 0x144350u;
    SET_GPR_U32(ctx, 31, 0x144358u);
    ctx->pc = 0x144354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144350u;
    // 0x144354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x144350u, 0x144358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144358u;
label_144358:
    // 0x144358: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x144358u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14435c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14435cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144360: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x144360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x144364: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x144364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x144368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14436c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14436Cu;
    SET_GPR_U32(ctx, 31, 0x144374u);
    ctx->pc = 0x144370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14436Cu;
    // 0x144370: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14436Cu, 0x144374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144374u;
label_144374:
    // 0x144374: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x144374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14437c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14437cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144380: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x144380u;
    SET_GPR_U32(ctx, 31, 0x144388u);
    ctx->pc = 0x144384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144380u;
    // 0x144384: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x144380u, 0x144388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144388u;
label_144388:
    // 0x144388: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x144388u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14438c: 0x8e420b14  lw          $v0, 0xB14($s2)
    ctx->pc = 0x14438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2836)));
    // 0x144390: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x144390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x144394: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144394u;
    {
        const bool branch_taken_0x144394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144394u;
        // 0x144398: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144394) {
            ctx->pc = 0x1443ACu;
            goto label_1443ac;
        }
    }
    ctx->pc = 0x14439Cu;
    // 0x14439c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14439Cu;
    SET_GPR_U32(ctx, 31, 0x1443A4u);
    ctx->pc = 0x1443A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14439Cu;
    // 0x1443a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14439Cu, 0x1443A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443A4u;
label_1443a4:
    // 0x1443a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1443A4u;
    {
        const bool branch_taken_0x1443a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1443A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443A4u;
        // 0x1443a8: 0x92420b11  lbu         $v0, 0xB11($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2833)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1443a4) {
            ctx->pc = 0x1443B8u;
            goto label_1443b8;
        }
    }
    ctx->pc = 0x1443ACu;
label_1443ac:
    // 0x1443ac: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1443ACu;
    SET_GPR_U32(ctx, 31, 0x1443B4u);
    ctx->pc = 0x1443B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443ACu;
    // 0x1443b0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1443ACu, 0x1443B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443B4u;
label_1443b4:
    // 0x1443b4: 0x92420b11  lbu         $v0, 0xB11($s2)
    ctx->pc = 0x1443b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2833)));
label_1443b8:
    // 0x1443b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1443b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1443bc: 0xa2420b11  sb          $v0, 0xB11($s2)
    ctx->pc = 0x1443bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2833), (uint8_t)GPR_U32(ctx, 2));
label_1443c0:
    // 0x1443c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1443c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1443c4:
    // 0x1443c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1443c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1443c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1443c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1443cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1443ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1443d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1443d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1443d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1443D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1443D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443D4u;
        // 0x1443d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1443D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1443DCu;
    // 0x1443dc: 0x0  nop
    ctx->pc = 0x1443dcu;
    // NOP
    ctx->pc = 0x1443e0u;
}
