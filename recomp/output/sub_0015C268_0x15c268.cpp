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

// Function: sub_0015C268
// Address: 0x15c268 - 0x15c2c8
void sub_0015C268_0x15c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C268_0x15c268");
#endif

    switch (ctx->pc) {
        case 0x15c284u: goto label_15c284;
        case 0x15c290u: goto label_15c290;
        case 0x15c2a0u: goto label_15c2a0;
        default: break;
    }

    ctx->pc = 0x15c268u;

    // 0x15c268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15c268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15c26c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15c26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15c270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15c270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15c274: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15c274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15c27c: 0xc057028  jal         func_15C0A0
    ctx->pc = 0x15C27Cu;
    SET_GPR_U32(ctx, 31, 0x15C284u);
    ctx->pc = 0x15C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C27Cu;
    // 0x15c280: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C0A0u, 0x15C27Cu, 0x15C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C284u;
label_15c284:
    // 0x15c284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c288: 0xc056c32  jal         func_15B0C8
    ctx->pc = 0x15C288u;
    SET_GPR_U32(ctx, 31, 0x15C290u);
    ctx->pc = 0x15C28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C288u;
    // 0x15c28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0C8u, 0x15C288u, 0x15C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C290u;
label_15c290:
    // 0x15c290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15c290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c298: 0xc0571c6  jal         func_15C718
    ctx->pc = 0x15C298u;
    SET_GPR_U32(ctx, 31, 0x15C2A0u);
    ctx->pc = 0x15C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C298u;
    // 0x15c29c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C718u, 0x15C298u, 0x15C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C2A0u;
label_15c2a0:
    // 0x15c2a0: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15c2a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15c2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c2a8: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x15c2a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15c2ac: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x15c2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15c2b0: 0xae000384  sw          $zero, 0x384($s0)
    ctx->pc = 0x15c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 0));
    // 0x15c2b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15c2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c2b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15c2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15c2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15C2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2BCu;
        // 0x15c2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C2C4u;
    // 0x15c2c4: 0x0  nop
    ctx->pc = 0x15c2c4u;
    // NOP
    ctx->pc = 0x15c2c8u;
}
