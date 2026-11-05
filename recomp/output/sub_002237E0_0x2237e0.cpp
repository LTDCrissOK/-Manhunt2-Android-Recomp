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

// Function: sub_002237E0
// Address: 0x2237e0 - 0x223d60
void sub_002237E0_0x2237e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002237E0_0x2237e0");
#endif

    switch (ctx->pc) {
        case 0x223814u: goto label_223814;
        case 0x223828u: goto label_223828;
        case 0x223840u: goto label_223840;
        case 0x223854u: goto label_223854;
        case 0x22386cu: goto label_22386c;
        case 0x223880u: goto label_223880;
        case 0x223898u: goto label_223898;
        case 0x2238acu: goto label_2238ac;
        case 0x2238c4u: goto label_2238c4;
        case 0x2238d8u: goto label_2238d8;
        case 0x2238f0u: goto label_2238f0;
        case 0x223904u: goto label_223904;
        case 0x22391cu: goto label_22391c;
        case 0x223930u: goto label_223930;
        case 0x223948u: goto label_223948;
        case 0x22395cu: goto label_22395c;
        case 0x223974u: goto label_223974;
        case 0x223988u: goto label_223988;
        case 0x2239a0u: goto label_2239a0;
        case 0x2239b4u: goto label_2239b4;
        case 0x2239ccu: goto label_2239cc;
        case 0x2239e0u: goto label_2239e0;
        case 0x2239f8u: goto label_2239f8;
        case 0x223a10u: goto label_223a10;
        case 0x223a28u: goto label_223a28;
        case 0x223a3cu: goto label_223a3c;
        case 0x223a54u: goto label_223a54;
        case 0x223a68u: goto label_223a68;
        case 0x223a80u: goto label_223a80;
        case 0x223a98u: goto label_223a98;
        case 0x223ab0u: goto label_223ab0;
        case 0x223ac4u: goto label_223ac4;
        case 0x223adcu: goto label_223adc;
        case 0x223af0u: goto label_223af0;
        case 0x223b08u: goto label_223b08;
        case 0x223b1cu: goto label_223b1c;
        case 0x223b34u: goto label_223b34;
        case 0x223b48u: goto label_223b48;
        case 0x223b60u: goto label_223b60;
        case 0x223b74u: goto label_223b74;
        case 0x223b8cu: goto label_223b8c;
        case 0x223ba0u: goto label_223ba0;
        case 0x223bb8u: goto label_223bb8;
        case 0x223bccu: goto label_223bcc;
        case 0x223be4u: goto label_223be4;
        case 0x223bf8u: goto label_223bf8;
        case 0x223c00u: goto label_223c00;
        case 0x223c1cu: goto label_223c1c;
        case 0x223c34u: goto label_223c34;
        case 0x223c54u: goto label_223c54;
        case 0x223c6cu: goto label_223c6c;
        case 0x223c80u: goto label_223c80;
        case 0x223c98u: goto label_223c98;
        case 0x223cacu: goto label_223cac;
        case 0x223cc4u: goto label_223cc4;
        case 0x223cd8u: goto label_223cd8;
        case 0x223cf0u: goto label_223cf0;
        case 0x223d04u: goto label_223d04;
        case 0x223d1cu: goto label_223d1c;
        case 0x223d34u: goto label_223d34;
        case 0x223d44u: goto label_223d44;
        default: break;
    }

    ctx->pc = 0x2237e0u;

    // 0x2237e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2237e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2237e4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x2237e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x2237e8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2237e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2237ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2237ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237f0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2237f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2237f4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2237f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2237f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2237f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2237fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223800: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x223800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x223804: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x223804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x223808: 0x24a536e0  addiu       $a1, $a1, 0x36E0
    ctx->pc = 0x223808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14048));
    // 0x22380c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22380Cu;
    SET_GPR_U32(ctx, 31, 0x223814u);
    ctx->pc = 0x223810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22380Cu;
    // 0x223810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22380Cu, 0x223814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223814u;
label_223814:
    // 0x223814: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223818: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223818u;
    {
        const bool branch_taken_0x223818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223818u;
        // 0x22381c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223818) {
            ctx->pc = 0x223830u;
            goto label_223830;
        }
    }
    ctx->pc = 0x223820u;
    // 0x223820: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x223820u;
    SET_GPR_U32(ctx, 31, 0x223828u);
    ctx->pc = 0x223824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223820u;
    // 0x223824: 0x2605002c  addiu       $a1, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x223820u, 0x223828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223828u;
