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

// Function: sub_0013CC30
// Address: 0x13cc30 - 0x13cc80
void sub_0013CC30_0x13cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CC30_0x13cc30");
#endif

    switch (ctx->pc) {
        case 0x13cc30u: goto label_13cc30;
        case 0x13cc34u: goto label_13cc34;
        case 0x13cc38u: goto label_13cc38;
        case 0x13cc3cu: goto label_13cc3c;
        case 0x13cc40u: goto label_13cc40;
        case 0x13cc44u: goto label_13cc44;
        case 0x13cc48u: goto label_13cc48;
        case 0x13cc4cu: goto label_13cc4c;
        case 0x13cc50u: goto label_13cc50;
        case 0x13cc54u: goto label_13cc54;
        case 0x13cc58u: goto label_13cc58;
        case 0x13cc5cu: goto label_13cc5c;
        case 0x13cc60u: goto label_13cc60;
        case 0x13cc64u: goto label_13cc64;
        case 0x13cc68u: goto label_13cc68;
        case 0x13cc6cu: goto label_13cc6c;
        case 0x13cc70u: goto label_13cc70;
        case 0x13cc74u: goto label_13cc74;
        case 0x13cc78u: goto label_13cc78;
        case 0x13cc7cu: goto label_13cc7c;
        default: break;
    }

    ctx->pc = 0x13cc30u;

label_13cc30:
    // 0x13cc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13cc34:
    // 0x13cc34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13cc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13cc38:
    // 0x13cc38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13cc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13cc3c:
    // 0x13cc3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13cc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13cc40:
    // 0x13cc40: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cc44:
    // 0x13cc44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13cc48:
    // 0x13cc48: 0xc041d5c  jal         func_107570
label_13cc4c:
    if (ctx->pc == 0x13CC4Cu) {
        ctx->pc = 0x13CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC48u;
        // 0x13cc4c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC50u;
        goto label_13cc50;
    }
    ctx->pc = 0x13CC48u;
    SET_GPR_U32(ctx, 31, 0x13CC50u);
    ctx->pc = 0x13CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC48u;
    // 0x13cc4c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107570u, 0x13CC48u, 0x13CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC50u;
label_13cc50:
    // 0x13cc50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cc50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cc54:
    // 0x13cc54: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13cc58:
    // 0x13cc58: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13cc5c:
    // 0x13cc5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13cc60:
    // 0x13cc60: 0x40f809  jalr        $v0
label_13cc64:
    if (ctx->pc == 0x13CC64u) {
        ctx->pc = 0x13CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC60u;
        // 0x13cc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC68u;
        goto label_13cc68;
    }
    ctx->pc = 0x13CC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CC68u);
        ctx->pc = 0x13CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC60u;
        // 0x13cc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC60u, 0x13CC68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CC68u;
label_13cc68:
    // 0x13cc68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13cc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13cc6c:
    // 0x13cc6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13cc6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13cc70:
    // 0x13cc70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13cc70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cc74:
    // 0x13cc74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13cc78:
    // 0x13cc78: 0x3e00008  jr          $ra
label_13cc7c:
    if (ctx->pc == 0x13CC7Cu) {
        ctx->pc = 0x13CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC78u;
        // 0x13cc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC80u;
        goto label_fallthrough_0x13cc78;
    }
    ctx->pc = 0x13CC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC78u;
        // 0x13cc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13cc78:
    ctx->pc = 0x13CC80u;
}
