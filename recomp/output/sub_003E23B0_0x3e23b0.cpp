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

// Function: sub_003E23B0
// Address: 0x3e23b0 - 0x3e2420
void sub_003E23B0_0x3e23b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E23B0_0x3e23b0");
#endif

    switch (ctx->pc) {
        case 0x3e23e0u: goto label_3e23e0;
        case 0x3e23ecu: goto label_3e23ec;
        case 0x3e23f8u: goto label_3e23f8;
        case 0x3e240cu: goto label_3e240c;
        default: break;
    }

    ctx->pc = 0x3e23b0u;

    // 0x3e23b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e23b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e23b4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e23b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e23b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e23bc: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e23c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e23c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e23c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e23c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e23c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e23c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e23cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e23ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e23d0: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e23d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e23d4: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e23d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e23d8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E23D8u;
    SET_GPR_U32(ctx, 31, 0x3E23E0u);
    ctx->pc = 0x3E23DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E23D8u;
    // 0x3e23dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E23D8u, 0x3E23E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E23E0u;
label_3e23e0:
    // 0x3e23e0: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e23e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e23e4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E23E4u;
    SET_GPR_U32(ctx, 31, 0x3E23ECu);
    ctx->pc = 0x3E23E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E23E4u;
    // 0x3e23e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E23E4u, 0x3E23ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E23ECu;
label_3e23ec:
    // 0x3e23ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e23ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e23f0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E23F0u;
    SET_GPR_U32(ctx, 31, 0x3E23F8u);
    ctx->pc = 0x3E23F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E23F0u;
    // 0x3e23f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E23F0u, 0x3E23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E23F8u;
label_3e23f8:
    // 0x3e23f8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e23f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e23fc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E23FCu;
    {
        const bool branch_taken_0x3e23fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E23FCu;
        // 0x3e2400: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e23fc) {
            ctx->pc = 0x3E2410u;
            goto label_3e2410;
        }
    }
    ctx->pc = 0x3E2404u;
    // 0x3e2404: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E2404u;
    SET_GPR_U32(ctx, 31, 0x3E240Cu);
    ctx->pc = 0x3E2408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2404u;
    // 0x3e2408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E2404u, 0x3E240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E240Cu;
label_3e240c:
    // 0x3e240c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e240cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2410:
    // 0x3e2410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e2410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e2414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e2414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2418: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2418u;
        // 0x3e241c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2420u;
}
