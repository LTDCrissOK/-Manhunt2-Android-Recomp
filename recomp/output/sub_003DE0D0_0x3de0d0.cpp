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

// Function: sub_003DE0D0
// Address: 0x3de0d0 - 0x3de160
void sub_003DE0D0_0x3de0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE0D0_0x3de0d0");
#endif

    switch (ctx->pc) {
        case 0x3de0fcu: goto label_3de0fc;
        case 0x3de11cu: goto label_3de11c;
        default: break;
    }

    ctx->pc = 0x3de0d0u;

    // 0x3de0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3de0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3de0d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de0d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3de0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3de0dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3de0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de0e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de0e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3de0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3de0e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3de0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de0ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE0ECu;
    {
        const bool branch_taken_0x3de0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0ECu;
        // 0x3de0f0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de0ec) {
            ctx->pc = 0x3DE110u;
            goto label_3de110;
        }
    }
    ctx->pc = 0x3DE0F4u;
    // 0x3de0f4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE0F4u;
    SET_GPR_U32(ctx, 31, 0x3DE0FCu);
    ctx->pc = 0x3DE0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE0F4u;
    // 0x3de0f8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE0F4u, 0x3DE0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE0FCu;
label_3de0fc:
    // 0x3de0fc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3de0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3de100: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de104: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3de104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3de108: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE108u;
    {
        const bool branch_taken_0x3de108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE108u;
        // 0x3de10c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de108) {
            ctx->pc = 0x3DE12Cu;
            goto label_3de12c;
        }
    }
    ctx->pc = 0x3DE110u;
label_3de110:
    // 0x3de110: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3de110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de114: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE114u;
    SET_GPR_U32(ctx, 31, 0x3DE11Cu);
    ctx->pc = 0x3DE118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE114u;
    // 0x3de118: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE114u, 0x3DE11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE11Cu;
label_3de11c:
    // 0x3de11c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de120: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3de120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3de124: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3de124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3de128: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3de128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3de12c:
    // 0x3de12c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3de130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de134: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3de134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3de138: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3de138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de13c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3de13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de140: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de144: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3de144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3de148: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3de148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3de14c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3de14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3de150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3de150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3de154: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE154u;
        // 0x3de158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE15Cu;
    // 0x3de15c: 0x0  nop
    ctx->pc = 0x3de15cu;
    // NOP
    ctx->pc = 0x3de160u;
}
