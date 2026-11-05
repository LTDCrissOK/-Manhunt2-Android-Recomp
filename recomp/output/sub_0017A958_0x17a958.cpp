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

// Function: sub_0017A958
// Address: 0x17a958 - 0x17aa48
void sub_0017A958_0x17a958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A958_0x17a958");
#endif

    switch (ctx->pc) {
        case 0x17a9b8u: goto label_17a9b8;
        case 0x17a9bcu: goto label_17a9bc;
        case 0x17a9e8u: goto label_17a9e8;
        case 0x17aa00u: goto label_17aa00;
        case 0x17aa10u: goto label_17aa10;
        default: break;
    }

    ctx->pc = 0x17a958u;

    // 0x17a958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a95c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a960: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a968: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a96c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17a96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17a970: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17a970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17a974: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17a974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17a978: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x17a978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x17a97c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x17A97Cu;
    {
        const bool branch_taken_0x17a97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A97Cu;
        // 0x17a980: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a97c) {
            ctx->pc = 0x17AA24u;
            goto label_17aa24;
        }
    }
    ctx->pc = 0x17A984u;
    // 0x17a984: 0x92030531  lbu         $v1, 0x531($s0)
    ctx->pc = 0x17a984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1329)));
    // 0x17a988: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A988u;
    {
        const bool branch_taken_0x17a988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A988u;
        // 0x17a98c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a988) {
            ctx->pc = 0x17A9A4u;
            goto label_17a9a4;
        }
    }
    ctx->pc = 0x17A990u;
    // 0x17a990: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17a990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a994: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x17a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17a998: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x17a998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17a99c: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x17a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x17a9a0: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x17a9a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17a9a4:
    // 0x17a9a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17a9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9a8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17a9a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a9ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17A9ACu;
    {
        const bool branch_taken_0x17a9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9ACu;
        // 0x17a9b0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9ac) {
            ctx->pc = 0x17A9C0u;
            goto label_17a9c0;
        }
    }
    ctx->pc = 0x17A9B4u;
    // 0x17a9b4: 0x0  nop
    ctx->pc = 0x17a9b4u;
    // NOP
label_17a9b8:
    // 0x17a9b8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x17a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17a9bc:
    // 0x17a9bc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17a9bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17a9c0:
    // 0x17a9c0: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x17a9c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17a9c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17A9C4u;
    {
        const bool branch_taken_0x17a9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9C4u;
        // 0x17a9c8: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9c4) {
            ctx->pc = 0x17AA24u;
            goto label_17aa24;
        }
    }
    ctx->pc = 0x17A9CCu;
    // 0x17a9cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17a9d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a9d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a9d8: 0x1080fff7  beqz        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17A9D8u;
    {
        const bool branch_taken_0x17a9d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9D8u;
        // 0x17a9dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9d8) {
            ctx->pc = 0x17A9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a9b8;
        }
    }
    ctx->pc = 0x17A9E0u;
    // 0x17a9e0: 0xc05eaee  jal         func_17ABB8
    ctx->pc = 0x17A9E0u;
    SET_GPR_U32(ctx, 31, 0x17A9E8u);
    ctx->pc = 0x17A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A9E0u;
    // 0x17a9e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABB8u, 0x17A9E0u, 0x17A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A9E8u;
label_17a9e8:
    // 0x17a9e8: 0x1454000a  bne         $v0, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x17A9E8u;
    {
        const bool branch_taken_0x17a9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x17A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9E8u;
        // 0x17a9ec: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9e8) {
            ctx->pc = 0x17AA14u;
            goto label_17aa14;
        }
    }
    ctx->pc = 0x17A9F0u;
    // 0x17a9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9f8: 0xc05eb30  jal         func_17ACC0
    ctx->pc = 0x17A9F8u;
    SET_GPR_U32(ctx, 31, 0x17AA00u);
    ctx->pc = 0x17A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A9F8u;
    // 0x17a9fc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACC0u, 0x17A9F8u, 0x17AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA00u;
label_17aa00:
    // 0x17aa00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17aa00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17aa04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa08: 0xc05eae8  jal         func_17ABA0
    ctx->pc = 0x17AA08u;
    SET_GPR_U32(ctx, 31, 0x17AA10u);
    ctx->pc = 0x17AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA08u;
    // 0x17aa0c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABA0u, 0x17AA08u, 0x17AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA10u;
label_17aa10:
    // 0x17aa10: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x17aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17aa14:
    // 0x17aa14: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x17aa14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x17aa18: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x17aa18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17aa1c: 0x1643ffe7  bne         $s2, $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x17AA1Cu;
    {
        const bool branch_taken_0x17aa1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x17AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA1Cu;
        // 0x17aa20: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa1c) {
            ctx->pc = 0x17A9BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a9bc;
        }
    }
    ctx->pc = 0x17AA24u;
label_17aa24:
    // 0x17aa24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17aa24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aa28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17aa28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17aa2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17aa2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aa30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17aa30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17aa34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17aa34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aa38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17aa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17aa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA3Cu;
        // 0x17aa40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AA44u;
    // 0x17aa44: 0x0  nop
    ctx->pc = 0x17aa44u;
    // NOP
    ctx->pc = 0x17aa48u;
}
