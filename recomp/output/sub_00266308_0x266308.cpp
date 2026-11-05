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

// Function: sub_00266308
// Address: 0x266308 - 0x266360
void sub_00266308_0x266308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266308_0x266308");
#endif

    switch (ctx->pc) {
        case 0x266330u: goto label_266330;
        case 0x26634cu: goto label_26634c;
        default: break;
    }

    ctx->pc = 0x266308u;

    // 0x266308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26630c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26630cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x266310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26631c: 0x9222028e  lbu         $v0, 0x28E($s1)
    ctx->pc = 0x26631cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 654)));
    // 0x266320: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x266320u;
    {
        const bool branch_taken_0x266320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266320u;
        // 0x266324: 0x3c10004a  lui         $s0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266320) {
            ctx->pc = 0x26634Cu;
            goto label_26634c;
        }
    }
    ctx->pc = 0x266328u;
    // 0x266328: 0xc09990e  jal         func_266438
    ctx->pc = 0x266328u;
    SET_GPR_U32(ctx, 31, 0x266330u);
    ctx->pc = 0x26632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266328u;
    // 0x26632c: 0x26109b10  addiu       $s0, $s0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266438u, 0x266328u, 0x266330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266330u;
label_266330:
    // 0x266330: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x266330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x266334: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x266334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x266338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26633c: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x26633cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x266340: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x266340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x266344: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x266344u;
    SET_GPR_U32(ctx, 31, 0x26634Cu);
    ctx->pc = 0x266348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266344u;
    // 0x266348: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x266344u, 0x26634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26634Cu;
label_26634c:
    // 0x26634c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26634cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x266350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x266354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x266354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266358: 0x3e00008  jr          $ra
    ctx->pc = 0x266358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266358u;
        // 0x26635c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266360u;
}
