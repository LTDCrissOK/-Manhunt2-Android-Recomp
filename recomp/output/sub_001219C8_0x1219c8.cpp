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

// Function: sub_001219C8
// Address: 0x1219c8 - 0x121a38
void sub_001219C8_0x1219c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001219C8_0x1219c8");
#endif

    switch (ctx->pc) {
        case 0x1219f0u: goto label_1219f0;
        case 0x121a00u: goto label_121a00;
        case 0x121a14u: goto label_121a14;
        default: break;
    }

    ctx->pc = 0x1219c8u;

    // 0x1219c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1219c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1219cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1219ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1219d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1219d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1219d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1219d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1219d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1219d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1219dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1219dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1219e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1219e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1219e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1219e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1219e8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1219E8u;
    SET_GPR_U32(ctx, 31, 0x1219F0u);
    ctx->pc = 0x1219ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219E8u;
    // 0x1219ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1219E8u, 0x1219F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219F0u;
label_1219f0:
    // 0x1219f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1219F0u;
    {
        const bool branch_taken_0x1219f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219F0u;
        // 0x1219f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219f0) {
            ctx->pc = 0x121A20u;
            goto label_121a20;
        }
    }
    ctx->pc = 0x1219F8u;
    // 0x1219f8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1219F8u;
    SET_GPR_U32(ctx, 31, 0x121A00u);
    ctx->pc = 0x1219FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219F8u;
    // 0x1219fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1219F8u, 0x121A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A00u;
label_121a00:
    // 0x121a00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121A00u;
    {
        const bool branch_taken_0x121a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A00u;
        // 0x121a04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a00) {
            ctx->pc = 0x121A1Cu;
            goto label_121a1c;
        }
    }
    ctx->pc = 0x121A08u;
    // 0x121a08: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x121a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x121a0c: 0xc04265a  jal         func_109968
    ctx->pc = 0x121A0Cu;
    SET_GPR_U32(ctx, 31, 0x121A14u);
    ctx->pc = 0x121A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A0Cu;
    // 0x121a10: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109968u, 0x121A0Cu, 0x121A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A14u;
label_121a14:
    // 0x121a14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121A14u;
    {
        const bool branch_taken_0x121a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A14u;
        // 0x121a18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a14) {
            ctx->pc = 0x121A24u;
            goto label_121a24;
        }
    }
    ctx->pc = 0x121A1Cu;
label_121a1c:
    // 0x121a1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x121a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121a20:
    // 0x121a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121a24:
    // 0x121a24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121a28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121a2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x121a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121a30: 0x3e00008  jr          $ra
    ctx->pc = 0x121A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A30u;
        // 0x121a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121A38u;
}
