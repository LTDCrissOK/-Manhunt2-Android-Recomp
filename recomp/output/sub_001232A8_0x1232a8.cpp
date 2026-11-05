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

// Function: sub_001232A8
// Address: 0x1232a8 - 0x123318
void sub_001232A8_0x1232a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001232A8_0x1232a8");
#endif

    switch (ctx->pc) {
        case 0x1232d0u: goto label_1232d0;
        case 0x1232e0u: goto label_1232e0;
        case 0x1232f4u: goto label_1232f4;
        default: break;
    }

    ctx->pc = 0x1232a8u;

    // 0x1232a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1232a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1232ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1232acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1232b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1232b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1232b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1232b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1232b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1232bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1232bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1232c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1232c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1232c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232c8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1232C8u;
    SET_GPR_U32(ctx, 31, 0x1232D0u);
    ctx->pc = 0x1232CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1232C8u;
    // 0x1232cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1232C8u, 0x1232D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1232D0u;
label_1232d0:
    // 0x1232d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1232D0u;
    {
        const bool branch_taken_0x1232d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232D0u;
        // 0x1232d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232d0) {
            ctx->pc = 0x123300u;
            goto label_123300;
        }
    }
    ctx->pc = 0x1232D8u;
    // 0x1232d8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1232D8u;
    SET_GPR_U32(ctx, 31, 0x1232E0u);
    ctx->pc = 0x1232DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1232D8u;
    // 0x1232dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1232D8u, 0x1232E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1232E0u;
label_1232e0:
    // 0x1232e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1232E0u;
    {
        const bool branch_taken_0x1232e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232E0u;
        // 0x1232e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232e0) {
            ctx->pc = 0x1232FCu;
            goto label_1232fc;
        }
    }
    ctx->pc = 0x1232E8u;
    // 0x1232e8: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x1232e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1232ec: 0xc0429ac  jal         func_10A6B0
    ctx->pc = 0x1232ECu;
    SET_GPR_U32(ctx, 31, 0x1232F4u);
    ctx->pc = 0x1232F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1232ECu;
    // 0x1232f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A6B0u, 0x1232ECu, 0x1232F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1232F4u;
label_1232f4:
    // 0x1232f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1232F4u;
    {
        const bool branch_taken_0x1232f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232F4u;
        // 0x1232f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232f4) {
            ctx->pc = 0x123304u;
            goto label_123304;
        }
    }
    ctx->pc = 0x1232FCu;
label_1232fc:
    // 0x1232fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1232fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123300:
    // 0x123300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123304:
    // 0x123304: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123308: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12330c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123310: 0x3e00008  jr          $ra
    ctx->pc = 0x123310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123310u;
        // 0x123314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123318u;
}
