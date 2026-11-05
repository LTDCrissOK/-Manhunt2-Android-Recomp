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

// Function: sub_001DA5C0
// Address: 0x1da5c0 - 0x1da630
void sub_001DA5C0_0x1da5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA5C0_0x1da5c0");
#endif

    switch (ctx->pc) {
        case 0x1da5ecu: goto label_1da5ec;
        case 0x1da604u: goto label_1da604;
        default: break;
    }

    ctx->pc = 0x1da5c0u;

    // 0x1da5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da5c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da5c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da5cc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1da5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x1da5d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da5d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5d8: 0x3610fdef  ori         $s0, $s0, 0xFDEF
    ctx->pc = 0x1da5d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65007);
    // 0x1da5dc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1da5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1da5e0: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x1da5e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x1da5e4: 0xc076934  jal         func_1DA4D0
    ctx->pc = 0x1DA5E4u;
    SET_GPR_U32(ctx, 31, 0x1DA5ECu);
    ctx->pc = 0x1DA5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA5E4u;
    // 0x1da5e8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA4D0u, 0x1DA5E4u, 0x1DA5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5ECu;
label_1da5ec:
    // 0x1da5ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA5ECu;
    {
        const bool branch_taken_0x1da5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5ECu;
        // 0x1da5f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5ec) {
            ctx->pc = 0x1DA614u;
            goto label_1da614;
        }
    }
    ctx->pc = 0x1DA5F4u;
    // 0x1da5f4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA5F4u;
    {
        const bool branch_taken_0x1da5f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5F4u;
        // 0x1da5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5f4) {
            ctx->pc = 0x1DA610u;
            goto label_1da610;
        }
    }
    ctx->pc = 0x1DA5FCu;
    // 0x1da5fc: 0xc076950  jal         func_1DA540
    ctx->pc = 0x1DA5FCu;
    SET_GPR_U32(ctx, 31, 0x1DA604u);
    ctx->pc = 0x1DA600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA5FCu;
    // 0x1da600: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA540u, 0x1DA5FCu, 0x1DA604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA604u;
label_1da604:
    // 0x1da604: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1da604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da608: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA608u;
    {
        const bool branch_taken_0x1da608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA608u;
        // 0x1da60c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da608) {
            ctx->pc = 0x1DA614u;
            goto label_1da614;
        }
    }
    ctx->pc = 0x1DA610u;
label_1da610:
    // 0x1da610: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da614:
    // 0x1da614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da618: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da61c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da620: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA620u;
        // 0x1da624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA628u;
    // 0x1da628: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1da628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1da62c: 0x0  nop
    ctx->pc = 0x1da62cu;
    // NOP
    ctx->pc = 0x1da630u;
}