label_223828:
    // 0x223828: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x223828u;
    {
        const bool branch_taken_0x223828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223828u;
        // 0x22382c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223828) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223830u;
label_223830:
    // 0x223830: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223838: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223838u;
    SET_GPR_U32(ctx, 31, 0x223840u);
    ctx->pc = 0x22383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223838u;
    // 0x22383c: 0x24a536f8  addiu       $a1, $a1, 0x36F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223838u, 0x223840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223840u;
label_223840:
    // 0x223840: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223844: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223844u;
    {
        const bool branch_taken_0x223844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223844u;
        // 0x223848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223844) {
            ctx->pc = 0x22385Cu;
            goto label_22385c;
        }
    }
    ctx->pc = 0x22384Cu;
    // 0x22384c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22384Cu;
    SET_GPR_U32(ctx, 31, 0x223854u);
    ctx->pc = 0x223850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22384Cu;
    // 0x223850: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22384Cu, 0x223854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223854u;
label_223854:
    // 0x223854: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x223854u;
    {
        const bool branch_taken_0x223854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223854u;
        // 0x223858: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223854) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x22385Cu;
label_22385c:
    // 0x22385c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22385cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223864: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223864u;
    SET_GPR_U32(ctx, 31, 0x22386Cu);
    ctx->pc = 0x223868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223864u;
    // 0x223868: 0x24a53710  addiu       $a1, $a1, 0x3710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223864u, 0x22386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22386Cu;
label_22386c:
    // 0x22386c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22386cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223870: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223870u;
    {
        const bool branch_taken_0x223870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223870u;
        // 0x223874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223870) {
            ctx->pc = 0x223888u;
            goto label_223888;
        }
    }
    ctx->pc = 0x223878u;
    // 0x223878: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x223878u;
    SET_GPR_U32(ctx, 31, 0x223880u);
    ctx->pc = 0x22387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223878u;
    // 0x22387c: 0x2605003c  addiu       $a1, $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x223878u, 0x223880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223880u;
label_223880:
    // 0x223880: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x223880u;
    {
        const bool branch_taken_0x223880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223880u;
        // 0x223884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223880) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223888u;
label_223888:
    // 0x223888: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22388c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223890: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223890u;
    SET_GPR_U32(ctx, 31, 0x223898u);
    ctx->pc = 0x223894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223890u;
    // 0x223894: 0x24a53730  addiu       $a1, $a1, 0x3730 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223890u, 0x223898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223898u;
label_223898:
    // 0x223898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22389c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22389Cu;
    {
        const bool branch_taken_0x22389c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22389Cu;
        // 0x2238a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22389c) {
            ctx->pc = 0x2238B4u;
            goto label_2238b4;
        }
    }
    ctx->pc = 0x2238A4u;
    // 0x2238a4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2238A4u;
    SET_GPR_U32(ctx, 31, 0x2238ACu);
    ctx->pc = 0x2238A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238A4u;
    // 0x2238a8: 0x26050044  addiu       $a1, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2238A4u, 0x2238ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2238ACu;
label_2238ac:
    // 0x2238ac: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x2238ACu;
    {
        const bool branch_taken_0x2238ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238ACu;
        // 0x2238b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238ac) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x2238B4u;
label_2238b4:
    // 0x2238b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2238b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2238b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2238b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238bc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2238BCu;
    SET_GPR_U32(ctx, 31, 0x2238C4u);
    ctx->pc = 0x2238C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238BCu;
    // 0x2238c0: 0x24a53748  addiu       $a1, $a1, 0x3748 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2238BCu, 0x2238C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2238C4u;
label_2238c4:
    // 0x2238c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2238c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2238c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2238C8u;
    {
        const bool branch_taken_0x2238c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238C8u;
        // 0x2238cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238c8) {
            ctx->pc = 0x2238E0u;
            goto label_2238e0;
        }
    }
    ctx->pc = 0x2238D0u;
    // 0x2238d0: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2238D0u;
    SET_GPR_U32(ctx, 31, 0x2238D8u);
    ctx->pc = 0x2238D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238D0u;
    // 0x2238d4: 0x2605004c  addiu       $a1, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2238D0u, 0x2238D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2238D8u;
