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

// Function: sub_001A6980
// Address: 0x1a6980 - 0x1a6a30
void sub_001A6980_0x1a6980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6980_0x1a6980");
#endif

    switch (ctx->pc) {
        case 0x1a6998u: goto label_1a6998;
        case 0x1a69c0u: goto label_1a69c0;
        case 0x1a69e4u: goto label_1a69e4;
        case 0x1a69f0u: goto label_1a69f0;
        case 0x1a6a14u: goto label_1a6a14;
        default: break;
    }

    ctx->pc = 0x1a6980u;

    // 0x1a6980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6988: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a698c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6990: 0xc069ffa  jal         func_1A7FE8
    ctx->pc = 0x1A6990u;
    SET_GPR_U32(ctx, 31, 0x1A6998u);
    ctx->pc = 0x1A6994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6990u;
    // 0x1a6994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7FE8u, 0x1A6990u, 0x1A6998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6998u;
label_1a6998:
    // 0x1a6998: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a6998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a699c: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x1a699cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a69a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a69a4: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1a69a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1a69a8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A69A8u;
    {
        const bool branch_taken_0x1a69a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69A8u;
        // 0x1a69ac: 0xae0201c8  sw          $v0, 0x1C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69a8) {
            ctx->pc = 0x1A69C8u;
            goto label_1a69c8;
        }
    }
    ctx->pc = 0x1A69B0u;
    // 0x1a69b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a69b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69b4: 0x24c6050f  addiu       $a2, $a2, 0x50F
    ctx->pc = 0x1a69b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1295));
    // 0x1a69b8: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A69B8u;
    SET_GPR_U32(ctx, 31, 0x1A69C0u);
    ctx->pc = 0x1A69BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69B8u;
    // 0x1a69bc: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A69B8u, 0x1A69C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69C0u;
label_1a69c0:
    // 0x1a69c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A69C0u;
    {
        const bool branch_taken_0x1a69c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69C0u;
        // 0x1a69c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69c0) {
            ctx->pc = 0x1A6A18u;
            goto label_1a6a18;
        }
    }
    ctx->pc = 0x1A69C8u;
label_1a69c8:
    // 0x1a69c8: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1a69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1a69cc: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A69CCu;
    {
        const bool branch_taken_0x1a69cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69CCu;
        // 0x1a69d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69cc) {
            ctx->pc = 0x1A6A08u;
            goto label_1a6a08;
        }
    }
    ctx->pc = 0x1A69D4u;
    // 0x1a69d4: 0x24c604e7  addiu       $a2, $a2, 0x4E7
    ctx->pc = 0x1a69d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1255));
    // 0x1a69d8: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1a69d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1a69dc: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A69DCu;
    SET_GPR_U32(ctx, 31, 0x1A69E4u);
    ctx->pc = 0x1A69E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69DCu;
    // 0x1a69e0: 0x8e11014c  lw          $s1, 0x14C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A69DCu, 0x1A69E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69E4u;
label_1a69e4:
    // 0x1a69e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a69e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69e8: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x1A69E8u;
    SET_GPR_U32(ctx, 31, 0x1A69F0u);
    ctx->pc = 0x1A69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69E8u;
    // 0x1a69ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x1A69E8u, 0x1A69F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69F0u;
label_1a69f0:
    // 0x1a69f0: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1a69f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1a69f4: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1a69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a69f8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A69F8u;
    {
        const bool branch_taken_0x1a69f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69F8u;
        // 0x1a69fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69f8) {
            ctx->pc = 0x1A6A14u;
            goto label_1a6a14;
        }
    }
    ctx->pc = 0x1A6A00u;
    // 0x1a6a00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6A00u;
    {
        const bool branch_taken_0x1a6a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A00u;
        // 0x1a6a04: 0xae11014c  sw          $s1, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a00) {
            ctx->pc = 0x1A6A18u;
            goto label_1a6a18;
        }
    }
    ctx->pc = 0x1A6A08u;
label_1a6a08:
    // 0x1a6a08: 0x24c60519  addiu       $a2, $a2, 0x519
    ctx->pc = 0x1a6a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1305));
    // 0x1a6a0c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6A0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6A14u);
    ctx->pc = 0x1A6A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A0Cu;
    // 0x1a6a10: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6A0Cu, 0x1A6A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A14u;
label_1a6a14:
    // 0x1a6a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6a18:
    // 0x1a6a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6a1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A24u;
        // 0x1a6a28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6A2Cu;
    // 0x1a6a2c: 0x0  nop
    ctx->pc = 0x1a6a2cu;
    // NOP
    ctx->pc = 0x1a6a30u;
}
