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

// Function: sub_00133698
// Address: 0x133698 - 0x133700
void sub_00133698_0x133698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133698_0x133698");
#endif

    switch (ctx->pc) {
        case 0x1336ccu: goto label_1336cc;
        case 0x1336e8u: goto label_1336e8;
        default: break;
    }

    ctx->pc = 0x133698u;

    // 0x133698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13369c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x13369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1336a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1336a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1336a4: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1336a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x1336a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1336a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1336ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1336acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1336b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1336b4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1336b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1336b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1336b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1336bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1336BCu;
    {
        const bool branch_taken_0x1336bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1336C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336BCu;
        // 0x1336c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336bc) {
            ctx->pc = 0x1336CCu;
            goto label_1336cc;
        }
    }
    ctx->pc = 0x1336C4u;
    // 0x1336c4: 0xc04cdd4  jal         func_133750
    ctx->pc = 0x1336C4u;
    SET_GPR_U32(ctx, 31, 0x1336CCu);
    ctx->pc = 0x133750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133750u, 0x1336C4u, 0x1336CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336CCu;
label_1336cc:
    // 0x1336cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1336ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1336d0: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x1336d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1336d4: 0x24420510  addiu       $v0, $v0, 0x510
    ctx->pc = 0x1336d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x1336d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1336D8u;
    {
        const bool branch_taken_0x1336d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1336DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336D8u;
        // 0x1336dc: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336d8) {
            ctx->pc = 0x1336E8u;
            goto label_1336e8;
        }
    }
    ctx->pc = 0x1336E0u;
    // 0x1336e0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1336E0u;
    SET_GPR_U32(ctx, 31, 0x1336E8u);
    ctx->pc = 0x1336E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336E0u;
    // 0x1336e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1336E0u, 0x1336E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336E8u;
label_1336e8:
    // 0x1336e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1336e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1336ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1336ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1336f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1336f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1336f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1336F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1336F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336F4u;
        // 0x1336f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1336F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1336FCu;
    // 0x1336fc: 0x0  nop
    ctx->pc = 0x1336fcu;
    // NOP
    ctx->pc = 0x133700u;
}
