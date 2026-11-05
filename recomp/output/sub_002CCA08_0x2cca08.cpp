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

// Function: sub_002CCA08
// Address: 0x2cca08 - 0x2ccac8
void sub_002CCA08_0x2cca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCA08_0x2cca08");
#endif

    switch (ctx->pc) {
        case 0x2cca64u: goto label_2cca64;
        case 0x2cca70u: goto label_2cca70;
        case 0x2cca80u: goto label_2cca80;
        case 0x2cca8cu: goto label_2cca8c;
        case 0x2cca9cu: goto label_2cca9c;
        default: break;
    }

    ctx->pc = 0x2cca08u;

    // 0x2cca08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2cca08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2cca0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cca10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2cca14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cca14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2cca18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2cca1c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2cca1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca20: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2cca20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2cca24: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2cca24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca28: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2cca28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cca30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cca34: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2cca34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cca3c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2cca3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cca40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cca44: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x2cca44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca48: 0x93a40090  lbu         $a0, 0x90($sp)
    ctx->pc = 0x2cca48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cca4c: 0x93a50098  lbu         $a1, 0x98($sp)
    ctx->pc = 0x2cca4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2cca50: 0x93a600a0  lbu         $a2, 0xA0($sp)
    ctx->pc = 0x2cca50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cca54: 0x93a700a8  lbu         $a3, 0xA8($sp)
    ctx->pc = 0x2cca54u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2cca58: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2cca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2cca5c: 0xc0b325e  jal         func_2CC978
    ctx->pc = 0x2CCA5Cu;
    SET_GPR_U32(ctx, 31, 0x2CCA64u);
    ctx->pc = 0x2CCA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA5Cu;
    // 0x2cca60: 0x140982d  daddu       $s3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC978u, 0x2CCA5Cu, 0x2CCA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA64u;
label_2cca64:
    // 0x2cca64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cca64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca68: 0xc0b3250  jal         func_2CC940
    ctx->pc = 0x2CCA68u;
    SET_GPR_U32(ctx, 31, 0x2CCA70u);
    ctx->pc = 0x2CCA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA68u;
    // 0x2cca6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC940u, 0x2CCA68u, 0x2CCA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA70u;
label_2cca70:
    // 0x2cca70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2cca74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca78: 0xc0b322e  jal         func_2CC8B8
    ctx->pc = 0x2CCA78u;
    SET_GPR_U32(ctx, 31, 0x2CCA80u);
    ctx->pc = 0x2CCA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA78u;
    // 0x2cca7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC8B8u, 0x2CCA78u, 0x2CCA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA80u;
label_2cca80:
    // 0x2cca80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cca80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca84: 0xc0b3250  jal         func_2CC940
    ctx->pc = 0x2CCA84u;
    SET_GPR_U32(ctx, 31, 0x2CCA8Cu);
    ctx->pc = 0x2CCA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA84u;
    // 0x2cca88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC940u, 0x2CCA84u, 0x2CCA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA8Cu;
label_2cca8c:
    // 0x2cca8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cca8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca90: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2cca90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca94: 0xc0b322e  jal         func_2CC8B8
    ctx->pc = 0x2CCA94u;
    SET_GPR_U32(ctx, 31, 0x2CCA9Cu);
    ctx->pc = 0x2CCA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA94u;
    // 0x2cca98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC8B8u, 0x2CCA94u, 0x2CCA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA9Cu;
label_2cca9c:
    // 0x2cca9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cca9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccaa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ccaa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccaa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ccaa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccaa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ccaa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ccaac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ccaacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ccab0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ccab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ccab4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ccab4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ccab8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ccab8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ccabc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ccabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ccac0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAC0u;
        // 0x2ccac4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCAC8u;
}
