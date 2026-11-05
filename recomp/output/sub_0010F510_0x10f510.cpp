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

// Function: sub_0010F510
// Address: 0x10f510 - 0x10f758
void sub_0010F510_0x10f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F510_0x10f510");
#endif

    switch (ctx->pc) {
        case 0x10f548u: goto label_10f548;
        case 0x10f59cu: goto label_10f59c;
        case 0x10f5a8u: goto label_10f5a8;
        case 0x10f5b4u: goto label_10f5b4;
        case 0x10f5c0u: goto label_10f5c0;
        case 0x10f5ccu: goto label_10f5cc;
        case 0x10f5d8u: goto label_10f5d8;
        case 0x10f5fcu: goto label_10f5fc;
        case 0x10f604u: goto label_10f604;
        case 0x10f63cu: goto label_10f63c;
        case 0x10f65cu: goto label_10f65c;
        case 0x10f66cu: goto label_10f66c;
        case 0x10f67cu: goto label_10f67c;
        case 0x10f688u: goto label_10f688;
        case 0x10f6ccu: goto label_10f6cc;
        default: break;
    }

    ctx->pc = 0x10f510u;

    // 0x10f510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10f518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10f51c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10f51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10f520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10f524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10f524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f528: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10f52c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x10f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10f530: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F530u;
    {
        const bool branch_taken_0x10f530 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F530u;
        // 0x10f534: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f530) {
            ctx->pc = 0x10F540u;
            goto label_10f540;
        }
    }
    ctx->pc = 0x10F538u;
    // 0x10f538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F538u;
    {
        const bool branch_taken_0x10f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F538u;
        // 0x10f53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f538) {
            ctx->pc = 0x10F548u;
            goto label_10f548;
        }
    }
    ctx->pc = 0x10F540u;
label_10f540:
    // 0x10f540: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x10F540u;
    SET_GPR_U32(ctx, 31, 0x10F548u);
    ctx->pc = 0x10F544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F540u;
    // 0x10f544: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x10F540u, 0x10F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F548u;
label_10f548:
    // 0x10f548: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x10F548u;
    {
        const bool branch_taken_0x10f548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f548) {
            ctx->pc = 0x10F54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F548u;
            // 0x10f54c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F740u;
            goto label_10f740;
        }
    }
    ctx->pc = 0x10F550u;
    // 0x10f550: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x10f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x10f554: 0x5440007a  bnel        $v0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x10F554u;
    {
        const bool branch_taken_0x10f554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f554) {
            ctx->pc = 0x10F558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F554u;
            // 0x10f558: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F740u;
            goto label_10f740;
        }
    }
    ctx->pc = 0x10F55Cu;
    // 0x10f55c: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x10f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x10f560: 0x12020076  beq         $s0, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x10F560u;
    {
        const bool branch_taken_0x10f560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F560u;
        // 0x10f564: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f560) {
            ctx->pc = 0x10F73Cu;
            goto label_10f73c;
        }
    }
    ctx->pc = 0x10F568u;
    // 0x10f568: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x10f568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10f56c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10f570: 0xae3000e8  sw          $s0, 0xE8($s1)
    ctx->pc = 0x10f570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
    // 0x10f574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10f574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10f578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10f57c: 0x8c520108  lw          $s2, 0x108($v0)
    ctx->pc = 0x10f57cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10f580: 0x5240006f  beql        $s2, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x10F580u;
    {
        const bool branch_taken_0x10f580 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f580) {
            ctx->pc = 0x10F584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F580u;
            // 0x10f584: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F740u;
            goto label_10f740;
        }
    }
    ctx->pc = 0x10F588u;
    // 0x10f588: 0x56000048  bnel        $s0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x10F588u;
    {
        const bool branch_taken_0x10f588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f588) {
            ctx->pc = 0x10F58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F588u;
            // 0x10f58c: 0x8e430ff0  lw          $v1, 0xFF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F6ACu;
            goto label_10f6ac;
        }
    }
    ctx->pc = 0x10F590u;
    // 0x10f590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f594: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x10F594u;
    SET_GPR_U32(ctx, 31, 0x10F59Cu);
    ctx->pc = 0x10F598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F594u;
    // 0x10f598: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x10F594u, 0x10F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F59Cu;
label_10f59c:
    // 0x10f59c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5a0: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x10F5A0u;
    SET_GPR_U32(ctx, 31, 0x10F5A8u);
    ctx->pc = 0x10F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5A0u;
    // 0x10f5a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x10F5A0u, 0x10F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5A8u;
label_10f5a8:
    // 0x10f5a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5ac: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x10F5ACu;
    SET_GPR_U32(ctx, 31, 0x10F5B4u);
    ctx->pc = 0x10F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5ACu;
    // 0x10f5b0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x10F5ACu, 0x10F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5B4u;
label_10f5b4:
    // 0x10f5b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5b8: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x10F5B8u;
    SET_GPR_U32(ctx, 31, 0x10F5C0u);
    ctx->pc = 0x10F5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5B8u;
    // 0x10f5bc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x10F5B8u, 0x10F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5C0u;
