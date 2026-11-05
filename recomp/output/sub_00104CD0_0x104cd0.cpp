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

// Function: sub_00104CD0
// Address: 0x104cd0 - 0x104d28
void sub_00104CD0_0x104cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104CD0_0x104cd0");
#endif

    switch (ctx->pc) {
        case 0x104cf0u: goto label_104cf0;
        default: break;
    }

    ctx->pc = 0x104cd0u;

    // 0x104cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x104cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104cd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ce0: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x104ce0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x104ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x104ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x104ce8: 0xc04134a  jal         func_104D28
    ctx->pc = 0x104CE8u;
    SET_GPR_U32(ctx, 31, 0x104CF0u);
    ctx->pc = 0x104CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CE8u;
    // 0x104cec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D28u, 0x104CE8u, 0x104CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CF0u;
label_104cf0:
    // 0x104cf0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x104CF0u;
    {
        const bool branch_taken_0x104cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104cf0) {
            ctx->pc = 0x104CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104CF0u;
            // 0x104cf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104D14u;
            goto label_104d14;
        }
    }
    ctx->pc = 0x104CF8u;
    // 0x104cf8: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x104cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x104cfc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x104cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x104d00: 0xa0510014  sb          $s1, 0x14($v0)
    ctx->pc = 0x104d00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 17));
    // 0x104d04: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x104d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x104d08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x104d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x104d0c: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x104d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x104d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104d14:
    // 0x104d14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104d18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x104d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x104D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D1Cu;
        // 0x104d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104D24u;
    // 0x104d24: 0x0  nop
    ctx->pc = 0x104d24u;
    // NOP
    ctx->pc = 0x104d28u;
}
