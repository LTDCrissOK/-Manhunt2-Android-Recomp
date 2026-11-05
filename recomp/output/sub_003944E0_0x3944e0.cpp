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

// Function: sub_003944E0
// Address: 0x3944e0 - 0x394908
void sub_003944E0_0x3944e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003944E0_0x3944e0");
#endif

    switch (ctx->pc) {
        case 0x394538u: goto label_394538;
        case 0x394574u: goto label_394574;
        case 0x3945e4u: goto label_3945e4;
        case 0x394650u: goto label_394650;
        case 0x394738u: goto label_394738;
        case 0x394740u: goto label_394740;
        case 0x394770u: goto label_394770;
        case 0x394804u: goto label_394804;
        case 0x394830u: goto label_394830;
        case 0x39487cu: goto label_39487c;
        case 0x39488cu: goto label_39488c;
        case 0x3948acu: goto label_3948ac;
        case 0x3948bcu: goto label_3948bc;
        case 0x3948d0u: goto label_3948d0;
        default: break;
    }

    ctx->pc = 0x3944e0u;

    // 0x3944e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3944e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3944e4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3944e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3944e8: 0x8c43ea7c  lw          $v1, -0x1584($v0)
    ctx->pc = 0x3944e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FEA7Cu));
    // 0x3944ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3944ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3944f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3944f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3944f4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3944f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3944f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3944f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3944fc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3944fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x394500: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x394500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394504: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x394504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x394508: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x394508u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39450c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x39450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x394510: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x394510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x394514: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x394514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x394518: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x394518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x39451c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x39451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x394520: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x394520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x394524: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x394524u;
    {
        const bool branch_taken_0x394524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x394528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394524u;
        // 0x394528: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394524) {
            ctx->pc = 0x394540u;
            goto label_394540;
        }
    }
    ctx->pc = 0x39452Cu;
    // 0x39452c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39452cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x394530: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x394530u;
    SET_GPR_U32(ctx, 31, 0x394538u);
    ctx->pc = 0x394534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394530u;
    // 0x394534: 0x2484a670  addiu       $a0, $a0, -0x5990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x394530u, 0x394538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394538u;
label_394538:
    // 0x394538: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x394538u;
    {
        const bool branch_taken_0x394538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394538u;
        // 0x39453c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394538) {
            ctx->pc = 0x3948D8u;
            goto label_3948d8;
        }
    }
    ctx->pc = 0x394540u;
label_394540:
    // 0x394540: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x394540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x394544: 0x8c62ea78  lw          $v0, -0x1588($v1)
    ctx->pc = 0x394544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FEA78u));
    // 0x394548: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x394548u;
    {
        const bool branch_taken_0x394548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394548u;
        // 0x39454c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394548) {
            ctx->pc = 0x394568u;
            goto label_394568;
        }
    }
    ctx->pc = 0x394550u;
    // 0x394550: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x394550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x394554: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x394554u;
    {
        const bool branch_taken_0x394554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x394558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394554u;
        // 0x394558: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394554) {
            ctx->pc = 0x394568u;
            goto label_394568;
        }
    }
    ctx->pc = 0x39455Cu;
    // 0x39455c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x39455Cu;
    {
        const bool branch_taken_0x39455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39455Cu;
        // 0x394560: 0x8c62ea80  lw          $v0, -0x1580($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39455c) {
            ctx->pc = 0x3948D8u;
            goto label_3948d8;
        }
    }
    ctx->pc = 0x394564u;
    // 0x394564: 0x0  nop
    ctx->pc = 0x394564u;
    // NOP
label_394568:
    // 0x394568: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x394568u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x39456c: 0xc0e56b2  jal         func_395AC8
    ctx->pc = 0x39456Cu;
    SET_GPR_U32(ctx, 31, 0x394574u);
    ctx->pc = 0x394570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39456Cu;
    // 0x394570: 0x8ca4ea78  lw          $a0, -0x1588($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395AC8u, 0x39456Cu, 0x394574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394574u;
