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

// Function: sub_002E0EE8
// Address: 0x2e0ee8 - 0x2e0f60
void sub_002E0EE8_0x2e0ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0EE8_0x2e0ee8");
#endif

    switch (ctx->pc) {
        case 0x2e0f00u: goto label_2e0f00;
        case 0x2e0f1cu: goto label_2e0f1c;
        case 0x2e0f28u: goto label_2e0f28;
        case 0x2e0f30u: goto label_2e0f30;
        case 0x2e0f3cu: goto label_2e0f3c;
        default: break;
    }

    ctx->pc = 0x2e0ee8u;

    // 0x2e0ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0eec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e0eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e0ef0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0ef8: 0xc0b75de  jal         func_2DD778
    ctx->pc = 0x2E0EF8u;
    SET_GPR_U32(ctx, 31, 0x2E0F00u);
    ctx->pc = 0x2E0EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0EF8u;
    // 0x2e0efc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD778u, 0x2E0EF8u, 0x2E0F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F00u;
label_2e0f00:
    // 0x2e0f00: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2e0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2e0f04: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2e0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2e0f08: 0x24633ea0  addiu       $v1, $v1, 0x3EA0
    ctx->pc = 0x2e0f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16032));
    // 0x2e0f0c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2e0f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e0f10: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x2e0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x2e0f14: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x2E0F14u;
    SET_GPR_U32(ctx, 31, 0x2E0F1Cu);
    ctx->pc = 0x2E0F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0F14u;
    // 0x2e0f18: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2E0F14u, 0x2E0F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F1Cu;
label_2e0f1c:
    // 0x2e0f1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f20: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2E0F20u;
    SET_GPR_U32(ctx, 31, 0x2E0F28u);
    ctx->pc = 0x2E0F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0F20u;
    // 0x2e0f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2E0F20u, 0x2E0F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F28u;
label_2e0f28:
    // 0x2e0f28: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2E0F28u;
    SET_GPR_U32(ctx, 31, 0x2E0F30u);
    ctx->pc = 0x2E0F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0F28u;
    // 0x2e0f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2E0F28u, 0x2E0F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F30u;
label_2e0f30:
    // 0x2e0f30: 0xae3000f0  sw          $s0, 0xF0($s1)
    ctx->pc = 0x2e0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 16));
    // 0x2e0f34: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2E0F34u;
    SET_GPR_U32(ctx, 31, 0x2E0F3Cu);
    ctx->pc = 0x2E0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0F34u;
    // 0x2e0f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2E0F34u, 0x2E0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F3Cu;
label_2e0f3c:
    // 0x2e0f3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e0f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f40: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2e0f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x2e0f44: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x2e0f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x2e0f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0f4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e0f4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e0f50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0f54: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F54u;
        // 0x2e0f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0F5Cu;
    // 0x2e0f5c: 0x0  nop
    ctx->pc = 0x2e0f5cu;
    // NOP
    ctx->pc = 0x2e0f60u;
}
