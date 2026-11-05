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

// Function: sub_0012DB00
// Address: 0x12db00 - 0x12db88
void sub_0012DB00_0x12db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DB00_0x12db00");
#endif

    switch (ctx->pc) {
        case 0x12db24u: goto label_12db24;
        case 0x12db34u: goto label_12db34;
        case 0x12db40u: goto label_12db40;
        case 0x12db5cu: goto label_12db5c;
        case 0x12db70u: goto label_12db70;
        default: break;
    }

    ctx->pc = 0x12db00u;

    // 0x12db00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12db04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12db08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12db0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12db0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12db10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12db18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12db18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12db1c: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12DB1Cu;
    SET_GPR_U32(ctx, 31, 0x12DB24u);
    ctx->pc = 0x12DB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DB1Cu;
    // 0x12db20: 0x2405032c  addiu       $a1, $zero, 0x32C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 812));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12DB1Cu, 0x12DB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB24u;
label_12db24:
    // 0x12db24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12db24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12db28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12db2c: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12DB2Cu;
    SET_GPR_U32(ctx, 31, 0x12DB34u);
    ctx->pc = 0x12DB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DB2Cu;
    // 0x12db30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12DB2Cu, 0x12DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB34u;
label_12db34:
    // 0x12db34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12db34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db38: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12DB38u;
    SET_GPR_U32(ctx, 31, 0x12DB40u);
    ctx->pc = 0x12DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DB38u;
    // 0x12db3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12DB38u, 0x12DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB40u;
label_12db40:
    // 0x12db40: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x12db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x12db44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12db44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12db48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12db48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db4c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x12db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x12db50: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x12db50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x12db54: 0xc045f30  jal         func_117CC0
    ctx->pc = 0x12DB54u;
    SET_GPR_U32(ctx, 31, 0x12DB5Cu);
    ctx->pc = 0x12DB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DB54u;
    // 0x12db58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117CC0u, 0x12DB54u, 0x12DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB5Cu;
label_12db5c:
    // 0x12db5c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12db60: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12db60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db64: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12db64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12db68: 0xc04c662  jal         func_131988
    ctx->pc = 0x12DB68u;
    SET_GPR_U32(ctx, 31, 0x12DB70u);
    ctx->pc = 0x12DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DB68u;
    // 0x12db6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12DB68u, 0x12DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB70u;
label_12db70:
    // 0x12db70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12db70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12db74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12db74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12db78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12db78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12db7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12db7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12db80: 0x3e00008  jr          $ra
    ctx->pc = 0x12DB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB80u;
        // 0x12db84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DB88u;
}
