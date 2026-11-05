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

// Function: sub_00334960
// Address: 0x334960 - 0x3349e8
void sub_00334960_0x334960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334960_0x334960");
#endif

    switch (ctx->pc) {
        case 0x334988u: goto label_334988;
        case 0x3349acu: goto label_3349ac;
        default: break;
    }

    ctx->pc = 0x334960u;

    // 0x334960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x334964: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x334964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x334968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33496c: 0x24446e70  addiu       $a0, $v0, 0x6E70
    ctx->pc = 0x33496cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x334970: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x334970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x334974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x334978: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x334978u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B6E74u));
    // 0x33497c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x33497cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5B6E7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6E7Cu, _value); } while (0);
    // 0x334980: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x334980u;
    {
        const bool branch_taken_0x334980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334980u;
        // 0x334984: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334980) {
            ctx->pc = 0x3349B4u;
            goto label_3349b4;
        }
    }
    ctx->pc = 0x334988u;
label_334988:
    // 0x334988: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x334988u;
    {
        const bool branch_taken_0x334988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334988u;
        // 0x33498c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334988) {
            ctx->pc = 0x334994u;
            goto label_334994;
        }
    }
    ctx->pc = 0x334990u;
    // 0x334990: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x334990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_334994:
    // 0x334994: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334994u;
    {
        const bool branch_taken_0x334994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334994u;
        // 0x334998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334994) {
            ctx->pc = 0x3349A4u;
            goto label_3349a4;
        }
    }
    ctx->pc = 0x33499Cu;
    // 0x33499c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x33499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3349a0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3349a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_3349a4:
    // 0x3349a4: 0xc0c9bdc  jal         func_326F70
    ctx->pc = 0x3349A4u;
    SET_GPR_U32(ctx, 31, 0x3349ACu);
    ctx->pc = 0x3349A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3349A4u;
    // 0x3349a8: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326F70u, 0x3349A4u, 0x3349ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3349ACu;
label_3349ac:
    // 0x3349ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3349ACu;
    {
        const bool branch_taken_0x3349ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3349B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349ACu;
        // 0x3349b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349ac) {
            ctx->pc = 0x3349D4u;
            goto label_3349d4;
        }
    }
    ctx->pc = 0x3349B4u;
label_3349b4:
    // 0x3349b4: 0x26236e70  addiu       $v1, $s1, 0x6E70
    ctx->pc = 0x3349b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28272));
    // 0x3349b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3349b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3349bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3349BCu;
    {
        const bool branch_taken_0x3349bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3349C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349BCu;
        // 0x3349c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349bc) {
            ctx->pc = 0x3349C8u;
            goto label_3349c8;
        }
    }
    ctx->pc = 0x3349C4u;
    // 0x3349c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3349c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3349c8:
    // 0x3349c8: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3349C8u;
    {
        const bool branch_taken_0x3349c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3349c8) {
            ctx->pc = 0x334988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334988;
        }
    }
    ctx->pc = 0x3349D0u;
    // 0x3349d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3349d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3349d4:
    // 0x3349d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3349d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3349d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3349d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3349dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3349dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3349e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3349E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3349E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349E0u;
        // 0x3349e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3349E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3349E8u;
}
