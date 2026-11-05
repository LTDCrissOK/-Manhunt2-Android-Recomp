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

// Function: sub_00160488
// Address: 0x160488 - 0x1604f0
void sub_00160488_0x160488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160488_0x160488");
#endif

    switch (ctx->pc) {
        case 0x16049cu: goto label_16049c;
        case 0x1604b8u: goto label_1604b8;
        case 0x1604dcu: goto label_1604dc;
        default: break;
    }

    ctx->pc = 0x160488u;

    // 0x160488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16048c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160490: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x160490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x160494: 0xc04ef70  jal         func_13BDC0
    ctx->pc = 0x160494u;
    SET_GPR_U32(ctx, 31, 0x16049Cu);
    ctx->pc = 0x160498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160494u;
    // 0x160498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BDC0u, 0x160494u, 0x16049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16049Cu;
label_16049c:
    // 0x16049c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x16049cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1604a0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1604a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1604a4: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1604a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1604a8: 0x260302e0  addiu       $v1, $s0, 0x2E0
    ctx->pc = 0x1604a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x1604ac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1604acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1604b0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1604b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1604b4: 0x0  nop
    ctx->pc = 0x1604b4u;
    // NOP
label_1604b8:
    // 0x1604b8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1604b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1604bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1604bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1604c0: 0x0  nop
    ctx->pc = 0x1604c0u;
    // NOP
    // 0x1604c4: 0x0  nop
    ctx->pc = 0x1604c4u;
    // NOP
    // 0x1604c8: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1604C8u;
    {
        const bool branch_taken_0x1604c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1604CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604C8u;
        // 0x1604cc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604c8) {
            ctx->pc = 0x1604B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1604b8;
        }
    }
    ctx->pc = 0x1604D0u;
    // 0x1604d0: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1604d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x1604d4: 0xc05829e  jal         func_160A78
    ctx->pc = 0x1604D4u;
    SET_GPR_U32(ctx, 31, 0x1604DCu);
    ctx->pc = 0x1604D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1604D4u;
    // 0x1604d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160A78u, 0x1604D4u, 0x1604DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1604DCu;
label_1604dc:
    // 0x1604dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1604dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1604e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1604e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1604e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1604e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1604E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1604ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604E8u;
        // 0x1604ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1604E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1604F0u;
}
