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

// Function: sub_0011D478
// Address: 0x11d478 - 0x11d9f0
void sub_0011D478_0x11d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D478_0x11d478");
#endif

    switch (ctx->pc) {
        case 0x11d498u: goto label_11d498;
        case 0x11d4b4u: goto label_11d4b4;
        case 0x11d4d0u: goto label_11d4d0;
        case 0x11d4ecu: goto label_11d4ec;
        case 0x11d508u: goto label_11d508;
        case 0x11d524u: goto label_11d524;
        case 0x11d540u: goto label_11d540;
        case 0x11d55cu: goto label_11d55c;
        case 0x11d578u: goto label_11d578;
        case 0x11d594u: goto label_11d594;
        case 0x11d5b0u: goto label_11d5b0;
        case 0x11d5ccu: goto label_11d5cc;
        case 0x11d5e8u: goto label_11d5e8;
        case 0x11d604u: goto label_11d604;
        case 0x11d620u: goto label_11d620;
        case 0x11d63cu: goto label_11d63c;
        case 0x11d658u: goto label_11d658;
        case 0x11d674u: goto label_11d674;
        case 0x11d690u: goto label_11d690;
        case 0x11d6acu: goto label_11d6ac;
        case 0x11d6c8u: goto label_11d6c8;
        case 0x11d6e4u: goto label_11d6e4;
        case 0x11d700u: goto label_11d700;
        case 0x11d71cu: goto label_11d71c;
        case 0x11d738u: goto label_11d738;
        case 0x11d754u: goto label_11d754;
        case 0x11d770u: goto label_11d770;
        case 0x11d78cu: goto label_11d78c;
        case 0x11d7a8u: goto label_11d7a8;
        case 0x11d7c4u: goto label_11d7c4;
        case 0x11d7e0u: goto label_11d7e0;
        case 0x11d7fcu: goto label_11d7fc;
        case 0x11d818u: goto label_11d818;
        case 0x11d834u: goto label_11d834;
        case 0x11d850u: goto label_11d850;
        case 0x11d86cu: goto label_11d86c;
        case 0x11d888u: goto label_11d888;
        case 0x11d8a4u: goto label_11d8a4;
        case 0x11d8c0u: goto label_11d8c0;
        case 0x11d8dcu: goto label_11d8dc;
        case 0x11d8f8u: goto label_11d8f8;
        case 0x11d914u: goto label_11d914;
        case 0x11d928u: goto label_11d928;
        case 0x11d944u: goto label_11d944;
        case 0x11d960u: goto label_11d960;
        case 0x11d97cu: goto label_11d97c;
        case 0x11d998u: goto label_11d998;
        case 0x11d9b4u: goto label_11d9b4;
        case 0x11d9c8u: goto label_11d9c8;
        default: break;
    }

    ctx->pc = 0x11d478u;

    // 0x11d478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d47c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d480: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11d480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d484: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11d484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11d488: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11d488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11d48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d490: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D490u;
    SET_GPR_U32(ctx, 31, 0x11D498u);
    ctx->pc = 0x11D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D490u;
    // 0x11d494: 0x24a5bf40  addiu       $a1, $a1, -0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D490u, 0x11D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D498u;