label_10f5c0:
    // 0x10f5c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5c4: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x10F5C4u;
    SET_GPR_U32(ctx, 31, 0x10F5CCu);
    ctx->pc = 0x10F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5C4u;
    // 0x10f5c8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x10F5C4u, 0x10F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5CCu;
label_10f5cc:
    // 0x10f5cc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x10f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10f5d0: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x10F5D0u;
    SET_GPR_U32(ctx, 31, 0x10F5D8u);
    ctx->pc = 0x10F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5D0u;
    // 0x10f5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x10F5D0u, 0x10F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5D8u;
label_10f5d8:
    // 0x10f5d8: 0x8e430ff0  lw          $v1, 0xFF0($s2)
    ctx->pc = 0x10f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4080)));
    // 0x10f5dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f5e0: 0xac600158  sw          $zero, 0x158($v1)
    ctx->pc = 0x10f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 0));
    // 0x10f5e4: 0x8e420ff0  lw          $v0, 0xFF0($s2)
    ctx->pc = 0x10f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4080)));
    // 0x10f5e8: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x10f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
    // 0x10f5ec: 0x8e430ff0  lw          $v1, 0xFF0($s2)
    ctx->pc = 0x10f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4080)));
    // 0x10f5f0: 0xac640178  sw          $a0, 0x178($v1)
    ctx->pc = 0x10f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 376), GPR_U32(ctx, 4));
    // 0x10f5f4: 0xc06b9c0  jal         func_1AE700
    ctx->pc = 0x10F5F4u;
    SET_GPR_U32(ctx, 31, 0x10F5FCu);
    ctx->pc = 0x10F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5F4u;
    // 0x10f5f8: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE700u, 0x10F5F4u, 0x10F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5FCu;
label_10f5fc:
    // 0x10f5fc: 0xc09536e  jal         func_254DB8
    ctx->pc = 0x10F5FCu;
    SET_GPR_U32(ctx, 31, 0x10F604u);
    ctx->pc = 0x10F600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5FCu;
    // 0x10f600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DB8u, 0x10F5FCu, 0x10F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F604u;
label_10f604:
    // 0x10f604: 0x8e220244  lw          $v0, 0x244($s1)
    ctx->pc = 0x10f604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x10f608: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x10F608u;
    {
        const bool branch_taken_0x10f608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f608) {
            ctx->pc = 0x10F60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F608u;
            // 0x10f60c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F740u;
            goto label_10f740;
        }
    }
    ctx->pc = 0x10F610u;
    // 0x10f610: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x10f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x10f614: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x10F614u;
    {
        const bool branch_taken_0x10f614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F614u;
        // 0x10f618: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f614) {
            ctx->pc = 0x10F740u;
            goto label_10f740;
        }
    }
    ctx->pc = 0x10F61Cu;
    // 0x10f61c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x10f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x10f620: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x10F620u;
    {
        const bool branch_taken_0x10f620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f620) {
            ctx->pc = 0x10F740u;
            goto label_10f740;
        }
    }
    ctx->pc = 0x10F628u;
    // 0x10f628: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x10f628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x10f62c: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x10F62Cu;
    {
        const bool branch_taken_0x10f62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f62c) {
            ctx->pc = 0x10F630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F62Cu;
            // 0x10f630: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F744u;
            goto label_10f744;
        }
    }
    ctx->pc = 0x10F634u;
    // 0x10f634: 0xc044f48  jal         func_113D20
    ctx->pc = 0x10F634u;
    SET_GPR_U32(ctx, 31, 0x10F63Cu);
    ctx->pc = 0x10F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F634u;
    // 0x10f638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D20u, 0x10F634u, 0x10F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F63Cu;
label_10f63c:
    // 0x10f63c: 0x8e43041c  lw          $v1, 0x41C($s2)
    ctx->pc = 0x10f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1052)));
    // 0x10f640: 0xae40041c  sw          $zero, 0x41C($s2)
    ctx->pc = 0x10f640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1052), GPR_U32(ctx, 0));
    // 0x10f644: 0xae430420  sw          $v1, 0x420($s2)
    ctx->pc = 0x10f644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1056), GPR_U32(ctx, 3));
    // 0x10f648: 0x8e2201dc  lw          $v0, 0x1DC($s1)
    ctx->pc = 0x10f648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x10f64c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10F64Cu;
    {
        const bool branch_taken_0x10f64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f64c) {
            ctx->pc = 0x10F650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F64Cu;
            // 0x10f650: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F674u;
            goto label_10f674;
        }
    }
    ctx->pc = 0x10F654u;
    // 0x10f654: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x10F654u;
    SET_GPR_U32(ctx, 31, 0x10F65Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x10F654u, 0x10F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F65Cu;
label_10f65c:
    // 0x10f65c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10f660: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x10f660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x10f664: 0xc06994a  jal         func_1A6528
    ctx->pc = 0x10F664u;
    SET_GPR_U32(ctx, 31, 0x10F66Cu);
    ctx->pc = 0x10F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F664u;
    // 0x10f668: 0x24450459  addiu       $a1, $v0, 0x459 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6528u, 0x10F664u, 0x10F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F66Cu;
label_10f66c:
    // 0x10f66c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10F66Cu;
    {
        const bool branch_taken_0x10f66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F66Cu;
        // 0x10f670: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f66c) {
            ctx->pc = 0x10F680u;
            goto label_10f680;
        }
    }
    ctx->pc = 0x10F674u;
