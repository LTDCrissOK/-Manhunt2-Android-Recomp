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

// Function: sub_00286A70
// Address: 0x286a70 - 0x286b18
void sub_00286A70_0x286a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286A70_0x286a70");
#endif

    switch (ctx->pc) {
        case 0x286aa0u: goto label_286aa0;
        case 0x286ab4u: goto label_286ab4;
        case 0x286adcu: goto label_286adc;
        case 0x286af0u: goto label_286af0;
        default: break;
    }

    ctx->pc = 0x286a70u;

    // 0x286a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286a74: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x286a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x286a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x286a7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x286a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x286a80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x286a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x286a84: 0x8c712598  lw          $s1, 0x2598($v1)
    ctx->pc = 0x286a84u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4C2598u));
    // 0x286a88: 0x2412fc18  addiu       $s2, $zero, -0x3E8
    ctx->pc = 0x286a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x286a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286a90: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x286A90u;
    {
        const bool branch_taken_0x286a90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x286A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A90u;
        // 0x286a94: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a90) {
            ctx->pc = 0x286AC8u;
            goto label_286ac8;
        }
    }
    ctx->pc = 0x286A98u;
    // 0x286a98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x286a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a9c: 0x0  nop
    ctx->pc = 0x286a9cu;
    // NOP
label_286aa0:
    // 0x286aa0: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x286aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x286aa4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286AA4u;
    {
        const bool branch_taken_0x286aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AA4u;
        // 0x286aa8: 0x232102a  slt         $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286aa4) {
            ctx->pc = 0x286AC4u;
            goto label_286ac4;
        }
    }
    ctx->pc = 0x286AACu;
    // 0x286aac: 0xc0ab1b4  jal         func_2AC6D0
    ctx->pc = 0x286AACu;
    SET_GPR_U32(ctx, 31, 0x286AB4u);
    ctx->pc = 0x286AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286AACu;
    // 0x286ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC6D0u, 0x286AACu, 0x286AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286AB4u;
label_286ab4:
    // 0x286ab4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x286AB4u;
    {
        const bool branch_taken_0x286ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286ab4) {
            ctx->pc = 0x286AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286AB4u;
            // 0x286ab8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286aa0;
        }
    }
    ctx->pc = 0x286ABCu;
    // 0x286abc: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x286abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x286ac0: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x286ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_286ac4:
    // 0x286ac4: 0x242880b  movn        $s1, $s2, $v0
    ctx->pc = 0x286ac4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
label_286ac8:
    // 0x286ac8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x286ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x286acc: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x286ACCu;
    {
        const bool branch_taken_0x286acc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x286AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286ACCu;
        // 0x286ad0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286acc) {
            ctx->pc = 0x286AFCu;
            goto label_286afc;
        }
    }
    ctx->pc = 0x286AD4u;
    // 0x286ad4: 0xc0ab1b4  jal         func_2AC6D0
    ctx->pc = 0x286AD4u;
    SET_GPR_U32(ctx, 31, 0x286ADCu);
    ctx->pc = 0x286AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286AD4u;
    // 0x286ad8: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC6D0u, 0x286AD4u, 0x286ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286ADCu;
label_286adc:
    // 0x286adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286ae0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x286AE0u;
    {
        const bool branch_taken_0x286ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x286AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AE0u;
        // 0x286ae4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ae0) {
            ctx->pc = 0x286AFCu;
            goto label_286afc;
        }
    }
    ctx->pc = 0x286AE8u;
    // 0x286ae8: 0xc0ab1ac  jal         func_2AC6B0
    ctx->pc = 0x286AE8u;
    SET_GPR_U32(ctx, 31, 0x286AF0u);
    ctx->pc = 0x286AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286AE8u;
    // 0x286aec: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC6B0u, 0x286AE8u, 0x286AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286AF0u;
label_286af0:
    // 0x286af0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x286af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x286af4: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x286af4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x286af8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x286af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286afc:
    // 0x286afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286b00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286b04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286b04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286b08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x286b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x286B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B0Cu;
        // 0x286b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286B14u;
    // 0x286b14: 0x0  nop
    ctx->pc = 0x286b14u;
    // NOP
    ctx->pc = 0x286b18u;
}
