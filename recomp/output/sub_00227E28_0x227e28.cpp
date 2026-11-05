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

// Function: sub_00227E28
// Address: 0x227e28 - 0x227ea8
void sub_00227E28_0x227e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227E28_0x227e28");
#endif

    switch (ctx->pc) {
        case 0x227e4cu: goto label_227e4c;
        case 0x227e60u: goto label_227e60;
        case 0x227e7cu: goto label_227e7c;
        case 0x227e90u: goto label_227e90;
        default: break;
    }

    ctx->pc = 0x227e28u;

    // 0x227e28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227e2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x227e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x227e30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x227e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x227e34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x227e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x227e3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e40: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x227e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x227e44: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x227E44u;
    SET_GPR_U32(ctx, 31, 0x227E4Cu);
    ctx->pc = 0x227E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E44u;
    // 0x227e48: 0x24a501d8  addiu       $a1, $a1, 0x1D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x227E44u, 0x227E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E4Cu;
label_227e4c:
    // 0x227e4c: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x227e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227e50: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x227e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x227e54: 0x24a54490  addiu       $a1, $a1, 0x4490
    ctx->pc = 0x227e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17552));
    // 0x227e58: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x227E58u;
    SET_GPR_U32(ctx, 31, 0x227E60u);
    ctx->pc = 0x227E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E58u;
    // 0x227e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x227E58u, 0x227E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E60u;
label_227e60:
    // 0x227e60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227E60u;
    {
        const bool branch_taken_0x227e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E60u;
        // 0x227e64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e60) {
            ctx->pc = 0x227E84u;
            goto label_227e84;
        }
    }
    ctx->pc = 0x227E68u;
    // 0x227e68: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x227e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x227e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e74: 0xc089fca  jal         func_227F28
    ctx->pc = 0x227E74u;
    SET_GPR_U32(ctx, 31, 0x227E7Cu);
    ctx->pc = 0x227E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E74u;
    // 0x227e78: 0xae020704  sw          $v0, 0x704($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F28u, 0x227E74u, 0x227E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E7Cu;
label_227e7c:
    // 0x227e7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227e80: 0xa20206fc  sb          $v0, 0x6FC($s0)
    ctx->pc = 0x227e80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1788), (uint8_t)GPR_U32(ctx, 2));
label_227e84:
    // 0x227e84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e88: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x227E88u;
    SET_GPR_U32(ctx, 31, 0x227E90u);
    ctx->pc = 0x227E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E88u;
    // 0x227e8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x227E88u, 0x227E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E90u;
label_227e90:
    // 0x227e90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x227e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227e94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x227e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x227e98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x227E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E9Cu;
        // 0x227ea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227EA4u;
    // 0x227ea4: 0x0  nop
    ctx->pc = 0x227ea4u;
    // NOP
    ctx->pc = 0x227ea8u;
}
