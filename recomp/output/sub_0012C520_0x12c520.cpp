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

// Function: sub_0012C520
// Address: 0x12c520 - 0x12c5e0
void sub_0012C520_0x12c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C520_0x12c520");
#endif

    switch (ctx->pc) {
        case 0x12c560u: goto label_12c560;
        case 0x12c578u: goto label_12c578;
        case 0x12c588u: goto label_12c588;
        case 0x12c5b0u: goto label_12c5b0;
        default: break;
    }

    ctx->pc = 0x12c520u;

    // 0x12c520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12c524: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12c528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c52c: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x12c52cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x12c530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c534: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12c534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c538: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12c538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12c53c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x12c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x12c540: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c544: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12c548: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12c548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12c54c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12c54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c550: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12c550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12c554: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x12c554u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12c558: 0x24730004  addiu       $s3, $v1, 0x4
    ctx->pc = 0x12c558u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x12c55c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x12c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_12c560:
    // 0x12c560: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x12c560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x12c564: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c568: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C568u;
    {
        const bool branch_taken_0x12c568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C568u;
        // 0x12c56c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c568) {
            ctx->pc = 0x12C58Cu;
            goto label_12c58c;
        }
    }
    ctx->pc = 0x12C570u;
    // 0x12c570: 0xc05f49e  jal         func_17D278
    ctx->pc = 0x12C570u;
    SET_GPR_U32(ctx, 31, 0x12C578u);
    ctx->pc = 0x17D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D278u, 0x12C570u, 0x12C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C578u;
label_12c578:
    // 0x12c578: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12c578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c57c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c580: 0xc04adaa  jal         func_12B6A8
    ctx->pc = 0x12C580u;
    SET_GPR_U32(ctx, 31, 0x12C588u);
    ctx->pc = 0x12C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C580u;
    // 0x12c584: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6A8u, 0x12C580u, 0x12C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C588u;
label_12c588:
    // 0x12c588: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x12c588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12c58c:
    // 0x12c58c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x12c58cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12c590: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x12c590u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12c594: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x12C594u;
    {
        const bool branch_taken_0x12c594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C594u;
        // 0x12c598: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c594) {
            ctx->pc = 0x12C560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c560;
        }
    }
    ctx->pc = 0x12C59Cu;
    // 0x12c59c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x12c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x12c5a0: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x12c5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x12c5a4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12c5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12c5a8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x12C5A8u;
    SET_GPR_U32(ctx, 31, 0x12C5B0u);
    ctx->pc = 0x12C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5A8u;
    // 0x12c5ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x12C5A8u, 0x12C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5B0u;
label_12c5b0:
    // 0x12c5b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x12c5b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c5b8: 0x92220084  lbu         $v0, 0x84($s1)
    ctx->pc = 0x12c5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x12c5bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c5bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c5c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12c5c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12c5c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c5c8: 0xa2220084  sb          $v0, 0x84($s1)
    ctx->pc = 0x12c5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c5cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c5ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c5d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12c5d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c5d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12c5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5D8u;
        // 0x12c5dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C5E0u;
}
