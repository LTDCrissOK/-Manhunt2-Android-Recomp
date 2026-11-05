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

// Function: sub_0013CB40
// Address: 0x13cb40 - 0x13cb90
void sub_0013CB40_0x13cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CB40_0x13cb40");
#endif

    switch (ctx->pc) {
        case 0x13cb40u: goto label_13cb40;
        case 0x13cb44u: goto label_13cb44;
        case 0x13cb48u: goto label_13cb48;
        case 0x13cb4cu: goto label_13cb4c;
        case 0x13cb50u: goto label_13cb50;
        case 0x13cb54u: goto label_13cb54;
        case 0x13cb58u: goto label_13cb58;
        case 0x13cb5cu: goto label_13cb5c;
        case 0x13cb60u: goto label_13cb60;
        case 0x13cb64u: goto label_13cb64;
        case 0x13cb68u: goto label_13cb68;
        case 0x13cb6cu: goto label_13cb6c;
        case 0x13cb70u: goto label_13cb70;
        case 0x13cb74u: goto label_13cb74;
        case 0x13cb78u: goto label_13cb78;
        case 0x13cb7cu: goto label_13cb7c;
        case 0x13cb80u: goto label_13cb80;
        case 0x13cb84u: goto label_13cb84;
        case 0x13cb88u: goto label_13cb88;
        case 0x13cb8cu: goto label_13cb8c;
        default: break;
    }

    ctx->pc = 0x13cb40u;

label_13cb40:
    // 0x13cb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13cb44:
    // 0x13cb44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13cb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13cb48:
    // 0x13cb48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13cb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13cb4c:
    // 0x13cb4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13cb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13cb50:
    // 0x13cb50: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cb54:
    // 0x13cb54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13cb58:
    // 0x13cb58: 0xc041d2e  jal         func_1074B8
label_13cb5c:
    if (ctx->pc == 0x13CB5Cu) {
        ctx->pc = 0x13CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB58u;
        // 0x13cb5c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB60u;
        goto label_13cb60;
    }
    ctx->pc = 0x13CB58u;
    SET_GPR_U32(ctx, 31, 0x13CB60u);
    ctx->pc = 0x13CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CB58u;
    // 0x13cb5c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1074B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1074B8u, 0x13CB58u, 0x13CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CB60u;
label_13cb60:
    // 0x13cb60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cb64:
    // 0x13cb64: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13cb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13cb68:
    // 0x13cb68: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13cb6c:
    // 0x13cb6c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13cb70:
    // 0x13cb70: 0x40f809  jalr        $v0
label_13cb74:
    if (ctx->pc == 0x13CB74u) {
        ctx->pc = 0x13CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB70u;
        // 0x13cb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB78u;
        goto label_13cb78;
    }
    ctx->pc = 0x13CB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CB78u);
        ctx->pc = 0x13CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB70u;
        // 0x13cb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CB70u, 0x13CB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CB78u;
label_13cb78:
    // 0x13cb78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13cb78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13cb7c:
    // 0x13cb7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13cb7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13cb80:
    // 0x13cb80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13cb80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cb84:
    // 0x13cb84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13cb88:
    // 0x13cb88: 0x3e00008  jr          $ra
label_13cb8c:
    if (ctx->pc == 0x13CB8Cu) {
        ctx->pc = 0x13CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB88u;
        // 0x13cb8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB90u;
        goto label_fallthrough_0x13cb88;
    }
    ctx->pc = 0x13CB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB88u;
        // 0x13cb8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13cb88:
    ctx->pc = 0x13CB90u;
}
