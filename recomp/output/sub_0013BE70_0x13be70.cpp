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

// Function: sub_0013BE70
// Address: 0x13be70 - 0x13bf00
void sub_0013BE70_0x13be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BE70_0x13be70");
#endif

    switch (ctx->pc) {
        case 0x13be70u: goto label_13be70;
        case 0x13be74u: goto label_13be74;
        case 0x13be78u: goto label_13be78;
        case 0x13be7cu: goto label_13be7c;
        case 0x13be80u: goto label_13be80;
        case 0x13be84u: goto label_13be84;
        case 0x13be88u: goto label_13be88;
        case 0x13be8cu: goto label_13be8c;
        case 0x13be90u: goto label_13be90;
        case 0x13be94u: goto label_13be94;
        case 0x13be98u: goto label_13be98;
        case 0x13be9cu: goto label_13be9c;
        case 0x13bea0u: goto label_13bea0;
        case 0x13bea4u: goto label_13bea4;
        case 0x13bea8u: goto label_13bea8;
        case 0x13beacu: goto label_13beac;
        case 0x13beb0u: goto label_13beb0;
        case 0x13beb4u: goto label_13beb4;
        case 0x13beb8u: goto label_13beb8;
        case 0x13bebcu: goto label_13bebc;
        case 0x13bec0u: goto label_13bec0;
        case 0x13bec4u: goto label_13bec4;
        case 0x13bec8u: goto label_13bec8;
        case 0x13beccu: goto label_13becc;
        case 0x13bed0u: goto label_13bed0;
        case 0x13bed4u: goto label_13bed4;
        case 0x13bed8u: goto label_13bed8;
        case 0x13bedcu: goto label_13bedc;
        case 0x13bee0u: goto label_13bee0;
        case 0x13bee4u: goto label_13bee4;
        case 0x13bee8u: goto label_13bee8;
        case 0x13beecu: goto label_13beec;
        case 0x13bef0u: goto label_13bef0;
        case 0x13bef4u: goto label_13bef4;
        case 0x13bef8u: goto label_13bef8;
        case 0x13befcu: goto label_13befc;
        default: break;
    }

    ctx->pc = 0x13be70u;

label_13be70:
    // 0x13be70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13be74:
    // 0x13be74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13be74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13be78:
    // 0x13be78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13be78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13be7c:
    // 0x13be7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13be7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13be80:
    // 0x13be80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13be80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13be84:
    // 0x13be84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13be88:
    // 0x13be88: 0xc04f76e  jal         func_13DDB8
label_13be8c:
    if (ctx->pc == 0x13BE8Cu) {
        ctx->pc = 0x13BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE88u;
        // 0x13be8c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BE90u;
        goto label_13be90;
    }
    ctx->pc = 0x13BE88u;
    SET_GPR_U32(ctx, 31, 0x13BE90u);
    ctx->pc = 0x13BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE88u;
    // 0x13be8c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DDB8u, 0x13BE88u, 0x13BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE90u;
label_13be90:
    // 0x13be90: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13be94:
    // 0x13be94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13be94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13be98:
    // 0x13be98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13be9c:
    // 0x13be9c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x13be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_13bea0:
    // 0x13bea0: 0x40f809  jalr        $v0
label_13bea4:
    if (ctx->pc == 0x13BEA4u) {
        ctx->pc = 0x13BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEA0u;
        // 0x13bea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BEA8u;
        goto label_13bea8;
    }
    ctx->pc = 0x13BEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13BEA8u);
        ctx->pc = 0x13BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEA0u;
        // 0x13bea4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BEA0u, 0x13BEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BEA8u;
label_13bea8:
    // 0x13bea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13beac:
    // 0x13beac: 0xc04f0ee  jal         func_13C3B8
label_13beb0:
    if (ctx->pc == 0x13BEB0u) {
        ctx->pc = 0x13BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEACu;
        // 0x13beb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BEB4u;
        goto label_13beb4;
    }
    ctx->pc = 0x13BEACu;
    SET_GPR_U32(ctx, 31, 0x13BEB4u);
    ctx->pc = 0x13BEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BEACu;
    // 0x13beb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C3B8u, 0x13BEACu, 0x13BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BEB4u;
label_13beb4:
    // 0x13beb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13beb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13beb8:
    // 0x13beb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13bebc:
    // 0x13bebc: 0xc04f744  jal         func_13DD10
label_13bec0:
    if (ctx->pc == 0x13BEC0u) {
        ctx->pc = 0x13BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEBCu;
        // 0x13bec0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BEC4u;
        goto label_13bec4;
    }
    ctx->pc = 0x13BEBCu;
    SET_GPR_U32(ctx, 31, 0x13BEC4u);
    ctx->pc = 0x13BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BEBCu;
    // 0x13bec0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD10u, 0x13BEBCu, 0x13BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BEC4u;
label_13bec4:
    // 0x13bec4: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x13bec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_13bec8:
    // 0x13bec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13becc:
    // 0x13becc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x13beccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13bed0:
    // 0x13bed0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_13bed4:
    // 0x13bed4: 0xa2030009  sb          $v1, 0x9($s0)
    ctx->pc = 0x13bed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
label_13bed8:
    // 0x13bed8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13bedc:
    // 0x13bedc: 0x40f809  jalr        $v0
label_13bee0:
    if (ctx->pc == 0x13BEE0u) {
        ctx->pc = 0x13BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEDCu;
        // 0x13bee0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BEE4u;
        goto label_13bee4;
    }
    ctx->pc = 0x13BEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13BEE4u);
        ctx->pc = 0x13BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEDCu;
        // 0x13bee0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BEDCu, 0x13BEE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BEE4u;
label_13bee4:
    // 0x13bee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13bee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13bee8:
    // 0x13bee8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13bee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13beec:
    // 0x13beec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13beecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13bef0:
    // 0x13bef0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13bef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13bef4:
    // 0x13bef4: 0x3e00008  jr          $ra
label_13bef8:
    if (ctx->pc == 0x13BEF8u) {
        ctx->pc = 0x13BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEF4u;
        // 0x13bef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BEFCu;
        goto label_13befc;
    }
    ctx->pc = 0x13BEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEF4u;
        // 0x13bef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BEFCu;
label_13befc:
    // 0x13befc: 0x0  nop
    ctx->pc = 0x13befcu;
    // NOP
    ctx->pc = 0x13bf00u;
}
