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

// Function: sub_00126530
// Address: 0x126530 - 0x126618
void sub_00126530_0x126530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126530_0x126530");
#endif

    switch (ctx->pc) {
        case 0x126560u: goto label_126560;
        case 0x1265a0u: goto label_1265a0;
        case 0x1265f4u: goto label_1265f4;
        case 0x126604u: goto label_126604;
        default: break;
    }

    ctx->pc = 0x126530u;

    // 0x126530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126534: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x126534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12653c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126540: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x126540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x126544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x126544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126548: 0x8d02007c  lw          $v0, 0x7C($t0)
    ctx->pc = 0x126548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 124)));
    // 0x12654c: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x12654Cu;
    {
        const bool branch_taken_0x12654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x126550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12654Cu;
        // 0x126550: 0x2505007c  addiu       $a1, $t0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12654c) {
            ctx->pc = 0x12657Cu;
            goto label_12657c;
        }
    }
    ctx->pc = 0x126554u;
    // 0x126554: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x126554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x126558: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x126558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12655c: 0x0  nop
    ctx->pc = 0x12655cu;
    // NOP
label_126560:
    // 0x126560: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x126560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x126564: 0x10860027  beq         $a0, $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x126564u;
    {
        const bool branch_taken_0x126564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x126568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126564u;
        // 0x126568: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126564) {
            ctx->pc = 0x126604u;
            goto label_126604;
        }
    }
    ctx->pc = 0x12656Cu;
    // 0x12656c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x126570: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x126570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126574: 0x1470fffa  bne         $v1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126574u;
    {
        const bool branch_taken_0x126574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x126578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126574u;
        // 0x126578: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126574) {
            ctx->pc = 0x126560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126560;
        }
    }
    ctx->pc = 0x12657Cu;
label_12657c:
    // 0x12657c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12657cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126580: 0x9102023c  lbu         $v0, 0x23C($t0)
    ctx->pc = 0x126580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 572)));
    // 0x126584: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x126584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x126588: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x126588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12658c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x12658cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x126590: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x126590u;
    {
        const bool branch_taken_0x126590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126590u;
        // 0x126594: 0x2509007c  addiu       $t1, $t0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126590) {
            ctx->pc = 0x1265D4u;
            goto label_1265d4;
        }
    }
    ctx->pc = 0x126598u;
    // 0x126598: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x126598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12659c: 0x0  nop
    ctx->pc = 0x12659cu;
    // NOP
label_1265a0:
    // 0x1265a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1265a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1265a4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1265a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1265a8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1265a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1265ac: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1265acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1265b0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1265b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1265b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1265b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1265b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1265b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1265bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1265bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1265c0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1265c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1265c4: 0x9102023c  lbu         $v0, 0x23C($t0)
    ctx->pc = 0x1265c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 572)));
    // 0x1265c8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1265c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1265cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1265CCu;
    {
        const bool branch_taken_0x1265cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1265D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265CCu;
        // 0x1265d0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265cc) {
            ctx->pc = 0x1265A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1265a0;
        }
    }
    ctx->pc = 0x1265D4u;
label_1265d4:
    // 0x1265d4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1265d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1265d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1265d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1265dc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1265dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1265e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1265e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1265e4: 0x9103023c  lbu         $v1, 0x23C($t0)
    ctx->pc = 0x1265e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 572)));
    // 0x1265e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1265e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1265ec: 0xc05a69c  jal         func_169A70
    ctx->pc = 0x1265ECu;
    SET_GPR_U32(ctx, 31, 0x1265F4u);
    ctx->pc = 0x1265F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265ECu;
    // 0x1265f0: 0xa103023c  sb          $v1, 0x23C($t0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 8), 572), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169A70u, 0x1265ECu, 0x1265F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265F4u;
label_1265f4:
    // 0x1265f4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1265f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1265f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1265f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1265fc: 0xc042062  jal         func_108188
    ctx->pc = 0x1265FCu;
    SET_GPR_U32(ctx, 31, 0x126604u);
    ctx->pc = 0x126600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265FCu;
    // 0x126600: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108188u, 0x1265FCu, 0x126604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126604u;
label_126604:
    // 0x126604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126608: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x126608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12660c: 0x3e00008  jr          $ra
    ctx->pc = 0x12660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12660Cu;
        // 0x126610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12660Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126614u;
    // 0x126614: 0x0  nop
    ctx->pc = 0x126614u;
    // NOP
    ctx->pc = 0x126618u;
}