label_394574:
    // 0x394574: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x394574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x394578: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x394578u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39457c: 0x146400d6  bne         $v1, $a0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x39457Cu;
    {
        const bool branch_taken_0x39457c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x394580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39457Cu;
        // 0x394580: 0xaec3ea80  sw          $v1, -0x1580($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294961792), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39457c) {
            ctx->pc = 0x3948D8u;
            goto label_3948d8;
        }
    }
    ctx->pc = 0x394584u;
    // 0x394584: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x394584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x394588: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x394588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39458c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x39458cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x394590: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x394590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x394594: 0x8e10e548  lw          $s0, -0x1AB8($s0)
    ctx->pc = 0x394594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960456)));
    // 0x394598: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x394598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x39459c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39459Cu;
    {
        const bool branch_taken_0x39459c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3945A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39459Cu;
        // 0x3945a0: 0x2602011a  addiu       $v0, $s0, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39459c) {
            ctx->pc = 0x3945B0u;
            goto label_3945b0;
        }
    }
    ctx->pc = 0x3945A4u;
    // 0x3945a4: 0x26140118  addiu       $s4, $s0, 0x118
    ctx->pc = 0x3945a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x3945a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3945A8u;
    {
        const bool branch_taken_0x3945a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3945ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945A8u;
        // 0x3945ac: 0x261e011c  addiu       $fp, $s0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3945a8) {
            ctx->pc = 0x3945B8u;
            goto label_3945b8;
        }
    }
    ctx->pc = 0x3945B0u;
label_3945b0:
    // 0x3945b0: 0x26150118  addiu       $s5, $s0, 0x118
    ctx->pc = 0x3945b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x3945b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3945b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3945b8:
    // 0x3945b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3945b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3945bc: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x3945BCu;
    {
        const bool branch_taken_0x3945bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3945C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945BCu;
        // 0x3945c0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3945bc) {
            ctx->pc = 0x394748u;
            goto label_394748;
        }
    }
    ctx->pc = 0x3945C4u;
    // 0x3945c4: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x3945c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x3945c8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3945c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3945cc: 0x26f1ea88  addiu       $s1, $s7, -0x1578
    ctx->pc = 0x3945ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961800));
    // 0x3945d0: 0x24a5a6a8  addiu       $a1, $a1, -0x5958
    ctx->pc = 0x3945d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944424));
    // 0x3945d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3945d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FEA88u));
    // 0x3945d8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3945d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3945dc: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3945DCu;
    SET_GPR_U32(ctx, 31, 0x3945E4u);
    ctx->pc = 0x3945E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3945DCu;
    // 0x3945e0: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3945DCu, 0x3945E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3945E4u;
label_3945e4:
    // 0x3945e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3945E4u;
    {
        const bool branch_taken_0x3945e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3945E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945E4u;
        // 0x3945e8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3945e4) {
            ctx->pc = 0x3945F8u;
            goto label_3945f8;
        }
    }
    ctx->pc = 0x3945ECu;
    // 0x3945ec: 0x26d0ea80  addiu       $s0, $s6, -0x1580
    ctx->pc = 0x3945ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961792));
    // 0x3945f0: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x3945F0u;
    {
        const bool branch_taken_0x3945f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3945F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945F0u;
        // 0x3945f4: 0x2484a6b0  addiu       $a0, $a0, -0x5950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3945f0) {
            ctx->pc = 0x3948A4u;
            goto label_3948a4;
        }
    }
    ctx->pc = 0x3945F8u;
label_3945f8:
    // 0x3945f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3945f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3945fc: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x3945fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x394600: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x394600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x394604: 0x24480005  addiu       $t0, $v0, 0x5
    ctx->pc = 0x394604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x394608: 0x90450007  lbu         $a1, 0x7($v0)
    ctx->pc = 0x394608u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x39460c: 0x90430006  lbu         $v1, 0x6($v0)
    ctx->pc = 0x39460cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x394610: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x394610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x394614: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x394614u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x394618: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x394618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x39461c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x39461cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x394620: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x394620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x394624: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x394624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x394628: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x394628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x39462c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x39462cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x394630: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x394630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x394634: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x394634u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x394638: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x394638u;
    {
        const bool branch_taken_0x394638 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394638u;
        // 0x39463c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394638) {
            ctx->pc = 0x394658u;
            goto label_394658;
        }
    }
    ctx->pc = 0x394640u;
    // 0x394640: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x394640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x394644: 0x26d0ea80  addiu       $s0, $s6, -0x1580
    ctx->pc = 0x394644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961792));
    // 0x394648: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x394648u;
    SET_GPR_U32(ctx, 31, 0x394650u);
    ctx->pc = 0x39464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394648u;
    // 0x39464c: 0x2484a6e8  addiu       $a0, $a0, -0x5918 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x394648u, 0x394650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394650u;
label_394650:
    // 0x394650: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x394650u;
    {
        const bool branch_taken_0x394650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394650u;
        // 0x394654: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394650) {
            ctx->pc = 0x3948B4u;
            goto label_3948b4;
        }
    }
    ctx->pc = 0x394658u;
