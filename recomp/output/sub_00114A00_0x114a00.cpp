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

// Function: sub_00114A00
// Address: 0x114a00 - 0x114a60
void sub_00114A00_0x114a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114A00_0x114a00");
#endif

    switch (ctx->pc) {
        case 0x114a30u: goto label_114a30;
        case 0x114a44u: goto label_114a44;
        default: break;
    }

    ctx->pc = 0x114a00u;

    // 0x114a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114a08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114a14: 0x8e050208  lw          $a1, 0x208($s0)
    ctx->pc = 0x114a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x114a18: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x114A18u;
    {
        const bool branch_taken_0x114a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A18u;
        // 0x114a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a18) {
            ctx->pc = 0x114A4Cu;
            goto label_114a4c;
        }
    }
    ctx->pc = 0x114A20u;
    // 0x114a20: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x114a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x114a24: 0x2451b530  addiu       $s1, $v0, -0x4AD0
    ctx->pc = 0x114a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x114a28: 0xc04b2b6  jal         func_12CAD8
    ctx->pc = 0x114A28u;
    SET_GPR_U32(ctx, 31, 0x114A30u);
    ctx->pc = 0x114A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A28u;
    // 0x114a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x114A28u, 0x114A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A30u;
label_114a30:
    // 0x114a30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114A30u;
    {
        const bool branch_taken_0x114a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A30u;
        // 0x114a34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a30) {
            ctx->pc = 0x114A4Cu;
            goto label_114a4c;
        }
    }
    ctx->pc = 0x114A38u;
    // 0x114a38: 0x8e050208  lw          $a1, 0x208($s0)
    ctx->pc = 0x114a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x114a3c: 0xc04b2c0  jal         func_12CB00
    ctx->pc = 0x114A3Cu;
    SET_GPR_U32(ctx, 31, 0x114A44u);
    ctx->pc = 0x114A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A3Cu;
    // 0x114a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB00u, 0x114A3Cu, 0x114A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A44u;
label_114a44:
    // 0x114a44: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x114a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x114a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114a4c:
    // 0x114a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114a50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x114a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114a54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x114a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114a58: 0x3e00008  jr          $ra
    ctx->pc = 0x114A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A58u;
        // 0x114a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114A60u;
}