label_2238d8:
    // 0x2238d8: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x2238D8u;
    {
        const bool branch_taken_0x2238d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238D8u;
        // 0x2238dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238d8) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x2238E0u;
label_2238e0:
    // 0x2238e0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2238e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2238e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2238e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2238E8u;
    SET_GPR_U32(ctx, 31, 0x2238F0u);
    ctx->pc = 0x2238ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238E8u;
    // 0x2238ec: 0x24a53760  addiu       $a1, $a1, 0x3760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2238E8u, 0x2238F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2238F0u;
label_2238f0:
    // 0x2238f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2238f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2238f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2238F4u;
    {
        const bool branch_taken_0x2238f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238F4u;
        // 0x2238f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238f4) {
            ctx->pc = 0x22390Cu;
            goto label_22390c;
        }
    }
    ctx->pc = 0x2238FCu;
    // 0x2238fc: 0xc09e056  jal         func_278158
    ctx->pc = 0x2238FCu;
    SET_GPR_U32(ctx, 31, 0x223904u);
    ctx->pc = 0x223900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238FCu;
    // 0x223900: 0x26050068  addiu       $a1, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2238FCu, 0x223904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223904u;
label_223904:
    // 0x223904: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x223904u;
    {
        const bool branch_taken_0x223904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223904u;
        // 0x223908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223904) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x22390Cu;
label_22390c:
    // 0x22390c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22390cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223914: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223914u;
    SET_GPR_U32(ctx, 31, 0x22391Cu);
    ctx->pc = 0x223918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223914u;
    // 0x223918: 0x24a53770  addiu       $a1, $a1, 0x3770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223914u, 0x22391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22391Cu;
label_22391c:
    // 0x22391c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22391cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223920u;
    {
        const bool branch_taken_0x223920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223920u;
        // 0x223924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223920) {
            ctx->pc = 0x223938u;
            goto label_223938;
        }
    }
    ctx->pc = 0x223928u;
    // 0x223928: 0xc09e056  jal         func_278158
    ctx->pc = 0x223928u;
    SET_GPR_U32(ctx, 31, 0x223930u);
    ctx->pc = 0x22392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223928u;
    // 0x22392c: 0x2605006c  addiu       $a1, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x223928u, 0x223930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223930u;
label_223930:
    // 0x223930: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x223930u;
    {
        const bool branch_taken_0x223930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223930u;
        // 0x223934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223930) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223938u;
label_223938:
    // 0x223938: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22393c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22393cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223940: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223940u;
    SET_GPR_U32(ctx, 31, 0x223948u);
    ctx->pc = 0x223944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223940u;
    // 0x223944: 0x24a53780  addiu       $a1, $a1, 0x3780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223940u, 0x223948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223948u;
label_223948:
    // 0x223948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22394c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22394Cu;
    {
        const bool branch_taken_0x22394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22394Cu;
        // 0x223950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22394c) {
            ctx->pc = 0x223964u;
            goto label_223964;
        }
    }
    ctx->pc = 0x223954u;
    // 0x223954: 0xc09e056  jal         func_278158
    ctx->pc = 0x223954u;
    SET_GPR_U32(ctx, 31, 0x22395Cu);
    ctx->pc = 0x223958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223954u;
    // 0x223958: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x223954u, 0x22395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22395Cu;
label_22395c:
    // 0x22395c: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x22395Cu;
    {
        const bool branch_taken_0x22395c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22395Cu;
        // 0x223960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22395c) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223964u;
label_223964:
    // 0x223964: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22396c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22396Cu;
    SET_GPR_U32(ctx, 31, 0x223974u);
    ctx->pc = 0x223970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22396Cu;
    // 0x223970: 0x24a53790  addiu       $a1, $a1, 0x3790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22396Cu, 0x223974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223974u;
label_223974:
    // 0x223974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223978: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223978u;
    {
        const bool branch_taken_0x223978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223978u;
        // 0x22397c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223978) {
            ctx->pc = 0x223990u;
            goto label_223990;
        }
    }
    ctx->pc = 0x223980u;
    // 0x223980: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223980u;
    SET_GPR_U32(ctx, 31, 0x223988u);
    ctx->pc = 0x223984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223980u;
    // 0x223984: 0x26050054  addiu       $a1, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223980u, 0x223988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223988u;
label_223988:
    // 0x223988: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x223988u;
    {
        const bool branch_taken_0x223988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223988u;
        // 0x22398c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223988) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223990u;
label_223990:
    // 0x223990: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223998: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223998u;
    SET_GPR_U32(ctx, 31, 0x2239A0u);
    ctx->pc = 0x22399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223998u;
    // 0x22399c: 0x24a537a0  addiu       $a1, $a1, 0x37A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223998u, 0x2239A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2239A0u;
label_2239a0:
    // 0x2239a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2239a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2239a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2239A4u;
    {
        const bool branch_taken_0x2239a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239A4u;
        // 0x2239a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239a4) {
            ctx->pc = 0x2239BCu;
            goto label_2239bc;
        }
    }
    ctx->pc = 0x2239ACu;
    // 0x2239ac: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2239ACu;
    SET_GPR_U32(ctx, 31, 0x2239B4u);
    ctx->pc = 0x2239B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2239ACu;
    // 0x2239b0: 0x26050058  addiu       $a1, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2239ACu, 0x2239B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2239B4u;