label_394658:
    // 0x394658: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x394658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x39465c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x39465cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x394660: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x394660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x394664: 0x8204000f  lb          $a0, 0xF($s0)
    ctx->pc = 0x394664u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x394668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x394668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39466c: 0x9205000f  lbu         $a1, 0xF($s0)
    ctx->pc = 0x39466cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x394670: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x394670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394674: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x394674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x394678: 0x14910005  bne         $a0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x394678u;
    {
        const bool branch_taken_0x394678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x39467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394678u;
        // 0x39467c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394678) {
            ctx->pc = 0x394690u;
            goto label_394690;
        }
    }
    ctx->pc = 0x394680u;
    // 0x394680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x394680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x394684: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x394684u;
    {
        const bool branch_taken_0x394684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394684u;
        // 0x394688: 0x24420120  addiu       $v0, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394684) {
            ctx->pc = 0x3946A0u;
            goto label_3946a0;
        }
    }
    ctx->pc = 0x39468Cu;
    // 0x39468c: 0x0  nop
    ctx->pc = 0x39468cu;
    // NOP
label_394690:
    // 0x394690: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x394690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x394694: 0x2442011c  addiu       $v0, $v0, 0x11C
    ctx->pc = 0x394694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x394698: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x394698u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x39469c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39469cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3946a0:
    // 0x3946a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3946a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3946a4: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x3946a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3946a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3946a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3946ac: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3946acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3946b0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3946B0u;
    {
        const bool branch_taken_0x3946b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3946B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946B0u;
        // 0x3946b4: 0x8e63ea88  lw          $v1, -0x1578($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946b0) {
            ctx->pc = 0x3946F0u;
            goto label_3946f0;
        }
    }
    ctx->pc = 0x3946B8u;
    // 0x3946b8: 0x8e62ea88  lw          $v0, -0x1578($s3)
    ctx->pc = 0x3946b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961800)));
    // 0x3946bc: 0x90460009  lbu         $a2, 0x9($v0)
    ctx->pc = 0x3946bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x3946c0: 0x9045000b  lbu         $a1, 0xB($v0)
    ctx->pc = 0x3946c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x3946c4: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x3946c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x3946c8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x3946c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3946cc: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x3946ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3946d0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3946d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3946d4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3946d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3946d8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3946d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3946dc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3946dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3946e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3946e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3946e4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3946E4u;
    {
        const bool branch_taken_0x3946e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3946E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946E4u;
        // 0x3946e8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946e4) {
            ctx->pc = 0x39472Cu;
            goto label_39472c;
        }
    }
    ctx->pc = 0x3946ECu;
    // 0x3946ec: 0x0  nop
    ctx->pc = 0x3946ecu;
    // NOP
label_3946f0:
    // 0x3946f0: 0x90660009  lbu         $a2, 0x9($v1)
    ctx->pc = 0x3946f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x3946f4: 0x9065000b  lbu         $a1, 0xB($v1)
    ctx->pc = 0x3946f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x3946f8: 0x9064000a  lbu         $a0, 0xA($v1)
    ctx->pc = 0x3946f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x3946fc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x3946fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x394700: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x394700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x394704: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x394704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x394708: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x394708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x39470c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x39470cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x394710: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x394710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x394714: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x394714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x394718: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x394718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x39471c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x39471cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x394720: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x394720u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x394724: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x394724u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x394728: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x394728u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_39472c:
    // 0x39472c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39472Cu;
    {
        const bool branch_taken_0x39472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39472Cu;
        // 0x394730: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39472c) {
            ctx->pc = 0x39474Cu;
            goto label_39474c;
        }
    }
    ctx->pc = 0x394734u;
    // 0x394734: 0x0  nop
    ctx->pc = 0x394734u;
    // NOP
label_394738:
    // 0x394738: 0xc0e5116  jal         func_394458
    ctx->pc = 0x394738u;
    SET_GPR_U32(ctx, 31, 0x394740u);
    ctx->pc = 0x39473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394738u;
    // 0x39473c: 0xaec2ea80  sw          $v0, -0x1580($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294961792), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394458u, 0x394738u, 0x394740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394740u;
label_394740:
    // 0x394740: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x394740u;
    {
        const bool branch_taken_0x394740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394740) {
            ctx->pc = 0x394858u;
            goto label_394858;
        }
    }
    ctx->pc = 0x394748u;
