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

// Function: sub_0013EF80
// Address: 0x13ef80 - 0x13efe8
void sub_0013EF80_0x13ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EF80_0x13ef80");
#endif

    switch (ctx->pc) {
        case 0x13ef94u: goto label_13ef94;
        case 0x13efb0u: goto label_13efb0;
        case 0x13efd4u: goto label_13efd4;
        default: break;
    }

    ctx->pc = 0x13ef80u;

    // 0x13ef80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13ef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13ef84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ef88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13ef88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13ef8c: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x13EF8Cu;
    SET_GPR_U32(ctx, 31, 0x13EF94u);
    ctx->pc = 0x13EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF8Cu;
    // 0x13ef90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x13EF8Cu, 0x13EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF94u;
label_13ef94:
    // 0x13ef94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x13ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x13ef98: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13ef9c: 0x24420730  addiu       $v0, $v0, 0x730
    ctx->pc = 0x13ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
    // 0x13efa0: 0x260304e0  addiu       $v1, $s0, 0x4E0
    ctx->pc = 0x13efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x13efa4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13efa8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x13efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13efac: 0x0  nop
    ctx->pc = 0x13efacu;
    // NOP
label_13efb0:
    // 0x13efb0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x13efb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13efb8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x13efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x13efbc: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x13efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x13efc0: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13EFC0u;
    {
        const bool branch_taken_0x13efc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x13EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFC0u;
        // 0x13efc4: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efc0) {
            ctx->pc = 0x13EFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13efb0;
        }
    }
    ctx->pc = 0x13EFC8u;
    // 0x13efc8: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x13efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x13efcc: 0xc04fcd4  jal         func_13F350
    ctx->pc = 0x13EFCCu;
    SET_GPR_U32(ctx, 31, 0x13EFD4u);
    ctx->pc = 0x13EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EFCCu;
    // 0x13efd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F350u, 0x13EFCCu, 0x13EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFD4u;
label_13efd4:
    // 0x13efd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13efd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13efd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13efd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13efdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13efdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13efe0: 0x3e00008  jr          $ra
    ctx->pc = 0x13EFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFE0u;
        // 0x13efe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EFE8u;
}
