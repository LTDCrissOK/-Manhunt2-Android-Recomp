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

// Function: sub_001A7380
// Address: 0x1a7380 - 0x1a73f8
void sub_001A7380_0x1a7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7380_0x1a7380");
#endif

    switch (ctx->pc) {
        case 0x1a739cu: goto label_1a739c;
        case 0x1a73e0u: goto label_1a73e0;
        default: break;
    }

    ctx->pc = 0x1a7380u;

    // 0x1a7380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7384: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a738c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a738cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7394: 0xc06a026  jal         func_1A8098
    ctx->pc = 0x1A7394u;
    SET_GPR_U32(ctx, 31, 0x1A739Cu);
    ctx->pc = 0x1A7398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7394u;
    // 0x1a7398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8098u, 0x1A7394u, 0x1A739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A739Cu;
label_1a739c:
    // 0x1a739c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a739cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a73a4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A73A4u;
    {
        const bool branch_taken_0x1a73a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73A4u;
        // 0x1a73a8: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73a4) {
            ctx->pc = 0x1A73D0u;
            goto label_1a73d0;
        }
    }
    ctx->pc = 0x1A73ACu;
    // 0x1a73ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A73ACu;
    {
        const bool branch_taken_0x1a73ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73ACu;
        // 0x1a73b0: 0x240207bd  addiu       $v0, $zero, 0x7BD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1981));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73ac) {
            ctx->pc = 0x1A73C0u;
            goto label_1a73c0;
        }
    }
    ctx->pc = 0x1A73B4u;
    // 0x1a73b4: 0x240607bc  addiu       $a2, $zero, 0x7BC
    ctx->pc = 0x1a73b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1980));
    // 0x1a73b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A73B8u;
    {
        const bool branch_taken_0x1a73b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73B8u;
        // 0x1a73bc: 0x50300b  movn        $a2, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73b8) {
            ctx->pc = 0x1A73D4u;
            goto label_1a73d4;
        }
    }
    ctx->pc = 0x1A73C0u;
label_1a73c0:
    // 0x1a73c0: 0x240607be  addiu       $a2, $zero, 0x7BE
    ctx->pc = 0x1a73c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1982));
    // 0x1a73c4: 0x240207bf  addiu       $v0, $zero, 0x7BF
    ctx->pc = 0x1a73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1983));
    // 0x1a73c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A73C8u;
    {
        const bool branch_taken_0x1a73c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C8u;
        // 0x1a73cc: 0x50300b  movn        $a2, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73c8) {
            ctx->pc = 0x1A73D4u;
            goto label_1a73d4;
        }
    }
    ctx->pc = 0x1A73D0u;
label_1a73d0:
    // 0x1a73d0: 0x240607c2  addiu       $a2, $zero, 0x7C2
    ctx->pc = 0x1a73d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1986));
label_1a73d4:
    // 0x1a73d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a73d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73d8: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A73D8u;
    SET_GPR_U32(ctx, 31, 0x1A73E0u);
    ctx->pc = 0x1A73DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A73D8u;
    // 0x1a73dc: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A73D8u, 0x1A73E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A73E0u;
label_1a73e0:
    // 0x1a73e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a73e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a73e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a73e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a73e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a73e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a73ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A73ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73ECu;
        // 0x1a73f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A73ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A73F4u;
    // 0x1a73f4: 0x0  nop
    ctx->pc = 0x1a73f4u;
    // NOP
    ctx->pc = 0x1a73f8u;
}
