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

// Function: sub_0010B5C0
// Address: 0x10b5c0 - 0x10b640
void sub_0010B5C0_0x10b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B5C0_0x10b5c0");
#endif

    switch (ctx->pc) {
        case 0x10b5dcu: goto label_10b5dc;
        case 0x10b60cu: goto label_10b60c;
        case 0x10b61cu: goto label_10b61c;
        default: break;
    }

    ctx->pc = 0x10b5c0u;

    // 0x10b5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b5c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b5c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b5cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b5d4: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B5D4u;
    SET_GPR_U32(ctx, 31, 0x10B5DCu);
    ctx->pc = 0x10B5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5D4u;
    // 0x10b5d8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B5D4u, 0x10B5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5DCu;
label_10b5dc:
    // 0x10b5dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b5dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5e0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b5e4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10B5E4u;
    {
        const bool branch_taken_0x10b5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5E4u;
        // 0x10b5e8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5e4) {
            ctx->pc = 0x10B624u;
            goto label_10b624;
        }
    }
    ctx->pc = 0x10B5ECu;
    // 0x10b5ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b5f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b5f4: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10b5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b5f8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B5F8u;
    {
        const bool branch_taken_0x10b5f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5F8u;
        // 0x10b5fc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5f8) {
            ctx->pc = 0x10B624u;
            goto label_10b624;
        }
    }
    ctx->pc = 0x10B600u;
    // 0x10b600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b604: 0xc047866  jal         func_11E198
    ctx->pc = 0x10B604u;
    SET_GPR_U32(ctx, 31, 0x10B60Cu);
    ctx->pc = 0x10B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B604u;
    // 0x10b608: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x10B604u, 0x10B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B60Cu;
label_10b60c:
    // 0x10b60c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B60Cu;
    {
        const bool branch_taken_0x10b60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B60Cu;
        // 0x10b610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b60c) {
            ctx->pc = 0x10B624u;
            goto label_10b624;
        }
    }
    ctx->pc = 0x10B614u;
    // 0x10b614: 0xc044014  jal         func_110050
    ctx->pc = 0x10B614u;
    SET_GPR_U32(ctx, 31, 0x10B61Cu);
    ctx->pc = 0x10B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B614u;
    // 0x10b618: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110050u, 0x10B614u, 0x10B61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B61Cu;
label_10b61c:
    // 0x10b61c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B61Cu;
    {
        const bool branch_taken_0x10b61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B61Cu;
        // 0x10b620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b61c) {
            ctx->pc = 0x10B628u;
            goto label_10b628;
        }
    }
    ctx->pc = 0x10B624u;
label_10b624:
    // 0x10b624: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b628:
    // 0x10b628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b62c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b62cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b634: 0x3e00008  jr          $ra
    ctx->pc = 0x10B634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B634u;
        // 0x10b638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B63Cu;
    // 0x10b63c: 0x0  nop
    ctx->pc = 0x10b63cu;
    // NOP
    ctx->pc = 0x10b640u;
}
