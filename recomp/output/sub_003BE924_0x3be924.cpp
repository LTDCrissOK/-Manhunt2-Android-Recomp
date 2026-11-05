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

// Function: sub_003BE924
// Address: 0x3be924 - 0x3be9d0
void sub_003BE924_0x3be924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE924_0x3be924");
#endif

    switch (ctx->pc) {
        case 0x3be948u: goto label_3be948;
        case 0x3be980u: goto label_3be980;
        case 0x3be9b0u: goto label_3be9b0;
        default: break;
    }

    ctx->pc = 0x3be924u;

    // 0x3be924: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3be924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be928: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x3be928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3be92c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3BE92Cu;
    {
        const bool branch_taken_0x3be92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE92Cu;
        // 0x3be930: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be92c) {
            ctx->pc = 0x3BE9A0u;
            goto label_3be9a0;
        }
    }
    ctx->pc = 0x3BE934u;
    // 0x3be934: 0xa81025  or          $v0, $a1, $t0
    ctx->pc = 0x3be934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x3be938: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3be938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3be93c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BE93Cu;
    {
        const bool branch_taken_0x3be93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3be93c) {
            ctx->pc = 0x3BE940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BE93Cu;
            // 0x3be940: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BE9A4u;
            goto label_3be9a4;
        }
    }
    ctx->pc = 0x3BE944u;
    // 0x3be944: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3be944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3be948:
    // 0x3be948: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3be948u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be94c: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x3be94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x3be950: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3be950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3be954: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x3be954u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3be958: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3be958u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3be95c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3be95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3be960: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3be960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be964: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3be964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3be968: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3be968u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3be96c: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3BE96Cu;
    {
        const bool branch_taken_0x3be96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE96Cu;
        // 0x3be970: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be96c) {
            ctx->pc = 0x3BE948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be948;
        }
    }
    ctx->pc = 0x3BE974u;
    // 0x3be974: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3be974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3be978: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BE978u;
    {
        const bool branch_taken_0x3be978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE978u;
        // 0x3be97c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be978) {
            ctx->pc = 0x3BE9A0u;
            goto label_3be9a0;
        }
    }
    ctx->pc = 0x3BE980u;
label_3be980:
    // 0x3be980: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3be980u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be984: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3be984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3be988: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3be988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3be98c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3be98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3be990: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3be990u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3be994: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BE994u;
    {
        const bool branch_taken_0x3be994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE994u;
        // 0x3be998: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be994) {
            ctx->pc = 0x3BE980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be980;
        }
    }
    ctx->pc = 0x3BE99Cu;
    // 0x3be99c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3be99cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3be9a0:
    // 0x3be9a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3be9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3be9a4:
    // 0x3be9a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3be9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3be9a8: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BE9A8u;
    {
        const bool branch_taken_0x3be9a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9A8u;
        // 0x3be9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be9a8) {
            ctx->pc = 0x3BE9C8u;
            goto label_3be9c8;
        }
    }
    ctx->pc = 0x3BE9B0u;
label_3be9b0:
    // 0x3be9b0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3be9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be9b4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3be9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3be9b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3be9bc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3be9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3be9c0: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BE9C0u;
    {
        const bool branch_taken_0x3be9c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9C0u;
        // 0x3be9c4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be9c0) {
            ctx->pc = 0x3BE9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be9b0;
        }
    }
    ctx->pc = 0x3BE9C8u;
label_3be9c8:
    // 0x3be9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9C8u;
        // 0x3be9cc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE9D0u;
}
