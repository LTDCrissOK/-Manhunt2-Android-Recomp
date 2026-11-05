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

// Function: sub_00326AC0
// Address: 0x326ac0 - 0x326b08
void sub_00326AC0_0x326ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326AC0_0x326ac0");
#endif

    switch (ctx->pc) {
        case 0x326ad4u: goto label_326ad4;
        case 0x326ae8u: goto label_326ae8;
        case 0x326af8u: goto label_326af8;
        default: break;
    }

    ctx->pc = 0x326ac0u;

    // 0x326ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x326ac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x326ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x326acc: 0xc0c9ad6  jal         func_326B58
    ctx->pc = 0x326ACCu;
    SET_GPR_U32(ctx, 31, 0x326AD4u);
    ctx->pc = 0x326AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326ACCu;
    // 0x326ad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B58u, 0x326ACCu, 0x326AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326AD4u;
label_326ad4:
    // 0x326ad4: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x326ad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x326ad8: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x326AD8u;
    {
        const bool branch_taken_0x326ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x326ad8) {
            ctx->pc = 0x326ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326AD8u;
            // 0x326adc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326AFCu;
            goto label_326afc;
        }
    }
    ctx->pc = 0x326AE0u;
    // 0x326ae0: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x326AE0u;
    SET_GPR_U32(ctx, 31, 0x326AE8u);
    ctx->pc = 0x326AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326AE0u;
    // 0x326ae4: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x326AE0u, 0x326AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326AE8u;
label_326ae8:
    // 0x326ae8: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x326ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x326aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326af0: 0xc0c9ae2  jal         func_326B88
    ctx->pc = 0x326AF0u;
    SET_GPR_U32(ctx, 31, 0x326AF8u);
    ctx->pc = 0x326AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326AF0u;
    // 0x326af4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B88u, 0x326AF0u, 0x326AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326AF8u;
label_326af8:
    // 0x326af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_326afc:
    // 0x326afc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x326afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326b00: 0x3e00008  jr          $ra
    ctx->pc = 0x326B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B00u;
        // 0x326b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326B08u;
}
