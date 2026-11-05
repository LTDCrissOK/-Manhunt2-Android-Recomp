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

// Function: sub_00175420
// Address: 0x175420 - 0x175488
void sub_00175420_0x175420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175420_0x175420");
#endif

    switch (ctx->pc) {
        case 0x175454u: goto label_175454;
        case 0x175470u: goto label_175470;
        default: break;
    }

    ctx->pc = 0x175420u;

    // 0x175420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175424: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x175424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x175428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17542c: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x17542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x175430: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17543c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x175440: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x175440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x175444: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175444u;
    {
        const bool branch_taken_0x175444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175444u;
        // 0x175448: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175444) {
            ctx->pc = 0x175454u;
            goto label_175454;
        }
    }
    ctx->pc = 0x17544Cu;
    // 0x17544c: 0xc05d546  jal         func_175518
    ctx->pc = 0x17544Cu;
    SET_GPR_U32(ctx, 31, 0x175454u);
    ctx->pc = 0x175518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175518u, 0x17544Cu, 0x175454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175454u;
label_175454:
    // 0x175454: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x175454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x175458: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x175458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x17545c: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x17545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
    // 0x175460: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175460u;
    {
        const bool branch_taken_0x175460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175460u;
        // 0x175464: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175460) {
            ctx->pc = 0x175470u;
            goto label_175470;
        }
    }
    ctx->pc = 0x175468u;
    // 0x175468: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x175468u;
    SET_GPR_U32(ctx, 31, 0x175470u);
    ctx->pc = 0x17546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175468u;
    // 0x17546c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x175468u, 0x175470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175470u;
label_175470:
    // 0x175470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17547c: 0x3e00008  jr          $ra
    ctx->pc = 0x17547Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17547Cu;
        // 0x175480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17547Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175484u;
    // 0x175484: 0x0  nop
    ctx->pc = 0x175484u;
    // NOP
    ctx->pc = 0x175488u;
}
