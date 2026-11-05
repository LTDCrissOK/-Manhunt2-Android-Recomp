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

// Function: sub_0011B878
// Address: 0x11b878 - 0x11b938
void sub_0011B878_0x11b878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B878_0x11b878");
#endif

    switch (ctx->pc) {
        case 0x11b8acu: goto label_11b8ac;
        case 0x11b8ccu: goto label_11b8cc;
        case 0x11b8fcu: goto label_11b8fc;
        case 0x11b920u: goto label_11b920;
        default: break;
    }

    ctx->pc = 0x11b878u;

    // 0x11b878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b87c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x11b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x11b880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b888: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11b888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b88c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11b890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b894: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11B894u;
    {
        const bool branch_taken_0x11b894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B894u;
        // 0x11b898: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b894) {
            ctx->pc = 0x11B910u;
            goto label_11b910;
        }
    }
    ctx->pc = 0x11B89Cu;
    // 0x11b89c: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x11B89Cu;
    {
        const bool branch_taken_0x11b89c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B89Cu;
        // 0x11b8a0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b89c) {
            ctx->pc = 0x11B910u;
            goto label_11b910;
        }
    }
    ctx->pc = 0x11B8A4u;
    // 0x11b8a4: 0xc04785a  jal         func_11E168
    ctx->pc = 0x11B8A4u;
    SET_GPR_U32(ctx, 31, 0x11B8ACu);
    ctx->pc = 0x11B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8A4u;
    // 0x11b8a8: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x11B8A4u, 0x11B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8ACu;
label_11b8ac:
    // 0x11b8ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8b0: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11B8B0u;
    {
        const bool branch_taken_0x11b8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8B0u;
        // 0x11b8b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8b0) {
            ctx->pc = 0x11B920u;
            goto label_11b920;
        }
    }
    ctx->pc = 0x11B8B8u;
    // 0x11b8b8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x11b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x11b8bc: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B8BCu;
    {
        const bool branch_taken_0x11b8bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8BCu;
        // 0x11b8c0: 0x2a020010  slti        $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8bc) {
            ctx->pc = 0x11B8D4u;
            goto label_11b8d4;
        }
    }
    ctx->pc = 0x11B8C4u;
    // 0x11b8c4: 0xc0444e4  jal         func_111390
    ctx->pc = 0x11B8C4u;
    SET_GPR_U32(ctx, 31, 0x11B8CCu);
    ctx->pc = 0x111390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111390u, 0x11B8C4u, 0x11B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8CCu;
label_11b8cc:
    // 0x11b8cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11B8CCu;
    {
        const bool branch_taken_0x11b8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8CCu;
        // 0x11b8d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8cc) {
            ctx->pc = 0x11B924u;
            goto label_11b924;
        }
    }
    ctx->pc = 0x11B8D4u;
label_11b8d4:
    // 0x11b8d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B8D4u;
    {
        const bool branch_taken_0x11b8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8D4u;
        // 0x11b8d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8d4) {
            ctx->pc = 0x11B8E4u;
            goto label_11b8e4;
        }
    }
    ctx->pc = 0x11B8DCu;
    // 0x11b8dc: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x11b8dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x11b8e0: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x11b8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_11b8e4:
    // 0x11b8e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B8E4u;
    {
        const bool branch_taken_0x11b8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E4u;
        // 0x11b8e8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8e4) {
            ctx->pc = 0x11B904u;
            goto label_11b904;
        }
    }
    ctx->pc = 0x11B8ECu;
    // 0x11b8ec: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x11b8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11b8f0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x11b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11b8f4: 0xc044502  jal         func_111408
    ctx->pc = 0x11B8F4u;
    SET_GPR_U32(ctx, 31, 0x11B8FCu);
    ctx->pc = 0x11B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8F4u;
    // 0x11b8f8: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111408u, 0x11B8F4u, 0x11B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8FCu;
label_11b8fc:
    // 0x11b8fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11B8FCu;
    {
        const bool branch_taken_0x11b8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8FCu;
        // 0x11b900: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8fc) {
            ctx->pc = 0x11B924u;
            goto label_11b924;
        }
    }
    ctx->pc = 0x11B904u;
label_11b904:
    // 0x11b904: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x11b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11b908: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B908u;
    {
        const bool branch_taken_0x11b908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x11b908) {
            ctx->pc = 0x11B918u;
            goto label_11b918;
        }
    }
    ctx->pc = 0x11B910u;
label_11b910:
    // 0x11b910: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B910u;
    {
        const bool branch_taken_0x11b910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B910u;
        // 0x11b914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b910) {
            ctx->pc = 0x11B920u;
            goto label_11b920;
        }
    }
    ctx->pc = 0x11B918u;
label_11b918:
    // 0x11b918: 0xc04452c  jal         func_1114B0
    ctx->pc = 0x11B918u;
    SET_GPR_U32(ctx, 31, 0x11B920u);
    ctx->pc = 0x1114B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114B0u, 0x11B918u, 0x11B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B920u;
label_11b920:
    // 0x11b920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b924:
    // 0x11b924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b92c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B92Cu;
        // 0x11b930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B934u;
    // 0x11b934: 0x0  nop
    ctx->pc = 0x11b934u;
    // NOP
    ctx->pc = 0x11b938u;
}