label_2239b4:
    // 0x2239b4: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x2239B4u;
    {
        const bool branch_taken_0x2239b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239B4u;
        // 0x2239b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239b4) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x2239BCu;
label_2239bc:
    // 0x2239bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2239bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2239c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2239c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2239C4u;
    SET_GPR_U32(ctx, 31, 0x2239CCu);
    ctx->pc = 0x2239C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2239C4u;
    // 0x2239c8: 0x24a537b0  addiu       $a1, $a1, 0x37B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2239C4u, 0x2239CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2239CCu;
label_2239cc:
    // 0x2239cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2239ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2239d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2239D0u;
    {
        const bool branch_taken_0x2239d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239D0u;
        // 0x2239d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239d0) {
            ctx->pc = 0x2239E8u;
            goto label_2239e8;
        }
    }
    ctx->pc = 0x2239D8u;
    // 0x2239d8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2239D8u;
    SET_GPR_U32(ctx, 31, 0x2239E0u);
    ctx->pc = 0x2239DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2239D8u;
    // 0x2239dc: 0x2605005c  addiu       $a1, $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2239D8u, 0x2239E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2239E0u;
label_2239e0:
    // 0x2239e0: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x2239E0u;
    {
        const bool branch_taken_0x2239e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239E0u;
        // 0x2239e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239e0) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x2239E8u;
label_2239e8:
    // 0x2239e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2239e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2239ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2239ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239f0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2239F0u;
    SET_GPR_U32(ctx, 31, 0x2239F8u);
    ctx->pc = 0x2239F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2239F0u;
    // 0x2239f4: 0x24a537d0  addiu       $a1, $a1, 0x37D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2239F0u, 0x2239F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2239F8u;
label_2239f8:
    // 0x2239f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2239f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2239fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2239FCu;
    {
        const bool branch_taken_0x2239fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239FCu;
        // 0x223a00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239fc) {
            ctx->pc = 0x223A18u;
            goto label_223a18;
        }
    }
    ctx->pc = 0x223A04u;
    // 0x223a04: 0x26060064  addiu       $a2, $s0, 0x64
    ctx->pc = 0x223a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x223a08: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x223A08u;
    SET_GPR_U32(ctx, 31, 0x223A10u);
    ctx->pc = 0x223A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A08u;
    // 0x223a0c: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x223A08u, 0x223A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A10u;
label_223a10:
    // 0x223a10: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x223A10u;
    {
        const bool branch_taken_0x223a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A10u;
        // 0x223a14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a10) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223A18u;
label_223a18:
    // 0x223a18: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a20: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223A20u;
    SET_GPR_U32(ctx, 31, 0x223A28u);
    ctx->pc = 0x223A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A20u;
    // 0x223a24: 0x24a537e8  addiu       $a1, $a1, 0x37E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223A20u, 0x223A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A28u;
label_223a28:
    // 0x223a28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223a2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223A2Cu;
    {
        const bool branch_taken_0x223a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A2Cu;
        // 0x223a30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a2c) {
            ctx->pc = 0x223A44u;
            goto label_223a44;
        }
    }
    ctx->pc = 0x223A34u;
    // 0x223a34: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223A34u;
    SET_GPR_U32(ctx, 31, 0x223A3Cu);
    ctx->pc = 0x223A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A34u;
    // 0x223a38: 0x26050074  addiu       $a1, $s0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223A34u, 0x223A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A3Cu;
label_223a3c:
    // 0x223a3c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x223A3Cu;
    {
        const bool branch_taken_0x223a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A3Cu;
        // 0x223a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a3c) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223A44u;
label_223a44:
    // 0x223a44: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a4c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223A4Cu;
    SET_GPR_U32(ctx, 31, 0x223A54u);
    ctx->pc = 0x223A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A4Cu;
    // 0x223a50: 0x24a53800  addiu       $a1, $a1, 0x3800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223A4Cu, 0x223A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A54u;
label_223a54:
    // 0x223a54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223a58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223A58u;
    {
        const bool branch_taken_0x223a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A58u;
        // 0x223a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a58) {
            ctx->pc = 0x223A70u;
            goto label_223a70;
        }
    }
    ctx->pc = 0x223A60u;
    // 0x223a60: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223A60u;
    SET_GPR_U32(ctx, 31, 0x223A68u);
    ctx->pc = 0x223A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A60u;
    // 0x223a64: 0x26050078  addiu       $a1, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223A60u, 0x223A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A68u;