label_11d498:
    // 0x11d498: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D498u;
    {
        const bool branch_taken_0x11d498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D498u;
        // 0x11d49c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d498) {
            ctx->pc = 0x11D4A8u;
            goto label_11d4a8;
        }
    }
    ctx->pc = 0x11D4A0u;
    // 0x11d4a0: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x11D4A0u;
    {
        const bool branch_taken_0x11d4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4A0u;
        // 0x11d4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4a0) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D4A8u;
label_11d4a8:
    // 0x11d4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4ac: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D4ACu;
    SET_GPR_U32(ctx, 31, 0x11D4B4u);
    ctx->pc = 0x11D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4ACu;
    // 0x11d4b0: 0x24a5bf50  addiu       $a1, $a1, -0x40B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D4ACu, 0x11D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4B4u;
label_11d4b4:
    // 0x11d4b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D4B4u;
    {
        const bool branch_taken_0x11d4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4B4u;
        // 0x11d4b8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4b4) {
            ctx->pc = 0x11D4C4u;
            goto label_11d4c4;
        }
    }
    ctx->pc = 0x11D4BCu;
    // 0x11d4bc: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x11D4BCu;
    {
        const bool branch_taken_0x11d4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4BCu;
        // 0x11d4c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4bc) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D4C4u;
label_11d4c4:
    // 0x11d4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4c8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D4C8u;
    SET_GPR_U32(ctx, 31, 0x11D4D0u);
    ctx->pc = 0x11D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4C8u;
    // 0x11d4cc: 0x24a5bf60  addiu       $a1, $a1, -0x40A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D4C8u, 0x11D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4D0u;
label_11d4d0:
    // 0x11d4d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D4D0u;
    {
        const bool branch_taken_0x11d4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4D0u;
        // 0x11d4d4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4d0) {
            ctx->pc = 0x11D4E0u;
            goto label_11d4e0;
        }
    }
    ctx->pc = 0x11D4D8u;
    // 0x11d4d8: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x11D4D8u;
    {
        const bool branch_taken_0x11d4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4D8u;
        // 0x11d4dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4d8) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D4E0u;
label_11d4e0:
    // 0x11d4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4e4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D4E4u;
    SET_GPR_U32(ctx, 31, 0x11D4ECu);
    ctx->pc = 0x11D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4E4u;
    // 0x11d4e8: 0x24a5bf78  addiu       $a1, $a1, -0x4088 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D4E4u, 0x11D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4ECu;
label_11d4ec:
    // 0x11d4ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D4ECu;
    {
        const bool branch_taken_0x11d4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4ECu;
        // 0x11d4f0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4ec) {
            ctx->pc = 0x11D4FCu;
            goto label_11d4fc;
        }
    }
    ctx->pc = 0x11D4F4u;
    // 0x11d4f4: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x11D4F4u;
    {
        const bool branch_taken_0x11d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4F4u;
        // 0x11d4f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4f4) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D4FCu;
label_11d4fc:
    // 0x11d4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d500: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D500u;
    SET_GPR_U32(ctx, 31, 0x11D508u);
    ctx->pc = 0x11D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D500u;
    // 0x11d504: 0x24a5bf88  addiu       $a1, $a1, -0x4078 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D500u, 0x11D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D508u;
label_11d508:
    // 0x11d508: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D508u;
    {
        const bool branch_taken_0x11d508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D508u;
        // 0x11d50c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d508) {
            ctx->pc = 0x11D518u;
            goto label_11d518;
        }
    }
    ctx->pc = 0x11D510u;
    // 0x11d510: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x11D510u;
    {
        const bool branch_taken_0x11d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D510u;
        // 0x11d514: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d510) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D518u;
label_11d518:
    // 0x11d518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d51c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D51Cu;
    SET_GPR_U32(ctx, 31, 0x11D524u);
    ctx->pc = 0x11D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D51Cu;
    // 0x11d520: 0x24a5bfa0  addiu       $a1, $a1, -0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D51Cu, 0x11D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D524u;
label_11d524:
    // 0x11d524: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D524u;
    {
        const bool branch_taken_0x11d524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D524u;
        // 0x11d528: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d524) {
            ctx->pc = 0x11D534u;
            goto label_11d534;
        }
    }
    ctx->pc = 0x11D52Cu;
    // 0x11d52c: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x11D52Cu;
    {
        const bool branch_taken_0x11d52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D52Cu;
        // 0x11d530: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d52c) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D534u;
label_11d534:
    // 0x11d534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d538: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D538u;
    SET_GPR_U32(ctx, 31, 0x11D540u);
    ctx->pc = 0x11D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D538u;
    // 0x11d53c: 0x24a5bfb0  addiu       $a1, $a1, -0x4050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D538u, 0x11D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D540u;
label_11d540:
    // 0x11d540: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D540u;
    {
        const bool branch_taken_0x11d540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D540u;
        // 0x11d544: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d540) {
            ctx->pc = 0x11D550u;
            goto label_11d550;
        }
    }
    ctx->pc = 0x11D548u;
    // 0x11d548: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x11D548u;
    {
        const bool branch_taken_0x11d548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D548u;
        // 0x11d54c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d548) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D550u;
label_11d550:
    // 0x11d550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d554: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D554u;
    SET_GPR_U32(ctx, 31, 0x11D55Cu);
    ctx->pc = 0x11D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D554u;
    // 0x11d558: 0x24a5bfc8  addiu       $a1, $a1, -0x4038 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D554u, 0x11D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D55Cu;
label_11d55c:
    // 0x11d55c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D55Cu;
    {
        const bool branch_taken_0x11d55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D55Cu;
        // 0x11d560: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d55c) {
            ctx->pc = 0x11D56Cu;
            goto label_11d56c;
        }
    }
    ctx->pc = 0x11D564u;
    // 0x11d564: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x11D564u;
    {
        const bool branch_taken_0x11d564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D564u;
        // 0x11d568: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d564) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D56Cu;
label_11d56c:
    // 0x11d56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d570: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D570u;
    SET_GPR_U32(ctx, 31, 0x11D578u);
    ctx->pc = 0x11D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D570u;
    // 0x11d574: 0x24a5bfe0  addiu       $a1, $a1, -0x4020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D570u, 0x11D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D578u;
label_11d578:
    // 0x11d578: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D578u;
    {
        const bool branch_taken_0x11d578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D578u;
        // 0x11d57c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d578) {
            ctx->pc = 0x11D588u;
            goto label_11d588;
        }
    }
    ctx->pc = 0x11D580u;
    // 0x11d580: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x11D580u;
    {
        const bool branch_taken_0x11d580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D580u;
        // 0x11d584: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d580) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D588u;
label_11d588:
    // 0x11d588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d58c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D58Cu;
    SET_GPR_U32(ctx, 31, 0x11D594u);
    ctx->pc = 0x11D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D58Cu;
    // 0x11d590: 0x24a5bff8  addiu       $a1, $a1, -0x4008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D58Cu, 0x11D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D594u;
label_11d594:
    // 0x11d594: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D594u;
    {
        const bool branch_taken_0x11d594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D594u;
        // 0x11d598: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d594) {
            ctx->pc = 0x11D5A4u;
            goto label_11d5a4;
        }
    }
    ctx->pc = 0x11D59Cu;
    // 0x11d59c: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x11D59Cu;
    {
        const bool branch_taken_0x11d59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D59Cu;
        // 0x11d5a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d59c) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D5A4u;
label_11d5a4:
    // 0x11d5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5a8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D5A8u;
    SET_GPR_U32(ctx, 31, 0x11D5B0u);
    ctx->pc = 0x11D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5A8u;
    // 0x11d5ac: 0x24a5c008  addiu       $a1, $a1, -0x3FF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D5A8u, 0x11D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5B0u;
label_11d5b0:
    // 0x11d5b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D5B0u;
    {
        const bool branch_taken_0x11d5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5B0u;
        // 0x11d5b4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5b0) {
            ctx->pc = 0x11D5C0u;
            goto label_11d5c0;
        }
    }
    ctx->pc = 0x11D5B8u;
    // 0x11d5b8: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x11D5B8u;
    {
        const bool branch_taken_0x11d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5B8u;
        // 0x11d5bc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5b8) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D5C0u;
label_11d5c0:
    // 0x11d5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5c4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D5C4u;
    SET_GPR_U32(ctx, 31, 0x11D5CCu);
    ctx->pc = 0x11D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5C4u;
    // 0x11d5c8: 0x24a5c020  addiu       $a1, $a1, -0x3FE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D5C4u, 0x11D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5CCu;
label_11d5cc:
    // 0x11d5cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D5CCu;
    {
        const bool branch_taken_0x11d5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5CCu;
        // 0x11d5d0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5cc) {
            ctx->pc = 0x11D5DCu;
            goto label_11d5dc;
        }
    }
    ctx->pc = 0x11D5D4u;
    // 0x11d5d4: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x11D5D4u;
    {
        const bool branch_taken_0x11d5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5D4u;
        // 0x11d5d8: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5d4) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D5DCu;
label_11d5dc:
    // 0x11d5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5e0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D5E0u;
    SET_GPR_U32(ctx, 31, 0x11D5E8u);
    ctx->pc = 0x11D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5E0u;
    // 0x11d5e4: 0x24a5c040  addiu       $a1, $a1, -0x3FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D5E0u, 0x11D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5E8u;
label_11d5e8:
    // 0x11d5e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D5E8u;
    {
        const bool branch_taken_0x11d5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5E8u;
        // 0x11d5ec: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5e8) {
            ctx->pc = 0x11D5F8u;
            goto label_11d5f8;
        }
    }
    ctx->pc = 0x11D5F0u;
    // 0x11d5f0: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x11D5F0u;
    {
        const bool branch_taken_0x11d5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5F0u;
        // 0x11d5f4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5f0) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D5F8u;
label_11d5f8:
    // 0x11d5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5fc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D5FCu;
    SET_GPR_U32(ctx, 31, 0x11D604u);
    ctx->pc = 0x11D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5FCu;
    // 0x11d600: 0x24a5c058  addiu       $a1, $a1, -0x3FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D5FCu, 0x11D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D604u;
label_11d604:
    // 0x11d604: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D604u;
    {
        const bool branch_taken_0x11d604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D604u;
        // 0x11d608: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d604) {
            ctx->pc = 0x11D614u;
            goto label_11d614;
        }
    }
    ctx->pc = 0x11D60Cu;
    // 0x11d60c: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x11D60Cu;
    {
        const bool branch_taken_0x11d60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D60Cu;
        // 0x11d610: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d60c) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D614u;
label_11d614:
    // 0x11d614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d618: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D618u;
    SET_GPR_U32(ctx, 31, 0x11D620u);
    ctx->pc = 0x11D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D618u;
    // 0x11d61c: 0x24a5c070  addiu       $a1, $a1, -0x3F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D618u, 0x11D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D620u;
label_11d620:
    // 0x11d620: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D620u;
    {
        const bool branch_taken_0x11d620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D620u;
        // 0x11d624: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d620) {
            ctx->pc = 0x11D630u;
            goto label_11d630;
        }
    }
    ctx->pc = 0x11D628u;
    // 0x11d628: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x11D628u;
    {
        const bool branch_taken_0x11d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D628u;
        // 0x11d62c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d628) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D630u;
label_11d630:
    // 0x11d630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d634: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D634u;
    SET_GPR_U32(ctx, 31, 0x11D63Cu);
    ctx->pc = 0x11D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D634u;
    // 0x11d638: 0x24a5c088  addiu       $a1, $a1, -0x3F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D634u, 0x11D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D63Cu;
label_11d63c:
    // 0x11d63c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D63Cu;
    {
        const bool branch_taken_0x11d63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D63Cu;
        // 0x11d640: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d63c) {
            ctx->pc = 0x11D64Cu;
            goto label_11d64c;
        }
    }
    ctx->pc = 0x11D644u;
    // 0x11d644: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x11D644u;
    {
        const bool branch_taken_0x11d644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D644u;
        // 0x11d648: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d644) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D64Cu;
label_11d64c:
    // 0x11d64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d650: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D650u;
    SET_GPR_U32(ctx, 31, 0x11D658u);
    ctx->pc = 0x11D654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D650u;
    // 0x11d654: 0x24a5c098  addiu       $a1, $a1, -0x3F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D650u, 0x11D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D658u;
label_11d658:
    // 0x11d658: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D658u;
    {
        const bool branch_taken_0x11d658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D658u;
        // 0x11d65c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d658) {
            ctx->pc = 0x11D668u;
            goto label_11d668;
        }
    }
    ctx->pc = 0x11D660u;
    // 0x11d660: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x11D660u;
    {
        const bool branch_taken_0x11d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D660u;
        // 0x11d664: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d660) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D668u;
label_11d668:
    // 0x11d668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d66c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D66Cu;
    SET_GPR_U32(ctx, 31, 0x11D674u);
    ctx->pc = 0x11D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D66Cu;
    // 0x11d670: 0x24a5c0b0  addiu       $a1, $a1, -0x3F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D66Cu, 0x11D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D674u;
label_11d674:
    // 0x11d674: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D674u;
    {
        const bool branch_taken_0x11d674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D674u;
        // 0x11d678: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d674) {
            ctx->pc = 0x11D684u;
            goto label_11d684;
        }
    }
    ctx->pc = 0x11D67Cu;
    // 0x11d67c: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x11D67Cu;
    {
        const bool branch_taken_0x11d67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D67Cu;
        // 0x11d680: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d67c) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D684u;
label_11d684:
    // 0x11d684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d688: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D688u;
    SET_GPR_U32(ctx, 31, 0x11D690u);
    ctx->pc = 0x11D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D688u;
    // 0x11d68c: 0x24a5c0c0  addiu       $a1, $a1, -0x3F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D688u, 0x11D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D690u;
label_11d690:
    // 0x11d690: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D690u;
    {
        const bool branch_taken_0x11d690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D690u;
        // 0x11d694: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d690) {
            ctx->pc = 0x11D6A0u;
            goto label_11d6a0;
        }
    }
    ctx->pc = 0x11D698u;
    // 0x11d698: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x11D698u;
    {
        const bool branch_taken_0x11d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D698u;
        // 0x11d69c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d698) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D6A0u;
label_11d6a0:
    // 0x11d6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6a4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D6A4u;
    SET_GPR_U32(ctx, 31, 0x11D6ACu);
    ctx->pc = 0x11D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6A4u;
    // 0x11d6a8: 0x24a5c0d0  addiu       $a1, $a1, -0x3F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D6A4u, 0x11D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6ACu;
label_11d6ac:
    // 0x11d6ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D6ACu;
    {
        const bool branch_taken_0x11d6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6ACu;
        // 0x11d6b0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6ac) {
            ctx->pc = 0x11D6BCu;
            goto label_11d6bc;
        }
    }
    ctx->pc = 0x11D6B4u;
    // 0x11d6b4: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x11D6B4u;
    {
        const bool branch_taken_0x11d6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6B4u;
        // 0x11d6b8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6b4) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D6BCu;
label_11d6bc:
    // 0x11d6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6c0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D6C0u;
    SET_GPR_U32(ctx, 31, 0x11D6C8u);
    ctx->pc = 0x11D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6C0u;
    // 0x11d6c4: 0x24a5c0e0  addiu       $a1, $a1, -0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D6C0u, 0x11D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6C8u;
label_11d6c8:
    // 0x11d6c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D6C8u;
    {
        const bool branch_taken_0x11d6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6C8u;
        // 0x11d6cc: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6c8) {
            ctx->pc = 0x11D6D8u;
            goto label_11d6d8;
        }
    }
    ctx->pc = 0x11D6D0u;
    // 0x11d6d0: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x11D6D0u;
    {
        const bool branch_taken_0x11d6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6D0u;
        // 0x11d6d4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6d0) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D6D8u;
label_11d6d8:
    // 0x11d6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6dc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D6DCu;
    SET_GPR_U32(ctx, 31, 0x11D6E4u);
    ctx->pc = 0x11D6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6DCu;
    // 0x11d6e0: 0x24a5c0f0  addiu       $a1, $a1, -0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D6DCu, 0x11D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6E4u;
label_11d6e4:
    // 0x11d6e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D6E4u;
    {
        const bool branch_taken_0x11d6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6E4u;
        // 0x11d6e8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6e4) {
            ctx->pc = 0x11D6F4u;
            goto label_11d6f4;
        }
    }
    ctx->pc = 0x11D6ECu;
    // 0x11d6ec: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x11D6ECu;
    {
        const bool branch_taken_0x11d6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6ECu;
        // 0x11d6f0: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6ec) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D6F4u;
label_11d6f4:
    // 0x11d6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6f8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D6F8u;
    SET_GPR_U32(ctx, 31, 0x11D700u);
    ctx->pc = 0x11D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6F8u;
    // 0x11d6fc: 0x24a5c100  addiu       $a1, $a1, -0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D6F8u, 0x11D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D700u;
label_11d700:
    // 0x11d700: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D700u;
    {
        const bool branch_taken_0x11d700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D700u;
        // 0x11d704: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d700) {
            ctx->pc = 0x11D710u;
            goto label_11d710;
        }
    }
    ctx->pc = 0x11D708u;
    // 0x11d708: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x11D708u;
    {
        const bool branch_taken_0x11d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D708u;
        // 0x11d70c: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d708) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D710u;
label_11d710:
    // 0x11d710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d714: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D714u;
    SET_GPR_U32(ctx, 31, 0x11D71Cu);
    ctx->pc = 0x11D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D714u;
    // 0x11d718: 0x24a5c110  addiu       $a1, $a1, -0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D714u, 0x11D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D71Cu;
label_11d71c:
    // 0x11d71c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D71Cu;
    {
        const bool branch_taken_0x11d71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D71Cu;
        // 0x11d720: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d71c) {
            ctx->pc = 0x11D72Cu;
            goto label_11d72c;
        }
    }
    ctx->pc = 0x11D724u;
    // 0x11d724: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x11D724u;
    {
        const bool branch_taken_0x11d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D724u;
        // 0x11d728: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d724) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D72Cu;
label_11d72c:
    // 0x11d72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d730: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D730u;
    SET_GPR_U32(ctx, 31, 0x11D738u);
    ctx->pc = 0x11D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D730u;
    // 0x11d734: 0x24a5c128  addiu       $a1, $a1, -0x3ED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D730u, 0x11D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D738u;
label_11d738:
    // 0x11d738: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D738u;
    {
        const bool branch_taken_0x11d738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D738u;
        // 0x11d73c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d738) {
            ctx->pc = 0x11D748u;
            goto label_11d748;
        }
    }
    ctx->pc = 0x11D740u;
    // 0x11d740: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x11D740u;
    {
        const bool branch_taken_0x11d740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D740u;
        // 0x11d744: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d740) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D748u;
label_11d748:
    // 0x11d748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d74c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D74Cu;
    SET_GPR_U32(ctx, 31, 0x11D754u);
    ctx->pc = 0x11D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D74Cu;
    // 0x11d750: 0x24a5c138  addiu       $a1, $a1, -0x3EC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D74Cu, 0x11D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D754u;
label_11d754:
    // 0x11d754: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D754u;
    {
        const bool branch_taken_0x11d754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D754u;
        // 0x11d758: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d754) {
            ctx->pc = 0x11D764u;
            goto label_11d764;
        }
    }
    ctx->pc = 0x11D75Cu;
    // 0x11d75c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x11D75Cu;
    {
        const bool branch_taken_0x11d75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D75Cu;
        // 0x11d760: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d75c) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D764u;
label_11d764:
    // 0x11d764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d768: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D768u;
    SET_GPR_U32(ctx, 31, 0x11D770u);
    ctx->pc = 0x11D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D768u;
    // 0x11d76c: 0x24a5bb28  addiu       $a1, $a1, -0x44D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D768u, 0x11D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D770u;
label_11d770:
    // 0x11d770: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D770u;
    {
        const bool branch_taken_0x11d770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D770u;
        // 0x11d774: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d770) {
            ctx->pc = 0x11D780u;
            goto label_11d780;
        }
    }
    ctx->pc = 0x11D778u;
    // 0x11d778: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x11D778u;
    {
        const bool branch_taken_0x11d778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D778u;
        // 0x11d77c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d778) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D780u;
label_11d780:
    // 0x11d780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d784: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D784u;
    SET_GPR_U32(ctx, 31, 0x11D78Cu);
    ctx->pc = 0x11D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D784u;
    // 0x11d788: 0x24a5bb38  addiu       $a1, $a1, -0x44C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D784u, 0x11D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D78Cu;
label_11d78c:
    // 0x11d78c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D78Cu;
    {
        const bool branch_taken_0x11d78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D78Cu;
        // 0x11d790: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d78c) {
            ctx->pc = 0x11D79Cu;
            goto label_11d79c;
        }
    }
    ctx->pc = 0x11D794u;
    // 0x11d794: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x11D794u;
    {
        const bool branch_taken_0x11d794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D794u;
        // 0x11d798: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d794) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D79Cu;
label_11d79c:
    // 0x11d79c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7a0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D7A0u;
    SET_GPR_U32(ctx, 31, 0x11D7A8u);
    ctx->pc = 0x11D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7A0u;
    // 0x11d7a4: 0x24a5c148  addiu       $a1, $a1, -0x3EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D7A0u, 0x11D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7A8u;
label_11d7a8:
    // 0x11d7a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D7A8u;
    {
        const bool branch_taken_0x11d7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7A8u;
        // 0x11d7ac: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7a8) {
            ctx->pc = 0x11D7B8u;
            goto label_11d7b8;
        }
    }
    ctx->pc = 0x11D7B0u;
    // 0x11d7b0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x11D7B0u;
    {
        const bool branch_taken_0x11d7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7B0u;
        // 0x11d7b4: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7b0) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D7B8u;
label_11d7b8:
    // 0x11d7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7bc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D7BCu;
    SET_GPR_U32(ctx, 31, 0x11D7C4u);
    ctx->pc = 0x11D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7BCu;
    // 0x11d7c0: 0x24a5c158  addiu       $a1, $a1, -0x3EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D7BCu, 0x11D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7C4u;
label_11d7c4:
    // 0x11d7c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D7C4u;
    {
        const bool branch_taken_0x11d7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7C4u;
        // 0x11d7c8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7c4) {
            ctx->pc = 0x11D7D4u;
            goto label_11d7d4;
        }
    }
    ctx->pc = 0x11D7CCu;
    // 0x11d7cc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x11D7CCu;
    {
        const bool branch_taken_0x11d7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7CCu;
        // 0x11d7d0: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7cc) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D7D4u;
label_11d7d4:
    // 0x11d7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7d8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D7D8u;
    SET_GPR_U32(ctx, 31, 0x11D7E0u);
    ctx->pc = 0x11D7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7D8u;
    // 0x11d7dc: 0x24a5c168  addiu       $a1, $a1, -0x3E98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D7D8u, 0x11D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7E0u;
label_11d7e0:
    // 0x11d7e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D7E0u;
    {
        const bool branch_taken_0x11d7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7E0u;
        // 0x11d7e4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7e0) {
            ctx->pc = 0x11D7F0u;
            goto label_11d7f0;
        }
    }
    ctx->pc = 0x11D7E8u;
    // 0x11d7e8: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x11D7E8u;
    {
        const bool branch_taken_0x11d7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7E8u;
        // 0x11d7ec: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7e8) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D7F0u;
label_11d7f0:
    // 0x11d7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7f4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D7F4u;
    SET_GPR_U32(ctx, 31, 0x11D7FCu);
    ctx->pc = 0x11D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7F4u;
    // 0x11d7f8: 0x24a5c178  addiu       $a1, $a1, -0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D7F4u, 0x11D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7FCu;
label_11d7fc:
    // 0x11d7fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D7FCu;
    {
        const bool branch_taken_0x11d7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7FCu;
        // 0x11d800: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7fc) {
            ctx->pc = 0x11D80Cu;
            goto label_11d80c;
        }
    }
    ctx->pc = 0x11D804u;
    // 0x11d804: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x11D804u;
    {
        const bool branch_taken_0x11d804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D804u;
        // 0x11d808: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d804) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D80Cu;
label_11d80c:
    // 0x11d80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d810: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D810u;
    SET_GPR_U32(ctx, 31, 0x11D818u);
    ctx->pc = 0x11D814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D810u;
    // 0x11d814: 0x24a5c188  addiu       $a1, $a1, -0x3E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D810u, 0x11D818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D818u;
label_11d818:
    // 0x11d818: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D818u;
    {
        const bool branch_taken_0x11d818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D818u;
        // 0x11d81c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d818) {
            ctx->pc = 0x11D828u;
            goto label_11d828;
        }
    }
    ctx->pc = 0x11D820u;
    // 0x11d820: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x11D820u;
    {
        const bool branch_taken_0x11d820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D820u;
        // 0x11d824: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d820) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D828u;
label_11d828:
    // 0x11d828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d82c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D82Cu;
    SET_GPR_U32(ctx, 31, 0x11D834u);
    ctx->pc = 0x11D830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D82Cu;
    // 0x11d830: 0x24a5c198  addiu       $a1, $a1, -0x3E68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D82Cu, 0x11D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D834u;
label_11d834:
    // 0x11d834: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D834u;
    {
        const bool branch_taken_0x11d834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D834u;
        // 0x11d838: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d834) {
            ctx->pc = 0x11D844u;
            goto label_11d844;
        }
    }
    ctx->pc = 0x11D83Cu;
    // 0x11d83c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x11D83Cu;
    {
        const bool branch_taken_0x11d83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D83Cu;
        // 0x11d840: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d83c) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D844u;
label_11d844:
    // 0x11d844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d848: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D848u;
    SET_GPR_U32(ctx, 31, 0x11D850u);
    ctx->pc = 0x11D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D848u;
    // 0x11d84c: 0x24a5c1a8  addiu       $a1, $a1, -0x3E58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D848u, 0x11D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D850u;
label_11d850:
    // 0x11d850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D850u;
    {
        const bool branch_taken_0x11d850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D850u;
        // 0x11d854: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d850) {
            ctx->pc = 0x11D860u;
            goto label_11d860;
        }
    }
    ctx->pc = 0x11D858u;
    // 0x11d858: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x11D858u;
    {
        const bool branch_taken_0x11d858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D858u;
        // 0x11d85c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d858) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D860u;
label_11d860:
    // 0x11d860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d864: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D864u;
    SET_GPR_U32(ctx, 31, 0x11D86Cu);
    ctx->pc = 0x11D868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D864u;
    // 0x11d868: 0x24a5c1b8  addiu       $a1, $a1, -0x3E48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D864u, 0x11D86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D86Cu;
label_11d86c:
    // 0x11d86c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D86Cu;
    {
        const bool branch_taken_0x11d86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D86Cu;
        // 0x11d870: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d86c) {
            ctx->pc = 0x11D87Cu;
            goto label_11d87c;
        }
    }
    ctx->pc = 0x11D874u;
    // 0x11d874: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x11D874u;
    {
        const bool branch_taken_0x11d874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D874u;
        // 0x11d878: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d874) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D87Cu;
label_11d87c:
    // 0x11d87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d880: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D880u;
    SET_GPR_U32(ctx, 31, 0x11D888u);
    ctx->pc = 0x11D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D880u;
    // 0x11d884: 0x24a5c1c8  addiu       $a1, $a1, -0x3E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D880u, 0x11D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D888u;
label_11d888:
    // 0x11d888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D888u;
    {
        const bool branch_taken_0x11d888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D888u;
        // 0x11d88c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d888) {
            ctx->pc = 0x11D898u;
            goto label_11d898;
        }
    }
    ctx->pc = 0x11D890u;
    // 0x11d890: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x11D890u;
    {
        const bool branch_taken_0x11d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D890u;
        // 0x11d894: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d890) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D898u;
label_11d898:
    // 0x11d898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d89c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D89Cu;
    SET_GPR_U32(ctx, 31, 0x11D8A4u);
    ctx->pc = 0x11D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D89Cu;
    // 0x11d8a0: 0x24a5bc00  addiu       $a1, $a1, -0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D89Cu, 0x11D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8A4u;
label_11d8a4:
    // 0x11d8a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D8A4u;
    {
        const bool branch_taken_0x11d8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8A4u;
        // 0x11d8a8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8a4) {
            ctx->pc = 0x11D8B4u;
            goto label_11d8b4;
        }
    }
    ctx->pc = 0x11D8ACu;
    // 0x11d8ac: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x11D8ACu;
    {
        const bool branch_taken_0x11d8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8ACu;
        // 0x11d8b0: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8ac) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D8B4u;
label_11d8b4:
    // 0x11d8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8b8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D8B8u;
    SET_GPR_U32(ctx, 31, 0x11D8C0u);
    ctx->pc = 0x11D8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8B8u;
    // 0x11d8bc: 0x24a5c1d8  addiu       $a1, $a1, -0x3E28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D8B8u, 0x11D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8C0u;
label_11d8c0:
    // 0x11d8c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D8C0u;
    {
        const bool branch_taken_0x11d8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8C0u;
        // 0x11d8c4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8c0) {
            ctx->pc = 0x11D8D0u;
            goto label_11d8d0;
        }
    }
    ctx->pc = 0x11D8C8u;
    // 0x11d8c8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x11D8C8u;
    {
        const bool branch_taken_0x11d8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8C8u;
        // 0x11d8cc: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8c8) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D8D0u;
label_11d8d0:
    // 0x11d8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8d4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D8D4u;
    SET_GPR_U32(ctx, 31, 0x11D8DCu);
    ctx->pc = 0x11D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8D4u;
    // 0x11d8d8: 0x24a5c1e8  addiu       $a1, $a1, -0x3E18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D8D4u, 0x11D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8DCu;
label_11d8dc:
    // 0x11d8dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D8DCu;
    {
        const bool branch_taken_0x11d8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8DCu;
        // 0x11d8e0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8dc) {
            ctx->pc = 0x11D8ECu;
            goto label_11d8ec;
        }
    }
    ctx->pc = 0x11D8E4u;
    // 0x11d8e4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x11D8E4u;
    {
        const bool branch_taken_0x11d8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8E4u;
        // 0x11d8e8: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8e4) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D8ECu;
label_11d8ec:
    // 0x11d8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8f0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D8F0u;
    SET_GPR_U32(ctx, 31, 0x11D8F8u);
    ctx->pc = 0x11D8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8F0u;
    // 0x11d8f4: 0x24a5c1f8  addiu       $a1, $a1, -0x3E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D8F0u, 0x11D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8F8u;
label_11d8f8:
    // 0x11d8f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D8F8u;
    {
        const bool branch_taken_0x11d8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8F8u;
        // 0x11d8fc: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8f8) {
            ctx->pc = 0x11D908u;
            goto label_11d908;
        }
    }
    ctx->pc = 0x11D900u;
    // 0x11d900: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x11D900u;
    {
        const bool branch_taken_0x11d900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D900u;
        // 0x11d904: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d900) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D908u;
label_11d908:
    // 0x11d908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d90c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D90Cu;
    SET_GPR_U32(ctx, 31, 0x11D914u);
    ctx->pc = 0x11D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D90Cu;
    // 0x11d910: 0x24a5c208  addiu       $a1, $a1, -0x3DF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D90Cu, 0x11D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D914u;
label_11d914:
    // 0x11d914: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D914u;
    {
        const bool branch_taken_0x11d914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D914u;
        // 0x11d918: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d914) {
            ctx->pc = 0x11D930u;
            goto label_11d930;
        }
    }
    ctx->pc = 0x11D91Cu;
    // 0x11d91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d920: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D920u;
    SET_GPR_U32(ctx, 31, 0x11D928u);
    ctx->pc = 0x11D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D920u;
    // 0x11d924: 0x24a5c218  addiu       $a1, $a1, -0x3DE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D920u, 0x11D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D928u;
