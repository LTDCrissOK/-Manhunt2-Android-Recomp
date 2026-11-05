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

// Function: sub_0016D488
// Address: 0x16d488 - 0x16d580
void sub_0016D488_0x16d488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D488_0x16d488");
#endif

    switch (ctx->pc) {
        case 0x16d4a0u: goto label_16d4a0;
        case 0x16d4b0u: goto label_16d4b0;
        case 0x16d4b8u: goto label_16d4b8;
        case 0x16d4c8u: goto label_16d4c8;
        case 0x16d4d8u: goto label_16d4d8;
        case 0x16d4e0u: goto label_16d4e0;
        case 0x16d4f0u: goto label_16d4f0;
        case 0x16d50cu: goto label_16d50c;
        case 0x16d51cu: goto label_16d51c;
        case 0x16d524u: goto label_16d524;
        case 0x16d534u: goto label_16d534;
        case 0x16d544u: goto label_16d544;
        case 0x16d554u: goto label_16d554;
        case 0x16d560u: goto label_16d560;
        case 0x16d568u: goto label_16d568;
        default: break;
    }

    ctx->pc = 0x16d488u;

    // 0x16d488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d48c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d498: 0xc05ba26  jal         func_16E898
    ctx->pc = 0x16D498u;
    SET_GPR_U32(ctx, 31, 0x16D4A0u);
    ctx->pc = 0x16D49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D498u;
    // 0x16d49c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E898u, 0x16D498u, 0x16D4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4A0u;
label_16d4a0:
    // 0x16d4a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D4A0u;
    {
        const bool branch_taken_0x16d4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d4a0) {
            ctx->pc = 0x16D4C0u;
            goto label_16d4c0;
        }
    }
    ctx->pc = 0x16D4A8u;
    // 0x16d4a8: 0xc05b980  jal         func_16E600
    ctx->pc = 0x16D4A8u;
    SET_GPR_U32(ctx, 31, 0x16D4B0u);
    ctx->pc = 0x16D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4A8u;
    // 0x16d4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E600u, 0x16D4A8u, 0x16D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4B0u;
label_16d4b0:
    // 0x16d4b0: 0xc05b8b0  jal         func_16E2C0
    ctx->pc = 0x16D4B0u;
    SET_GPR_U32(ctx, 31, 0x16D4B8u);
    ctx->pc = 0x16D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4B0u;
    // 0x16d4b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E2C0u, 0x16D4B0u, 0x16D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4B8u;
label_16d4b8:
    // 0x16d4b8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16D4B8u;
    {
        const bool branch_taken_0x16d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4B8u;
        // 0x16d4bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4b8) {
            ctx->pc = 0x16D56Cu;
            goto label_16d56c;
        }
    }
    ctx->pc = 0x16D4C0u;
label_16d4c0:
    // 0x16d4c0: 0xc05bd66  jal         func_16F598
    ctx->pc = 0x16D4C0u;
    SET_GPR_U32(ctx, 31, 0x16D4C8u);
    ctx->pc = 0x16D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4C0u;
    // 0x16d4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F598u, 0x16D4C0u, 0x16D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4C8u;
label_16d4c8:
    // 0x16d4c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D4C8u;
    {
        const bool branch_taken_0x16d4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d4c8) {
            ctx->pc = 0x16D4E8u;
            goto label_16d4e8;
        }
    }
    ctx->pc = 0x16D4D0u;
    // 0x16d4d0: 0xc05b980  jal         func_16E600
    ctx->pc = 0x16D4D0u;
    SET_GPR_U32(ctx, 31, 0x16D4D8u);
    ctx->pc = 0x16D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4D0u;
    // 0x16d4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E600u, 0x16D4D0u, 0x16D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4D8u;
label_16d4d8:
    // 0x16d4d8: 0xc05b94a  jal         func_16E528
    ctx->pc = 0x16D4D8u;
    SET_GPR_U32(ctx, 31, 0x16D4E0u);
    ctx->pc = 0x16D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4D8u;
    // 0x16d4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E528u, 0x16D4D8u, 0x16D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4E0u;
label_16d4e0:
    // 0x16d4e0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16D4E0u;
    {
        const bool branch_taken_0x16d4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4E0u;
        // 0x16d4e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4e0) {
            ctx->pc = 0x16D56Cu;
            goto label_16d56c;
        }
    }
    ctx->pc = 0x16D4E8u;
