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

// Function: sub_00157078
// Address: 0x157078 - 0x1570d0
void sub_00157078_0x157078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157078_0x157078");
#endif

    switch (ctx->pc) {
        case 0x157094u: goto label_157094;
        case 0x15709cu: goto label_15709c;
        case 0x1570a8u: goto label_1570a8;
        case 0x1570b8u: goto label_1570b8;
        default: break;
    }

    ctx->pc = 0x157078u;

    // 0x157078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15707c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15708c: 0xc055cae  jal         func_1572B8
    ctx->pc = 0x15708Cu;
    SET_GPR_U32(ctx, 31, 0x157094u);
    ctx->pc = 0x157090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15708Cu;
    // 0x157090: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1572B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1572B8u, 0x15708Cu, 0x157094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157094u;
label_157094:
    // 0x157094: 0xc04f032  jal         func_13C0C8
    ctx->pc = 0x157094u;
    SET_GPR_U32(ctx, 31, 0x15709Cu);
    ctx->pc = 0x157098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157094u;
    // 0x157098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0C8u, 0x157094u, 0x15709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15709Cu;
label_15709c:
    // 0x15709c: 0xae110214  sw          $s1, 0x214($s0)
    ctx->pc = 0x15709cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 17));
    // 0x1570a0: 0xc04f320  jal         func_13CC80
    ctx->pc = 0x1570A0u;
    SET_GPR_U32(ctx, 31, 0x1570A8u);
    ctx->pc = 0x1570A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570A0u;
    // 0x1570a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC80u, 0x1570A0u, 0x1570A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570A8u;
label_1570a8:
    // 0x1570a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1570a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1570ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1570acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1570b0: 0xc04f0c8  jal         func_13C320
    ctx->pc = 0x1570B0u;
    SET_GPR_U32(ctx, 31, 0x1570B8u);
    ctx->pc = 0x1570B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570B0u;
    // 0x1570b4: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C320u, 0x1570B0u, 0x1570B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570B8u;
label_1570b8:
    // 0x1570b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1570b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1570bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1570bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1570c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1570c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1570c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1570C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1570C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570C4u;
        // 0x1570c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1570C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1570CCu;
    // 0x1570cc: 0x0  nop
    ctx->pc = 0x1570ccu;
    // NOP
    ctx->pc = 0x1570d0u;
}
