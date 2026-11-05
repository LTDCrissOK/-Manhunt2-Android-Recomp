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

// Function: sub_0017CE78
// Address: 0x17ce78 - 0x17cf28
void sub_0017CE78_0x17ce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CE78_0x17ce78");
#endif

    switch (ctx->pc) {
        case 0x17ced4u: goto label_17ced4;
        default: break;
    }

    ctx->pc = 0x17ce78u;

    // 0x17ce78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17ce78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17ce7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ce80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ce80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ce84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ce84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17ce8c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x17ce8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x17ce90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17ce94: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x17ce94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17ce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17ce9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17ce9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cea0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17cea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17cea4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x17cea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cea8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17cea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17ceac: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x17ceacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ceb0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17ceb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17ceb4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x17ceb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ceb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17ceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17cebc: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x17cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x17cec0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CEC0u;
    {
        const bool branch_taken_0x17cec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CEC0u;
        // 0x17cec4: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cec0) {
            ctx->pc = 0x17CED4u;
            goto label_17ced4;
        }
    }
    ctx->pc = 0x17CEC8u;
    // 0x17cec8: 0x8e22a9d4  lw          $v0, -0x562C($s1)
    ctx->pc = 0x17cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945236)));
    // 0x17cecc: 0xc05f348  jal         func_17CD20
    ctx->pc = 0x17CECCu;
    SET_GPR_U32(ctx, 31, 0x17CED4u);
    ctx->pc = 0x17CED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CECCu;
    // 0x17ced0: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CD20u, 0x17CECCu, 0x17CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CED4u;
label_17ced4:
    // 0x17ced4: 0x8e22a9d4  lw          $v0, -0x562C($s1)
    ctx->pc = 0x17ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945236)));
    // 0x17ced8: 0xae130074  sw          $s3, 0x74($s0)
    ctx->pc = 0x17ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 19));
    // 0x17cedc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17cee0: 0xae140078  sw          $s4, 0x78($s0)
    ctx->pc = 0x17cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 20));
    // 0x17cee4: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x17cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x17cee8: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x17cee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17ceec: 0xfa010080  sqc2        $vf1, 0x80($s0)
    ctx->pc = 0x17ceecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17cef0: 0xae120098  sw          $s2, 0x98($s0)
    ctx->pc = 0x17cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 18));
    // 0x17cef4: 0xae160090  sw          $s6, 0x90($s0)
    ctx->pc = 0x17cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 22));
    // 0x17cef8: 0xae170094  sw          $s7, 0x94($s0)
    ctx->pc = 0x17cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 23));
    // 0x17cefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cf00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17cf00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17cf04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17cf04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cf08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17cf08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17cf0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17cf0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cf10: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17cf10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17cf14: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17cf14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cf18: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17cf18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17cf1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17cf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cf20: 0x3e00008  jr          $ra
    ctx->pc = 0x17CF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF20u;
        // 0x17cf24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CF28u;
}
