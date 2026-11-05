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

// Function: sub_00356FD0
// Address: 0x356fd0 - 0x357038
void sub_00356FD0_0x356fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356FD0_0x356fd0");
#endif

    switch (ctx->pc) {
        case 0x356ff8u: goto label_356ff8;
        default: break;
    }

    ctx->pc = 0x356fd0u;

    // 0x356fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x356fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x356fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x356fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356fe0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x356fe4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x356fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356fe8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x356fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x356fec: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x356fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x356ff0: 0xc0d5b9a  jal         func_356E68
    ctx->pc = 0x356FF0u;
    SET_GPR_U32(ctx, 31, 0x356FF8u);
    ctx->pc = 0x356FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356FF0u;
    // 0x356ff4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356E68u, 0x356FF0u, 0x356FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356FF8u;
label_356ff8:
    // 0x356ff8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x356ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x356ffc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x356ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357000: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x357000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x357004: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x357004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x357008: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x357008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x35700c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x35700cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x357010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357014: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x357014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x357018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35701c: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x35701cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x357020: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x357020u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x357024: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x357024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x357028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35702c: 0x3e00008  jr          $ra
    ctx->pc = 0x35702Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35702Cu;
        // 0x357030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35702Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357034u;
    // 0x357034: 0x0  nop
    ctx->pc = 0x357034u;
    // NOP
    ctx->pc = 0x357038u;
}
