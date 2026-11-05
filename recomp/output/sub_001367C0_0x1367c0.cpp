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

// Function: sub_001367C0
// Address: 0x1367c0 - 0x136860
void sub_001367C0_0x1367c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001367C0_0x1367c0");
#endif

    switch (ctx->pc) {
        case 0x1367e8u: goto label_1367e8;
        case 0x136818u: goto label_136818;
        case 0x136824u: goto label_136824;
        case 0x13683cu: goto label_13683c;
        default: break;
    }

    ctx->pc = 0x1367c0u;

    // 0x1367c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1367c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1367c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1367c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1367c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1367c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1367cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1367ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1367d0: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1367d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1367d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1367d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1367d8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1367d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1367dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1367dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1367e0: 0xc04da4a  jal         func_136928
    ctx->pc = 0x1367E0u;
    SET_GPR_U32(ctx, 31, 0x1367E8u);
    ctx->pc = 0x1367E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367E0u;
    // 0x1367e4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136928u, 0x1367E0u, 0x1367E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1367E8u;
label_1367e8:
    // 0x1367e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1367e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1367ec: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1367ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1367f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1367F0u;
    {
        const bool branch_taken_0x1367f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367F0u;
        // 0x1367f4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367f0) {
            ctx->pc = 0x136810u;
            goto label_136810;
        }
    }
    ctx->pc = 0x1367F8u;
    // 0x1367f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1367f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1367fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1367fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x136800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136804: 0x8c500410  lw          $s0, 0x410($v0)
    ctx->pc = 0x136804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
    // 0x136808: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x136808u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x13680c: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x13680cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_136810:
    // 0x136810: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x136810u;
    SET_GPR_U32(ctx, 31, 0x136818u);
    ctx->pc = 0x136814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136810u;
    // 0x136814: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x136810u, 0x136818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136818u;
label_136818:
    // 0x136818: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13681c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x13681Cu;
    SET_GPR_U32(ctx, 31, 0x136824u);
    ctx->pc = 0x136820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13681Cu;
    // 0x136820: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x13681Cu, 0x136824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136824u;
label_136824:
    // 0x136824: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x136824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x136828: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x136828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13682c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x13682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x136830: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x136830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136834: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x136834u;
    SET_GPR_U32(ctx, 31, 0x13683Cu);
    ctx->pc = 0x136838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136834u;
    // 0x136838: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x136834u, 0x13683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13683Cu;
label_13683c:
    // 0x13683c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13683cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136840: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x136840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136844: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x136844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136848: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x136848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13684c: 0x3e00008  jr          $ra
    ctx->pc = 0x13684Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13684Cu;
        // 0x136850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13684Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136854u;
    // 0x136854: 0x0  nop
    ctx->pc = 0x136854u;
    // NOP
    // 0x136858: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x136858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x13685c: 0x0  nop
    ctx->pc = 0x13685cu;
    // NOP
    ctx->pc = 0x136860u;
}