label_11d928:
    // 0x11d928: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D928u;
    {
        const bool branch_taken_0x11d928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D928u;
        // 0x11d92c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d928) {
            ctx->pc = 0x11D938u;
            goto label_11d938;
        }
    }
    ctx->pc = 0x11D930u;
label_11d930:
    // 0x11d930: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11D930u;
    {
        const bool branch_taken_0x11d930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D930u;
        // 0x11d934: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d930) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D938u;
label_11d938:
    // 0x11d938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d93c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D93Cu;
    SET_GPR_U32(ctx, 31, 0x11D944u);
    ctx->pc = 0x11D940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D93Cu;
    // 0x11d940: 0x24a5c228  addiu       $a1, $a1, -0x3DD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D93Cu, 0x11D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D944u;
label_11d944:
    // 0x11d944: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D944u;
    {
        const bool branch_taken_0x11d944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D944u;
        // 0x11d948: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d944) {
            ctx->pc = 0x11D954u;
            goto label_11d954;
        }
    }
    ctx->pc = 0x11D94Cu;
    // 0x11d94c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11D94Cu;
    {
        const bool branch_taken_0x11d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D94Cu;
        // 0x11d950: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d94c) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D954u;
label_11d954:
    // 0x11d954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d958: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D958u;
    SET_GPR_U32(ctx, 31, 0x11D960u);
    ctx->pc = 0x11D95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D958u;
    // 0x11d95c: 0x24a5c238  addiu       $a1, $a1, -0x3DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D958u, 0x11D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D960u;
label_11d960:
    // 0x11d960: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D960u;
    {
        const bool branch_taken_0x11d960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D960u;
        // 0x11d964: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d960) {
            ctx->pc = 0x11D970u;
            goto label_11d970;
        }
    }
    ctx->pc = 0x11D968u;
    // 0x11d968: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11D968u;
    {
        const bool branch_taken_0x11d968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D968u;
        // 0x11d96c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d968) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D970u;
label_11d970:
    // 0x11d970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d974: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D974u;
    SET_GPR_U32(ctx, 31, 0x11D97Cu);
    ctx->pc = 0x11D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D974u;
    // 0x11d978: 0x24a5c248  addiu       $a1, $a1, -0x3DB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D974u, 0x11D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D97Cu;
label_11d97c:
    // 0x11d97c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D97Cu;
    {
        const bool branch_taken_0x11d97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D97Cu;
        // 0x11d980: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d97c) {
            ctx->pc = 0x11D98Cu;
            goto label_11d98c;
        }
    }
    ctx->pc = 0x11D984u;
    // 0x11d984: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11D984u;
    {
        const bool branch_taken_0x11d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D984u;
        // 0x11d988: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d984) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D98Cu;
label_11d98c:
    // 0x11d98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d990: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D990u;
    SET_GPR_U32(ctx, 31, 0x11D998u);
    ctx->pc = 0x11D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D990u;
    // 0x11d994: 0x24a5c258  addiu       $a1, $a1, -0x3DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D990u, 0x11D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D998u;
label_11d998:
    // 0x11d998: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D998u;
    {
        const bool branch_taken_0x11d998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D998u;
        // 0x11d99c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d998) {
            ctx->pc = 0x11D9A8u;
            goto label_11d9a8;
        }
    }
    ctx->pc = 0x11D9A0u;
    // 0x11d9a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11D9A0u;
    {
        const bool branch_taken_0x11d9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9A0u;
        // 0x11d9a4: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9a0) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D9A8u;
label_11d9a8:
    // 0x11d9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9ac: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D9ACu;
    SET_GPR_U32(ctx, 31, 0x11D9B4u);
    ctx->pc = 0x11D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9ACu;
    // 0x11d9b0: 0x24a5c268  addiu       $a1, $a1, -0x3D98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D9ACu, 0x11D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9B4u;
label_11d9b4:
    // 0x11d9b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D9B4u;
    {
        const bool branch_taken_0x11d9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9B4u;
        // 0x11d9b8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9b4) {
            ctx->pc = 0x11D9DCu;
            goto label_11d9dc;
        }
    }
    ctx->pc = 0x11D9BCu;
    // 0x11d9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9c0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D9C0u;
    SET_GPR_U32(ctx, 31, 0x11D9C8u);
    ctx->pc = 0x11D9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9C0u;
    // 0x11d9c4: 0x24a5c278  addiu       $a1, $a1, -0x3D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D9C0u, 0x11D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9C8u;
label_11d9c8:
    // 0x11d9c8: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x11d9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x11d9cc: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x11d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x11d9d0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11d9d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11d9d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11D9D4u;
    {
        const bool branch_taken_0x11d9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9D4u;
        // 0x11d9d8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9d4) {
            ctx->pc = 0x11D9E0u;
            goto label_11d9e0;
        }
    }
    ctx->pc = 0x11D9DCu;
label_11d9dc:
    // 0x11d9dc: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x11d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_11d9e0:
    // 0x11d9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d9e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11d9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x11D9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9E8u;
        // 0x11d9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D9F0u;
}
