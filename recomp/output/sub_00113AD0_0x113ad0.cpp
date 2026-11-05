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

// Function: sub_00113AD0
// Address: 0x113ad0 - 0x113b48
void sub_00113AD0_0x113ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113AD0_0x113ad0");
#endif

    switch (ctx->pc) {
        case 0x113af4u: goto label_113af4;
        case 0x113b1cu: goto label_113b1c;
        default: break;
    }

    ctx->pc = 0x113ad0u;

    // 0x113ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113ad8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x113adc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x113adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ae0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x113ae4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x113AE4u;
    {
        const bool branch_taken_0x113ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AE4u;
        // 0x113ae8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ae4) {
            ctx->pc = 0x113B2Cu;
            goto label_113b2c;
        }
    }
    ctx->pc = 0x113AECu;
    // 0x113aec: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x113AECu;
    SET_GPR_U32(ctx, 31, 0x113AF4u);
    ctx->pc = 0x113AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AECu;
    // 0x113af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x113AECu, 0x113AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AF4u;
label_113af4:
    // 0x113af4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x113AF4u;
    {
        const bool branch_taken_0x113af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AF4u;
        // 0x113af8: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113af4) {
            ctx->pc = 0x113B2Cu;
            goto label_113b2c;
        }
    }
    ctx->pc = 0x113AFCu;
    // 0x113afc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x113afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x113b00: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x113b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x113b04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x113b08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x113b0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x113b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x113b10: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x113b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x113b14: 0xc0696ec  jal         func_1A5BB0
    ctx->pc = 0x113B14u;
    SET_GPR_U32(ctx, 31, 0x113B1Cu);
    ctx->pc = 0x113B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B14u;
    // 0x113b18: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5BB0u, 0x113B14u, 0x113B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B1Cu;
label_113b1c:
    // 0x113b1c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x113b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113b20: 0x3843080d  xori        $v1, $v0, 0x80D
    ctx->pc = 0x113b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2061);
    // 0x113b24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113B24u;
    {
        const bool branch_taken_0x113b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B24u;
        // 0x113b28: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b24) {
            ctx->pc = 0x113B30u;
            goto label_113b30;
        }
    }
    ctx->pc = 0x113B2Cu;
label_113b2c:
    // 0x113b2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x113b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_113b30:
    // 0x113b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113b34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x113B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B3Cu;
        // 0x113b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113B44u;
    // 0x113b44: 0x0  nop
    ctx->pc = 0x113b44u;
    // NOP
    ctx->pc = 0x113b48u;
}
