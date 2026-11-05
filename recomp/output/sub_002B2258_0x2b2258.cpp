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

// Function: sub_002B2258
// Address: 0x2b2258 - 0x2b22d0
void sub_002B2258_0x2b2258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2258_0x2b2258");
#endif

    switch (ctx->pc) {
        case 0x2b2288u: goto label_2b2288;
        case 0x2b2298u: goto label_2b2298;
        default: break;
    }

    ctx->pc = 0x2b2258u;

    // 0x2b2258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b225c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2b225cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2b2260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2264: 0x244238c0  addiu       $v0, $v0, 0x38C0
    ctx->pc = 0x2b2264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14528));
    // 0x2b2268: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b226c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b226cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b2270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b2278: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2b2278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2b227c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2b227cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b2280: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2B2280u;
    SET_GPR_U32(ctx, 31, 0x2B2288u);
    ctx->pc = 0x2B2284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2280u;
    // 0x2b2284: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2B2280u, 0x2B2288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2288u;
label_2b2288:
    // 0x2b2288: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2b2288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2b228c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B228Cu;
    {
        const bool branch_taken_0x2b228c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B228Cu;
        // 0x2b2290: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b228c) {
            ctx->pc = 0x2B22B8u;
            goto label_2b22b8;
        }
    }
    ctx->pc = 0x2B2294u;
    // 0x2b2294: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b2294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b2298:
    // 0x2b2298: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b229c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b22a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b22a4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2b22a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b22ac: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2b22acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b22b0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B22B0u;
    {
        const bool branch_taken_0x2b22b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b22b0) {
            ctx->pc = 0x2B22B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B22B0u;
            // 0x2b22b4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2298;
        }
    }
    ctx->pc = 0x2B22B8u;
label_2b22b8:
    // 0x2b22b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b22b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b22bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b22bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b22c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b22c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b22c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b22c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b22c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B22C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22C8u;
        // 0x2b22cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B22C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B22D0u;
}