label_223a68:
    // 0x223a68: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x223A68u;
    {
        const bool branch_taken_0x223a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A68u;
        // 0x223a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a68) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223A70u;
label_223a70:
    // 0x223a70: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223a74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a78: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223A78u;
    SET_GPR_U32(ctx, 31, 0x223A80u);
    ctx->pc = 0x223A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A78u;
    // 0x223a7c: 0x24a53818  addiu       $a1, $a1, 0x3818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223A78u, 0x223A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A80u;
label_223a80:
    // 0x223a80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223a84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223A84u;
    {
        const bool branch_taken_0x223a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A84u;
        // 0x223a88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a84) {
            ctx->pc = 0x223AA0u;
            goto label_223aa0;
        }
    }
    ctx->pc = 0x223A8Cu;
    // 0x223a8c: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x223a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x223a90: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x223A90u;
    SET_GPR_U32(ctx, 31, 0x223A98u);
    ctx->pc = 0x223A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A90u;
    // 0x223a94: 0x2605007c  addiu       $a1, $s0, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x223A90u, 0x223A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A98u;
label_223a98:
    // 0x223a98: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x223A98u;
    {
        const bool branch_taken_0x223a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A98u;
        // 0x223a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a98) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223AA0u;
label_223aa0:
    // 0x223aa0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223aa8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223AA8u;
    SET_GPR_U32(ctx, 31, 0x223AB0u);
    ctx->pc = 0x223AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AA8u;
    // 0x223aac: 0x24a53828  addiu       $a1, $a1, 0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223AA8u, 0x223AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223AB0u;
label_223ab0:
    // 0x223ab0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223ab4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223AB4u;
    {
        const bool branch_taken_0x223ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AB4u;
        // 0x223ab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ab4) {
            ctx->pc = 0x223ACCu;
            goto label_223acc;
        }
    }
    ctx->pc = 0x223ABCu;
    // 0x223abc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223ABCu;
    SET_GPR_U32(ctx, 31, 0x223AC4u);
    ctx->pc = 0x223AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223ABCu;
    // 0x223ac0: 0x26050084  addiu       $a1, $s0, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223ABCu, 0x223AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223AC4u;
label_223ac4:
    // 0x223ac4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x223AC4u;
    {
        const bool branch_taken_0x223ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AC4u;
        // 0x223ac8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ac4) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223ACCu;
label_223acc:
    // 0x223acc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ad4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223AD4u;
    SET_GPR_U32(ctx, 31, 0x223ADCu);
    ctx->pc = 0x223AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AD4u;
    // 0x223ad8: 0x24a53838  addiu       $a1, $a1, 0x3838 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223AD4u, 0x223ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223ADCu;
label_223adc:
    // 0x223adc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223ae0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223AE0u;
    {
        const bool branch_taken_0x223ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AE0u;
        // 0x223ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ae0) {
            ctx->pc = 0x223AF8u;
            goto label_223af8;
        }
    }
    ctx->pc = 0x223AE8u;
    // 0x223ae8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223AE8u;
    SET_GPR_U32(ctx, 31, 0x223AF0u);
    ctx->pc = 0x223AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AE8u;
    // 0x223aec: 0x26050088  addiu       $a1, $s0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223AE8u, 0x223AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223AF0u;
label_223af0:
    // 0x223af0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x223AF0u;
    {
        const bool branch_taken_0x223af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AF0u;
        // 0x223af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223af0) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223AF8u;
label_223af8:
    // 0x223af8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b00: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223B00u;
    SET_GPR_U32(ctx, 31, 0x223B08u);
    ctx->pc = 0x223B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B00u;
    // 0x223b04: 0x24a53850  addiu       $a1, $a1, 0x3850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223B00u, 0x223B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B08u;
label_223b08:
    // 0x223b08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223b0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223B0Cu;
    {
        const bool branch_taken_0x223b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B0Cu;
        // 0x223b10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b0c) {
            ctx->pc = 0x223B24u;
            goto label_223b24;
        }
    }
    ctx->pc = 0x223B14u;
    // 0x223b14: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223B14u;
    SET_GPR_U32(ctx, 31, 0x223B1Cu);
    ctx->pc = 0x223B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B14u;
    // 0x223b18: 0x2605008c  addiu       $a1, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223B14u, 0x223B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B1Cu;
