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

// Function: sub_003C9EC0
// Address: 0x3c9ec0 - 0x3c9f68
void sub_003C9EC0_0x3c9ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9EC0_0x3c9ec0");
#endif

    switch (ctx->pc) {
        case 0x3c9ed8u: goto label_3c9ed8;
        case 0x3c9ee0u: goto label_3c9ee0;
        case 0x3c9f04u: goto label_3c9f04;
        case 0x3c9f10u: goto label_3c9f10;
        case 0x3c9f34u: goto label_3c9f34;
        case 0x3c9f54u: goto label_3c9f54;
        default: break;
    }

    ctx->pc = 0x3c9ec0u;

    // 0x3c9ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c9ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c9ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c9ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c9ec8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c9ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9ecc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c9eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3c9ed0: 0xc0f2744  jal         func_3C9D10
    ctx->pc = 0x3C9ED0u;
    SET_GPR_U32(ctx, 31, 0x3C9ED8u);
    ctx->pc = 0x3C9ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9ED0u;
    // 0x3c9ed4: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9D10u, 0x3C9ED0u, 0x3C9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9ED8u;
label_3c9ed8:
    // 0x3c9ed8: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3C9ED8u;
    SET_GPR_U32(ctx, 31, 0x3C9EE0u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3C9ED8u, 0x3C9EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9EE0u;
label_3c9ee0:
    // 0x3c9ee0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3c9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3c9ee4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3c9ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c9ee8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3c9ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3c9eec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3c9eecu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x3c9ef0: 0xf  sync
    ctx->pc = 0x3c9ef0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3c9ef4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C9EF4u;
    {
        const bool branch_taken_0x3c9ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EF4u;
        // 0x3c9ef8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9ef4) {
            ctx->pc = 0x3C9F08u;
            goto label_3c9f08;
        }
    }
    ctx->pc = 0x3C9EFCu;
    // 0x3c9efc: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3C9EFCu;
    SET_GPR_U32(ctx, 31, 0x3C9F04u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3C9EFCu, 0x3C9F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9F04u;
label_3c9f04:
    // 0x3c9f04: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3c9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3c9f08:
    // 0x3c9f08: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3c9f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3c9f0c: 0x0  nop
    ctx->pc = 0x3c9f0cu;
    // NOP
label_3c9f10:
    // 0x3c9f10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3c9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f000
    // 0x3c9f14: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3c9f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3c9f18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C9F18u;
    {
        const bool branch_taken_0x3c9f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9f18) {
            ctx->pc = 0x3C9F2Cu;
            goto label_3c9f2c;
        }
    }
    ctx->pc = 0x3C9F20u;
    // 0x3c9f20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c9f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9f24: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C9F24u;
    {
        const bool branch_taken_0x3c9f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9f24) {
            ctx->pc = 0x3C9F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9f10;
        }
    }
    ctx->pc = 0x3C9F2Cu;
label_3c9f2c:
    // 0x3c9f2c: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3C9F2Cu;
    SET_GPR_U32(ctx, 31, 0x3C9F34u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3C9F2Cu, 0x3C9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9F34u;
label_3c9f34:
    // 0x3c9f34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c9f38: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3c9f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3c9f3c: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x3c9f3cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3)); // MMIO: 0x1000f000
    // 0x3c9f40: 0xf  sync
    ctx->pc = 0x3c9f40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3c9f44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9F44u;
    {
        const bool branch_taken_0x3c9f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9f44) {
            ctx->pc = 0x3C9F54u;
            goto label_3c9f54;
        }
    }
    ctx->pc = 0x3C9F4Cu;
    // 0x3c9f4c: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3C9F4Cu;
    SET_GPR_U32(ctx, 31, 0x3C9F54u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3C9F4Cu, 0x3C9F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9F54u;
label_3c9f54:
    // 0x3c9f54: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x3c9f54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3c9f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c9f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F5Cu;
        // 0x3c9f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9F64u;
    // 0x3c9f64: 0x0  nop
    ctx->pc = 0x3c9f64u;
    // NOP
    ctx->pc = 0x3c9f68u;
}
