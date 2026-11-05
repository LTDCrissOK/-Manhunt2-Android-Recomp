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

// Function: sub_0013CBE0
// Address: 0x13cbe0 - 0x13cc30
void sub_0013CBE0_0x13cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CBE0_0x13cbe0");
#endif

    switch (ctx->pc) {
        case 0x13cbe0u: goto label_13cbe0;
        case 0x13cbe4u: goto label_13cbe4;
        case 0x13cbe8u: goto label_13cbe8;
        case 0x13cbecu: goto label_13cbec;
        case 0x13cbf0u: goto label_13cbf0;
        case 0x13cbf4u: goto label_13cbf4;
        case 0x13cbf8u: goto label_13cbf8;
        case 0x13cbfcu: goto label_13cbfc;
        case 0x13cc00u: goto label_13cc00;
        case 0x13cc04u: goto label_13cc04;
        case 0x13cc08u: goto label_13cc08;
        case 0x13cc0cu: goto label_13cc0c;
        case 0x13cc10u: goto label_13cc10;
        case 0x13cc14u: goto label_13cc14;
        case 0x13cc18u: goto label_13cc18;
        case 0x13cc1cu: goto label_13cc1c;
        case 0x13cc20u: goto label_13cc20;
        case 0x13cc24u: goto label_13cc24;
        case 0x13cc28u: goto label_13cc28;
        case 0x13cc2cu: goto label_13cc2c;
        default: break;
    }

    ctx->pc = 0x13cbe0u;

label_13cbe0:
    // 0x13cbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13cbe4:
    // 0x13cbe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13cbe8:
    // 0x13cbe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13cbe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13cbec:
    // 0x13cbec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13cbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13cbf0:
    // 0x13cbf0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cbf4:
    // 0x13cbf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13cbf8:
    // 0x13cbf8: 0xc041d8c  jal         func_107630
label_13cbfc:
    if (ctx->pc == 0x13CBFCu) {
        ctx->pc = 0x13CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBF8u;
        // 0x13cbfc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC00u;
        goto label_13cc00;
    }
    ctx->pc = 0x13CBF8u;
    SET_GPR_U32(ctx, 31, 0x13CC00u);
    ctx->pc = 0x13CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CBF8u;
    // 0x13cbfc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107630u, 0x13CBF8u, 0x13CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC00u;
label_13cc00:
    // 0x13cc00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cc04:
    // 0x13cc04: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13cc08:
    // 0x13cc08: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13cc0c:
    // 0x13cc0c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13cc10:
    // 0x13cc10: 0x40f809  jalr        $v0
label_13cc14:
    if (ctx->pc == 0x13CC14u) {
        ctx->pc = 0x13CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC10u;
        // 0x13cc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC18u;
        goto label_13cc18;
    }
    ctx->pc = 0x13CC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CC18u);
        ctx->pc = 0x13CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC10u;
        // 0x13cc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC10u, 0x13CC18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CC18u;
label_13cc18:
    // 0x13cc18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13cc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13cc1c:
    // 0x13cc1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13cc1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13cc20:
    // 0x13cc20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13cc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cc24:
    // 0x13cc24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13cc28:
    // 0x13cc28: 0x3e00008  jr          $ra
label_13cc2c:
    if (ctx->pc == 0x13CC2Cu) {
        ctx->pc = 0x13CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC28u;
        // 0x13cc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC30u;
        goto label_fallthrough_0x13cc28;
    }
    ctx->pc = 0x13CC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC28u;
        // 0x13cc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13cc28:
    ctx->pc = 0x13CC30u;
}
