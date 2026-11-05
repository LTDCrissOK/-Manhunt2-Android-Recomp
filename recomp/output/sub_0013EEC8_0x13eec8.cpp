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

// Function: sub_0013EEC8
// Address: 0x13eec8 - 0x13ef80
void sub_0013EEC8_0x13eec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EEC8_0x13eec8");
#endif

    switch (ctx->pc) {
        case 0x13ef0cu: goto label_13ef0c;
        case 0x13ef20u: goto label_13ef20;
        case 0x13ef30u: goto label_13ef30;
        case 0x13ef3cu: goto label_13ef3c;
        case 0x13ef5cu: goto label_13ef5c;
        default: break;
    }

    ctx->pc = 0x13eec8u;

    // 0x13eec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13eec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13eecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13eeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13eed0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13eed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13eed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13eed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eed8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13eedc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13eedcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eee0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13eee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13eee4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13eee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13eee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13eeec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13eeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13eef0: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x13eef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x13eef4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13EEF4u;
    {
        const bool branch_taken_0x13eef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEF4u;
        // 0x13eef8: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eef4) {
            ctx->pc = 0x13EF5Cu;
            goto label_13ef5c;
        }
    }
    ctx->pc = 0x13EEFCu;
    // 0x13eefc: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x13EEFCu;
    {
        const bool branch_taken_0x13eefc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEFCu;
        // 0x13ef00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eefc) {
            ctx->pc = 0x13EF60u;
            goto label_13ef60;
        }
    }
    ctx->pc = 0x13EF04u;
    // 0x13ef04: 0xc04f91e  jal         func_13E478
    ctx->pc = 0x13EF04u;
    SET_GPR_U32(ctx, 31, 0x13EF0Cu);
    ctx->pc = 0x13E478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E478u, 0x13EF04u, 0x13EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF0Cu;
label_13ef0c:
    // 0x13ef0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ef0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13ef10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ef14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef18: 0xc045612  jal         func_115848
    ctx->pc = 0x13EF18u;
    SET_GPR_U32(ctx, 31, 0x13EF20u);
    ctx->pc = 0x13EF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF18u;
    // 0x13ef1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x13EF18u, 0x13EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF20u;
label_13ef20:
    // 0x13ef20: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x13ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x13ef24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ef24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef28: 0xc045642  jal         func_115908
    ctx->pc = 0x13EF28u;
    SET_GPR_U32(ctx, 31, 0x13EF30u);
    ctx->pc = 0x13EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF28u;
    // 0x13ef2c: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115908u, 0x13EF28u, 0x13EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF30u;
label_13ef30:
    // 0x13ef30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13ef30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef34: 0xc045668  jal         func_1159A0
    ctx->pc = 0x13EF34u;
    SET_GPR_U32(ctx, 31, 0x13EF3Cu);
    ctx->pc = 0x13EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF34u;
    // 0x13ef38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x13EF34u, 0x13EF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF3Cu;
label_13ef3c:
    // 0x13ef3c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13ef40: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13ef44: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13ef48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ef48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ef50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ef50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef54: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x13EF54u;
    SET_GPR_U32(ctx, 31, 0x13EF5Cu);
    ctx->pc = 0x13EF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF54u;
    // 0x13ef58: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x13EF54u, 0x13EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF5Cu;
label_13ef5c:
    // 0x13ef5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ef5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ef60:
    // 0x13ef60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ef60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ef64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13ef64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ef68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13ef68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ef6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13ef6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ef70: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13ef70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13ef74: 0x3e00008  jr          $ra
    ctx->pc = 0x13EF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF74u;
        // 0x13ef78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EF7Cu;
    // 0x13ef7c: 0x0  nop
    ctx->pc = 0x13ef7cu;
    // NOP
    ctx->pc = 0x13ef80u;
}
