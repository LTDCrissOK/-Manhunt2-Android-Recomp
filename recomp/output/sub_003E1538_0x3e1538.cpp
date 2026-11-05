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

// Function: sub_003E1538
// Address: 0x3e1538 - 0x3e15e0
void sub_003E1538_0x3e1538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1538_0x3e1538");
#endif

    switch (ctx->pc) {
        case 0x3e1570u: goto label_3e1570;
        case 0x3e1594u: goto label_3e1594;
        case 0x3e15acu: goto label_3e15ac;
        case 0x3e15b4u: goto label_3e15b4;
        case 0x3e15c4u: goto label_3e15c4;
        default: break;
    }

    ctx->pc = 0x3e1538u;

    // 0x3e1538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e1538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e153c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e153cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e1540: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e1540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e1544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e1544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e1548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e154c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e154cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1550: 0x1232001c  beq         $s1, $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E1550u;
    {
        const bool branch_taken_0x3e1550 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x3E1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1550u;
        // 0x3e1554: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1550) {
            ctx->pc = 0x3E15C4u;
            goto label_3e15c4;
        }
    }
    ctx->pc = 0x3E1558u;
    // 0x3e1558: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x3e1558u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3e155c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3e155cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3e1560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e1560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e1564: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E1564u;
    {
        const bool branch_taken_0x3e1564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1564u;
        // 0x3e1568: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1564) {
            ctx->pc = 0x3E1588u;
            goto label_3e1588;
        }
    }
    ctx->pc = 0x3E156Cu;
    // 0x3e156c: 0x0  nop
    ctx->pc = 0x3e156cu;
    // NOP
label_3e1570:
    // 0x3e1570: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3e1570u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3e1574: 0x0  nop
    ctx->pc = 0x3e1574u;
    // NOP
    // 0x3e1578: 0x0  nop
    ctx->pc = 0x3e1578u;
    // NOP
    // 0x3e157c: 0x0  nop
    ctx->pc = 0x3e157cu;
    // NOP
    // 0x3e1580: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E1580u;
    {
        const bool branch_taken_0x3e1580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1580u;
        // 0x3e1584: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1580) {
            ctx->pc = 0x3E1570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1570;
        }
    }
    ctx->pc = 0x3E1588u;
label_3e1588:
    // 0x3e1588: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x3e1588u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3e158c: 0xc0f8138  jal         func_3E04E0
    ctx->pc = 0x3E158Cu;
    SET_GPR_U32(ctx, 31, 0x3E1594u);
    ctx->pc = 0x3E1590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E158Cu;
    // 0x3e1590: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E04E0u, 0x3E158Cu, 0x3E1594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1594u;
label_3e1594:
    // 0x3e1594: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e1594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e1598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e159c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3e159cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e15a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3e15a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e15a4: 0xc0f8330  jal         func_3E0CC0
    ctx->pc = 0x3E15A4u;
    SET_GPR_U32(ctx, 31, 0x3E15ACu);
    ctx->pc = 0x3E15A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E15A4u;
    // 0x3e15a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0CC0u, 0x3E15A4u, 0x3E15ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E15ACu;
label_3e15ac:
    // 0x3e15ac: 0xc0f8138  jal         func_3E04E0
    ctx->pc = 0x3E15ACu;
    SET_GPR_U32(ctx, 31, 0x3E15B4u);
    ctx->pc = 0x3E15B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E15ACu;
    // 0x3e15b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E04E0u, 0x3E15ACu, 0x3E15B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E15B4u;
label_3e15b4:
    // 0x3e15b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e15b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e15b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e15b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e15bc: 0xc0f8530  jal         func_3E14C0
    ctx->pc = 0x3E15BCu;
    SET_GPR_U32(ctx, 31, 0x3E15C4u);
    ctx->pc = 0x3E15C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E15BCu;
    // 0x3e15c0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E14C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E14C0u, 0x3E15BCu, 0x3E15C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E15C4u;
label_3e15c4:
    // 0x3e15c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e15c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e15c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e15c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e15cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e15ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e15d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e15d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e15d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E15D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15D4u;
        // 0x3e15d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E15D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E15DCu;
    // 0x3e15dc: 0x0  nop
    ctx->pc = 0x3e15dcu;
    // NOP
    ctx->pc = 0x3e15e0u;
}
