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

// Function: sub_002B5AB8
// Address: 0x2b5ab8 - 0x2b5b30
void sub_002B5AB8_0x2b5ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5AB8_0x2b5ab8");
#endif

    switch (ctx->pc) {
        case 0x2b5ae8u: goto label_2b5ae8;
        case 0x2b5b00u: goto label_2b5b00;
        case 0x2b5b1cu: goto label_2b5b1c;
        default: break;
    }

    ctx->pc = 0x2b5ab8u;

    // 0x2b5ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5abc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b5ac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5ac4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2b5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2b5ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5acc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b5accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b5ad0: 0xae035900  sw          $v1, 0x5900($s0)
    ctx->pc = 0x2b5ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22784), GPR_U32(ctx, 3));
    // 0x2b5ad4: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x2b5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2b5ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b5ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b5adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ae0: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2B5AE0u;
    SET_GPR_U32(ctx, 31, 0x2B5AE8u);
    ctx->pc = 0x2B5AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5AE0u;
    // 0x2b5ae4: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2B5AE0u, 0x2B5AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5AE8u;
label_2b5ae8:
    // 0x2b5ae8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b5aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5af0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b5af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b5af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5af8: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B5AF8u;
    SET_GPR_U32(ctx, 31, 0x2B5B00u);
    ctx->pc = 0x2B5AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5AF8u;
    // 0x2b5afc: 0xac40a320  sw          $zero, -0x5CE0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943520), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B5AF8u, 0x2B5B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B00u;
label_2b5b00:
    // 0x2b5b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5b04: 0xae005910  sw          $zero, 0x5910($s0)
    ctx->pc = 0x2b5b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 0));
    // 0x2b5b08: 0xae0058f8  sw          $zero, 0x58F8($s0)
    ctx->pc = 0x2b5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 0));
    // 0x2b5b0c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2b5b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2b5b10: 0xae02591c  sw          $v0, 0x591C($s0)
    ctx->pc = 0x2b5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 2));
    // 0x2b5b14: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x2B5B14u;
    SET_GPR_U32(ctx, 31, 0x2B5B1Cu);
    ctx->pc = 0x2B5B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5B14u;
    // 0x2b5b18: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF918u, 0x2B5B14u, 0x2B5B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B1Cu;
label_2b5b1c:
    // 0x2b5b1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5b24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b5b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5b28: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B28u;
        // 0x2b5b2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5B30u;
}
