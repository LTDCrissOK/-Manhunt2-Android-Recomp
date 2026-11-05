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

// Function: sub_0013CAF0
// Address: 0x13caf0 - 0x13cb40
void sub_0013CAF0_0x13caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CAF0_0x13caf0");
#endif

    switch (ctx->pc) {
        case 0x13caf0u: goto label_13caf0;
        case 0x13caf4u: goto label_13caf4;
        case 0x13caf8u: goto label_13caf8;
        case 0x13cafcu: goto label_13cafc;
        case 0x13cb00u: goto label_13cb00;
        case 0x13cb04u: goto label_13cb04;
        case 0x13cb08u: goto label_13cb08;
        case 0x13cb0cu: goto label_13cb0c;
        case 0x13cb10u: goto label_13cb10;
        case 0x13cb14u: goto label_13cb14;
        case 0x13cb18u: goto label_13cb18;
        case 0x13cb1cu: goto label_13cb1c;
        case 0x13cb20u: goto label_13cb20;
        case 0x13cb24u: goto label_13cb24;
        case 0x13cb28u: goto label_13cb28;
        case 0x13cb2cu: goto label_13cb2c;
        case 0x13cb30u: goto label_13cb30;
        case 0x13cb34u: goto label_13cb34;
        case 0x13cb38u: goto label_13cb38;
        case 0x13cb3cu: goto label_13cb3c;
        default: break;
    }

    ctx->pc = 0x13caf0u;

label_13caf0:
    // 0x13caf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13caf4:
    // 0x13caf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13caf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13caf8:
    // 0x13caf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13caf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13cafc:
    // 0x13cafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13cafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13cb00:
    // 0x13cb00: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cb04:
    // 0x13cb04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13cb08:
    // 0x13cb08: 0xc041d84  jal         func_107610
label_13cb0c:
    if (ctx->pc == 0x13CB0Cu) {
        ctx->pc = 0x13CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB08u;
        // 0x13cb0c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB10u;
        goto label_13cb10;
    }
    ctx->pc = 0x13CB08u;
    SET_GPR_U32(ctx, 31, 0x13CB10u);
    ctx->pc = 0x13CB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CB08u;
    // 0x13cb0c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107610u, 0x13CB08u, 0x13CB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CB10u;
label_13cb10:
    // 0x13cb10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cb14:
    // 0x13cb14: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13cb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13cb18:
    // 0x13cb18: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13cb1c:
    // 0x13cb1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13cb20:
    // 0x13cb20: 0x40f809  jalr        $v0
label_13cb24:
    if (ctx->pc == 0x13CB24u) {
        ctx->pc = 0x13CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB20u;
        // 0x13cb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB28u;
        goto label_13cb28;
    }
    ctx->pc = 0x13CB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CB28u);
        ctx->pc = 0x13CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB20u;
        // 0x13cb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CB20u, 0x13CB28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CB28u;
label_13cb28:
    // 0x13cb28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13cb28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13cb2c:
    // 0x13cb2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13cb2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13cb30:
    // 0x13cb30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13cb30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cb34:
    // 0x13cb34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13cb38:
    // 0x13cb38: 0x3e00008  jr          $ra
label_13cb3c:
    if (ctx->pc == 0x13CB3Cu) {
        ctx->pc = 0x13CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB38u;
        // 0x13cb3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB40u;
        goto label_fallthrough_0x13cb38;
    }
    ctx->pc = 0x13CB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB38u;
        // 0x13cb3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13cb38:
    ctx->pc = 0x13CB40u;
}