label_394748:
    // 0x394748: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x394748u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_39474c:
    // 0x39474c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39474cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x394750: 0x8c62ea8c  lw          $v0, -0x1574($v1)
    ctx->pc = 0x394750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FEA8Cu));
    // 0x394754: 0x2a240  sll         $s4, $v0, 9
    ctx->pc = 0x394754u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x394758: 0x234982a  slt         $s3, $s1, $s4
    ctx->pc = 0x394758u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x39475c: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x39475Cu;
    {
        const bool branch_taken_0x39475c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x394760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39475Cu;
        // 0x394760: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39475c) {
            ctx->pc = 0x394868u;
            goto label_394868;
        }
    }
    ctx->pc = 0x394764u;
    // 0x394764: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x394764u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x394768: 0x26b2ea74  addiu       $s2, $s5, -0x158C
    ctx->pc = 0x394768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961780));
    // 0x39476c: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x39476cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_394770:
    // 0x394770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x394770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394774: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x394774u;
    {
        const bool branch_taken_0x394774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x394778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394774u;
        // 0x394778: 0x8ee3ea88  lw          $v1, -0x1578($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294961800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394774) {
            ctx->pc = 0x3947D0u;
            goto label_3947d0;
        }
    }
    ctx->pc = 0x39477Cu;
    // 0x39477c: 0x8ee2ea88  lw          $v0, -0x1578($s7)
    ctx->pc = 0x39477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294961800)));
    // 0x394780: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x394780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x394784: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x394784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x394788: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x394788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39478c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x39478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x394790: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x394790u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x394794: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x394794u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x394798: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x394798u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x39479c: 0xfe3821  addu        $a3, $a3, $fp
    ctx->pc = 0x39479cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
    // 0x3947a0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3947a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3947a4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x3947a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3947a8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3947a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3947ac: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3947acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3947b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3947b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3947b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3947b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3947b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3947b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3947bc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3947bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3947c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3947c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3947c4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3947c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3947c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3947C8u;
    {
        const bool branch_taken_0x3947c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3947CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947C8u;
        // 0x3947cc: 0xae480000  sw          $t0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947c8) {
            ctx->pc = 0x394834u;
            goto label_394834;
        }
    }
    ctx->pc = 0x3947D0u;
label_3947d0:
    // 0x3947d0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3947d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3947d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3947d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3947d8: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x3947d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3947dc: 0x90450003  lbu         $a1, 0x3($v0)
    ctx->pc = 0x3947dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x3947e0: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x3947e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3947e4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x3947e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3947e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3947e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3947ec: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3947ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3947f0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3947f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3947f4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3947f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3947f8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3947f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3947fc: 0xc0e578c  jal         func_395E30
    ctx->pc = 0x3947FCu;
    SET_GPR_U32(ctx, 31, 0x394804u);
    ctx->pc = 0x394800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3947FCu;
    // 0x394800: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E30u, 0x3947FCu, 0x394804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394804u;
label_394804:
    // 0x394804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x394804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394808: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x394808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x39480c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x39480cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x394810: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x394810u;
    {
        const bool branch_taken_0x394810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394810u;
        // 0x394814: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394810) {
            ctx->pc = 0x394898u;
            goto label_394898;
        }
    }
    ctx->pc = 0x394818u;
    // 0x394818: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x394818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39481c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39481cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394820: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x394820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x394824: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x394824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x394828: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x394828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39482c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x39482cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_394830:
    // 0x394830: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x394830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_394834:
    // 0x394834: 0x8d22ea74  lw          $v0, -0x158C($t1)
    ctx->pc = 0x394834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294961780)));
    // 0x394838: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x394838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39483c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39483cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x394840: 0x5040ffbd  beql        $v0, $zero, . + 4 + (-0x43 << 2)
    ctx->pc = 0x394840u;
    {
        const bool branch_taken_0x394840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x394840) {
            ctx->pc = 0x394844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394840u;
            // 0x394844: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394738;
        }
    }
    ctx->pc = 0x394848u;
    // 0x394848: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x394848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x39484c: 0x234982a  slt         $s3, $s1, $s4
    ctx->pc = 0x39484cu;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x394850: 0x5660ffc7  bnel        $s3, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x394850u;
    {
        const bool branch_taken_0x394850 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x394850) {
            ctx->pc = 0x394854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394850u;
            // 0x394854: 0x8203000f  lb          $v1, 0xF($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394770;
        }
    }
    ctx->pc = 0x394858u;