label_223b1c:
    // 0x223b1c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x223B1Cu;
    {
        const bool branch_taken_0x223b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B1Cu;
        // 0x223b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b1c) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223B24u;
label_223b24:
    // 0x223b24: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b2c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223B2Cu;
    SET_GPR_U32(ctx, 31, 0x223B34u);
    ctx->pc = 0x223B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B2Cu;
    // 0x223b30: 0x24a53868  addiu       $a1, $a1, 0x3868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223B2Cu, 0x223B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B34u;
label_223b34:
    // 0x223b34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223b38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223B38u;
    {
        const bool branch_taken_0x223b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B38u;
        // 0x223b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b38) {
            ctx->pc = 0x223B50u;
            goto label_223b50;
        }
    }
    ctx->pc = 0x223B40u;
    // 0x223b40: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223B40u;
    SET_GPR_U32(ctx, 31, 0x223B48u);
    ctx->pc = 0x223B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B40u;
    // 0x223b44: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223B40u, 0x223B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B48u;
label_223b48:
    // 0x223b48: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x223B48u;
    {
        const bool branch_taken_0x223b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B48u;
        // 0x223b4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b48) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223B50u;
label_223b50:
    // 0x223b50: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b58: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223B58u;
    SET_GPR_U32(ctx, 31, 0x223B60u);
    ctx->pc = 0x223B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B58u;
    // 0x223b5c: 0x24a53880  addiu       $a1, $a1, 0x3880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223B58u, 0x223B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B60u;
label_223b60:
    // 0x223b60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223b64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223B64u;
    {
        const bool branch_taken_0x223b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B64u;
        // 0x223b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b64) {
            ctx->pc = 0x223B7Cu;
            goto label_223b7c;
        }
    }
    ctx->pc = 0x223B6Cu;
    // 0x223b6c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223B6Cu;
    SET_GPR_U32(ctx, 31, 0x223B74u);
    ctx->pc = 0x223B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B6Cu;
    // 0x223b70: 0x26050094  addiu       $a1, $s0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223B6Cu, 0x223B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B74u;
label_223b74:
    // 0x223b74: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x223B74u;
    {
        const bool branch_taken_0x223b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B74u;
        // 0x223b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b74) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223B7Cu;
label_223b7c:
    // 0x223b7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223B84u;
    SET_GPR_U32(ctx, 31, 0x223B8Cu);
    ctx->pc = 0x223B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B84u;
    // 0x223b88: 0x24a53890  addiu       $a1, $a1, 0x3890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223B84u, 0x223B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B8Cu;
label_223b8c:
    // 0x223b8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223b90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223B90u;
    {
        const bool branch_taken_0x223b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B90u;
        // 0x223b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b90) {
            ctx->pc = 0x223BA8u;
            goto label_223ba8;
        }
    }
    ctx->pc = 0x223B98u;
    // 0x223b98: 0xc09e056  jal         func_278158
    ctx->pc = 0x223B98u;
    SET_GPR_U32(ctx, 31, 0x223BA0u);
    ctx->pc = 0x223B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B98u;
    // 0x223b9c: 0x26050098  addiu       $a1, $s0, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x223B98u, 0x223BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BA0u;
label_223ba0:
    // 0x223ba0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x223BA0u;
    {
        const bool branch_taken_0x223ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BA0u;
        // 0x223ba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ba0) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223BA8u;
label_223ba8:
    // 0x223ba8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223bb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223BB0u;
    SET_GPR_U32(ctx, 31, 0x223BB8u);
    ctx->pc = 0x223BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223BB0u;
    // 0x223bb4: 0x24a538a0  addiu       $a1, $a1, 0x38A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223BB0u, 0x223BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BB8u;
label_223bb8:
    // 0x223bb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223bbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223BBCu;
    {
        const bool branch_taken_0x223bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BBCu;
        // 0x223bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bbc) {
            ctx->pc = 0x223BD4u;
            goto label_223bd4;
        }
    }
    ctx->pc = 0x223BC4u;
    // 0x223bc4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223BC4u;
    SET_GPR_U32(ctx, 31, 0x223BCCu);
    ctx->pc = 0x223BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223BC4u;
    // 0x223bc8: 0x2605009c  addiu       $a1, $s0, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223BC4u, 0x223BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BCCu;
