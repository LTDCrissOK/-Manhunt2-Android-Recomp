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

// Function: sub_00157A00
// Address: 0x157a00 - 0x157a58
void sub_00157A00_0x157a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157A00_0x157a00");
#endif

    switch (ctx->pc) {
        case 0x157a1cu: goto label_157a1c;
        case 0x157a24u: goto label_157a24;
        case 0x157a30u: goto label_157a30;
        case 0x157a40u: goto label_157a40;
        default: break;
    }

    ctx->pc = 0x157a00u;

    // 0x157a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157a10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157a14: 0xc05602c  jal         func_1580B0
    ctx->pc = 0x157A14u;
    SET_GPR_U32(ctx, 31, 0x157A1Cu);
    ctx->pc = 0x157A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A14u;
    // 0x157a18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1580B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1580B0u, 0x157A14u, 0x157A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A1Cu;
label_157a1c:
    // 0x157a1c: 0xc04f032  jal         func_13C0C8
    ctx->pc = 0x157A1Cu;
    SET_GPR_U32(ctx, 31, 0x157A24u);
    ctx->pc = 0x157A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A1Cu;
    // 0x157a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0C8u, 0x157A1Cu, 0x157A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A24u;
label_157a24:
    // 0x157a24: 0xae110214  sw          $s1, 0x214($s0)
    ctx->pc = 0x157a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 17));
    // 0x157a28: 0xc04f320  jal         func_13CC80
    ctx->pc = 0x157A28u;
    SET_GPR_U32(ctx, 31, 0x157A30u);
    ctx->pc = 0x157A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A28u;
    // 0x157a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC80u, 0x157A28u, 0x157A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A30u;
label_157a30:
    // 0x157a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a38: 0xc04f0c8  jal         func_13C320
    ctx->pc = 0x157A38u;
    SET_GPR_U32(ctx, 31, 0x157A40u);
    ctx->pc = 0x157A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A38u;
    // 0x157a3c: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C320u, 0x157A38u, 0x157A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A40u;
label_157a40:
    // 0x157a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157a44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157a48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x157A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A4Cu;
        // 0x157a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157A54u;
    // 0x157a54: 0x0  nop
    ctx->pc = 0x157a54u;
    // NOP
    ctx->pc = 0x157a58u;
}