label_10f674:
    // 0x10f674: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x10F674u;
    SET_GPR_U32(ctx, 31, 0x10F67Cu);
    ctx->pc = 0x10F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F674u;
    // 0x10f678: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x10F674u, 0x10F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F67Cu;
label_10f67c:
    // 0x10f67c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x10f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_10f680:
    // 0x10f680: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x10F680u;
    SET_GPR_U32(ctx, 31, 0x10F688u);
    ctx->pc = 0x10F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F680u;
    // 0x10f684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x10F680u, 0x10F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F688u;
label_10f688:
    // 0x10f688: 0xde431020  ld          $v1, 0x1020($s2)
    ctx->pc = 0x10f688u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 4128)));
    // 0x10f68c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x10f68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f690: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x10f690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x10f694: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x10f694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f698: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x10f698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x10f69c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10f69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x10f6a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f6a4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x10F6A4u;
    {
        const bool branch_taken_0x10f6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6A4u;
        // 0x10f6a8: 0xfe431020  sd          $v1, 0x1020($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 4128), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6a4) {
            ctx->pc = 0x10F73Cu;
            goto label_10f73c;
        }
    }
    ctx->pc = 0x10F6ACu;
label_10f6ac:
    // 0x10f6ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10f6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f6b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f6b4: 0xac700158  sw          $s0, 0x158($v1)
    ctx->pc = 0x10f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 16));
    // 0x10f6b8: 0x8e420ff0  lw          $v0, 0xFF0($s2)
    ctx->pc = 0x10f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4080)));
    // 0x10f6bc: 0xac500160  sw          $s0, 0x160($v0)
    ctx->pc = 0x10f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 16));
    // 0x10f6c0: 0x8e430ff0  lw          $v1, 0xFF0($s2)
    ctx->pc = 0x10f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4080)));
    // 0x10f6c4: 0xc09537c  jal         func_254DF0
    ctx->pc = 0x10F6C4u;
    SET_GPR_U32(ctx, 31, 0x10F6CCu);
    ctx->pc = 0x10F6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6C4u;
    // 0x10f6c8: 0xac600178  sw          $zero, 0x178($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 376), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DF0u, 0x10F6C4u, 0x10F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6CCu;
label_10f6cc:
    // 0x10f6cc: 0x8e220244  lw          $v0, 0x244($s1)
    ctx->pc = 0x10f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x10f6d0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10F6D0u;
    {
        const bool branch_taken_0x10f6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6D0u;
        // 0x10f6d4: 0xae3000ec  sw          $s0, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6d0) {
            ctx->pc = 0x10F73Cu;
            goto label_10f73c;
        }
    }
    ctx->pc = 0x10F6D8u;
    // 0x10f6d8: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x10f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x10f6dc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10F6DCu;
    {
        const bool branch_taken_0x10f6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6DCu;
        // 0x10f6e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6dc) {
            ctx->pc = 0x10F740u;
            goto label_10f740;
        }
    }
    ctx->pc = 0x10F6E4u;
    // 0x10f6e4: 0xde441020  ld          $a0, 0x1020($s2)
    ctx->pc = 0x10f6e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 4128)));
    // 0x10f6e8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x10f6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f6ec: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x10f6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x10f6f0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f6f4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10F6F4u;
    {
        const bool branch_taken_0x10f6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6F4u;
        // 0x10f6f8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6f4) {
            ctx->pc = 0x10F744u;
            goto label_10f744;
        }
    }
    ctx->pc = 0x10F6FCu;
    // 0x10f6fc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x10f6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f700: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x10f700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x10f704: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f708: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10F708u;
    {
        const bool branch_taken_0x10f708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f708) {
            ctx->pc = 0x10F744u;
            goto label_10f744;
        }
    }
    ctx->pc = 0x10F710u;
    // 0x10f710: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x10f710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x10f714: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10f714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10f718: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x10f718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x10f71c: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x10f71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x10f720: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x10f720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x10f724: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10f724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10f728: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x10f728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x10f72c: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x10f72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x10f730: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f734: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10f734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10f738: 0xfe421020  sd          $v0, 0x1020($s2)
    ctx->pc = 0x10f738u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4128), GPR_U64(ctx, 2));
label_10f73c:
    // 0x10f73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f740:
    // 0x10f740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10f744:
    // 0x10f744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10f744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f748: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10f748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f74c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F74Cu;
        // 0x10f750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F754u;
    // 0x10f754: 0x0  nop
    ctx->pc = 0x10f754u;
    // NOP
    ctx->pc = 0x10f758u;
}
