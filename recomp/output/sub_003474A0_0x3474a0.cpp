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

// Function: sub_003474A0
// Address: 0x3474a0 - 0x3475f8
void sub_003474A0_0x3474a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003474A0_0x3474a0");
#endif

    switch (ctx->pc) {
        case 0x3474c0u: goto label_3474c0;
        case 0x3474dcu: goto label_3474dc;
        case 0x3474f8u: goto label_3474f8;
        case 0x347514u: goto label_347514;
        case 0x347530u: goto label_347530;
        case 0x34754cu: goto label_34754c;
        case 0x347568u: goto label_347568;
        case 0x347584u: goto label_347584;
        case 0x3475a0u: goto label_3475a0;
        case 0x3475bcu: goto label_3475bc;
        case 0x3475d8u: goto label_3475d8;
        default: break;
    }

    ctx->pc = 0x3474a0u;

    // 0x3474a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3474a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3474a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3474a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3474a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3474a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3474ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3474acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3474b0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3474b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3474b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3474b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3474b8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3474B8u;
    SET_GPR_U32(ctx, 31, 0x3474C0u);
    ctx->pc = 0x3474BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3474B8u;
    // 0x3474bc: 0x24a56440  addiu       $a1, $a1, 0x6440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3474B8u, 0x3474C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474C0u;
label_3474c0:
    // 0x3474c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3474c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3474c4: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3474C4u;
    {
        const bool branch_taken_0x3474c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3474C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474C4u;
        // 0x3474c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474c4) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x3474CCu;
    // 0x3474cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3474ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3474d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3474d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3474d4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3474D4u;
    SET_GPR_U32(ctx, 31, 0x3474DCu);
    ctx->pc = 0x3474D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3474D4u;
    // 0x3474d8: 0x24a56450  addiu       $a1, $a1, 0x6450 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3474D4u, 0x3474DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474DCu;
label_3474dc:
    // 0x3474dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3474dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3474e0: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3474E0u;
    {
        const bool branch_taken_0x3474e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3474E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474E0u;
        // 0x3474e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474e0) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x3474E8u;
    // 0x3474e8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3474e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3474ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3474ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3474f0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3474F0u;
    SET_GPR_U32(ctx, 31, 0x3474F8u);
    ctx->pc = 0x3474F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3474F0u;
    // 0x3474f4: 0x24a56460  addiu       $a1, $a1, 0x6460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3474F0u, 0x3474F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3474F8u;
label_3474f8:
    // 0x3474f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3474f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3474fc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3474FCu;
    {
        const bool branch_taken_0x3474fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474FCu;
        // 0x347500: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474fc) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x347504u;
    // 0x347504: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34750c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x34750Cu;
    SET_GPR_U32(ctx, 31, 0x347514u);
    ctx->pc = 0x347510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34750Cu;
    // 0x347510: 0x24a56470  addiu       $a1, $a1, 0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x34750Cu, 0x347514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347514u;
label_347514:
    // 0x347514: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347518: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x347518u;
    {
        const bool branch_taken_0x347518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347518u;
        // 0x34751c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347518) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x347520u;
    // 0x347520: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347528: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347528u;
    SET_GPR_U32(ctx, 31, 0x347530u);
    ctx->pc = 0x34752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347528u;
    // 0x34752c: 0x24a56488  addiu       $a1, $a1, 0x6488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347528u, 0x347530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347530u;
label_347530:
    // 0x347530: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347534: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x347534u;
    {
        const bool branch_taken_0x347534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347534u;
        // 0x347538: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347534) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x34753Cu;
    // 0x34753c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x34753cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347544: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347544u;
    SET_GPR_U32(ctx, 31, 0x34754Cu);
    ctx->pc = 0x347548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347544u;
    // 0x347548: 0x24a56498  addiu       $a1, $a1, 0x6498 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347544u, 0x34754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34754Cu;
label_34754c:
    // 0x34754c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34754cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347550: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x347550u;
    {
        const bool branch_taken_0x347550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347550u;
        // 0x347554: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347550) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x347558u;
    // 0x347558: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x34755c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34755cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347560: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347560u;
    SET_GPR_U32(ctx, 31, 0x347568u);
    ctx->pc = 0x347564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347560u;
    // 0x347564: 0x24a564b0  addiu       $a1, $a1, 0x64B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347560u, 0x347568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347568u;
label_347568:
    // 0x347568: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34756c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x34756Cu;
    {
        const bool branch_taken_0x34756c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34756Cu;
        // 0x347570: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34756c) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x347574u;
    // 0x347574: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34757c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x34757Cu;
    SET_GPR_U32(ctx, 31, 0x347584u);
    ctx->pc = 0x347580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34757Cu;
    // 0x347580: 0x24a564c0  addiu       $a1, $a1, 0x64C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x34757Cu, 0x347584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347584u;
label_347584:
    // 0x347584: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347588: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x347588u;
    {
        const bool branch_taken_0x347588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347588u;
        // 0x34758c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347588) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x347590u;
    // 0x347590: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347598: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347598u;
    SET_GPR_U32(ctx, 31, 0x3475A0u);
    ctx->pc = 0x34759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347598u;
    // 0x34759c: 0x24a564d8  addiu       $a1, $a1, 0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347598u, 0x3475A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475A0u;
label_3475a0:
    // 0x3475a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3475a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3475a4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3475A4u;
    {
        const bool branch_taken_0x3475a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3475A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3475A4u;
        // 0x3475a8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3475a4) {
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x3475ACu;
    // 0x3475ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3475acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3475b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3475b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3475b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3475B4u;
    SET_GPR_U32(ctx, 31, 0x3475BCu);
    ctx->pc = 0x3475B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3475B4u;
    // 0x3475b8: 0x24a564f0  addiu       $a1, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3475B4u, 0x3475BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475BCu;
label_3475bc:
    // 0x3475bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3475bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3475c0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3475C0u;
    {
        const bool branch_taken_0x3475c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3475c0) {
            ctx->pc = 0x3475C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3475C0u;
            // 0x3475c4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3475E8u;
            goto label_3475e8;
        }
    }
    ctx->pc = 0x3475C8u;
    // 0x3475c8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3475c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3475cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3475ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3475d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3475D0u;
    SET_GPR_U32(ctx, 31, 0x3475D8u);
    ctx->pc = 0x3475D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3475D0u;
    // 0x3475d4: 0x24a56500  addiu       $a1, $a1, 0x6500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3475D0u, 0x3475D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475D8u;
label_3475d8:
    // 0x3475d8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3475d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3475dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3475dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3475e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3475e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3475e4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x3475e4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_3475e8:
    // 0x3475e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3475e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3475ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3475ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3475f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3475F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3475F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3475F0u;
        // 0x3475f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3475F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3475F8u;
}