label_394858:
    // 0x394858: 0x1660001f  bnez        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x394858u;
    {
        const bool branch_taken_0x394858 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x39485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394858u;
        // 0x39485c: 0x8ec2ea80  lw          $v0, -0x1580($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394858) {
            ctx->pc = 0x3948D8u;
            goto label_3948d8;
        }
    }
    ctx->pc = 0x394860u;
    // 0x394860: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x394860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x394864: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x394864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_394868:
    // 0x394868: 0x2451ea78  addiu       $s1, $v0, -0x1588
    ctx->pc = 0x394868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961784));
    // 0x39486c: 0x8c65ea8c  lw          $a1, -0x1574($v1)
    ctx->pc = 0x39486cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961804)));
    // 0x394870: 0x8ee6ea88  lw          $a2, -0x1578($s7)
    ctx->pc = 0x394870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294961800)));
    // 0x394874: 0xc0e550a  jal         func_395428
    ctx->pc = 0x394874u;
    SET_GPR_U32(ctx, 31, 0x39487Cu);
    ctx->pc = 0x394878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394874u;
    // 0x394878: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395428u, 0x394874u, 0x39487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39487Cu;
label_39487c:
    // 0x39487c: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x39487Cu;
    {
        const bool branch_taken_0x39487c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x394880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39487Cu;
        // 0x394880: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39487c) {
            ctx->pc = 0x3948C8u;
            goto label_3948c8;
        }
    }
    ctx->pc = 0x394884u;
    // 0x394884: 0xc0e5116  jal         func_394458
    ctx->pc = 0x394884u;
    SET_GPR_U32(ctx, 31, 0x39488Cu);
    ctx->pc = 0x394888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394884u;
    // 0x394888: 0xaec2ea80  sw          $v0, -0x1580($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294961792), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394458u, 0x394884u, 0x39488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39488Cu;
label_39488c:
    // 0x39488c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x39488Cu;
    {
        const bool branch_taken_0x39488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39488Cu;
        // 0x394890: 0x8ec2ea80  lw          $v0, -0x1580($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39488c) {
            ctx->pc = 0x3948D8u;
            goto label_3948d8;
        }
    }
    ctx->pc = 0x394894u;
    // 0x394894: 0x0  nop
    ctx->pc = 0x394894u;
    // NOP
label_394898:
    // 0x394898: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x394898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39489c: 0x26d0ea80  addiu       $s0, $s6, -0x1580
    ctx->pc = 0x39489cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961792));
    // 0x3948a0: 0x2484a720  addiu       $a0, $a0, -0x58E0
    ctx->pc = 0x3948a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944544));
label_3948a4:
    // 0x3948a4: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x3948A4u;
    SET_GPR_U32(ctx, 31, 0x3948ACu);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3948A4u, 0x3948ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3948ACu;
label_3948ac:
    // 0x3948ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3948acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3948b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3948b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3948b4:
    // 0x3948b4: 0xc0e5116  jal         func_394458
    ctx->pc = 0x3948B4u;
    SET_GPR_U32(ctx, 31, 0x3948BCu);
    ctx->pc = 0x394458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394458u, 0x3948B4u, 0x3948BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3948BCu;
label_3948bc:
    // 0x3948bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3948BCu;
    {
        const bool branch_taken_0x3948bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3948C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948BCu;
        // 0x3948c0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948bc) {
            ctx->pc = 0x3948D8u;
            goto label_3948d8;
        }
    }
    ctx->pc = 0x3948C4u;
    // 0x3948c4: 0x0  nop
    ctx->pc = 0x3948c4u;
    // NOP
label_3948c8:
    // 0x3948c8: 0xc0e56b2  jal         func_395AC8
    ctx->pc = 0x3948C8u;
    SET_GPR_U32(ctx, 31, 0x3948D0u);
    ctx->pc = 0x3948CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3948C8u;
    // 0x3948cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395AC8u, 0x3948C8u, 0x3948D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3948D0u;
label_3948d0:
    // 0x3948d0: 0xaec2ea80  sw          $v0, -0x1580($s6)
    ctx->pc = 0x3948d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294961792), GPR_U32(ctx, 2));
    // 0x3948d4: 0x8ec2ea80  lw          $v0, -0x1580($s6)
    ctx->pc = 0x3948d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961792)));
label_3948d8:
    // 0x3948d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3948d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3948dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3948dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3948e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3948e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3948e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3948e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3948e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3948e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3948ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3948ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3948f0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3948f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3948f4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3948f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3948f8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x3948f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3948fc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3948fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x394900: 0x3e00008  jr          $ra
    ctx->pc = 0x394900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394900u;
        // 0x394904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394908u;
}