label_223bcc:
    // 0x223bcc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x223BCCu;
    {
        const bool branch_taken_0x223bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BCCu;
        // 0x223bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bcc) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223BD4u;
label_223bd4:
    // 0x223bd4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223bdc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223BDCu;
    SET_GPR_U32(ctx, 31, 0x223BE4u);
    ctx->pc = 0x223BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223BDCu;
    // 0x223be0: 0x24a538b0  addiu       $a1, $a1, 0x38B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223BDCu, 0x223BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BE4u;
label_223be4:
    // 0x223be4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223be8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x223BE8u;
    {
        const bool branch_taken_0x223be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BE8u;
        // 0x223bec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223be8) {
            ctx->pc = 0x223C24u;
            goto label_223c24;
        }
    }
    ctx->pc = 0x223BF0u;
    // 0x223bf0: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x223BF0u;
    SET_GPR_U32(ctx, 31, 0x223BF8u);
    ctx->pc = 0x223BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223BF0u;
    // 0x223bf4: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x223BF0u, 0x223BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BF8u;
label_223bf8:
    // 0x223bf8: 0xc0d4306  jal         func_350C18
    ctx->pc = 0x223BF8u;
    SET_GPR_U32(ctx, 31, 0x223C00u);
    ctx->pc = 0x223BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223BF8u;
    // 0x223bfc: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C18u, 0x223BF8u, 0x223C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C00u;
label_223c00:
    // 0x223c00: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x223C00u;
    {
        const bool branch_taken_0x223c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C00u;
        // 0x223c04: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c00) {
            ctx->pc = 0x223D44u;
            goto label_223d44;
        }
    }
    ctx->pc = 0x223C08u;
    // 0x223c08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223c0c: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x223c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x223c10: 0x24a538c0  addiu       $a1, $a1, 0x38C0
    ctx->pc = 0x223c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14528));
    // 0x223c14: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x223C14u;
    SET_GPR_U32(ctx, 31, 0x223C1Cu);
    ctx->pc = 0x223C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C14u;
    // 0x223c18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x223C14u, 0x223C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C1Cu;
label_223c1c:
    // 0x223c1c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x223C1Cu;
    {
        const bool branch_taken_0x223c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C1Cu;
        // 0x223c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c1c) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223C24u;
label_223c24:
    // 0x223c24: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c2c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223C2Cu;
    SET_GPR_U32(ctx, 31, 0x223C34u);
    ctx->pc = 0x223C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C2Cu;
    // 0x223c30: 0x24a538f0  addiu       $a1, $a1, 0x38F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223C2Cu, 0x223C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C34u;
label_223c34:
    // 0x223c34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223c38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223C38u;
    {
        const bool branch_taken_0x223c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C38u;
        // 0x223c3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c38) {
            ctx->pc = 0x223C5Cu;
            goto label_223c5c;
        }
    }
    ctx->pc = 0x223C40u;
    // 0x223c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c44: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x223c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x223c48: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x223c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x223c4c: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x223C4Cu;
    SET_GPR_U32(ctx, 31, 0x223C54u);
    ctx->pc = 0x223C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C4Cu;
    // 0x223c50: 0x260500ac  addiu       $a1, $s0, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x223C4Cu, 0x223C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C54u;
label_223c54:
    // 0x223c54: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x223C54u;
    {
        const bool branch_taken_0x223c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C54u;
        // 0x223c58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c54) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223C5Cu;
label_223c5c:
    // 0x223c5c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c64: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223C64u;
    SET_GPR_U32(ctx, 31, 0x223C6Cu);
    ctx->pc = 0x223C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C64u;
    // 0x223c68: 0x24a53900  addiu       $a1, $a1, 0x3900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223C64u, 0x223C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C6Cu;
label_223c6c:
    // 0x223c6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223c70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223C70u;
    {
        const bool branch_taken_0x223c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C70u;
        // 0x223c74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c70) {
            ctx->pc = 0x223C88u;
            goto label_223c88;
        }
    }
    ctx->pc = 0x223C78u;
    // 0x223c78: 0xc09e056  jal         func_278158
    ctx->pc = 0x223C78u;
    SET_GPR_U32(ctx, 31, 0x223C80u);
    ctx->pc = 0x223C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C78u;
    // 0x223c7c: 0x260500b4  addiu       $a1, $s0, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x223C78u, 0x223C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C80u;
label_223c80:
    // 0x223c80: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x223C80u;
    {
        const bool branch_taken_0x223c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C80u;
        // 0x223c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c80) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223C88u;
label_223c88:
    // 0x223c88: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c90: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223C90u;
    SET_GPR_U32(ctx, 31, 0x223C98u);
    ctx->pc = 0x223C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C90u;
    // 0x223c94: 0x24a53910  addiu       $a1, $a1, 0x3910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223C90u, 0x223C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C98u;
label_223c98:
    // 0x223c98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223c9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223C9Cu;
    {
        const bool branch_taken_0x223c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C9Cu;
        // 0x223ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c9c) {
            ctx->pc = 0x223CB4u;
            goto label_223cb4;
        }
    }
    ctx->pc = 0x223CA4u;
    // 0x223ca4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223CA4u;
    SET_GPR_U32(ctx, 31, 0x223CACu);
    ctx->pc = 0x223CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CA4u;
    // 0x223ca8: 0x260500b8  addiu       $a1, $s0, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223CA4u, 0x223CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CACu;
