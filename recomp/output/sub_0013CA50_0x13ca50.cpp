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

// Function: sub_0013CA50
// Address: 0x13ca50 - 0x13caa0
void sub_0013CA50_0x13ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CA50_0x13ca50");
#endif

    switch (ctx->pc) {
        case 0x13ca50u: goto label_13ca50;
        case 0x13ca54u: goto label_13ca54;
        case 0x13ca58u: goto label_13ca58;
        case 0x13ca5cu: goto label_13ca5c;
        case 0x13ca60u: goto label_13ca60;
        case 0x13ca64u: goto label_13ca64;
        case 0x13ca68u: goto label_13ca68;
        case 0x13ca6cu: goto label_13ca6c;
        case 0x13ca70u: goto label_13ca70;
        case 0x13ca74u: goto label_13ca74;
        case 0x13ca78u: goto label_13ca78;
        case 0x13ca7cu: goto label_13ca7c;
        case 0x13ca80u: goto label_13ca80;
        case 0x13ca84u: goto label_13ca84;
        case 0x13ca88u: goto label_13ca88;
        case 0x13ca8cu: goto label_13ca8c;
        case 0x13ca90u: goto label_13ca90;
        case 0x13ca94u: goto label_13ca94;
        case 0x13ca98u: goto label_13ca98;
        case 0x13ca9cu: goto label_13ca9c;
        default: break;
    }

    ctx->pc = 0x13ca50u;

label_13ca50:
    // 0x13ca50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13ca54:
    // 0x13ca54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13ca58:
    // 0x13ca58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ca58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ca5c:
    // 0x13ca5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13ca60:
    // 0x13ca60: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13ca60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13ca64:
    // 0x13ca64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13ca68:
    // 0x13ca68: 0xc041d6c  jal         func_1075B0
label_13ca6c:
    if (ctx->pc == 0x13CA6Cu) {
        ctx->pc = 0x13CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA68u;
        // 0x13ca6c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA70u;
        goto label_13ca70;
    }
    ctx->pc = 0x13CA68u;
    SET_GPR_U32(ctx, 31, 0x13CA70u);
    ctx->pc = 0x13CA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA68u;
    // 0x13ca6c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1075B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1075B0u, 0x13CA68u, 0x13CA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA70u;
label_13ca70:
    // 0x13ca70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ca70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ca74:
    // 0x13ca74: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13ca74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13ca78:
    // 0x13ca78: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13ca7c:
    // 0x13ca7c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13ca80:
    // 0x13ca80: 0x40f809  jalr        $v0
label_13ca84:
    if (ctx->pc == 0x13CA84u) {
        ctx->pc = 0x13CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA80u;
        // 0x13ca84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA88u;
        goto label_13ca88;
    }
    ctx->pc = 0x13CA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CA88u);
        ctx->pc = 0x13CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA80u;
        // 0x13ca84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CA80u, 0x13CA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CA88u;
label_13ca88:
    // 0x13ca88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13ca88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13ca8c:
    // 0x13ca8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ca8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13ca90:
    // 0x13ca90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ca90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ca94:
    // 0x13ca94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ca94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13ca98:
    // 0x13ca98: 0x3e00008  jr          $ra
label_13ca9c:
    if (ctx->pc == 0x13CA9Cu) {
        ctx->pc = 0x13CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA98u;
        // 0x13ca9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAA0u;
        goto label_fallthrough_0x13ca98;
    }
    ctx->pc = 0x13CA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA98u;
        // 0x13ca9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13ca98:
    ctx->pc = 0x13CAA0u;
}
