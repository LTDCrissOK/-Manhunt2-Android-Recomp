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

// Function: sub_001FCC00
// Address: 0x1fcc00 - 0x1fcca8
void sub_001FCC00_0x1fcc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCC00_0x1fcc00");
#endif

    switch (ctx->pc) {
        case 0x1fcc34u: goto label_1fcc34;
        default: break;
    }

    ctx->pc = 0x1fcc00u;

    // 0x1fcc00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fcc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fcc04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fcc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcc08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fcc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fcc0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fcc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fcc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fcc14: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x1fcc14u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fcc18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fcc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fcc1c: 0x34059388  ori         $a1, $zero, 0x9388
    ctx->pc = 0x1fcc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37768);
    // 0x1fcc20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fcc20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc24: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1fcc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1fcc28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fcc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fcc2c: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1FCC2Cu;
    SET_GPR_U32(ctx, 31, 0x1FCC34u);
    ctx->pc = 0x1FCC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC2Cu;
    // 0x1fcc30: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1FCC2Cu, 0x1FCC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC34u;
label_1fcc34:
    // 0x1fcc34: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fcc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fcc38: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1fcc38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fcc3c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1fcc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1fcc40: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1fcc40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1fcc44: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1fcc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1fcc48: 0x34049570  ori         $a0, $zero, 0x9570
    ctx->pc = 0x1fcc48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38256);
    // 0x1fcc4c: 0xac4015c0  sw          $zero, 0x15C0($v0)
    ctx->pc = 0x1fcc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5568), GPR_U32(ctx, 0));
    // 0x1fcc50: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1fcc50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fcc54: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1fcc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1fcc58: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1fcc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1fcc5c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1fcc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1fcc60: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1fcc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1fcc64: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1fcc64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcc68: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1fcc68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fcc6c: 0xac4013b0  sw          $zero, 0x13B0($v0)
    ctx->pc = 0x1fcc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5040), GPR_U32(ctx, 0));
    // 0x1fcc70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc78: 0xac8013b8  sw          $zero, 0x13B8($a0)
    ctx->pc = 0x1fcc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5048), GPR_U32(ctx, 0));
    // 0x1fcc7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fcc7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc80: 0xaca01380  sw          $zero, 0x1380($a1)
    ctx->pc = 0x1fcc80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4992), GPR_U32(ctx, 0));
    // 0x1fcc84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcc88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fcc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcc8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fcc8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcc90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fcc90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcc94: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fcc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fcc98: 0xac621390  sw          $v0, 0x1390($v1)
    ctx->pc = 0x1fcc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5008), GPR_U32(ctx, 2));
    // 0x1fcc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC9Cu;
        // 0x1fcca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCCA4u;
    // 0x1fcca4: 0x0  nop
    ctx->pc = 0x1fcca4u;
    // NOP
    ctx->pc = 0x1fcca8u;
}