label_223cac:
    // 0x223cac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x223CACu;
    {
        const bool branch_taken_0x223cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CACu;
        // 0x223cb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cac) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223CB4u;
label_223cb4:
    // 0x223cb4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223cbc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223CBCu;
    SET_GPR_U32(ctx, 31, 0x223CC4u);
    ctx->pc = 0x223CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CBCu;
    // 0x223cc0: 0x24a53928  addiu       $a1, $a1, 0x3928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223CBCu, 0x223CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CC4u;
label_223cc4:
    // 0x223cc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223cc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223CC8u;
    {
        const bool branch_taken_0x223cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CC8u;
        // 0x223ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cc8) {
            ctx->pc = 0x223CE0u;
            goto label_223ce0;
        }
    }
    ctx->pc = 0x223CD0u;
    // 0x223cd0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223CD0u;
    SET_GPR_U32(ctx, 31, 0x223CD8u);
    ctx->pc = 0x223CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CD0u;
    // 0x223cd4: 0x260500bc  addiu       $a1, $s0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223CD0u, 0x223CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CD8u;
label_223cd8:
    // 0x223cd8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x223CD8u;
    {
        const bool branch_taken_0x223cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CD8u;
        // 0x223cdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cd8) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223CE0u;
label_223ce0:
    // 0x223ce0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ce8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223CE8u;
    SET_GPR_U32(ctx, 31, 0x223CF0u);
    ctx->pc = 0x223CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CE8u;
    // 0x223cec: 0x24a53940  addiu       $a1, $a1, 0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223CE8u, 0x223CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CF0u;
label_223cf0:
    // 0x223cf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223cf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223CF4u;
    {
        const bool branch_taken_0x223cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CF4u;
        // 0x223cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cf4) {
            ctx->pc = 0x223D0Cu;
            goto label_223d0c;
        }
    }
    ctx->pc = 0x223CFCu;
    // 0x223cfc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223CFCu;
    SET_GPR_U32(ctx, 31, 0x223D04u);
    ctx->pc = 0x223D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CFCu;
    // 0x223d00: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223CFCu, 0x223D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D04u;
label_223d04:
    // 0x223d04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x223D04u;
    {
        const bool branch_taken_0x223d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D04u;
        // 0x223d08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d04) {
            ctx->pc = 0x223D48u;
            goto label_223d48;
        }
    }
    ctx->pc = 0x223D0Cu;
label_223d0c:
    // 0x223d0c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x223d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x223d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d14: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x223D14u;
    SET_GPR_U32(ctx, 31, 0x223D1Cu);
    ctx->pc = 0x223D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D14u;
    // 0x223d18: 0x24a53958  addiu       $a1, $a1, 0x3958 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x223D14u, 0x223D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D1Cu;
label_223d1c:
    // 0x223d1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223d20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223D20u;
    {
        const bool branch_taken_0x223d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D20u;
        // 0x223d24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d20) {
            ctx->pc = 0x223D3Cu;
            goto label_223d3c;
        }
    }
    ctx->pc = 0x223D28u;
    // 0x223d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d2c: 0xc088b80  jal         func_222E00
    ctx->pc = 0x223D2Cu;
    SET_GPR_U32(ctx, 31, 0x223D34u);
    ctx->pc = 0x223D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D2Cu;
    // 0x223d30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E00u, 0x223D2Cu, 0x223D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D34u;
label_223d34:
    // 0x223d34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x223D34u;
    {
        const bool branch_taken_0x223d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D34u;
        // 0x223d38: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d34) {
            ctx->pc = 0x223D4Cu;
            goto label_223d4c;
        }
    }
    ctx->pc = 0x223D3Cu;
label_223d3c:
    // 0x223d3c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x223D3Cu;
    SET_GPR_U32(ctx, 31, 0x223D44u);
    ctx->pc = 0x223D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D3Cu;
    // 0x223d40: 0x260500c4  addiu       $a1, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x223D3Cu, 0x223D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D44u;
label_223d44:
    // 0x223d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223d48:
    // 0x223d48: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x223d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_223d4c:
    // 0x223d4c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x223d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x223d50: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x223d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x223d54: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x223d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x223d58: 0x3e00008  jr          $ra
    ctx->pc = 0x223D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D58u;
        // 0x223d5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223D60u;
}
