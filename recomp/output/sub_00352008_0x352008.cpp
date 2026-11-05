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

// Function: sub_00352008
// Address: 0x352008 - 0x3521b8
void sub_00352008_0x352008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352008_0x352008");
#endif

    switch (ctx->pc) {
        case 0x352044u: goto label_352044;
        case 0x35205cu: goto label_35205c;
        case 0x352080u: goto label_352080;
        case 0x352090u: goto label_352090;
        case 0x35209cu: goto label_35209c;
        case 0x3520a8u: goto label_3520a8;
        case 0x3520bcu: goto label_3520bc;
        case 0x3520c4u: goto label_3520c4;
        case 0x3520d4u: goto label_3520d4;
        case 0x3520e8u: goto label_3520e8;
        case 0x3520f0u: goto label_3520f0;
        case 0x352100u: goto label_352100;
        case 0x352114u: goto label_352114;
        case 0x352128u: goto label_352128;
        case 0x352138u: goto label_352138;
        case 0x352140u: goto label_352140;
        case 0x352150u: goto label_352150;
        case 0x35215cu: goto label_35215c;
        case 0x352168u: goto label_352168;
        case 0x352178u: goto label_352178;
        case 0x352184u: goto label_352184;
        default: break;
    }

    ctx->pc = 0x352008u;

    // 0x352008: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x352008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x35200c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x35200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x352010: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x352010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x352014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x352014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352018: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x352018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x35201c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x35201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x352020: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x352020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x352024: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x352024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x352028: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x352028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x35202c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x35202cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x352030: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x352030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x352034: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x352034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x352038: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x352038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x35203c: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x35203Cu;
    SET_GPR_U32(ctx, 31, 0x352044u);
    ctx->pc = 0x352040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35203Cu;
    // 0x352040: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x35203Cu, 0x352044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352044u;
label_352044:
    // 0x352044: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x352044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x352048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x352048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35204c: 0x2472fe40  addiu       $s2, $v1, -0x1C0
    ctx->pc = 0x35204cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x352050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x352050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352054: 0xc09dd98  jal         func_277660
    ctx->pc = 0x352054u;
    SET_GPR_U32(ctx, 31, 0x35205Cu);
    ctx->pc = 0x352058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352054u;
    // 0x352058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x352054u, 0x35205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35205Cu;
label_35205c:
    // 0x35205c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x35205Cu;
    {
        const bool branch_taken_0x35205c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35205Cu;
        // 0x352060: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35205c) {
            ctx->pc = 0x352178u;
            goto label_352178;
        }
    }
    ctx->pc = 0x352064u;
    // 0x352064: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x352064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352068: 0x245e44d0  addiu       $fp, $v0, 0x44D0
    ctx->pc = 0x352068u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 17616));
    // 0x35206c: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x35206cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
    // 0x352070: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x352070u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x352074: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x352074u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x352078: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x352078u;
    {
        const bool branch_taken_0x352078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352078u;
        // 0x35207c: 0x3c14005c  lui         $s4, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352078) {
            ctx->pc = 0x35215Cu;
            goto label_35215c;
        }
    }
    ctx->pc = 0x352080u;
label_352080:
    // 0x352080: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x352080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x352084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x352084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352088: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x352088u;
    SET_GPR_U32(ctx, 31, 0x352090u);
    ctx->pc = 0x35208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352088u;
    // 0x35208c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x352088u, 0x352090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352090u;
label_352090:
    // 0x352090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x352090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352094: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x352094u;
    SET_GPR_U32(ctx, 31, 0x35209Cu);
    ctx->pc = 0x352098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352094u;
    // 0x352098: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x352094u, 0x35209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35209Cu;
label_35209c:
    // 0x35209c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3520a0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3520A0u;
    SET_GPR_U32(ctx, 31, 0x3520A8u);
    ctx->pc = 0x3520A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3520A0u;
    // 0x3520a4: 0x26e566c8  addiu       $a1, $s7, 0x66C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 26312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3520A0u, 0x3520A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520A8u;
label_3520a8:
    // 0x3520a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3520a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3520ac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3520ACu;
    {
        const bool branch_taken_0x3520ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3520ac) {
            ctx->pc = 0x3520B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3520ACu;
            // 0x3520b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3520CCu;
            goto label_3520cc;
        }
    }
    ctx->pc = 0x3520B4u;
    // 0x3520b4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3520B4u;
    SET_GPR_U32(ctx, 31, 0x3520BCu);
    ctx->pc = 0x3520B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3520B4u;
    // 0x3520b8: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3520B4u, 0x3520BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520BCu;
label_3520bc:
    // 0x3520bc: 0xc0d1480  jal         func_345200
    ctx->pc = 0x3520BCu;
    SET_GPR_U32(ctx, 31, 0x3520C4u);
    ctx->pc = 0x3520C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3520BCu;
    // 0x3520c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345200u, 0x3520BCu, 0x3520C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520C4u;
label_3520c4:
    // 0x3520c4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3520C4u;
    {
        const bool branch_taken_0x3520c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3520C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520C4u;
        // 0x3520c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3520c4) {
            ctx->pc = 0x35212Cu;
            goto label_35212c;
        }
    }
    ctx->pc = 0x3520CCu;
label_3520cc:
    // 0x3520cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3520CCu;
    SET_GPR_U32(ctx, 31, 0x3520D4u);
    ctx->pc = 0x3520D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3520CCu;
    // 0x3520d0: 0x26c566d8  addiu       $a1, $s6, 0x66D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 26328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3520CCu, 0x3520D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520D4u;
