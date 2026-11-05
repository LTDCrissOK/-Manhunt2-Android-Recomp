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

// Function: sub_003DE160
// Address: 0x3de160 - 0x3de1f0
void sub_003DE160_0x3de160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE160_0x3de160");
#endif

    switch (ctx->pc) {
        case 0x3de18cu: goto label_3de18c;
        case 0x3de1acu: goto label_3de1ac;
        default: break;
    }

    ctx->pc = 0x3de160u;

    // 0x3de160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3de160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3de164: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3de168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3de16c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3de16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de174: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3de174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3de178: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3de178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de17c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE17Cu;
    {
        const bool branch_taken_0x3de17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE17Cu;
        // 0x3de180: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de17c) {
            ctx->pc = 0x3DE1A0u;
            goto label_3de1a0;
        }
    }
    ctx->pc = 0x3DE184u;
    // 0x3de184: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE184u;
    SET_GPR_U32(ctx, 31, 0x3DE18Cu);
    ctx->pc = 0x3DE188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE184u;
    // 0x3de188: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE184u, 0x3DE18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE18Cu;
label_3de18c:
    // 0x3de18c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3de18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3de190: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de194: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3de194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3de198: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE198u;
    {
        const bool branch_taken_0x3de198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE198u;
        // 0x3de19c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de198) {
            ctx->pc = 0x3DE1BCu;
            goto label_3de1bc;
        }
    }
    ctx->pc = 0x3DE1A0u;
label_3de1a0:
    // 0x3de1a0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3de1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de1a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE1A4u;
    SET_GPR_U32(ctx, 31, 0x3DE1ACu);
    ctx->pc = 0x3DE1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE1A4u;
    // 0x3de1a8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE1A4u, 0x3DE1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE1ACu;
label_3de1ac:
    // 0x3de1ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de1b0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3de1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3de1b4: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3de1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3de1b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3de1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3de1bc:
    // 0x3de1bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de1c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3de1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de1c4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3de1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3de1c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3de1c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de1cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3de1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de1d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de1d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3de1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3de1d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3de1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3de1dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3de1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3de1e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3de1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3de1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1E4u;
        // 0x3de1e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE1ECu;
    // 0x3de1ec: 0x0  nop
    ctx->pc = 0x3de1ecu;
    // NOP
    ctx->pc = 0x3de1f0u;
}
