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

// Function: sub_001498D0
// Address: 0x1498d0 - 0x149980
void sub_001498D0_0x1498d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001498D0_0x1498d0");
#endif

    switch (ctx->pc) {
        case 0x149910u: goto label_149910;
        case 0x149938u: goto label_149938;
        default: break;
    }

    ctx->pc = 0x1498d0u;

    // 0x1498d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1498d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1498d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1498d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1498d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1498d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1498dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1498dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1498e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1498e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1498e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1498e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1498e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1498ec: 0x8e0206fc  lw          $v0, 0x6FC($s0)
    ctx->pc = 0x1498ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1788)));
    // 0x1498f0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1498F0u;
    {
        const bool branch_taken_0x1498f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1498F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498F0u;
        // 0x1498f4: 0x30b300ff  andi        $s3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1498f0) {
            ctx->pc = 0x149960u;
            goto label_149960;
        }
    }
    ctx->pc = 0x1498F8u;
    // 0x1498f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1498f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498fc: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x1498fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x149900: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x149900u;
    {
        const bool branch_taken_0x149900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149900u;
        // 0x149904: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149900) {
            ctx->pc = 0x149958u;
            goto label_149958;
        }
    }
    ctx->pc = 0x149908u;
    // 0x149908: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x149908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14990c: 0x0  nop
    ctx->pc = 0x14990cu;
    // NOP
label_149910:
    // 0x149910: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x149910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x149914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x149914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149918: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x149918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14991c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14991Cu;
    {
        const bool branch_taken_0x14991c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14991Cu;
        // 0x149920: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14991c) {
            ctx->pc = 0x149938u;
            goto label_149938;
        }
    }
    ctx->pc = 0x149924u;
    // 0x149924: 0x12330004  beq         $s1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x149924u;
    {
        const bool branch_taken_0x149924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x149928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149924u;
        // 0x149928: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149924) {
            ctx->pc = 0x149938u;
            goto label_149938;
        }
    }
    ctx->pc = 0x14992Cu;
    // 0x14992c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149930: 0xc05244c  jal         func_149130
    ctx->pc = 0x149930u;
    SET_GPR_U32(ctx, 31, 0x149938u);
    ctx->pc = 0x149934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149930u;
    // 0x149934: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149130u, 0x149930u, 0x149938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149938u;
label_149938:
    // 0x149938: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x149938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14993c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14993cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x149940: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x149940u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x149944: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x149944u;
    {
        const bool branch_taken_0x149944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149944u;
        // 0x149948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149944) {
            ctx->pc = 0x14995Cu;
            goto label_14995c;
        }
    }
    ctx->pc = 0x14994Cu;
    // 0x14994c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x14994cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x149950: 0x5642ffef  bnel        $s2, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x149950u;
    {
        const bool branch_taken_0x149950 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x149950) {
            ctx->pc = 0x149954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149950u;
            // 0x149954: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149910;
        }
    }
    ctx->pc = 0x149958u;
label_149958:
    // 0x149958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14995c:
    // 0x14995c: 0xae0206fc  sw          $v0, 0x6FC($s0)
    ctx->pc = 0x14995cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1788), GPR_U32(ctx, 2));
label_149960:
    // 0x149960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x149964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149968: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x149968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14996c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14996cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x149970: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x149970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149974: 0x3e00008  jr          $ra
    ctx->pc = 0x149974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149974u;
        // 0x149978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14997Cu;
    // 0x14997c: 0x0  nop
    ctx->pc = 0x14997cu;
    // NOP
    ctx->pc = 0x149980u;
}
