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

// Function: sub_0014C1B8
// Address: 0x14c1b8 - 0x14c220
void sub_0014C1B8_0x14c1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C1B8_0x14c1b8");
#endif

    switch (ctx->pc) {
        case 0x14c1e0u: goto label_14c1e0;
        default: break;
    }

    ctx->pc = 0x14c1b8u;

    // 0x14c1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c1bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c1c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c1c4: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x14c1c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14c1c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14c1cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14c1d4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x14c1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1d8: 0xc053088  jal         func_14C220
    ctx->pc = 0x14C1D8u;
    SET_GPR_U32(ctx, 31, 0x14C1E0u);
    ctx->pc = 0x14C1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C1D8u;
    // 0x14c1dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C220u, 0x14C1D8u, 0x14C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1E0u;
label_14c1e0:
    // 0x14c1e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C1E0u;
    {
        const bool branch_taken_0x14c1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1E0u;
        // 0x14c1e4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1e0) {
            ctx->pc = 0x14C1F8u;
            goto label_14c1f8;
        }
    }
    ctx->pc = 0x14C1E8u;
    // 0x14c1e8: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x14c1e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14c1ec: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x14c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x14c1f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14C1F0u;
    {
        const bool branch_taken_0x14c1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1F0u;
        // 0x14c1f4: 0xac4004e4  sw          $zero, 0x4E4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1f0) {
            ctx->pc = 0x14C208u;
            goto label_14c208;
        }
    }
    ctx->pc = 0x14C1F8u;
label_14c1f8:
    // 0x14c1f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c1fc: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x14c1fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14c200: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x14c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x14c204: 0xac4304e4  sw          $v1, 0x4E4($v0)
    ctx->pc = 0x14c204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1252), GPR_U32(ctx, 3));
label_14c208:
    // 0x14c208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c20c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c20cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c210: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14c210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c214: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14c214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c218: 0x3e00008  jr          $ra
    ctx->pc = 0x14C218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C218u;
        // 0x14c21c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C220u;
}
