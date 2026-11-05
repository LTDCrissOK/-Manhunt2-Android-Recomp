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

// Function: sub_0014F220
// Address: 0x14f220 - 0x14f290
void sub_0014F220_0x14f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F220_0x14f220");
#endif

    switch (ctx->pc) {
        case 0x14f248u: goto label_14f248;
        case 0x14f25cu: goto label_14f25c;
        case 0x14f278u: goto label_14f278;
        default: break;
    }

    ctx->pc = 0x14f220u;

    // 0x14f220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f224: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f228: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f22c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f230: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14f230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14f234: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x14f234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14f238: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14f238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f23c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14f23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14f240: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14F240u;
    SET_GPR_U32(ctx, 31, 0x14F248u);
    ctx->pc = 0x14F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F240u;
    // 0x14f244: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14F240u, 0x14F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F248u;
label_14f248:
    // 0x14f248: 0x121027  nor         $v0, $zero, $s2
    ctx->pc = 0x14f248u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
    // 0x14f24c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f250: 0x242280b  movn        $a1, $s2, $v0
    ctx->pc = 0x14f250u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x14f254: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14F254u;
    SET_GPR_U32(ctx, 31, 0x14F25Cu);
    ctx->pc = 0x14F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F254u;
    // 0x14f258: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14F254u, 0x14F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F25Cu;
label_14f25c:
    // 0x14f25c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f260: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f264: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x14f264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14f268: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14f268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f26c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14f26cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14f270: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F270u;
    SET_GPR_U32(ctx, 31, 0x14F278u);
    ctx->pc = 0x14F274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F270u;
    // 0x14f274: 0xae220504  sw          $v0, 0x504($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F270u, 0x14F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F278u;
label_14f278:
    // 0x14f278: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f27c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14f27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f280: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14f280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f284: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14f284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14f288: 0x3e00008  jr          $ra
    ctx->pc = 0x14F288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F288u;
        // 0x14f28c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F290u;
}
