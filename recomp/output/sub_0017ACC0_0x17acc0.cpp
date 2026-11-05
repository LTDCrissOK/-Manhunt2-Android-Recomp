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

// Function: sub_0017ACC0
// Address: 0x17acc0 - 0x17ad58
void sub_0017ACC0_0x17acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ACC0_0x17acc0");
#endif

    switch (ctx->pc) {
        case 0x17acfcu: goto label_17acfc;
        case 0x17ad08u: goto label_17ad08;
        case 0x17ad18u: goto label_17ad18;
        case 0x17ad28u: goto label_17ad28;
        case 0x17ad38u: goto label_17ad38;
        default: break;
    }

    ctx->pc = 0x17acc0u;

    // 0x17acc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17acc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17acc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17accc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17acccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17acd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17acd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17acd4: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x17acd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17acd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17acdc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x17acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x17ace0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ace4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17ace4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ace8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ace8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17acec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17acecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17acf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17acf4: 0xc05eb06  jal         func_17AC18
    ctx->pc = 0x17ACF4u;
    SET_GPR_U32(ctx, 31, 0x17ACFCu);
    ctx->pc = 0x17ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACF4u;
    // 0x17acf8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC18u, 0x17ACF4u, 0x17ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACFCu;
label_17acfc:
    // 0x17acfc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x17acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17ad00: 0xc04f7ae  jal         func_13DEB8
    ctx->pc = 0x17AD00u;
    SET_GPR_U32(ctx, 31, 0x17AD08u);
    ctx->pc = 0x17AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD00u;
    // 0x17ad04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DEB8u, 0x17AD00u, 0x17AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD08u;
label_17ad08:
    // 0x17ad08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad10: 0xc05eafa  jal         func_17ABE8
    ctx->pc = 0x17AD10u;
    SET_GPR_U32(ctx, 31, 0x17AD18u);
    ctx->pc = 0x17AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD10u;
    // 0x17ad14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE8u, 0x17AD10u, 0x17AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD18u;
label_17ad18:
    // 0x17ad18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ad18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ad1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad20: 0xc05eae8  jal         func_17ABA0
    ctx->pc = 0x17AD20u;
    SET_GPR_U32(ctx, 31, 0x17AD28u);
    ctx->pc = 0x17AD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD20u;
    // 0x17ad24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABA0u, 0x17AD20u, 0x17AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD28u;
label_17ad28:
    // 0x17ad28: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x17ad28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17ad2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ad2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad30: 0xc05eaf4  jal         func_17ABD0
    ctx->pc = 0x17AD30u;
    SET_GPR_U32(ctx, 31, 0x17AD38u);
    ctx->pc = 0x17AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD30u;
    // 0x17ad34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABD0u, 0x17AD30u, 0x17AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD38u;
label_17ad38:
    // 0x17ad38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ad38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ad3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ad3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ad40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ad40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ad44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ad44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ad48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17ad48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ad4c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD4Cu;
        // 0x17ad50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AD54u;
    // 0x17ad54: 0x0  nop
    ctx->pc = 0x17ad54u;
    // NOP
    ctx->pc = 0x17ad58u;
}