label_3520d4:
    // 0x3520d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3520d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3520d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3520D8u;
    {
        const bool branch_taken_0x3520d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3520d8) {
            ctx->pc = 0x3520DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3520D8u;
            // 0x3520dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3520F8u;
            goto label_3520f8;
        }
    }
    ctx->pc = 0x3520E0u;
    // 0x3520e0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3520E0u;
    SET_GPR_U32(ctx, 31, 0x3520E8u);
    ctx->pc = 0x3520E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3520E0u;
    // 0x3520e4: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3520E0u, 0x3520E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520E8u;
label_3520e8:
    // 0x3520e8: 0xc0d493c  jal         func_3524F0
    ctx->pc = 0x3520E8u;
    SET_GPR_U32(ctx, 31, 0x3520F0u);
    ctx->pc = 0x3520ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3520E8u;
    // 0x3520ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3524F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3524F0u, 0x3520E8u, 0x3520F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520F0u;
label_3520f0:
    // 0x3520f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3520F0u;
    {
        const bool branch_taken_0x3520f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3520F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520F0u;
        // 0x3520f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3520f0) {
            ctx->pc = 0x35212Cu;
            goto label_35212c;
        }
    }
    ctx->pc = 0x3520F8u;
label_3520f8:
    // 0x3520f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3520F8u;
    SET_GPR_U32(ctx, 31, 0x352100u);
    ctx->pc = 0x3520FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3520F8u;
    // 0x3520fc: 0x26a566e0  addiu       $a1, $s5, 0x66E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 26336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3520F8u, 0x352100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352100u;
label_352100:
    // 0x352100: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x352100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x352104: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x352104u;
    {
        const bool branch_taken_0x352104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352104) {
            ctx->pc = 0x352108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352104u;
            // 0x352108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352130u;
            goto label_352130;
        }
    }
    ctx->pc = 0x35210Cu;
    // 0x35210c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x35210Cu;
    SET_GPR_U32(ctx, 31, 0x352114u);
    ctx->pc = 0x352110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35210Cu;
    // 0x352110: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x35210Cu, 0x352114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352114u;
label_352114:
    // 0x352114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x352114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x352118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35211c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352120: 0xc0d1404  jal         func_345010
    ctx->pc = 0x352120u;
    SET_GPR_U32(ctx, 31, 0x352128u);
    ctx->pc = 0x352124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352120u;
    // 0x352124: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345010u, 0x352120u, 0x352128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352128u;
label_352128:
    // 0x352128: 0xae1e0008  sw          $fp, 0x8($s0)
    ctx->pc = 0x352128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 30));
label_35212c:
    // 0x35212c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35212cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_352130:
    // 0x352130: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x352130u;
    SET_GPR_U32(ctx, 31, 0x352138u);
    ctx->pc = 0x352134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352130u;
    // 0x352134: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x352130u, 0x352138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352138u;
label_352138:
    // 0x352138: 0xc0d1af4  jal         func_346BD0
    ctx->pc = 0x352138u;
    SET_GPR_U32(ctx, 31, 0x352140u);
    ctx->pc = 0x35213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352138u;
    // 0x35213c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346BD0u, 0x352138u, 0x352140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352140u;
label_352140:
    // 0x352140: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x352140u;
    {
        const bool branch_taken_0x352140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352140u;
        // 0x352144: 0x2684be80  addiu       $a0, $s4, -0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352140) {
            ctx->pc = 0x352150u;
            goto label_352150;
        }
    }
    ctx->pc = 0x352148u;
    // 0x352148: 0xc0fbc14  jal         func_3EF050
    ctx->pc = 0x352148u;
    SET_GPR_U32(ctx, 31, 0x352150u);
    ctx->pc = 0x35214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352148u;
    // 0x35214c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF050u, 0x352148u, 0x352150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352150u;
label_352150:
    // 0x352150: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x352150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352154: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x352154u;
    SET_GPR_U32(ctx, 31, 0x35215Cu);
    ctx->pc = 0x352158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352154u;
    // 0x352158: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x352154u, 0x35215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35215Cu;
label_35215c:
    // 0x35215c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35215cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352160: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x352160u;
    SET_GPR_U32(ctx, 31, 0x352168u);
    ctx->pc = 0x352164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352160u;
    // 0x352164: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x352160u, 0x352168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352168u;
label_352168:
    // 0x352168: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x352168u;
    {
        const bool branch_taken_0x352168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352168u;
        // 0x35216c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352168) {
            ctx->pc = 0x352080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352080;
        }
    }
    ctx->pc = 0x352170u;
    // 0x352170: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x352170u;
    SET_GPR_U32(ctx, 31, 0x352178u);
    ctx->pc = 0x352174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352170u;
    // 0x352174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x352170u, 0x352178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352178u;
label_352178:
    // 0x352178: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x352178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35217c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x35217Cu;
    SET_GPR_U32(ctx, 31, 0x352184u);
    ctx->pc = 0x352180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35217Cu;
    // 0x352180: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x35217Cu, 0x352184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352184u;
label_352184:
    // 0x352184: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x352184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352188: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x352188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35218c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x35218cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352190: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x352190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x352194: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x352194u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x352198: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x352198u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35219c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x35219cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3521a0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x3521a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3521a4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x3521a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3521a8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x3521a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3521ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3521ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3521B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3521ACu;
        // 0x3521b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3521ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3521B4u;
    // 0x3521b4: 0x0  nop
    ctx->pc = 0x3521b4u;
    // NOP
    ctx->pc = 0x3521b8u;
}
