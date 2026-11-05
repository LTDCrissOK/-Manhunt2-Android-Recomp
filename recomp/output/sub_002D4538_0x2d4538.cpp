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

// Function: sub_002D4538
// Address: 0x2d4538 - 0x2d45a8
void sub_002D4538_0x2d4538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4538_0x2d4538");
#endif

    switch (ctx->pc) {
        case 0x2d4560u: goto label_2d4560;
        case 0x2d457cu: goto label_2d457c;
        case 0x2d4594u: goto label_2d4594;
        default: break;
    }

    ctx->pc = 0x2d4538u;

    // 0x2d4538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d453c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d453cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d4540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d4548: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d454c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d454cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d4550: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d4550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4554: 0x8c44bd20  lw          $a0, -0x42E0($v0)
    ctx->pc = 0x2d4554u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD20u));
    // 0x2d4558: 0xc0b5906  jal         func_2D6418
    ctx->pc = 0x2D4558u;
    SET_GPR_U32(ctx, 31, 0x2D4560u);
    ctx->pc = 0x2D455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4558u;
    // 0x2d455c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6418u, 0x2D4558u, 0x2D4560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4560u;
label_2d4560:
    // 0x2d4560: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2d4560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d4564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4568: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2d4568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2d456c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d4570: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2d4570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2d4574: 0xc0b50fe  jal         func_2D43F8
    ctx->pc = 0x2D4574u;
    SET_GPR_U32(ctx, 31, 0x2D457Cu);
    ctx->pc = 0x2D4578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4574u;
    // 0x2d4578: 0xac50b5f0  sw          $s0, -0x4A10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948336), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D43F8u, 0x2D4574u, 0x2D457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D457Cu;
label_2d457c:
    // 0x2d457c: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x2d457cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x2d4580: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2d4580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2d4584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d4584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4588: 0x24a51d50  addiu       $a1, $a1, 0x1D50
    ctx->pc = 0x2d4588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7504));
    // 0x2d458c: 0xc0c8a76  jal         func_3229D8
    ctx->pc = 0x2D458Cu;
    SET_GPR_U32(ctx, 31, 0x2D4594u);
    ctx->pc = 0x2D4590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D458Cu;
    // 0x2d4590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3229D8u, 0x2D458Cu, 0x2D4594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4594u;
label_2d4594:
    // 0x2d4594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4598: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d459c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d459cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d45a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D45A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45A0u;
        // 0x2d45a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D45A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D45A8u;
}
