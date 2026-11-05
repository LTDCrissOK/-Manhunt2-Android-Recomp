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

// Function: sub_0017E890
// Address: 0x17e890 - 0x17e970
void sub_0017E890_0x17e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E890_0x17e890");
#endif

    switch (ctx->pc) {
        case 0x17e958u: goto label_17e958;
        default: break;
    }

    ctx->pc = 0x17e890u;

    // 0x17e890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e894: 0x14a00016  bnez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x17E894u;
    {
        const bool branch_taken_0x17e894 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E894u;
        // 0x17e898: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e894) {
            ctx->pc = 0x17E8F0u;
            goto label_17e8f0;
        }
    }
    ctx->pc = 0x17E89Cu;
    // 0x17e89c: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x17E89Cu;
    {
        const bool branch_taken_0x17e89c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E89Cu;
        // 0x17e8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e89c) {
            ctx->pc = 0x17E8CCu;
            goto label_17e8cc;
        }
    }
    ctx->pc = 0x17E8A4u;
    // 0x17e8a4: 0x14e20030  bne         $a3, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x17E8A4u;
    {
        const bool branch_taken_0x17e8a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8A4u;
        // 0x17e8a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8a4) {
            ctx->pc = 0x17E968u;
            goto label_17e968;
        }
    }
    ctx->pc = 0x17E8ACu;
    // 0x17e8ac: 0x2502fffd  addiu       $v0, $t0, -0x3
    ctx->pc = 0x17e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
    // 0x17e8b0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17e8b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17e8b4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x17E8B4u;
    {
        const bool branch_taken_0x17e8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8B4u;
        // 0x17e8b8: 0x24c3fffe  addiu       $v1, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8b4) {
            ctx->pc = 0x17E948u;
            goto label_17e948;
        }
    }
    ctx->pc = 0x17E8BCu;
    // 0x17e8bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e8bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8c0: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x17e8c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x17e8c4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x17E8C4u;
    {
        const bool branch_taken_0x17e8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8C4u;
        // 0x17e8c8: 0xe3100b  movn        $v0, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8c4) {
            ctx->pc = 0x17E968u;
            goto label_17e968;
        }
    }
    ctx->pc = 0x17E8CCu;
label_17e8cc:
    // 0x17e8cc: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x17e8ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x17e8d0: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x17E8D0u;
    {
        const bool branch_taken_0x17e8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e8d0) {
            ctx->pc = 0x17E8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E8D0u;
            // 0x17e8d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E964u;
            goto label_17e964;
        }
    }
    ctx->pc = 0x17E8D8u;
    // 0x17e8d8: 0x14c80022  bne         $a2, $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x17E8D8u;
    {
        const bool branch_taken_0x17e8d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x17E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8D8u;
        // 0x17e8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8d8) {
            ctx->pc = 0x17E964u;
            goto label_17e964;
        }
    }
    ctx->pc = 0x17E8E0u;
    // 0x17e8e0: 0x11200020  beqz        $t1, . + 4 + (0x20 << 2)
    ctx->pc = 0x17E8E0u;
    {
        const bool branch_taken_0x17e8e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8E0u;
        // 0x17e8e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8e0) {
            ctx->pc = 0x17E964u;
            goto label_17e964;
        }
    }
    ctx->pc = 0x17E8E8u;
    // 0x17e8e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x17E8E8u;
    {
        const bool branch_taken_0x17e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e8e8) {
            ctx->pc = 0x17E950u;
            goto label_17e950;
        }
    }
    ctx->pc = 0x17E8F0u;
label_17e8f0:
    // 0x17e8f0: 0x14e0000f  bnez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x17E8F0u;
    {
        const bool branch_taken_0x17e8f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8F0u;
        // 0x17e8f4: 0x106102a  slt         $v0, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8f0) {
            ctx->pc = 0x17E930u;
            goto label_17e930;
        }
    }
    ctx->pc = 0x17E8F8u;
    // 0x17e8f8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x17e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17e8fc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17E8FCu;
    {
        const bool branch_taken_0x17e8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8FCu;
        // 0x17e900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8fc) {
            ctx->pc = 0x17E964u;
            goto label_17e964;
        }
    }
    ctx->pc = 0x17E904u;
    // 0x17e904: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x17e904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17e908: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17E908u;
    {
        const bool branch_taken_0x17e908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E908u;
        // 0x17e90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e908) {
            ctx->pc = 0x17E964u;
            goto label_17e964;
        }
    }
    ctx->pc = 0x17E910u;
    // 0x17e910: 0x5000013  bltz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17E910u;
    {
        const bool branch_taken_0x17e910 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x17E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E910u;
        // 0x17e914: 0x28c20005  slti        $v0, $a2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e910) {
            ctx->pc = 0x17E960u;
            goto label_17e960;
        }
    }
    ctx->pc = 0x17E918u;
    // 0x17e918: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E918u;
    {
        const bool branch_taken_0x17e918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E918u;
        // 0x17e91c: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e918) {
            ctx->pc = 0x17E960u;
            goto label_17e960;
        }
    }
    ctx->pc = 0x17E920u;
    // 0x17e920: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17E920u;
    {
        const bool branch_taken_0x17e920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E920u;
        // 0x17e924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e920) {
            ctx->pc = 0x17E964u;
            goto label_17e964;
        }
    }
    ctx->pc = 0x17E928u;
    // 0x17e928: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17E928u;
    {
        const bool branch_taken_0x17e928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E928u;
        // 0x17e92c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e928) {
            ctx->pc = 0x17E964u;
            goto label_17e964;
        }
    }
    ctx->pc = 0x17E930u;
label_17e930:
    // 0x17e930: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x17E930u;
    {
        const bool branch_taken_0x17e930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e930) {
            ctx->pc = 0x17E934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E930u;
            // 0x17e934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E964u;
            goto label_17e964;
        }
    }
    ctx->pc = 0x17E938u;
    // 0x17e938: 0x14c8000a  bne         $a2, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x17E938u;
    {
        const bool branch_taken_0x17e938 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x17E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E938u;
        // 0x17e93c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e938) {
            ctx->pc = 0x17E964u;
            goto label_17e964;
        }
    }
    ctx->pc = 0x17E940u;
    // 0x17e940: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E940u;
    {
        const bool branch_taken_0x17e940 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e940) {
            ctx->pc = 0x17E950u;
            goto label_17e950;
        }
    }
    ctx->pc = 0x17E948u;
label_17e948:
    // 0x17e948: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17E948u;
    {
        const bool branch_taken_0x17e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E948u;
        // 0x17e94c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e948) {
            ctx->pc = 0x17E964u;
            goto label_17e964;
        }
    }
    ctx->pc = 0x17E950u;
label_17e950:
    // 0x17e950: 0xc05fa5c  jal         func_17E970
    ctx->pc = 0x17E950u;
    SET_GPR_U32(ctx, 31, 0x17E958u);
    ctx->pc = 0x17E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E950u;
    // 0x17e954: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E970u, 0x17E950u, 0x17E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E958u;
label_17e958:
    // 0x17e958: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E958u;
    {
        const bool branch_taken_0x17e958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E958u;
        // 0x17e95c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e958) {
            ctx->pc = 0x17E968u;
            goto label_17e968;
        }
    }
    ctx->pc = 0x17E960u;
label_17e960:
    // 0x17e960: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e964:
    // 0x17e964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e968:
    // 0x17e968: 0x3e00008  jr          $ra
    ctx->pc = 0x17E968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E968u;
        // 0x17e96c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E970u;
}
