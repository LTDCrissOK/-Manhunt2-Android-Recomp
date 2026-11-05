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

// Function: sub_002BA998
// Address: 0x2ba998 - 0x2ba9f0
void sub_002BA998_0x2ba998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA998_0x2ba998");
#endif

    switch (ctx->pc) {
        case 0x2ba9b8u: goto label_2ba9b8;
        case 0x2ba9c0u: goto label_2ba9c0;
        default: break;
    }

    ctx->pc = 0x2ba998u;

    // 0x2ba998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba99c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ba99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ba9a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ba9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ba9a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ba9a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ba9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba9ac: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2ba9acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba9b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BA9B0u;
    {
        const bool branch_taken_0x2ba9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9B0u;
        // 0x2ba9b4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9b0) {
            ctx->pc = 0x2BA9D4u;
            goto label_2ba9d4;
        }
    }
    ctx->pc = 0x2BA9B8u;
label_2ba9b8:
    // 0x2ba9b8: 0xc0aea34  jal         func_2BA8D0
    ctx->pc = 0x2BA9B8u;
    SET_GPR_U32(ctx, 31, 0x2BA9C0u);
    ctx->pc = 0x2BA9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA9B8u;
    // 0x2ba9bc: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA8D0u, 0x2BA9B8u, 0x2BA9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA9C0u;
label_2ba9c0:
    // 0x2ba9c0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2ba9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ba9c4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2ba9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2ba9c8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2ba9c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba9cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BA9CCu;
    {
        const bool branch_taken_0x2ba9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9cc) {
            ctx->pc = 0x2BA9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba9b8;
        }
    }
    ctx->pc = 0x2BA9D4u;
label_2ba9d4:
    // 0x2ba9d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ba9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba9d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ba9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba9dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ba9dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba9e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9E4u;
        // 0x2ba9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA9ECu;
    // 0x2ba9ec: 0x0  nop
    ctx->pc = 0x2ba9ecu;
    // NOP
    ctx->pc = 0x2ba9f0u;
}