label_16d4e8:
    // 0x16d4e8: 0xc05a618  jal         func_169860
    ctx->pc = 0x16D4E8u;
    SET_GPR_U32(ctx, 31, 0x16D4F0u);
    ctx->pc = 0x16D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4E8u;
    // 0x16d4ec: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16D4E8u, 0x16D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4F0u;
label_16d4f0:
    // 0x16d4f0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16d4f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d4f8: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16d4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d500: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d504: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x16D504u;
    SET_GPR_U32(ctx, 31, 0x16D50Cu);
    ctx->pc = 0x16D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D504u;
    // 0x16d508: 0x8c71020c  lw          $s1, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x16D504u, 0x16D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D50Cu;
label_16d50c:
    // 0x16d50c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16D50Cu;
    {
        const bool branch_taken_0x16d50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d50c) {
            ctx->pc = 0x16D53Cu;
            goto label_16d53c;
        }
    }
    ctx->pc = 0x16D514u;
    // 0x16d514: 0xc05b980  jal         func_16E600
    ctx->pc = 0x16D514u;
    SET_GPR_U32(ctx, 31, 0x16D51Cu);
    ctx->pc = 0x16D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D514u;
    // 0x16d518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E600u, 0x16D514u, 0x16D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D51Cu;
label_16d51c:
    // 0x16d51c: 0xc05b774  jal         func_16DDD0
    ctx->pc = 0x16D51Cu;
    SET_GPR_U32(ctx, 31, 0x16D524u);
    ctx->pc = 0x16D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D51Cu;
    // 0x16d520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DDD0u, 0x16D51Cu, 0x16D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D524u;
label_16d524:
    // 0x16d524: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x16D524u;
    {
        const bool branch_taken_0x16d524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d524) {
            ctx->pc = 0x16D528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D524u;
            // 0x16d528: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D56Cu;
            goto label_16d56c;
        }
    }
    ctx->pc = 0x16D52Cu;
    // 0x16d52c: 0xc05b7ce  jal         func_16DF38
    ctx->pc = 0x16D52Cu;
    SET_GPR_U32(ctx, 31, 0x16D534u);
    ctx->pc = 0x16D530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D52Cu;
    // 0x16d530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF38u, 0x16D52Cu, 0x16D534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D534u;
label_16d534:
    // 0x16d534: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16D534u;
    {
        const bool branch_taken_0x16d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D534u;
        // 0x16d538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d534) {
            ctx->pc = 0x16D56Cu;
            goto label_16d56c;
        }
    }
    ctx->pc = 0x16D53Cu;
label_16d53c:
    // 0x16d53c: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16D53Cu;
    SET_GPR_U32(ctx, 31, 0x16D544u);
    ctx->pc = 0x16D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D53Cu;
    // 0x16d540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16D53Cu, 0x16D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D544u;
label_16d544:
    // 0x16d544: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D544u;
    {
        const bool branch_taken_0x16d544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d544) {
            ctx->pc = 0x16D548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D544u;
            // 0x16d548: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D56Cu;
            goto label_16d56c;
        }
    }
    ctx->pc = 0x16D54Cu;
    // 0x16d54c: 0xc05b980  jal         func_16E600
    ctx->pc = 0x16D54Cu;
    SET_GPR_U32(ctx, 31, 0x16D554u);
    ctx->pc = 0x16D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D54Cu;
    // 0x16d550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E600u, 0x16D54Cu, 0x16D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D554u;
label_16d554:
    // 0x16d554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d558: 0xc05b7f0  jal         func_16DFC0
    ctx->pc = 0x16D558u;
    SET_GPR_U32(ctx, 31, 0x16D560u);
    ctx->pc = 0x16D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D558u;
    // 0x16d55c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DFC0u, 0x16D558u, 0x16D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D560u;
label_16d560:
    // 0x16d560: 0xc05be2a  jal         func_16F8A8
    ctx->pc = 0x16D560u;
    SET_GPR_U32(ctx, 31, 0x16D568u);
    ctx->pc = 0x16D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D560u;
    // 0x16d564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F8A8u, 0x16D560u, 0x16D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D568u;
label_16d568:
    // 0x16d568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d56c:
    // 0x16d56c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16d56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d574: 0x3e00008  jr          $ra
    ctx->pc = 0x16D574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D574u;
        // 0x16d578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D57Cu;
    // 0x16d57c: 0x0  nop
    ctx->pc = 0x16d57cu;
    // NOP
    ctx->pc = 0x16d580u;
}
